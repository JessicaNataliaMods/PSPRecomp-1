#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0207[4086] = {
    1, 0, 2, 0, 3, 4, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    19, 0, 0, 0, 20, 0, 0, 21, 0, 22, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0,
    33, 0, 34, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0,
    0, 0, 43, 0, 0, 44, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0,
    0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0,
    0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 81, 82, 0, 0,
    0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0,
    92, 0, 93, 0, 94, 0, 95, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103,
    0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 118, 119, 0, 0, 120, 0, 0, 121, 0, 122, 123, 0, 0, 0, 124, 0, 0,
    125, 0, 0, 126, 0, 127, 0, 128, 0, 129, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 136, 137, 0, 0, 0, 138,
    0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0,
    0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 162, 163, 0, 0, 164, 0, 0, 165, 0, 166, 167,
    0, 0, 168, 0, 0, 169, 0, 170, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0, 178, 0, 0, 179, 0,
    180, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0,
    198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207,
    0, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 0,
    217, 0, 0, 218, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0,
    227, 228, 0, 0, 229, 0, 0, 230, 0, 231, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 238, 239, 0, 0, 0, 240,
    0, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249,
    0, 0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 256, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0,
    0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 263, 0, 264, 0, 265, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 271, 0, 0, 272, 273, 0, 274, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282,
    0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 295, 296, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 300, 301, 0, 0, 302, 0, 0, 0, 303,
    0, 0, 0, 304, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 308, 309, 0, 310, 0, 311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0,
    314, 0, 315, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 327, 0, 328, 329, 0, 330, 0, 331,
    0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0,
    0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0,
    0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 347, 0, 348,
    349, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 370, 0, 0, 0, 0, 371, 372, 0, 0,
    0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0,
    0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403,
    0, 404, 0, 405, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 412,
    0, 413, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 0, 421, 0, 422, 0, 423, 0,
    424, 0, 425, 0, 426, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 430, 0, 0, 431, 432, 0, 433, 0, 0, 0, 434, 435, 0, 436, 0, 0, 0,
    437, 438, 0, 439, 0, 0, 0, 440, 441, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446,
    0, 0, 0, 447, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 459, 0,
    0, 0, 0, 460, 0, 0, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0,
    0, 0, 467, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 474, 0,
    0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0,
    0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0,
    491, 0, 492, 0, 493, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0,
    0, 501, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 505, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 509, 510, 0,
    511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0,
    0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0,
    0, 526, 527, 0, 0, 0, 528, 0, 529, 530, 0, 0, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0,
    0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 540, 0, 0, 0, 541, 0, 542, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 547, 0,
    0, 0, 548, 0, 549, 0, 550, 0, 0, 551, 552, 0, 0, 0, 553, 0, 554, 0, 555, 0, 556, 0, 557, 0, 0, 0, 0, 558, 0, 559, 0, 560,
    0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 565, 0, 566, 0, 567, 0, 0, 0, 0, 568, 0, 569, 570, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 576, 0, 0, 0, 577, 0, 578,
    0, 0, 0, 0, 579, 0, 580, 581, 0, 582, 0, 0, 583, 584, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 588, 0, 589, 0,
    590, 0, 591, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 0,
    0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0,
    606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0,
    0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0,
    0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 624, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0,
    627, 0, 628, 0, 0, 0, 629, 0, 630, 0, 631, 0, 632, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0,
    636, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 642, 0, 643, 0,
    644, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 653, 654, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 657,
    0, 658, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0,
    0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 672, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0,
    0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 0,
    0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0,
    0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 0, 691, 0, 692, 0, 693, 694, 0, 0, 0, 0, 0, 0, 0,
    695, 0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0,
    0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 701, 702, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 706, 707, 0, 708, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0,
    718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 722,
    0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 730,
    0, 0, 0, 731, 0, 732, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 735, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 742, 743, 0,
    0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 747, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0,
    0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0,
    0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 769, 0, 770, 0, 771,
    772, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 777,
    778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 781, 0, 782, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 786, 0, 0, 0,
    0, 787, 0, 0, 0, 0, 788, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0, 0, 794,
    795, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 799, 0, 800, 0, 801, 0, 0, 0, 0,
    0, 802, 803, 0, 0, 0, 804, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 807, 0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 0,
    814, 0, 0, 0, 0, 0, 0, 0, 815, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819,
};
void recomp_unit_0207_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B40000u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0207[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B40000;
    case 2u: goto L_08B40008;
    case 3u: goto L_08B40010;
    case 4u: goto L_08B40014;
    case 5u: goto L_08B4001C;
    case 6u: goto L_08B40024;
    case 7u: goto L_08B40030;
    case 8u: goto L_08B40038;
    case 9u: goto L_08B40044;
    case 10u: goto L_08B4004C;
    case 11u: goto L_08B40078;
    case 12u: goto L_08B40090;
    case 13u: goto L_08B400C8;
    case 14u: goto L_08B400D0;
    case 15u: goto L_08B40118;
    case 16u: goto L_08B40128;
    case 17u: goto L_08B40130;
    case 18u: goto L_08B4016C;
    case 19u: goto L_08B40180;
    case 20u: goto L_08B40190;
    case 21u: goto L_08B4019C;
    case 22u: goto L_08B401A4;
    case 23u: goto L_08B401A8;
    case 24u: goto L_08B401B0;
    case 25u: goto L_08B401B8;
    case 26u: goto L_08B40200;
    case 27u: goto L_08B40238;
    case 28u: goto L_08B40240;
    case 29u: goto L_08B40250;
    case 30u: goto L_08B4025C;
    case 31u: goto L_08B40270;
    case 32u: goto L_08B40278;
    case 33u: goto L_08B40280;
    case 34u: goto L_08B40288;
    case 35u: goto L_08B40298;
    case 36u: goto L_08B402A0;
    case 37u: goto L_08B402A8;
    case 38u: goto L_08B402C8;
    case 39u: goto L_08B402D0;
    case 40u: goto L_08B402E0;
    case 41u: goto L_08B402E8;
    case 42u: goto L_08B402F8;
    case 43u: goto L_08B40308;
    case 44u: goto L_08B40314;
    case 45u: goto L_08B40318;
    case 46u: goto L_08B40328;
    case 47u: goto L_08B40330;
    case 48u: goto L_08B40340;
    case 49u: goto L_08B40350;
    case 50u: goto L_08B40368;
    case 51u: goto L_08B40378;
    case 52u: goto L_08B40384;
    case 53u: goto L_08B40390;
    case 54u: goto L_08B40398;
    case 55u: goto L_08B403A8;
    case 56u: goto L_08B403B0;
    case 57u: goto L_08B403B8;
    case 58u: goto L_08B403D8;
    case 59u: goto L_08B403E0;
    case 60u: goto L_08B403F0;
    case 61u: goto L_08B403F8;
    case 62u: goto L_08B40408;
    case 63u: goto L_08B40418;
    case 64u: goto L_08B40424;
    case 65u: goto L_08B40428;
    case 66u: goto L_08B40438;
    case 67u: goto L_08B40440;
    case 68u: goto L_08B40450;
    case 69u: goto L_08B40460;
    case 70u: goto L_08B40478;
    case 71u: goto L_08B40488;
    case 72u: goto L_08B40494;
    case 73u: goto L_08B404A0;
    case 74u: goto L_08B404A8;
    case 75u: goto L_08B404B0;
    case 76u: goto L_08B404C0;
    case 77u: goto L_08B404CC;
    case 78u: goto L_08B404D8;
    case 79u: goto L_08B404E0;
    case 80u: goto L_08B404E8;
    case 81u: goto L_08B404F0;
    case 82u: goto L_08B404F4;
    case 83u: goto L_08B40508;
    case 84u: goto L_08B40514;
    case 85u: goto L_08B40520;
    case 86u: goto L_08B40528;
    case 87u: goto L_08B40530;
    case 88u: goto L_08B4054C;
    case 89u: goto L_08B40554;
    case 90u: goto L_08B40568;
    case 91u: goto L_08B40574;
    case 92u: goto L_08B40580;
    case 93u: goto L_08B40588;
    case 94u: goto L_08B40590;
    case 95u: goto L_08B40598;
    case 96u: goto L_08B4059C;
    case 97u: goto L_08B405AC;
    case 98u: goto L_08B405B8;
    case 99u: goto L_08B405C4;
    case 100u: goto L_08B405CC;
    case 101u: goto L_08B405D4;
    case 102u: goto L_08B405DC;
    case 103u: goto L_08B405FC;
    case 104u: goto L_08B40604;
    case 105u: goto L_08B40614;
    case 106u: goto L_08B4061C;
    case 107u: goto L_08B4062C;
    case 108u: goto L_08B4063C;
    case 109u: goto L_08B40648;
    case 110u: goto L_08B4064C;
    case 111u: goto L_08B4065C;
    case 112u: goto L_08B40664;
    case 113u: goto L_08B40674;
    case 114u: goto L_08B40684;
    case 115u: goto L_08B4069C;
    case 116u: goto L_08B406A8;
    case 117u: goto L_08B406B4;
    case 118u: goto L_08B406BC;
    case 119u: goto L_08B406C0;
    case 120u: goto L_08B406CC;
    case 121u: goto L_08B406D8;
    case 122u: goto L_08B406E0;
    case 123u: goto L_08B406E4;
    case 124u: goto L_08B406F4;
    case 125u: goto L_08B40700;
    case 126u: goto L_08B4070C;
    case 127u: goto L_08B40714;
    case 128u: goto L_08B4071C;
    case 129u: goto L_08B40724;
    case 130u: goto L_08B40728;
    case 131u: goto L_08B40738;
    case 132u: goto L_08B40744;
    case 133u: goto L_08B40750;
    case 134u: goto L_08B40758;
    case 135u: goto L_08B40760;
    case 136u: goto L_08B40768;
    case 137u: goto L_08B4076C;
    case 138u: goto L_08B4077C;
    case 139u: goto L_08B40784;
    case 140u: goto L_08B407C4;
    case 141u: goto L_08B407CC;
    case 142u: goto L_08B407D4;
    case 143u: goto L_08B407F4;
    case 144u: goto L_08B40804;
    case 145u: goto L_08B40810;
    case 146u: goto L_08B4081C;
    case 147u: goto L_08B40824;
    case 148u: goto L_08B40830;
    case 149u: goto L_08B40838;
    case 150u: goto L_08B40840;
    case 151u: goto L_08B40850;
    case 152u: goto L_08B4085C;
    case 153u: goto L_08B40868;
    case 154u: goto L_08B40870;
    case 155u: goto L_08B40878;
    case 156u: goto L_08B40894;
    case 157u: goto L_08B408A4;
    case 158u: goto L_08B408B0;
    case 159u: goto L_08B408BC;
    case 160u: goto L_08B408C4;
    case 161u: goto L_08B408CC;
    case 162u: goto L_08B408D4;
    case 163u: goto L_08B408D8;
    case 164u: goto L_08B408E4;
    case 165u: goto L_08B408F0;
    case 166u: goto L_08B408F8;
    case 167u: goto L_08B408FC;
    case 168u: goto L_08B40908;
    case 169u: goto L_08B40914;
    case 170u: goto L_08B4091C;
    case 171u: goto L_08B40920;
    case 172u: goto L_08B40930;
    case 173u: goto L_08B4093C;
    case 174u: goto L_08B40948;
    case 175u: goto L_08B40950;
    case 176u: goto L_08B40958;
    case 177u: goto L_08B40960;
    case 178u: goto L_08B4096C;
    case 179u: goto L_08B40978;
    case 180u: goto L_08B40980;
    case 181u: goto L_08B40988;
    case 182u: goto L_08B40998;
    case 183u: goto L_08B409A4;
    case 184u: goto L_08B409B0;
    case 185u: goto L_08B409B8;
    case 186u: goto L_08B409C0;
    case 187u: goto L_08B409C8;
    case 188u: goto L_08B409D0;
    case 189u: goto L_08B409E0;
    case 190u: goto L_08B409E8;
    case 191u: goto L_08B40A20;
    case 192u: goto L_08B40A28;
    case 193u: goto L_08B40A48;
    case 194u: goto L_08B40A58;
    case 195u: goto L_08B40A64;
    case 196u: goto L_08B40A70;
    case 197u: goto L_08B40A78;
    case 198u: goto L_08B40A80;
    case 199u: goto L_08B40A90;
    case 200u: goto L_08B40A9C;
    case 201u: goto L_08B40AA8;
    case 202u: goto L_08B40AB0;
    case 203u: goto L_08B40AB8;
    case 204u: goto L_08B40AD4;
    case 205u: goto L_08B40ADC;
    case 206u: goto L_08B40AF0;
    case 207u: goto L_08B40AFC;
    case 208u: goto L_08B40B08;
    case 209u: goto L_08B40B10;
    case 210u: goto L_08B40B18;
    case 211u: goto L_08B40B20;
    case 212u: goto L_08B40B40;
    case 213u: goto L_08B40B48;
    case 214u: goto L_08B40B58;
    case 215u: goto L_08B40B60;
    case 216u: goto L_08B40B70;
    case 217u: goto L_08B40B80;
    case 218u: goto L_08B40B8C;
    case 219u: goto L_08B40B90;
    case 220u: goto L_08B40BA0;
    case 221u: goto L_08B40BA8;
    case 222u: goto L_08B40BB8;
    case 223u: goto L_08B40BC8;
    case 224u: goto L_08B40BE0;
    case 225u: goto L_08B40BEC;
    case 226u: goto L_08B40BF8;
    case 227u: goto L_08B40C00;
    case 228u: goto L_08B40C04;
    case 229u: goto L_08B40C10;
    case 230u: goto L_08B40C1C;
    case 231u: goto L_08B40C24;
    case 232u: goto L_08B40C28;
    case 233u: goto L_08B40C38;
    case 234u: goto L_08B40C44;
    case 235u: goto L_08B40C50;
    case 236u: goto L_08B40C58;
    case 237u: goto L_08B40C60;
    case 238u: goto L_08B40C68;
    case 239u: goto L_08B40C6C;
    case 240u: goto L_08B40C7C;
    case 241u: goto L_08B40C88;
    case 242u: goto L_08B40C94;
    case 243u: goto L_08B40C9C;
    case 244u: goto L_08B40CA4;
    case 245u: goto L_08B40CAC;
    case 246u: goto L_08B40CB4;
    case 247u: goto L_08B40CE4;
    case 248u: goto L_08B40CF4;
    case 249u: goto L_08B40CFC;
    case 250u: goto L_08B40D08;
    case 251u: goto L_08B40D1C;
    case 252u: goto L_08B40D24;
    case 253u: goto L_08B40D34;
    case 254u: goto L_08B40D44;
    case 255u: goto L_08B40D50;
    case 256u: goto L_08B40D54;
    case 257u: goto L_08B40D64;
    case 258u: goto L_08B40D78;
    case 259u: goto L_08B40D88;
    case 260u: goto L_08B40D94;
    case 261u: goto L_08B40DA0;
    case 262u: goto L_08B40DA8;
    case 263u: goto L_08B40DB4;
    case 264u: goto L_08B40DBC;
    case 265u: goto L_08B40DC4;
    case 266u: goto L_08B40DC8;
    case 267u: goto L_08B40DF8;
    case 268u: goto L_08B40E08;
    case 269u: goto L_08B40E14;
    case 270u: goto L_08B40E4C;
    case 271u: goto L_08B40E50;
    case 272u: goto L_08B40E5C;
    case 273u: goto L_08B40E60;
    case 274u: goto L_08B40E68;
    case 275u: goto L_08B40EAC;
    case 276u: goto L_08B40F38;
    case 277u: goto L_08B40F44;
    case 278u: goto L_08B40F84;
    case 279u: goto L_08B40F90;
    case 280u: goto L_08B40F9C;
    case 281u: goto L_08B40FF4;
    case 282u: goto L_08B40FFC;
    case 283u: goto L_08B41014;
    case 284u: goto L_08B41050;
    case 285u: goto L_08B41074;
    case 286u: goto L_08B41098;
    case 287u: goto L_08B410E4;
    case 288u: goto L_08B410F8;
    case 289u: goto L_08B4110C;
    case 290u: goto L_08B41114;
    case 291u: goto L_08B41128;
    case 292u: goto L_08B41140;
    case 293u: goto L_08B41148;
    case 294u: goto L_08B41188;
    case 295u: goto L_08B4119C;
    case 296u: goto L_08B411A0;
    case 297u: goto L_08B411B4;
    case 298u: goto L_08B411BC;
    case 299u: goto L_08B411D4;
    case 300u: goto L_08B411DC;
    case 301u: goto L_08B411E0;
    case 302u: goto L_08B411EC;
    case 303u: goto L_08B411FC;
    case 304u: goto L_08B4120C;
    case 305u: goto L_08B41214;
    case 306u: goto L_08B41220;
    case 307u: goto L_08B4122C;
    case 308u: goto L_08B41240;
    case 309u: goto L_08B41244;
    case 310u: goto L_08B4124C;
    case 311u: goto L_08B41254;
    case 312u: goto L_08B4125C;
    case 313u: goto L_08B41274;
    case 314u: goto L_08B41280;
    case 315u: goto L_08B41288;
    case 316u: goto L_08B4128C;
    case 317u: goto L_08B41294;
    case 318u: goto L_08B412A4;
    case 319u: goto L_08B412C0;
    case 320u: goto L_08B412C8;
    case 321u: goto L_08B412D8;
    case 322u: goto L_08B41310;
    case 323u: goto L_08B4132C;
    case 324u: goto L_08B41334;
    case 325u: goto L_08B41344;
    case 326u: goto L_08B4134C;
    case 327u: goto L_08B41360;
    case 328u: goto L_08B41368;
    case 329u: goto L_08B4136C;
    case 330u: goto L_08B41374;
    case 331u: goto L_08B4137C;
    case 332u: goto L_08B4138C;
    case 333u: goto L_08B41394;
    case 334u: goto L_08B413D8;
    case 335u: goto L_08B413E4;
    case 336u: goto L_08B413F0;
    case 337u: goto L_08B41404;
    case 338u: goto L_08B4142C;
    case 339u: goto L_08B4146C;
    case 340u: goto L_08B41478;
    case 341u: goto L_08B41484;
    case 342u: goto L_08B414A4;
    case 343u: goto L_08B414C0;
    case 344u: goto L_08B414C8;
    case 345u: goto L_08B414D8;
    case 346u: goto L_08B414E0;
    case 347u: goto L_08B414F4;
    case 348u: goto L_08B414FC;
    case 349u: goto L_08B41500;
    case 350u: goto L_08B4150C;
    case 351u: goto L_08B41514;
    case 352u: goto L_08B4151C;
    case 353u: goto L_08B4152C;
    case 354u: goto L_08B41534;
    case 355u: goto L_08B4153C;
    case 356u: goto L_08B41544;
    case 357u: goto L_08B4154C;
    case 358u: goto L_08B41584;
    case 359u: goto L_08B4158C;
    case 360u: goto L_08B415A0;
    case 361u: goto L_08B415A8;
    case 362u: goto L_08B415B4;
    case 363u: goto L_08B415BC;
    case 364u: goto L_08B415D8;
    case 365u: goto L_08B41608;
    case 366u: goto L_08B41628;
    case 367u: goto L_08B4162C;
    case 368u: goto L_08B41650;
    case 369u: goto L_08B41658;
    case 370u: goto L_08B4165C;
    case 371u: goto L_08B41670;
    case 372u: goto L_08B41674;
    case 373u: goto L_08B4168C;
    case 374u: goto L_08B41694;
    case 375u: goto L_08B416FC;
    case 376u: goto L_08B41764;
    case 377u: goto L_08B4176C;
    case 378u: goto L_08B41834;
    case 379u: goto L_08B4183C;
    case 380u: goto L_08B41854;
    case 381u: goto L_08B41864;
    case 382u: goto L_08B4186C;
    case 383u: goto L_08B41884;
    case 384u: goto L_08B41894;
    case 385u: goto L_08B4189C;
    case 386u: goto L_08B41908;
    case 387u: goto L_08B41914;
    case 388u: goto L_08B41934;
    case 389u: goto L_08B4193C;
    case 390u: goto L_08B41954;
    case 391u: goto L_08B4196C;
    case 392u: goto L_08B419E0;
    case 393u: goto L_08B419F8;
    case 394u: goto L_08B41A4C;
    case 395u: goto L_08B41A88;
    case 396u: goto L_08B41AC4;
    case 397u: goto L_08B41AE0;
    case 398u: goto L_08B41AF8;
    case 399u: goto L_08B41B20;
    case 400u: goto L_08B41B44;
    case 401u: goto L_08B41B54;
    case 402u: goto L_08B41B74;
    case 403u: goto L_08B41B7C;
    case 404u: goto L_08B41B84;
    case 405u: goto L_08B41B8C;
    case 406u: goto L_08B41B90;
    case 407u: goto L_08B41BC4;
    case 408u: goto L_08B41BD0;
    case 409u: goto L_08B41BDC;
    case 410u: goto L_08B41BE4;
    case 411u: goto L_08B41BEC;
    case 412u: goto L_08B41BFC;
    case 413u: goto L_08B41C04;
    case 414u: goto L_08B41C0C;
    case 415u: goto L_08B41C1C;
    case 416u: goto L_08B41C2C;
    case 417u: goto L_08B41C38;
    case 418u: goto L_08B41C44;
    case 419u: goto L_08B41C54;
    case 420u: goto L_08B41C5C;
    case 421u: goto L_08B41C68;
    case 422u: goto L_08B41C70;
    case 423u: goto L_08B41C78;
    case 424u: goto L_08B41C80;
    case 425u: goto L_08B41C88;
    case 426u: goto L_08B41C90;
    case 427u: goto L_08B41C98;
    case 428u: goto L_08B41CA8;
    case 429u: goto L_08B41CB8;
    case 430u: goto L_08B41CBC;
    case 431u: goto L_08B41CC8;
    case 432u: goto L_08B41CCC;
    case 433u: goto L_08B41CD4;
    case 434u: goto L_08B41CE4;
    case 435u: goto L_08B41CE8;
    case 436u: goto L_08B41CF0;
    case 437u: goto L_08B41D00;
    case 438u: goto L_08B41D04;
    case 439u: goto L_08B41D0C;
    case 440u: goto L_08B41D1C;
    case 441u: goto L_08B41D20;
    case 442u: goto L_08B41D28;
    case 443u: goto L_08B41D30;
    case 444u: goto L_08B41D4C;
    case 445u: goto L_08B41D60;
    case 446u: goto L_08B41D7C;
    case 447u: goto L_08B41D8C;
    case 448u: goto L_08B41D9C;
    case 449u: goto L_08B41DA4;
    case 450u: goto L_08B41DB8;
    case 451u: goto L_08B41DE0;
    case 452u: goto L_08B41DF4;
    case 453u: goto L_08B41E40;
    case 454u: goto L_08B41E98;
    case 455u: goto L_08B41EA8;
    case 456u: goto L_08B41EB4;
    case 457u: goto L_08B41EE8;
    case 458u: goto L_08B41EF0;
    case 459u: goto L_08B41EF8;
    case 460u: goto L_08B41F0C;
    case 461u: goto L_08B41F1C;
    case 462u: goto L_08B41F24;
    case 463u: goto L_08B41F2C;
    case 464u: goto L_08B41F4C;
    case 465u: goto L_08B41F50;
    case 466u: goto L_08B41F6C;
    case 467u: goto L_08B41F88;
    case 468u: goto L_08B41F90;
    case 469u: goto L_08B41FA0;
    case 470u: goto L_08B41FBC;
    case 471u: goto L_08B41FC8;
    case 472u: goto L_08B41FDC;
    case 473u: goto L_08B41FF0;
    case 474u: goto L_08B41FF8;
    case 475u: goto L_08B42004;
    case 476u: goto L_08B42028;
    case 477u: goto L_08B4203C;
    case 478u: goto L_08B4204C;
    case 479u: goto L_08B42058;
    case 480u: goto L_08B42084;
    case 481u: goto L_08B42098;
    case 482u: goto L_08B420B0;
    case 483u: goto L_08B420BC;
    case 484u: goto L_08B420EC;
    case 485u: goto L_08B42104;
    case 486u: goto L_08B42130;
    case 487u: goto L_08B42144;
    case 488u: goto L_08B4214C;
    case 489u: goto L_08B42154;
    case 490u: goto L_08B42168;
    case 491u: goto L_08B42180;
    case 492u: goto L_08B42188;
    case 493u: goto L_08B42190;
    case 494u: goto L_08B42194;
    case 495u: goto L_08B421A8;
    case 496u: goto L_08B421C0;
    case 497u: goto L_08B421C8;
    case 498u: goto L_08B421D4;
    case 499u: goto L_08B421E0;
    case 500u: goto L_08B421F4;
    case 501u: goto L_08B42204;
    case 502u: goto L_08B4220C;
    case 503u: goto L_08B42224;
    case 504u: goto L_08B42234;
    case 505u: goto L_08B4223C;
    case 506u: goto L_08B42240;
    case 507u: goto L_08B42254;
    case 508u: goto L_08B4226C;
    case 509u: goto L_08B42274;
    case 510u: goto L_08B42278;
    case 511u: goto L_08B42280;
    case 512u: goto L_08B422C8;
    case 513u: goto L_08B422F0;
    case 514u: goto L_08B42304;
    case 515u: goto L_08B42330;
    case 516u: goto L_08B42338;
    case 517u: goto L_08B42340;
    case 518u: goto L_08B42354;
    case 519u: goto L_08B42364;
    case 520u: goto L_08B4237C;
    case 521u: goto L_08B423BC;
    case 522u: goto L_08B423CC;
    case 523u: goto L_08B423D4;
    case 524u: goto L_08B423E0;
    case 525u: goto L_08B423F8;
    case 526u: goto L_08B42404;
    case 527u: goto L_08B42408;
    case 528u: goto L_08B42418;
    case 529u: goto L_08B42420;
    case 530u: goto L_08B42424;
    case 531u: goto L_08B42434;
    case 532u: goto L_08B4243C;
    case 533u: goto L_08B42444;
    case 534u: goto L_08B4244C;
    case 535u: goto L_08B42454;
    case 536u: goto L_08B4245C;
    case 537u: goto L_08B42470;
    case 538u: goto L_08B42490;
    case 539u: goto L_08B424A0;
    case 540u: goto L_08B424A8;
    case 541u: goto L_08B424B8;
    case 542u: goto L_08B424C0;
    case 543u: goto L_08B424C8;
    case 544u: goto L_08B424D0;
    case 545u: goto L_08B424E0;
    case 546u: goto L_08B424F0;
    case 547u: goto L_08B424F8;
    case 548u: goto L_08B42508;
    case 549u: goto L_08B42510;
    case 550u: goto L_08B42518;
    case 551u: goto L_08B42524;
    case 552u: goto L_08B42528;
    case 553u: goto L_08B42538;
    case 554u: goto L_08B42540;
    case 555u: goto L_08B42548;
    case 556u: goto L_08B42550;
    case 557u: goto L_08B42558;
    case 558u: goto L_08B4256C;
    case 559u: goto L_08B42574;
    case 560u: goto L_08B4257C;
    case 561u: goto L_08B4258C;
    case 562u: goto L_08B42594;
    case 563u: goto L_08B425A8;
    case 564u: goto L_08B425BC;
    case 565u: goto L_08B425C4;
    case 566u: goto L_08B425CC;
    case 567u: goto L_08B425D4;
    case 568u: goto L_08B425E8;
    case 569u: goto L_08B425F0;
    case 570u: goto L_08B425F4;
    case 571u: goto L_08B42624;
    case 572u: goto L_08B4262C;
    case 573u: goto L_08B42634;
    case 574u: goto L_08B4264C;
    case 575u: goto L_08B4265C;
    case 576u: goto L_08B42664;
    case 577u: goto L_08B42674;
    case 578u: goto L_08B4267C;
    case 579u: goto L_08B42690;
    case 580u: goto L_08B42698;
    case 581u: goto L_08B4269C;
    case 582u: goto L_08B426A4;
    case 583u: goto L_08B426B0;
    case 584u: goto L_08B426B4;
    case 585u: goto L_08B426C8;
    case 586u: goto L_08B426D0;
    case 587u: goto L_08B426E8;
    case 588u: goto L_08B426F0;
    case 589u: goto L_08B426F8;
    case 590u: goto L_08B42700;
    case 591u: goto L_08B42708;
    case 592u: goto L_08B42714;
    case 593u: goto L_08B4271C;
    case 594u: goto L_08B42748;
    case 595u: goto L_08B42750;
    case 596u: goto L_08B42758;
    case 597u: goto L_08B42760;
    case 598u: goto L_08B42770;
    case 599u: goto L_08B42784;
    case 600u: goto L_08B427A0;
    case 601u: goto L_08B427B0;
    case 602u: goto L_08B427BC;
    case 603u: goto L_08B427C4;
    case 604u: goto L_08B427EC;
    case 605u: goto L_08B427F8;
    case 606u: goto L_08B42800;
    case 607u: goto L_08B42810;
    case 608u: goto L_08B42838;
    case 609u: goto L_08B42844;
    case 610u: goto L_08B42854;
    case 611u: goto L_08B428B0;
    case 612u: goto L_08B428C8;
    case 613u: goto L_08B428D4;
    case 614u: goto L_08B428DC;
    case 615u: goto L_08B428EC;
    case 616u: goto L_08B42904;
    case 617u: goto L_08B42974;
    case 618u: goto L_08B42988;
    case 619u: goto L_08B4299C;
    case 620u: goto L_08B429B0;
    case 621u: goto L_08B429CC;
    case 622u: goto L_08B429DC;
    case 623u: goto L_08B429EC;
    case 624u: goto L_08B429F4;
    case 625u: goto L_08B42A30;
    case 626u: goto L_08B42A78;
    case 627u: goto L_08B42A80;
    case 628u: goto L_08B42A88;
    case 629u: goto L_08B42A98;
    case 630u: goto L_08B42AA0;
    case 631u: goto L_08B42AA8;
    case 632u: goto L_08B42AB0;
    case 633u: goto L_08B42AB4;
    case 634u: goto L_08B42ADC;
    case 635u: goto L_08B42AF8;
    case 636u: goto L_08B42B00;
    case 637u: goto L_08B42B08;
    case 638u: goto L_08B42B1C;
    case 639u: goto L_08B42B38;
    case 640u: goto L_08B42BB4;
    case 641u: goto L_08B42BE0;
    case 642u: goto L_08B42BF0;
    case 643u: goto L_08B42BF8;
    case 644u: goto L_08B42C00;
    case 645u: goto L_08B42C0C;
    case 646u: goto L_08B42C24;
    case 647u: goto L_08B42C34;
    case 648u: goto L_08B42C80;
    case 649u: goto L_08B42CC8;
    case 650u: goto L_08B42D18;
    case 651u: goto L_08B42D2C;
    case 652u: goto L_08B42D40;
    case 653u: goto L_08B42D48;
    case 654u: goto L_08B42D4C;
    case 655u: goto L_08B42D58;
    case 656u: goto L_08B42D6C;
    case 657u: goto L_08B42D7C;
    case 658u: goto L_08B42D84;
    case 659u: goto L_08B42D88;
    case 660u: goto L_08B42DB8;
    case 661u: goto L_08B42E24;
    case 662u: goto L_08B42E4C;
    case 663u: goto L_08B42E60;
    case 664u: goto L_08B42E78;
    case 665u: goto L_08B42E84;
    case 666u: goto L_08B42EF4;
    case 667u: goto L_08B42F58;
    case 668u: goto L_08B42FBC;
    case 669u: goto L_08B43020;
    case 670u: goto L_08B4303C;
    case 671u: goto L_08B4304C;
    case 672u: goto L_08B43054;
    case 673u: goto L_08B43064;
    case 674u: goto L_08B43074;
    case 675u: goto L_08B43084;
    case 676u: goto L_08B4308C;
    case 677u: goto L_08B430D4;
    case 678u: goto L_08B43140;
    case 679u: goto L_08B43160;
    case 680u: goto L_08B43174;
    case 681u: goto L_08B4318C;
    case 682u: goto L_08B43194;
    case 683u: goto L_08B431B4;
    case 684u: goto L_08B431C8;
    case 685u: goto L_08B431E0;
    case 686u: goto L_08B431F4;
    case 687u: goto L_08B43210;
    case 688u: goto L_08B43228;
    case 689u: goto L_08B43234;
    case 690u: goto L_08B43240;
    case 691u: goto L_08B4324C;
    case 692u: goto L_08B43254;
    case 693u: goto L_08B4325C;
    case 694u: goto L_08B43260;
    case 695u: goto L_08B43280;
    case 696u: goto L_08B43294;
    case 697u: goto L_08B432A0;
    case 698u: goto L_08B432F4;
    case 699u: goto L_08B4330C;
    case 700u: goto L_08B43320;
    case 701u: goto L_08B43328;
    case 702u: goto L_08B4332C;
    case 703u: goto L_08B43338;
    case 704u: goto L_08B4334C;
    case 705u: goto L_08B4335C;
    case 706u: goto L_08B43364;
    case 707u: goto L_08B43368;
    case 708u: goto L_08B43370;
    case 709u: goto L_08B433B8;
    case 710u: goto L_08B43400;
    case 711u: goto L_08B43450;
    case 712u: goto L_08B43464;
    case 713u: goto L_08B434AC;
    case 714u: goto L_08B434C0;
    case 715u: goto L_08B43508;
    case 716u: goto L_08B4351C;
    case 717u: goto L_08B4356C;
    case 718u: goto L_08B43580;
    case 719u: goto L_08B435C8;
    case 720u: goto L_08B435DC;
    case 721u: goto L_08B435EC;
    case 722u: goto L_08B435FC;
    case 723u: goto L_08B4360C;
    case 724u: goto L_08B4361C;
    case 725u: goto L_08B4362C;
    case 726u: goto L_08B4363C;
    case 727u: goto L_08B4364C;
    case 728u: goto L_08B4365C;
    case 729u: goto L_08B4366C;
    case 730u: goto L_08B4367C;
    case 731u: goto L_08B4368C;
    case 732u: goto L_08B43694;
    case 733u: goto L_08B4369C;
    case 734u: goto L_08B436DC;
    case 735u: goto L_08B436E4;
    case 736u: goto L_08B43748;
    case 737u: goto L_08B4375C;
    case 738u: goto L_08B43768;
    case 739u: goto L_08B437B0;
    case 740u: goto L_08B437D0;
    case 741u: goto L_08B437E8;
    case 742u: goto L_08B437F4;
    case 743u: goto L_08B437F8;
    case 744u: goto L_08B43804;
    case 745u: goto L_08B43818;
    case 746u: goto L_08B4382C;
    case 747u: goto L_08B43834;
    case 748u: goto L_08B43838;
    case 749u: goto L_08B43868;
    case 750u: goto L_08B438C0;
    case 751u: goto L_08B438DC;
    case 752u: goto L_08B438F0;
    case 753u: goto L_08B43908;
    case 754u: goto L_08B43928;
    case 755u: goto L_08B43938;
    case 756u: goto L_08B4394C;
    case 757u: goto L_08B4395C;
    case 758u: goto L_08B43978;
    case 759u: goto L_08B43988;
    case 760u: goto L_08B4399C;
    case 761u: goto L_08B439AC;
    case 762u: goto L_08B439B4;
    case 763u: goto L_08B439EC;
    case 764u: goto L_08B43AE0;
    case 765u: goto L_08B43B10;
    case 766u: goto L_08B43B40;
    case 767u: goto L_08B43B5C;
    case 768u: goto L_08B43B64;
    case 769u: goto L_08B43B6C;
    case 770u: goto L_08B43B74;
    case 771u: goto L_08B43B7C;
    case 772u: goto L_08B43B80;
    case 773u: goto L_08B43B88;
    case 774u: goto L_08B43BAC;
    case 775u: goto L_08B43BC4;
    case 776u: goto L_08B43BD8;
    case 777u: goto L_08B43BFC;
    case 778u: goto L_08B43C00;
    case 779u: goto L_08B43C18;
    case 780u: goto L_08B43C28;
    case 781u: goto L_08B43C38;
    case 782u: goto L_08B43C40;
    case 783u: goto L_08B43C48;
    case 784u: goto L_08B43CD8;
    case 785u: goto L_08B43CE8;
    case 786u: goto L_08B43CF0;
    case 787u: goto L_08B43D04;
    case 788u: goto L_08B43D18;
    case 789u: goto L_08B43D24;
    case 790u: goto L_08B43D38;
    case 791u: goto L_08B43D4C;
    case 792u: goto L_08B43D58;
    case 793u: goto L_08B43D68;
    case 794u: goto L_08B43D7C;
    case 795u: goto L_08B43D80;
    case 796u: goto L_08B43D88;
    case 797u: goto L_08B43DB4;
    case 798u: goto L_08B43DCC;
    case 799u: goto L_08B43DDC;
    case 800u: goto L_08B43DE4;
    case 801u: goto L_08B43DEC;
    case 802u: goto L_08B43E04;
    case 803u: goto L_08B43E08;
    case 804u: goto L_08B43E18;
    case 805u: goto L_08B43E1C;
    case 806u: goto L_08B43E30;
    case 807u: goto L_08B43E44;
    case 808u: goto L_08B43E50;
    case 809u: goto L_08B43E64;
    case 810u: goto L_08B43EB8;
    case 811u: goto L_08B43ECC;
    case 812u: goto L_08B43EE8;
    case 813u: goto L_08B43EF0;
    case 814u: goto L_08B43F00;
    case 815u: goto L_08B43F20;
    case 816u: goto L_08B43F24;
    case 817u: goto L_08B43F68;
    case 818u: goto L_08B43FC8;
    case 819u: goto L_08B43FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B40000:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40014;
      }
      goto L_08B40008;
    }
L_08B40008:
    hot_regs.g31 = (0x08B40010u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40010u) goto L_08B40010;
    return;
L_08B40010:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B40014;
L_08B40014:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B4001C;
L_08B4001C:
    hot_regs.g31 = (0x08B40024u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40024u) goto L_08B40024;
    return;
L_08B40024:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B40030u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40030u) goto L_08B40030;
    return;
L_08B40030:
    hot_regs.g31 = (0x08B40038u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 327u, 0x08AB9A5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40038u) goto L_08B40038;
    return;
L_08B40038:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B400C8;
      }
      goto L_08B40044;
    }
L_08B40044:
    hot_regs.g31 = (0x08B4004Cu);
    hot_regs.g4 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4004Cu) goto L_08B4004C;
    return;
L_08B4004C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(680));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g31 = (0x08B40078u);
    hot_regs.f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f20)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40078u) goto L_08B40078;
    return;
L_08B40078:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B40090u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40090u) goto L_08B40090;
    return;
L_08B40090:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(hot_regs.g2);
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    g4 = (g4 + hot_regs.g5);
    f13 = std::bit_cast<float>(g4);
    f12 = hot_regs.f20 - f12;
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    hot_regs.f14 = f13 + ctx.fpr[28];
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B40118;
      }
      goto L_08B400C8;
    }
}
}
L_08B400C8:
    hot_regs.g31 = (0x08B400D0u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B400D0u) goto L_08B400D0;
    return;
L_08B400D0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(12)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    g4 = (g4 + g5);
    g4 = (g4 + hot_regs.g6);
    f12 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(16)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    g4 = (g4 + g5);
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    hot_regs.f14 = f13 + ctx.fpr[28];
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08B40118;
}
}
L_08B40118:
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B40128u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40128u) goto L_08B40128;
    return;
L_08B40128:
    hot_regs.g31 = (0x08B40130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 63u, 0x08B0C4CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40130u) goto L_08B40130;
    return;
L_08B40130:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(676), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(677), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(2)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(678), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(3)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(679), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B4016Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4016Cu) goto L_08B4016C;
    return;
L_08B4016C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    g4 = (g4 - ctx.gpr[17]);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g5 = (ctx.lo);
    hot_regs.g4 = g4;
    goto L_08B40180;
}
L_08B40180:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (ctx.gpr[21] < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 887u, 0x08B3FF90u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08B40190;
    }
L_08B40190:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = g4;
        goto L_08B401A8;
    }
    goto L_08B4019C;
}
L_08B4019C:
    hot_regs.g31 = (0x08B401A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B401A4u) goto L_08B401A4;
    return;
L_08B401A4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    goto L_08B401A8;
L_08B401A8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B401B8;
      }
      goto L_08B401B0;
    }
L_08B401B0:
    hot_regs.g31 = (0x08B401B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B401B8u) goto L_08B401B8;
    return;
L_08B401B8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(696)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(700)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(704)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(708)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(712)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(716)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(720)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(724)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(728)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(732)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(736)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(740)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(744)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(748)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(752)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(756)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(768));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B40200:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), ctx.gpr[22]);
    ctx.gpr[22] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(220), hot_regs.g31);
    hot_regs.g31 = (0x08B40238u);
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 605u, 0x08AC646Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40238u) goto L_08B40238;
    return;
L_08B40238:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40278;
      }
      goto L_08B40240;
    }
L_08B40240:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 158u);
    hot_regs.g31 = (0x08B40250u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40250u) goto L_08B40250;
    return;
L_08B40250:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08B4025Cu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4025Cu) goto L_08B4025C;
    return;
L_08B4025C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(184));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08B40280;
      }
      goto L_08B40270;
    }
L_08B40270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40288;
      }
      goto L_08B40278;
    }
L_08B40278:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B40DC8;
      }
      goto L_08B40280;
    }
L_08B40280:
    hot_regs.g31 = (0x08B40288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40288u) goto L_08B40288;
    return;
L_08B40288:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    if (hot_regs.g4 == 0u) {
    g16 = (ctx.gpr[28] + static_cast<std::uint32_t>(5256));
    ctx.gpr[16] = g16;
        goto L_08B402A0;
    }
    goto L_08B40298;
}
L_08B40298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B402A0;
      }
      goto L_08B402A0;
    }
L_08B402A0:
    hot_regs.g31 = (0x08B402A8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B402A8u) goto L_08B402A8;
    return;
L_08B402A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (ctx.gpr[16] + hot_regs.g2);
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[16]);
    g6 = (g4 - hot_regs.g5);
    hot_regs.g7 = (g6 < ctx.gpr[18] ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
        goto L_08B40328;
    }
    goto L_08B402C8;
}
L_08B402C8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g6 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_08B402E8;
      }
      goto L_08B402D0;
    }
L_08B402D0:
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B402E0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B402E0u) goto L_08B402E0;
    return;
L_08B402E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(184)));
    goto L_08B402E8;
L_08B402E8:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (hot_regs.g5 + g18);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = g18 == ctx.gpr[16];
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B40368;
      }
      goto L_08B402F8;
    }
}
L_08B402F8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B40318;
      }
      goto L_08B40308;
    }
}
L_08B40308:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B40314u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40314u) goto L_08B40314;
    return;
L_08B40314:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    goto L_08B40318;
L_08B40318:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[18]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(188), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B40368;
      }
      goto L_08B40328;
    }
}
L_08B40328:
    if (hot_regs.g4 == 0u) {
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g6);
        goto L_08B40350;
    }
    goto L_08B40330;
L_08B40330:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08B40340u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40340u) goto L_08B40340;
    return;
L_08B40340:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(188)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(184)));
    g6 = (g6 - hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[16] + g6);
    hot_regs.g6 = g6;
    goto L_08B40350;
}
L_08B40350:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(158), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(159), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(159));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B40368u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 592u, 0x08B3EB68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40368u) goto L_08B40368;
    return;
L_08B40368:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 159u);
    hot_regs.g31 = (0x08B40378u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40378u) goto L_08B40378;
    return;
L_08B40378:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08B40384u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40384u) goto L_08B40384;
    return;
L_08B40384:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40398;
      }
      goto L_08B40390;
    }
L_08B40390:
    hot_regs.g31 = (0x08B40398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40398u) goto L_08B40398;
    return;
L_08B40398:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    if (hot_regs.g4 == 0u) {
    g16 = (ctx.gpr[28] + static_cast<std::uint32_t>(5256));
    ctx.gpr[16] = g16;
        goto L_08B403B0;
    }
    goto L_08B403A8;
}
L_08B403A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B403B0;
      }
      goto L_08B403B0;
    }
L_08B403B0:
    hot_regs.g31 = (0x08B403B8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B403B8u) goto L_08B403B8;
    return;
L_08B403B8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(200)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (ctx.gpr[16] + hot_regs.g2);
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[16]);
    g6 = (g4 - hot_regs.g5);
    hot_regs.g7 = (g6 < ctx.gpr[18] ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
        goto L_08B40438;
    }
    goto L_08B403D8;
}
L_08B403D8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g6 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_08B403F8;
      }
      goto L_08B403E0;
    }
L_08B403E0:
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B403F0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B403F0u) goto L_08B403F0;
    return;
L_08B403F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(200)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(196)));
    goto L_08B403F8;
L_08B403F8:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (hot_regs.g5 + g18);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = g18 == ctx.gpr[16];
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B40478;
      }
      goto L_08B40408;
    }
}
L_08B40408:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B40428;
      }
      goto L_08B40418;
    }
}
L_08B40418:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B40424u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40424u) goto L_08B40424;
    return;
L_08B40424:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(200)));
    goto L_08B40428;
L_08B40428:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[18]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(200), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B40478;
      }
      goto L_08B40438;
    }
}
L_08B40438:
    if (hot_regs.g4 == 0u) {
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g6);
        goto L_08B40460;
    }
    goto L_08B40440;
L_08B40440:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08B40450u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40450u) goto L_08B40450;
    return;
L_08B40450:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(200)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(196)));
    g6 = (g6 - hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[16] + g6);
    hot_regs.g6 = g6;
    goto L_08B40460;
}
L_08B40460:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(161));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B40478u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 592u, 0x08B3EB68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40478u) goto L_08B40478;
    return;
L_08B40478:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 166u);
    hot_regs.g31 = (0x08B40488u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40488u) goto L_08B40488;
    return;
L_08B40488:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08B40494u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40494u) goto L_08B40494;
    return;
L_08B40494:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B404A8;
      }
      goto L_08B404A0;
    }
L_08B404A0:
    hot_regs.g31 = (0x08B404A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B404A8u) goto L_08B404A8;
    return;
L_08B404A8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B404F4;
      }
      goto L_08B404B0;
    }
L_08B404B0:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g5 = (0u | 171u);
    hot_regs.g31 = (0x08B404C0u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B404C0u) goto L_08B404C0;
    return;
L_08B404C0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08B404CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B404CCu) goto L_08B404CC;
    return;
L_08B404CC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B404E0;
      }
      goto L_08B404D8;
    }
L_08B404D8:
    hot_regs.g31 = (0x08B404E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B404E0u) goto L_08B404E0;
    return;
L_08B404E0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B404F4;
      }
      goto L_08B404E8;
    }
L_08B404E8:
    hot_regs.g31 = (0x08B404F0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B404F0u) goto L_08B404F0;
    return;
L_08B404F0:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(hot_regs.g2));
    goto L_08B404F4;
L_08B404F4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), ctx.gpr[22]);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 167u);
    hot_regs.g31 = (0x08B40508u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40508u) goto L_08B40508;
    return;
L_08B40508:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08B40514u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40514u) goto L_08B40514;
    return;
L_08B40514:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40528;
      }
      goto L_08B40520;
    }
L_08B40520:
    hot_regs.g31 = (0x08B40528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40528u) goto L_08B40528;
    return;
L_08B40528:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5280));
      if (branch_taken) {
          goto L_08B40840;
      }
      goto L_08B40530;
    }
L_08B40530:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5284));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), hot_regs.g4);
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(60));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(24));
    ctx.gpr[30] = (ctx.gpr[20] + static_cast<std::uint32_t>(212));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(156));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), hot_regs.g5);
    goto L_08B4054C;
}
L_08B4054C:
    hot_regs.g31 = (0x08B40554u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 116u, 0x08B68708u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40554u) goto L_08B40554;
    return;
L_08B40554:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), 0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (0u | 172u);
    hot_regs.g31 = (0x08B40568u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40568u) goto L_08B40568;
    return;
L_08B40568:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08B40574u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40574u) goto L_08B40574;
    return;
L_08B40574:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40588;
      }
      goto L_08B40580;
    }
L_08B40580:
    hot_regs.g31 = (0x08B40588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40588u) goto L_08B40588;
    return;
L_08B40588:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4059C;
      }
      goto L_08B40590;
    }
L_08B40590:
    hot_regs.g31 = (0x08B40598u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40598u) goto L_08B40598;
    return;
L_08B40598:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(hot_regs.g2));
    goto L_08B4059C;
L_08B4059C:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (0u | 177u);
    hot_regs.g31 = (0x08B405ACu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B405ACu) goto L_08B405AC;
    return;
L_08B405AC:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08B405B8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B405B8u) goto L_08B405B8;
    return;
L_08B405B8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B405CC;
      }
      goto L_08B405C4;
    }
L_08B405C4:
    hot_regs.g31 = (0x08B405CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B405CCu) goto L_08B405CC;
    return;
L_08B405CC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4069C;
      }
      goto L_08B405D4;
    }
L_08B405D4:
    hot_regs.g31 = (0x08B405DCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B405DCu) goto L_08B405DC;
    return;
L_08B405DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (ctx.gpr[17] + hot_regs.g2);
    ctx.gpr[16] = (ctx.gpr[18] - ctx.gpr[17]);
    g6 = (g4 - hot_regs.g5);
    hot_regs.g7 = (g6 < ctx.gpr[16] ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
        goto L_08B4065C;
    }
    goto L_08B405FC;
}
L_08B405FC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g6 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_08B4061C;
      }
      goto L_08B40604;
    }
L_08B40604:
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B40614u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40614u) goto L_08B40614;
    return;
L_08B40614:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    goto L_08B4061C;
L_08B4061C:
{
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[17] = (hot_regs.g5 + g16);
    g16 = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == g16;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B4069C;
      }
      goto L_08B4062C;
    }
}
L_08B4062C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B4064C;
      }
      goto L_08B4063C;
    }
}
L_08B4063C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B40648u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40648u) goto L_08B40648;
    return;
L_08B40648:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    goto L_08B4064C;
L_08B4064C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4069C;
      }
      goto L_08B4065C;
    }
}
L_08B4065C:
    if (hot_regs.g4 == 0u) {
    hot_regs.g5 = (ctx.gpr[17] + hot_regs.g6);
        goto L_08B40684;
    }
    goto L_08B40664;
L_08B40664:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08B40674u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40674u) goto L_08B40674;
    return;
L_08B40674:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    g6 = (g6 - hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[17] + g6);
    hot_regs.g6 = g6;
    goto L_08B40684;
}
L_08B40684:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(163));
    hot_regs.g31 = (0x08B4069Cu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 592u, 0x08B3EB68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4069Cu) goto L_08B4069C;
    return;
L_08B4069C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(172)));
    hot_regs.g31 = (0x08B406A8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B406A8u) goto L_08B406A8;
    return;
L_08B406A8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B406C0;
      }
      goto L_08B406B4;
    }
L_08B406B4:
    hot_regs.g31 = (0x08B406BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B406BCu) goto L_08B406BC;
    return;
L_08B406BC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g2);
    goto L_08B406C0;
L_08B406C0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(176)));
    hot_regs.g31 = (0x08B406CCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B406CCu) goto L_08B406CC;
    return;
L_08B406CC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B406E4;
      }
      goto L_08B406D8;
    }
L_08B406D8:
    hot_regs.g31 = (0x08B406E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B406E0u) goto L_08B406E0;
    return;
L_08B406E0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g2);
    goto L_08B406E4;
L_08B406E4:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (0u | 175u);
    hot_regs.g31 = (0x08B406F4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B406F4u) goto L_08B406F4;
    return;
L_08B406F4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08B40700u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40700u) goto L_08B40700;
    return;
L_08B40700:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40714;
      }
      goto L_08B4070C;
    }
L_08B4070C:
    hot_regs.g31 = (0x08B40714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40714u) goto L_08B40714;
    return;
L_08B40714:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40728;
      }
      goto L_08B4071C;
    }
L_08B4071C:
    hot_regs.g31 = (0x08B40724u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40724u) goto L_08B40724;
    return;
L_08B40724:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g2);
    goto L_08B40728;
L_08B40728:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (0u | 176u);
    hot_regs.g31 = (0x08B40738u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40738u) goto L_08B40738;
    return;
L_08B40738:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08B40744u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40744u) goto L_08B40744;
    return;
L_08B40744:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40758;
      }
      goto L_08B40750;
    }
L_08B40750:
    hot_regs.g31 = (0x08B40758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40758u) goto L_08B40758;
    return;
L_08B40758:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4076C;
      }
      goto L_08B40760;
    }
L_08B40760:
    hot_regs.g31 = (0x08B40768u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40768u) goto L_08B40768;
    return;
L_08B40768:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g2);
    goto L_08B4076C;
L_08B4076C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(216)));
    g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = g4 == g5;
    g5 = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B407D4;
      }
      goto L_08B4077C;
    }
}
L_08B4077C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08B407CC;
      }
      goto L_08B40784;
    }
L_08B40784:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (hot_regs.g5 | 0u);
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (hot_regs.g6 + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(16), hot_regs.g5);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B407C4u);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(20), hot_regs.g7);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B407C4u) goto L_08B407C4;
    return;
L_08B407C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(216)));
    g4 = (g4 + static_cast<std::uint32_t>(36));
    hot_regs.g4 = g4;
    goto L_08B407CC;
}
L_08B407CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(216), hot_regs.g4);
      if (branch_taken) {
          goto L_08B407F4;
      }
      goto L_08B407D4;
    }
L_08B407D4:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g7 = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g31 = (0x08B407F4u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 792u, 0x08B3F6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B407F4u) goto L_08B407F4;
    return;
L_08B407F4:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (0u | 167u);
    hot_regs.g31 = (0x08B40804u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40804u) goto L_08B40804;
    return;
L_08B40804:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08B40810u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 113u, 0x08984650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40810u) goto L_08B40810;
    return;
L_08B40810:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40824;
      }
      goto L_08B4081C;
    }
L_08B4081C:
    hot_regs.g31 = (0x08B40824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40824u) goto L_08B40824;
    return;
L_08B40824:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40838;
      }
      goto L_08B40830;
    }
L_08B40830:
    hot_regs.g31 = (0x08B40838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40838u) goto L_08B40838;
    return;
L_08B40838:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4054C;
      }
      goto L_08B40840;
    }
L_08B40840:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 169u);
    hot_regs.g31 = (0x08B40850u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40850u) goto L_08B40850;
    return;
L_08B40850:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(180)));
    hot_regs.g31 = (0x08B4085Cu);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4085Cu) goto L_08B4085C;
    return;
L_08B4085C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40870;
      }
      goto L_08B40868;
    }
L_08B40868:
    hot_regs.g31 = (0x08B40870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40870u) goto L_08B40870;
    return;
L_08B40870:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5280));
      if (branch_taken) {
          goto L_08B40A80;
      }
      goto L_08B40878;
    }
L_08B40878:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(72));
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(5284));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), hot_regs.g4);
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(260));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(84));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(157));
    goto L_08B40894;
}
L_08B40894:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 172u);
    hot_regs.g31 = (0x08B408A4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B408A4u) goto L_08B408A4;
    return;
L_08B408A4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (0x08B408B0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B408B0u) goto L_08B408B0;
    return;
L_08B408B0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B408C4;
      }
      goto L_08B408BC;
    }
L_08B408BC:
    hot_regs.g31 = (0x08B408C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B408C4u) goto L_08B408C4;
    return;
L_08B408C4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B408D8;
      }
      goto L_08B408CC;
    }
L_08B408CC:
    hot_regs.g31 = (0x08B408D4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B408D4u) goto L_08B408D4;
    return;
L_08B408D4:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(hot_regs.g2));
    goto L_08B408D8;
L_08B408D8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(172)));
    hot_regs.g31 = (0x08B408E4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B408E4u) goto L_08B408E4;
    return;
L_08B408E4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B408FC;
      }
      goto L_08B408F0;
    }
L_08B408F0:
    hot_regs.g31 = (0x08B408F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B408F8u) goto L_08B408F8;
    return;
L_08B408F8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), hot_regs.g2);
    goto L_08B408FC;
L_08B408FC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B40908u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40908u) goto L_08B40908;
    return;
L_08B40908:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40920;
      }
      goto L_08B40914;
    }
L_08B40914:
    hot_regs.g31 = (0x08B4091Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4091Cu) goto L_08B4091C;
    return;
L_08B4091C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), hot_regs.g2);
    goto L_08B40920;
L_08B40920:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 173u);
    hot_regs.g31 = (0x08B40930u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40930u) goto L_08B40930;
    return;
L_08B40930:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (0x08B4093Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4093Cu) goto L_08B4093C;
    return;
L_08B4093C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40950;
      }
      goto L_08B40948;
    }
L_08B40948:
    hot_regs.g31 = (0x08B40950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40950u) goto L_08B40950;
    return;
L_08B40950:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40988;
      }
      goto L_08B40958;
    }
L_08B40958:
    hot_regs.g31 = (0x08B40960u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40960u) goto L_08B40960;
    return;
L_08B40960:
    hot_regs.g4 = (hot_regs.g2 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40980;
      }
      goto L_08B4096C;
    }
L_08B4096C:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08B40978u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40978u) goto L_08B40978;
    return;
L_08B40978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40988;
      }
      goto L_08B40980;
    }
L_08B40980:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B40DC8;
      }
      goto L_08B40988;
    }
L_08B40988:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 174u);
    hot_regs.g31 = (0x08B40998u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40998u) goto L_08B40998;
    return;
L_08B40998:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (0x08B409A4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B409A4u) goto L_08B409A4;
    return;
L_08B409A4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B409B8;
      }
      goto L_08B409B0;
    }
L_08B409B0:
    hot_regs.g31 = (0x08B409B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B409B8u) goto L_08B409B8;
    return;
L_08B409B8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B409D0;
      }
      goto L_08B409C0;
    }
L_08B409C0:
    hot_regs.g31 = (0x08B409C8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B409C8u) goto L_08B409C8;
    return;
L_08B409C8:
    hot_regs.g4 = (0u < hot_regs.g2 ? 1u : 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08B409D0;
L_08B409D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(264)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B40A28;
      }
      goto L_08B409E0;
    }
L_08B409E0:
{
    std::uint32_t g4 = hot_regs.g4;
    if (g4 == 0u) {
    g4 = (g4 + static_cast<std::uint32_t>(24));
    hot_regs.g4 = g4;
        goto L_08B40A20;
    }
    goto L_08B409E8;
}
L_08B409E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g6);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g7);
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), g7);
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(264)));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_08B40A20;
}
L_08B40A20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(264), hot_regs.g4);
      if (branch_taken) {
          goto L_08B40A48;
      }
      goto L_08B40A28;
    }
L_08B40A28:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g31 = (0x08B40A48u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 836u, 0x08B3FA1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40A48u) goto L_08B40A48;
    return;
L_08B40A48:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 169u);
    hot_regs.g31 = (0x08B40A58u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40A58u) goto L_08B40A58;
    return;
L_08B40A58:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (0x08B40A64u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 113u, 0x08984650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40A64u) goto L_08B40A64;
    return;
L_08B40A64:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40A78;
      }
      goto L_08B40A70;
    }
L_08B40A70:
    hot_regs.g31 = (0x08B40A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40A78u) goto L_08B40A78;
    return;
L_08B40A78:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B40894;
      }
      goto L_08B40A80;
    }
L_08B40A80:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 168u);
    hot_regs.g31 = (0x08B40A90u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40A90u) goto L_08B40A90;
    return;
L_08B40A90:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(180)));
    hot_regs.g31 = (0x08B40A9Cu);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40A9Cu) goto L_08B40A9C;
    return;
L_08B40A9C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40AB0;
      }
      goto L_08B40AA8;
    }
L_08B40AA8:
    hot_regs.g31 = (0x08B40AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40AB0u) goto L_08B40AB0;
    return;
L_08B40AB0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5280));
      if (branch_taken) {
          goto L_08B40DC4;
      }
      goto L_08B40AB8;
    }
L_08B40AB8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5284));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), hot_regs.g4);
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(108));
    ctx.gpr[23] = (ctx.gpr[20] + static_cast<std::uint32_t>(248));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(168));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), hot_regs.g5);
    goto L_08B40AD4;
}
L_08B40AD4:
    hot_regs.g31 = (0x08B40ADCu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 116u, 0x08B68708u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40ADCu) goto L_08B40ADC;
    return;
L_08B40ADC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), 0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (0u | 177u);
    hot_regs.g31 = (0x08B40AF0u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40AF0u) goto L_08B40AF0;
    return;
L_08B40AF0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    hot_regs.g31 = (0x08B40AFCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40AFCu) goto L_08B40AFC;
    return;
L_08B40AFC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40B10;
      }
      goto L_08B40B08;
    }
L_08B40B08:
    hot_regs.g31 = (0x08B40B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40B10u) goto L_08B40B10;
    return;
L_08B40B10:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40BE0;
      }
      goto L_08B40B18;
    }
L_08B40B18:
    hot_regs.g31 = (0x08B40B20u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40B20u) goto L_08B40B20;
    return;
L_08B40B20:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (ctx.gpr[17] + hot_regs.g2);
    ctx.gpr[16] = (ctx.gpr[18] - ctx.gpr[17]);
    g6 = (g4 - hot_regs.g5);
    hot_regs.g7 = (g6 < ctx.gpr[16] ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
        goto L_08B40BA0;
    }
    goto L_08B40B40;
}
L_08B40B40:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g6 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_08B40B60;
      }
      goto L_08B40B48;
    }
L_08B40B48:
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B40B58u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40B58u) goto L_08B40B58;
    return;
L_08B40B58:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    goto L_08B40B60;
L_08B40B60:
{
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[17] = (hot_regs.g5 + g16);
    g16 = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == g16;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B40BE0;
      }
      goto L_08B40B70;
    }
}
L_08B40B70:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B40B90;
      }
      goto L_08B40B80;
    }
}
L_08B40B80:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B40B8Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40B8Cu) goto L_08B40B8C;
    return;
L_08B40B8C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    goto L_08B40B90;
L_08B40B90:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B40BE0;
      }
      goto L_08B40BA0;
    }
}
L_08B40BA0:
    if (hot_regs.g4 == 0u) {
    hot_regs.g5 = (ctx.gpr[17] + hot_regs.g6);
        goto L_08B40BC8;
    }
    goto L_08B40BA8;
L_08B40BA8:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08B40BB8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40BB8u) goto L_08B40BB8;
    return;
L_08B40BB8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    g6 = (g6 - hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[17] + g6);
    hot_regs.g6 = g6;
    goto L_08B40BC8;
}
L_08B40BC8:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(165));
    hot_regs.g31 = (0x08B40BE0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 592u, 0x08B3EB68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40BE0u) goto L_08B40BE0;
    return;
L_08B40BE0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(172)));
    hot_regs.g31 = (0x08B40BECu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40BECu) goto L_08B40BEC;
    return;
L_08B40BEC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40C04;
      }
      goto L_08B40BF8;
    }
L_08B40BF8:
    hot_regs.g31 = (0x08B40C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40C00u) goto L_08B40C00;
    return;
L_08B40C00:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), hot_regs.g2);
    goto L_08B40C04;
L_08B40C04:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(176)));
    hot_regs.g31 = (0x08B40C10u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40C10u) goto L_08B40C10;
    return;
L_08B40C10:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40C28;
      }
      goto L_08B40C1C;
    }
L_08B40C1C:
    hot_regs.g31 = (0x08B40C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40C24u) goto L_08B40C24;
    return;
L_08B40C24:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), hot_regs.g2);
    goto L_08B40C28;
L_08B40C28:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (0u | 175u);
    hot_regs.g31 = (0x08B40C38u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40C38u) goto L_08B40C38;
    return;
L_08B40C38:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    hot_regs.g31 = (0x08B40C44u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40C44u) goto L_08B40C44;
    return;
L_08B40C44:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40C58;
      }
      goto L_08B40C50;
    }
L_08B40C50:
    hot_regs.g31 = (0x08B40C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40C58u) goto L_08B40C58;
    return;
L_08B40C58:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40C6C;
      }
      goto L_08B40C60;
    }
L_08B40C60:
    hot_regs.g31 = (0x08B40C68u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40C68u) goto L_08B40C68;
    return;
L_08B40C68:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), hot_regs.g2);
    goto L_08B40C6C;
L_08B40C6C:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (0u | 176u);
    hot_regs.g31 = (0x08B40C7Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40C7Cu) goto L_08B40C7C;
    return;
L_08B40C7C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    hot_regs.g31 = (0x08B40C88u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40C88u) goto L_08B40C88;
    return;
L_08B40C88:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40C9C;
      }
      goto L_08B40C94;
    }
L_08B40C94:
    hot_regs.g31 = (0x08B40C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40C9Cu) goto L_08B40C9C;
    return;
L_08B40C9C:
    if (ctx.gpr[16] == 0u) {
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(120)));
        goto L_08B40CB4;
    }
    goto L_08B40CA4;
L_08B40CA4:
    hot_regs.g31 = (0x08B40CACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40CACu) goto L_08B40CAC;
    return;
L_08B40CAC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    goto L_08B40CB4;
L_08B40CB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(228), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(232), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(236), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(240), g4);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[23];
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(244), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B40D78;
      }
      goto L_08B40CE4;
    }
}
L_08B40CE4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(0u));
    goto L_08B40CF4;
}
L_08B40CF4:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B40D1C;
      }
      goto L_08B40CFC;
    }
L_08B40CFC:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B40D1C;
      }
      goto L_08B40D08;
    }
L_08B40D08:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0))))));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    { const bool branch_taken = 0u == 0u;
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B40CF4;
      }
      goto L_08B40D1C;
    }
}
L_08B40D1C:
    { const bool branch_taken = hot_regs.g5 != hot_regs.g4;
    hot_regs.g6 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08B40D64;
      }
      goto L_08B40D24;
    }
L_08B40D24:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B40D78;
      }
      goto L_08B40D34;
    }
L_08B40D34:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B40D54;
      }
      goto L_08B40D44;
    }
}
L_08B40D44:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B40D50u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40D50u) goto L_08B40D50;
    return;
L_08B40D50:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    goto L_08B40D54;
L_08B40D54:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[17] - ctx.gpr[16]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(252), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B40D78;
      }
      goto L_08B40D64;
    }
}
L_08B40D64:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08B40D78u);
    hot_regs.g7 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 559u, 0x08B3E8E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40D78u) goto L_08B40D78;
    return;
L_08B40D78:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (0u | 168u);
    hot_regs.g31 = (0x08B40D88u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40D88u) goto L_08B40D88;
    return;
L_08B40D88:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    hot_regs.g31 = (0x08B40D94u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 113u, 0x08984650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40D94u) goto L_08B40D94;
    return;
L_08B40D94:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B40DA8;
      }
      goto L_08B40DA0;
    }
L_08B40DA0:
    hot_regs.g31 = (0x08B40DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40DA8u) goto L_08B40DA8;
    return;
L_08B40DA8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B40DBC;
      }
      goto L_08B40DB4;
    }
L_08B40DB4:
    hot_regs.g31 = (0x08B40DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B40DBCu) goto L_08B40DBC;
    return;
L_08B40DBC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B40AD4;
      }
      goto L_08B40DC4;
    }
L_08B40DC4:
    hot_regs.g2 = (0u | 1u);
    goto L_08B40DC8;
L_08B40DC8:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08B40DF8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(852)));
    hot_regs.g7 = (0u | 13u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g7;
    hot_regs.g6 = (0u | 0u);
      if (branch_taken) {
          goto L_08B40E14;
      }
      goto L_08B40E08;
    }
L_08B40E08:
    hot_regs.g7 = (0u | 24u);
    if (hot_regs.g5 != hot_regs.g7) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(619))))));
        goto L_08B40E50;
    }
    goto L_08B40E14;
L_08B40E14:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    g7 = (2238u << 16u);
    ctx.gpr[8] = (g5 + g5);
    ctx.gpr[9] = (g5 << 8u);
    g5 = (g5 + ctx.gpr[8]);
    g5 = (g5 << 5u);
    g5 = (ctx.gpr[9] + g5);
    g7 = (g7 + static_cast<std::uint32_t>(-6992));
    g5 = (g5 + g7);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(2288));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(32)));
    if (static_cast<std::int32_t>(g5) > 0) {
    hot_regs.g6 = (0u | 1u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
        goto L_08B40E60;
    }
    goto L_08B40E4C;
}
L_08B40E4C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(619))))));
    goto L_08B40E50;
L_08B40E50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B40E60;
      }
      goto L_08B40E5C;
    }
}
L_08B40E5C:
    hot_regs.g6 = (0u | 1u);
    goto L_08B40E60;
L_08B40E60:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g6 & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B40E68:
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
L_08B40EAC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.gpr[30] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), hot_regs.g31);
    hot_regs.g4 = (49024u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[22] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    hot_regs.g4 = (hot_regs.g4 & 15u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B41014;
      }
      goto L_08B40F38;
    }
L_08B40F38:
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B40F44;
L_08B40F44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6))))));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(30040)));
    g5 = (g5 + ctx.gpr[22]);
    g5 = (g5 + g5);
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    g21 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g5 & 16383u);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g5 = (g4 << 3u);
    g5 = (g4 + g5);
    g4 = (g4 + g5);
    g21 = (g21 + g4);
    { const bool branch_taken = g21 == ctx.gpr[16];
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08B40FFC;
      }
      goto L_08B40F84;
    }
}
L_08B40F84:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B40F90u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    goto L_08B40E68;
L_08B40F90:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B40F9Cu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    goto L_08B40E68;
L_08B40F9C:
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
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B40FFC;
      }
      goto L_08B40FF4;
    }
L_08B40FF4:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    goto L_08B40FFC;
L_08B40FFC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    g22 = (g22 + static_cast<std::uint32_t>(1));
    g4 = (g4 & 15u);
    g4 = (static_cast<std::int32_t>(g22) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
        goto L_08B40F44;
    }
    goto L_08B41014;
}
L_08B41014:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[23] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B41050:
{
    std::uint32_t g4 = hot_regs.g4;
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B41074:
{
    std::uint32_t g4 = hot_regs.g4;
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
    ctx.fpr[0] = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B41098:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5436), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5432), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5440), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5444), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5448), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5484), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5452), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5456), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5488), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5492), 0u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(5465), static_cast<std::uint8_t>(0u));
    g4 = (0u | 2u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(5464), static_cast<std::uint8_t>(g4));
    g5 = (2280u << 16u);
    g4 = (0u | 0u);
    hot_regs.g6 = (g28 | 0u);
    g5 = (g5 + static_cast<std::uint32_t>(11952));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B410E4;
}
L_08B410E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(10592), 0u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B410E4;
      }
      goto L_08B410F8;
    }
}
L_08B410F8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2281u << 16u);
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g7 = (0u | 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-23080));
    hot_regs.g6 = g6;
    goto L_08B4110C;
}
L_08B4110C:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (hot_regs.g7 + hot_regs.g6);
    goto L_08B41114;
L_08B41114:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g10 = (g10 + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(g10) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    g9 = (g9 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08B41114;
      }
      goto L_08B41128;
    }
}
L_08B41128:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), 0u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(100));
    ctx.gpr[9] = (static_cast<std::int32_t>(g4) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B4110C;
      }
      goto L_08B41140;
    }
}
L_08B41140:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B41148:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5436), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5432), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5440), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5444), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5448), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5484), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5452), 0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5456), 0u);
    g4 = (0u | 2u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(5464), static_cast<std::uint8_t>(g4));
    g4 = (2280u << 16u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (g28 | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(11952));
    hot_regs.g4 = g4;
    goto L_08B41188;
}
L_08B41188:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(10592), 0u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B41188;
      }
      goto L_08B4119C;
    }
}
L_08B4119C:
    hot_regs.g5 = (0u | 0u);
    goto L_08B411A0;
L_08B411A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 13 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B411A0;
      }
      goto L_08B411B4;
    }
}
L_08B411B4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B411BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
        goto L_08B411E0;
    }
    goto L_08B411D4;
}
L_08B411D4:
    hot_regs.g31 = (0x08B411DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B411DCu) goto L_08B411DC;
    return;
L_08B411DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08B411E0;
L_08B411E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41214;
      }
      goto L_08B411EC;
    }
}
L_08B411EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B41214;
      }
      goto L_08B411FC;
    }
L_08B411FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    g4 = (static_cast<std::int32_t>(g4) < 30 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41220;
      }
      goto L_08B4120C;
    }
}
L_08B4120C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B412A4;
      }
      goto L_08B41214;
    }
L_08B41214:
    hot_regs.g4 = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5464), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B412C8;
      }
      goto L_08B41220;
    }
L_08B41220:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(5464)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B41280;
      }
      goto L_08B4122C;
    }
L_08B4122C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5464), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(5464)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B412A4;
      }
      goto L_08B41240;
    }
}
L_08B41240:
    ctx.gpr[16] = (0u | 0u);
    goto L_08B41244;
L_08B41244:
    hot_regs.g31 = (0x08B4124Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 536u, 0x08B46A94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4124Cu) goto L_08B4124C;
    return;
L_08B4124C:
    hot_regs.g31 = (0x08B41254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 536u, 0x08B46A94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41254u) goto L_08B41254;
    return;
L_08B41254:
    hot_regs.g31 = (0x08B4125Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 536u, 0x08B46A94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4125Cu) goto L_08B4125C;
    return;
L_08B4125C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g16 + static_cast<std::uint32_t>(1));
    g16 = (g4 << 16u);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 16u));
    g4 = (static_cast<std::int32_t>(g16) < 100 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B41244;
      }
      goto L_08B41274;
    }
}
L_08B41274:
    hot_regs.g4 = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10357), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B412A4;
      }
      goto L_08B41280;
    }
L_08B41280:
    hot_regs.g31 = (0x08B41288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 536u, 0x08B46A94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41288u) goto L_08B41288;
    return;
L_08B41288:
    ctx.gpr[16] = (0u | 0u);
    goto L_08B4128C;
L_08B4128C:
    hot_regs.g31 = (0x08B41294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 536u, 0x08B46A94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41294u) goto L_08B41294;
    return;
L_08B41294:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B4128C;
      }
      goto L_08B412A4;
    }
}
L_08B412A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (0u + static_cast<std::uint32_t>(-4096));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7668)));
    g4 = (g4 & g5);
    g5 = (hot_regs.g6 & g5);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B412C8;
      }
      goto L_08B412C0;
    }
}
L_08B412C0:
    hot_regs.g31 = (0x08B412C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 217u, 0x08B453F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B412C8u) goto L_08B412C8;
    return;
L_08B412C8:
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
L_08B412D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g21);
    g21 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g4 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g19);
    g19 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[20] = (g19 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    ctx.gpr[21] = g21;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B41404;
      }
      goto L_08B41310;
    }
}
L_08B41310:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (ctx.gpr[19] << 5u);
    g18 = (0u + g4);
    g4 = (g4 << 6u);
    g18 = (g18 + g4);
    g4 = (16972u << 16u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-33));
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    goto L_08B4132C;
}
L_08B4132C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B41344;
      }
      goto L_08B41334;
    }
L_08B41334:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
        goto L_08B4134C;
    }
    goto L_08B41344;
}
L_08B41344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B4136C;
      }
      goto L_08B4134C;
    }
L_08B4134C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[19]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08B41368;
    }
    goto L_08B41360;
}
L_08B41360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B4136C;
      }
      goto L_08B41368;
    }
L_08B41368:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    goto L_08B4136C;
L_08B4136C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B413F0;
      }
      goto L_08B41374;
    }
L_08B41374:
    hot_regs.g31 = (0x08B4137Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 299u, 0x08B458A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4137Cu) goto L_08B4137C;
    return;
L_08B4137C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B413F0;
      }
      goto L_08B4138C;
    }
}
L_08B4138C:
    hot_regs.g31 = (0x08B41394u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 48u, 0x08960450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41394u) goto L_08B41394;
    return;
L_08B41394:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    f12 = f12 - hot_regs.f13;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    f12 = std::sqrt(f12);
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08B413F0;
      }
      goto L_08B413D8;
    }
}
}
L_08B413D8:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(626)));
    hot_regs.g31 = (0x08B413E4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 648u, 0x08B23344u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B413E4u) goto L_08B413E4;
    return;
L_08B413E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08B413F0;
}
L_08B413F0:
{
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g4 = (g19 | 0u);
    g19 = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (g19 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2080));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08B4132C;
      }
      goto L_08B41404;
    }
}
L_08B41404:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
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
L_08B4142C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    hot_regs.g5 = (0u | 2u);
    g4 = (g4 & 7u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), hot_regs.g31);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B415D8;
      }
      goto L_08B4146C;
    }
}
L_08B4146C:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08B41478u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 586u, 0x08B72EF0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41478u) goto L_08B41478;
    return;
L_08B41478:
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g2) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B415D8;
      }
      goto L_08B41484;
    }
L_08B41484:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    g5 = (19224u << 16u);
    ctx.gpr[20] = (g4 + static_cast<std::uint32_t>(-1));
    g5 = (g5 | 38528u);
    ctx.gpr[21] = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B415A0;
      }
      goto L_08B414A4;
    }
}
L_08B414A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (ctx.gpr[20] << 5u);
    g18 = (0u + g4);
    g4 = (g4 << 6u);
    g18 = (g18 + g4);
    g4 = (2236u << 16u);
    g16 = (g4 + static_cast<std::uint32_t>(32304));
    g16 = (g16 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    goto L_08B414C0;
}
L_08B414C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B414D8;
      }
      goto L_08B414C8;
    }
L_08B414C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
        goto L_08B414E0;
    }
    goto L_08B414D8;
}
L_08B414D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B41500;
      }
      goto L_08B414E0;
    }
L_08B414E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[20]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08B414FC;
    }
    goto L_08B414F4;
}
L_08B414F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B41500;
      }
      goto L_08B414FC;
    }
L_08B414FC:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    goto L_08B41500;
L_08B41500:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4158C;
      }
      goto L_08B4150C;
    }
L_08B4150C:
    hot_regs.g31 = (0x08B41514u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08B4223C;
L_08B41514:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4158C;
      }
      goto L_08B4151C;
    }
L_08B4151C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4158C;
      }
      goto L_08B4152C;
    }
}
L_08B4152C:
    hot_regs.g31 = (0x08B41534u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 772u, 0x08AFF508u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41534u) goto L_08B41534;
    return;
L_08B41534:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4158C;
      }
      goto L_08B4153C;
    }
L_08B4153C:
    hot_regs.g31 = (0x08B41544u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 93u, 0x089704DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41544u) goto L_08B41544;
    return;
L_08B41544:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4158C;
      }
      goto L_08B4154C;
    }
L_08B4154C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
          goto L_08B4158C;
      }
      goto L_08B41584;
    }
L_08B41584:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    goto L_08B4158C;
L_08B4158C:
{
    std::uint32_t g20 = ctx.gpr[20];
    hot_regs.g4 = (g20 | 0u);
    g20 = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (g20 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2080));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08B414C0;
      }
      goto L_08B415A0;
    }
}
L_08B415A0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B415D8;
      }
      goto L_08B415A8;
    }
L_08B415A8:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B415B4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B415B4u) goto L_08B415B4;
    return;
L_08B415B4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B415D8;
      }
      goto L_08B415BC;
    }
L_08B415BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B415D8u);
    hot_regs.g4 = (ctx.gpr[21] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B415D8u) goto L_08B415D8;
    return;
L_08B415D8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B41608:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 1u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(g5));
    g5 = (0u | 0u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(504), g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(508), g5);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B41628:
    hot_regs.g4 = (0u | 0u);
    goto L_08B4162C;
L_08B4162C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (ctx.gpr[28] + g5);
    g4 = (g4 << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(10592), 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B4162C;
      }
      goto L_08B41650;
    }
}
L_08B41650:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B41658:
    hot_regs.g6 = (0u | 0u);
    goto L_08B4165C;
L_08B4165C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g6 << 2u);
    g5 = (ctx.gpr[28] + g5);
    hot_regs.g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(10592)));
    { const bool branch_taken = hot_regs.g7 != hot_regs.g4;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B41674;
      }
      goto L_08B41670;
    }
}
L_08B41670:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(10592), 0u);
    goto L_08B41674;
L_08B41674:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g6 + static_cast<std::uint32_t>(1));
    g6 = (g5 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    g5 = (static_cast<std::int32_t>(g6) < 2 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4165C;
      }
      goto L_08B4168C;
    }
}
L_08B4168C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B41694:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(22));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08B416FCu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 697u, 0x08977474u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B416FCu) goto L_08B416FC;
    return;
L_08B416FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g4 = (hot_regs.g2 | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g4 << 3u);
    g5 = (g4 + g5);
    g5 = (g4 + g5);
    g6 = (g8 + g5);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 15u);
    g7 = (18804u << 16u);
    g7 = (g7 | 9214u);
    hot_regs.f12 = std::bit_cast<float>(g7);
    g7 = (0u + static_cast<std::uint32_t>(-1));
    g9 = (g8 + g5);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
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
    g8 = (hot_regs.g29 + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    g9 = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(g9) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B41864;
      }
      goto L_08B41764;
    }
}
L_08B41764:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    goto L_08B4176C;
L_08B4176C:
{
    float f0 = ctx.fpr[0];
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g29 = hot_regs.g29;
    g10 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g11 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    g2 = (g11 + hot_regs.g5);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(6))))));
    g2 = (g2 + g9);
    g10 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(30040)));
    g2 = (g2 + g2);
    g10 = (g10 + g2);
    g10 = (aot_mem.aot_load16(g10 + static_cast<std::uint32_t>(0)));
    g10 = (g10 & 16383u);
    g10 = (g10 << 16u);
    g10 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g10) >> 16u));
    g2 = (g10 << 3u);
    g2 = (g10 + g2);
    g2 = (g10 + g2);
    g11 = (g11 + g2);
    g2 = (g8 | 0u);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g11 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (g9 | 0u);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g11 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
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
    g8 = (g2 | 0u);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    f15 = hot_regs.f13 - f15;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f16 = hot_regs.f14 - f16;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f16));
    g9 = (std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(g9);
    g9 = (std::bit_cast<std::uint32_t>(f16));
    f16 = std::bit_cast<float>(g9);
    g9 = (std::bit_cast<std::uint32_t>(f15));
    ctx.fpr[17] = std::bit_cast<float>(g9);
    g11 = (std::bit_cast<std::uint32_t>(f16));
    ctx.fpr[18] = std::bit_cast<float>(g11);
    f19 = std::bit_cast<float>(g9);
    { const float fs = f19; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f0 = std::bit_cast<float>(g11);
    { const float fs = f0; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    f19 = f19 + f0;
    f19 = std::sqrt(f19);
    ctx.set_fpu_condition((hot_regs.f12 <= f19));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g9 = (ctx.gpr[3] | 0u);
    hot_regs.g2 = g2;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    ctx.fpr[0] = f0;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08B4183C;
      }
      goto L_08B41834;
    }
}
}
L_08B41834:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    hot_regs.g7 = (ctx.gpr[10] | 0u);
    goto L_08B4183C;
L_08B4183C:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    g9 = (g9 << 16u);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g9) >> 16u));
    ctx.gpr[10] = (static_cast<std::int32_t>(g9) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B4176C;
      }
      goto L_08B41854;
    }
}
L_08B41854:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08B41864;
}
L_08B41864:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g7) < 0;
    // nop
      if (branch_taken) {
          goto L_08B4193C;
      }
      goto L_08B4186C;
    }
L_08B4186C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f14)) && f12 == f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08B4189C;
      }
      goto L_08B41884;
    }
}
L_08B41884:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(hot_regs.f14)) && hot_regs.f13 == hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4189C;
      }
      goto L_08B41894;
    }
L_08B41894:
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    goto L_08B4189C;
L_08B4189C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
    float f17 = ctx.fpr[17];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g7 << 3u);
    g6 = (g7 + g6);
    g6 = (g7 + g6);
    g9 = (g5 + g6);
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
    g5 = (g29 + static_cast<std::uint32_t>(60));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    f15 = f15 - ctx.fpr[16];
    { const float fs = f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    f17 = f17 - ctx.fpr[18];
    { const float fs = f13; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08B41914;
      }
      goto L_08B41908;
    }
}
}
L_08B41908:
    hot_regs.g5 = (hot_regs.g7 | 0u);
    hot_regs.g7 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    goto L_08B41914;
L_08B41914:
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(hot_regs.g7));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(444), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B41934u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 106u, 0x08B44B5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41934u) goto L_08B41934;
    return;
L_08B41934:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    goto L_08B4193C;
L_08B4193C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B41954u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 147u, 0x089DCD44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41954u) goto L_08B41954;
    return;
L_08B41954:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B4196C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    ctx.gpr[22] = (hot_regs.g5 | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(70));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), hot_regs.g31);
    hot_regs.g31 = (0x08B419E0u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 187u, 0x089DD29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B419E0u) goto L_08B419E0;
    return;
L_08B419E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(538))))));
    g4 = (g4 & 16u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[18] = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41B84;
      }
      goto L_08B419F8;
    }
}
L_08B419F8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g16 + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (g16 + static_cast<std::uint32_t>(48));
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
    g4 = (g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(446)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    ctx.set_fpu_condition((f12 < f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08B41B7C;
      }
      goto L_08B41A4C;
    }
}
}
L_08B41A4C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(444))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(g4));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t vfpu_address = g22 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g22 = (g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g22 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (17096u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g31 = (0x08B41A88u);
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    goto L_08B40DF8;
}
L_08B41A88:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    ctx.gpr[11] = (0u | 8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    hot_regs.g31 = (0x08B41AC4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 607u, 0x08976C80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41AC4u) goto L_08B41AC4;
    return;
L_08B41AC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B41AE0u);
    hot_regs.g7 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 28u, 0x089782A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41AE0u) goto L_08B41AE0;
    return;
L_08B41AE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(96))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(444), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(444))))));
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41B8C;
      }
      goto L_08B41AF8;
    }
}
L_08B41AF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(384)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 10u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.lo);
    hot_regs.g31 = (0x08B41B20u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(hot_regs.g5));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 131u, 0x089DCB28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41B20u) goto L_08B41B20;
    return;
L_08B41B20:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(384)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.lo);
    hot_regs.g31 = (0x08B41B44u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(hot_regs.g5));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 131u, 0x089DCB28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41B44u) goto L_08B41B44;
    return;
L_08B41B44:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B41B54u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 106u, 0x08B44B5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41B54u) goto L_08B41B54;
    return;
L_08B41B54:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B41B74u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 147u, 0x089DCD44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41B74u) goto L_08B41B74;
    return;
L_08B41B74:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B41B90;
      }
      goto L_08B41B7C;
    }
L_08B41B7C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B41B90;
      }
      goto L_08B41B84;
    }
L_08B41B84:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B41B90;
      }
      goto L_08B41B8C;
    }
L_08B41B8C:
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    goto L_08B41B90;
L_08B41B90:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B41BC4:
    hot_regs.g6 = (hot_regs.g5 & 255u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(612)));
      if (branch_taken) {
          goto L_08B41C5C;
      }
      goto L_08B41BD0;
    }
L_08B41BD0:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 3 ? 1u : 0u);
    if (hot_regs.g6 == 0u) {
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < 4 ? 1u : 0u);
        goto L_08B41BFC;
    }
    goto L_08B41BDC;
L_08B41BDC:
{
    std::uint32_t g5 = hot_regs.g5;
    { const bool branch_taken = static_cast<std::int32_t>(g5) <= 0;
    g5 = (static_cast<std::int32_t>(g5) < 2 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B41C54;
      }
      goto L_08B41BE4;
    }
}
L_08B41BE4:
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B41C1C;
      }
      goto L_08B41BEC;
    }
L_08B41BEC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5444)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5444), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41D28;
      }
      goto L_08B41BFC;
    }
}
L_08B41BFC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B41C44;
      }
      goto L_08B41C04;
    }
L_08B41C04:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B41C54;
      }
      goto L_08B41C0C;
    }
L_08B41C0C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5484)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5484), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41D28;
      }
      goto L_08B41C1C;
    }
}
L_08B41C1C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(613))))));
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B41C38;
      }
      goto L_08B41C2C;
    }
}
L_08B41C2C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5440)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5440), g5);
    hot_regs.g5 = g5;
    goto L_08B41C38;
}
L_08B41C38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5436), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41D28;
      }
      goto L_08B41C44;
    }
}
L_08B41C44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5448)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5448), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41D28;
      }
      goto L_08B41C54;
    }
}
L_08B41C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B41D28;
      }
      goto L_08B41C5C;
    }
L_08B41C5C:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 3 ? 1u : 0u);
    if (hot_regs.g6 == 0u) {
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < 4 ? 1u : 0u);
        goto L_08B41C80;
    }
    goto L_08B41C68;
L_08B41C68:
{
    std::uint32_t g5 = hot_regs.g5;
    { const bool branch_taken = static_cast<std::int32_t>(g5) <= 0;
    g5 = (static_cast<std::int32_t>(g5) < 2 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B41D28;
      }
      goto L_08B41C70;
    }
}
L_08B41C70:
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B41C98;
      }
      goto L_08B41C78;
    }
L_08B41C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B41CD4;
      }
      goto L_08B41C80;
    }
L_08B41C80:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B41CF0;
      }
      goto L_08B41C88;
    }
L_08B41C88:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B41D0C;
      }
      goto L_08B41C90;
    }
L_08B41C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B41D28;
      }
      goto L_08B41C98;
    }
L_08B41C98:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(613))))));
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B41CBC;
      }
      goto L_08B41CA8;
    }
}
L_08B41CA8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5440)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g5) >= 0;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5440), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B41CBC;
      }
      goto L_08B41CB8;
    }
}
L_08B41CB8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5440), 0u);
    goto L_08B41CBC;
L_08B41CBC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5436), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41CCC;
      }
      goto L_08B41CC8;
    }
}
L_08B41CC8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5436), 0u);
    goto L_08B41CCC;
L_08B41CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B41D28;
      }
      goto L_08B41CD4;
    }
L_08B41CD4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5444)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5444), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41CE8;
      }
      goto L_08B41CE4;
    }
}
L_08B41CE4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5444), 0u);
    goto L_08B41CE8;
L_08B41CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B41D28;
      }
      goto L_08B41CF0;
    }
L_08B41CF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5448)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5448), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41D04;
      }
      goto L_08B41D00;
    }
}
L_08B41D00:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5448), 0u);
    goto L_08B41D04;
L_08B41D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B41D28;
      }
      goto L_08B41D0C;
    }
L_08B41D0C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5484)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5484), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41D20;
      }
      goto L_08B41D1C;
    }
}
L_08B41D1C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5484), 0u);
    goto L_08B41D20;
L_08B41D20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B41D28;
      }
      goto L_08B41D28;
    }
L_08B41D28:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B41D30:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B41D4Cu);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41D4Cu) goto L_08B41D4C;
    return;
L_08B41D4C:
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08B41D60u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41D60u) goto L_08B41D60;
    return;
L_08B41D60:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (ctx.gpr[1] | g4);
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g2 = (0u | 0u);
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    goto L_08B41D7C;
}
L_08B41D7C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(2)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B41DA4;
      }
      goto L_08B41D8C;
    }
}
L_08B41D8C:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (g2 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g2) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(2));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08B41D7C;
      }
      goto L_08B41D9C;
    }
}
L_08B41D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B41DA4;
      }
      goto L_08B41DA4;
    }
L_08B41DA4:
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
L_08B41DB8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5428)));
    hot_regs.g5 = (ctx.gpr[16] << 2u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B41DE0u);
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41DE0u) goto L_08B41DE0;
    return;
L_08B41DE0:
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08B41DF4u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41DF4u) goto L_08B41DF4;
    return;
L_08B41DF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g4 = (hot_regs.g2 >> 31u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (ctx.gpr[1] | g4);
    g6 = (g16 << 5u);
    g5 = (g16 + g6);
    g5 = (g5 << 2u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9980)));
    g4 = (g4 | 0u);
    g5 = (g5 - g6);
    g5 = (hot_regs.g7 + g5);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B41E40:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g8 = (g5 | 0u);
    hot_regs.g7 = (g6 | 0u);
    g5 = (2281u << 16u);
    g6 = (g8 << 2u);
    g5 = (g5 + static_cast<std::uint32_t>(-21776));
    g9 = (g8 << 5u);
    g6 = (g6 + g5);
    g8 = (g8 + g9);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 2u);
    g8 = (g8 - g9);
    g9 = (g5 << 2u);
    g8 = (g8 + g9);
    g9 = (2281u << 16u);
    g9 = (g9 + static_cast<std::uint32_t>(-23080));
    g9 = (g8 + g9);
    ctx.gpr[10] = (2281u << 16u);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), g4);
    g4 = (ctx.gpr[10] + static_cast<std::uint32_t>(-24384));
    g4 = (g8 + g4);
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B41EA8;
      }
      goto L_08B41E98;
    }
}
L_08B41E98:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-4)));
    g7 = (g7 + ctx.gpr[8]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    hot_regs.g7 = g7;
    goto L_08B41EA8;
}
L_08B41EA8:
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B41EB4:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (hot_regs.g5 << 5u);
    g6 = (hot_regs.g5 + g9);
    g6 = (g6 << 2u);
    g7 = (2281u << 16u);
    g9 = (g6 - g9);
    g8 = (g7 + static_cast<std::uint32_t>(-23080));
    g8 = (g9 + g8);
    ctx.gpr[11] = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    g6 = (2281u << 16u);
    ctx.gpr[10] = (0u | 0u);
    g7 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[11] == g7;
    g6 = (g6 + static_cast<std::uint32_t>(-24384));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B41F0C;
      }
      goto L_08B41EE8;
    }
}
L_08B41EE8:
    { const bool branch_taken = ctx.gpr[11] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B41EF8;
      }
      goto L_08B41EF0;
    }
L_08B41EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B41F0C;
      }
      goto L_08B41EF8;
    }
L_08B41EF8:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != hot_regs.g7;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08B41EE8;
      }
      goto L_08B41F0C;
    }
}
L_08B41F0C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (ctx.gpr[9] + g6);
    hot_regs.g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B41F24;
      }
      goto L_08B41F1C;
    }
}
L_08B41F1C:
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(-4)));
    hot_regs.g4 = (hot_regs.g4 - ctx.gpr[10]);
    goto L_08B41F24;
L_08B41F24:
    if (ctx.gpr[9] == hot_regs.g7) {
    hot_regs.g4 = (hot_regs.g5 << 2u);
        goto L_08B41F50;
    }
    goto L_08B41F2C;
L_08B41F2C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g9);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    g8 = (g8 + static_cast<std::uint32_t>(4));
    g9 = (g9 - hot_regs.g4);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g9 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g9 != hot_regs.g7;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B41F2C;
      }
      goto L_08B41F4C;
    }
}
L_08B41F4C:
    hot_regs.g4 = (hot_regs.g5 << 2u);
    goto L_08B41F50;
L_08B41F50:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2281u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-21776));
    g4 = (g4 + g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B41F6C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B41F90;
      }
      goto L_08B41F88;
    }
}
L_08B41F88:
    hot_regs.g31 = (0x08B41F90u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 144u, 0x089DCD00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41F90u) goto L_08B41F90;
    return;
L_08B41F90:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534))))));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B41FF8;
      }
      goto L_08B41FA0;
    }
L_08B41FA0:
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08B41FBCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41FBCu) goto L_08B41FBC;
    return;
L_08B41FBC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    hot_regs.g31 = (0x08B41FC8u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 125u, 0x089DCA68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B41FC8u) goto L_08B41FC8;
    return;
L_08B41FC8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(512)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B41FF0;
      }
      goto L_08B41FDC;
    }
}
L_08B41FDC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(504), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(508), g4);
    hot_regs.g4 = g4;
    goto L_08B41FF0;
}
L_08B41FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42130;
      }
      goto L_08B41FF8;
    }
L_08B41FF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g31 = (0x08B42004u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 183u, 0x08B60EC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42004u) goto L_08B42004;
    return;
L_08B42004:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    g4 = (g4 + hot_regs.g5);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    ctx.set_fpu_condition((ctx.fpr[0] < f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B4203C;
      }
      goto L_08B42028;
    }
}
}
L_08B42028:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08B4203Cu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 509u, 0x08B46834u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4203Cu) goto L_08B4203C;
    return;
L_08B4203C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B42058;
      }
      goto L_08B4204C;
    }
}
}
L_08B4204C:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_08B42058;
L_08B42058:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(496)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(500)));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f14 = std::bit_cast<float>(hot_regs.g5);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    f12 = f12 - f13;
    f12 = f12 / f14;
    g4 = (g16 | 0u);
    hot_regs.g31 = (0x08B42084u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08B426D0;
}
}
L_08B42084:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 48u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B42130;
      }
      goto L_08B42098;
    }
}
L_08B42098:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    f12 = std::bit_cast<float>(g6);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = static_cast<std::int32_t>(g6) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B420BC;
      }
      goto L_08B420B0;
    }
}
}
L_08B420B0:
    hot_regs.g6 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_08B420BC;
L_08B420BC:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f14;
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08B420ECu);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 156u, 0x089DCE98u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B420ECu) goto L_08B420EC;
    return;
L_08B420EC:
    hot_regs.g4 = (16752u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B42104u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 83u, 0x08B4C818u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42104u) goto L_08B42104;
    return;
L_08B42104:
    hot_regs.g4 = (17008u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B42130u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42130u) goto L_08B42130;
    return;
L_08B42130:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B42144:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B4214C:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    goto L_08B42154;
L_08B42154:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (ctx.gpr[9] << 2u);
    g7 = (ctx.gpr[28] + g7);
    hot_regs.g5 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(10592)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B42188;
      }
      goto L_08B42168;
    }
}
L_08B42168:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    g5 = (g9 + static_cast<std::uint32_t>(1));
    g9 = (g5 << 16u);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g9) >> 16u));
    g5 = (static_cast<std::int32_t>(g9) < 2 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B42154;
      }
      goto L_08B42180;
    }
}
L_08B42180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42190;
      }
      goto L_08B42188;
    }
L_08B42188:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(10600), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B42234;
      }
      goto L_08B42190;
    }
L_08B42190:
    ctx.gpr[9] = (0u | 0u);
    goto L_08B42194;
L_08B42194:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (ctx.gpr[9] << 2u);
    g7 = (ctx.gpr[28] + g7);
    hot_regs.g5 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(10592)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B421C8;
      }
      goto L_08B421A8;
    }
}
L_08B421A8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    g5 = (g9 + static_cast<std::uint32_t>(1));
    g9 = (g5 << 16u);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g9) >> 16u));
    g5 = (static_cast<std::int32_t>(g9) < 2 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B42194;
      }
      goto L_08B421C0;
    }
}
L_08B421C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B421D4;
      }
      goto L_08B421C8;
    }
L_08B421C8:
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(10592), hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(10600), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B42234;
      }
      goto L_08B421D4;
    }
L_08B421D4:
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_08B421E0;
L_08B421E0:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (ctx.gpr[9] << 2u);
    g7 = (ctx.gpr[28] + g7);
    ctx.gpr[10] = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(10592)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B4220C;
      }
      goto L_08B421F4;
    }
}
L_08B421F4:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(10600)));
    ctx.gpr[10] = (g7 < hot_regs.g6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B4220C;
      }
      goto L_08B42204;
    }
}
L_08B42204:
    hot_regs.g5 = (ctx.gpr[9] | 0u);
    hot_regs.g6 = (hot_regs.g7 | 0u);
    goto L_08B4220C;
L_08B4220C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (g9 + static_cast<std::uint32_t>(1));
    g9 = (g7 << 16u);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g9) >> 16u));
    g7 = (static_cast<std::int32_t>(g9) < 2 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B421E0;
      }
      goto L_08B42224;
    }
}
L_08B42224:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 << 2u);
    g5 = (ctx.gpr[28] + g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(10592), hot_regs.g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(10600), ctx.gpr[8]);
    hot_regs.g5 = g5;
    goto L_08B42234;
}
L_08B42234:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B4223C:
    hot_regs.g5 = (0u | 0u);
    goto L_08B42240;
L_08B42240:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g5 << 2u);
    g6 = (ctx.gpr[28] + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(10592)));
    { const bool branch_taken = g6 == hot_regs.g4;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B42274;
      }
      goto L_08B42254;
    }
}
L_08B42254:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g5 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B42240;
      }
      goto L_08B4226C;
    }
}
L_08B4226C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B42278;
      }
      goto L_08B42274;
    }
L_08B42274:
    hot_regs.g2 = (0u | 1u);
    goto L_08B42278;
L_08B42278:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B42280:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g6 = (2280u << 16u);
    g5 = (hot_regs.g4 << 2u);
    g6 = (g6 + static_cast<std::uint32_t>(11952));
    g6 = (g5 + g6);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (2281u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g8 = (g8 + static_cast<std::uint32_t>(-21776));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g5 = (g5 + g8);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    g6 = (hot_regs.g4 << 5u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B42338;
      }
      goto L_08B422C8;
    }
}
L_08B422C8:
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    ctx.gpr[16] = (hot_regs.g4 - hot_regs.g6);
    hot_regs.g4 = (hot_regs.g5 << 2u);
    hot_regs.g5 = (2281u << 16u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.gpr[17] = (hot_regs.g5 + static_cast<std::uint32_t>(-24384));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[17]);
    hot_regs.g31 = (0x08B422F0u);
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B422F0u) goto L_08B422F0;
    return;
L_08B422F0:
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08B42304u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42304u) goto L_08B42304;
    return;
L_08B42304:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g6 = (hot_regs.g2 >> 31u);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g6 = (ctx.gpr[1] | g6);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (hot_regs.g5 + ctx.gpr[17]);
    g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g6 = (g6 | 0u);
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B42340;
      }
      goto L_08B42330;
    }
}
L_08B42330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42354;
      }
      goto L_08B42338;
    }
L_08B42338:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B42364;
      }
      goto L_08B42340;
    }
L_08B42340:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B42340;
      }
      goto L_08B42354;
    }
}
L_08B42354:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2281u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-23080));
    g4 = (hot_regs.g5 + g4);
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08B42364;
}
L_08B42364:
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
L_08B4237C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[19] = (0u | 10u);
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B42454;
      }
      goto L_08B423BC;
    }
}
L_08B423BC:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g22 = ctx.gpr[22];
    g17 = (2237u << 16u);
    g22 = (2234u << 16u);
    g17 = (g17 + static_cast<std::uint32_t>(-28736));
    g22 = (g22 + static_cast<std::uint32_t>(14424));
    ctx.gpr[17] = g17;
    ctx.gpr[22] = g22;
    goto L_08B423CC;
}
L_08B423CC:
    hot_regs.g31 = (0x08B423D4u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    goto L_08B41D30;
L_08B423D4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g31 = (0x08B423E0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_08B42280;
L_08B423E0:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    g6 = (g6 << 5u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (0u | 0u);
    g6 = (g6 + ctx.gpr[22]);
    hot_regs.g6 = g6;
    goto L_08B423F8;
}
L_08B423F8:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B42408;
      }
      goto L_08B42404;
    }
L_08B42404:
    hot_regs.g4 = (0u | 1u);
    goto L_08B42408;
L_08B42408:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B423F8;
      }
      goto L_08B42418;
    }
}
L_08B42418:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B42424;
      }
      goto L_08B42420;
    }
L_08B42420:
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    goto L_08B42424;
L_08B42424:
{
    std::uint32_t g19 = ctx.gpr[19];
    ctx.gpr[16] = (g19 + static_cast<std::uint32_t>(-1));
    g19 = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(g19) <= 0;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08B4244C;
      }
      goto L_08B42434;
    }
}
L_08B42434:
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B423CC;
      }
      goto L_08B4243C;
    }
L_08B4243C:
    hot_regs.g31 = (0x08B42444u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42444u) goto L_08B42444;
    return;
L_08B42444:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B423CC;
      }
      goto L_08B4244C;
    }
L_08B4244C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42550;
      }
      goto L_08B42454;
    }
L_08B42454:
    hot_regs.g31 = (0x08B4245Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4245Cu) goto L_08B4245C;
    return;
L_08B4245C:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5524)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5520)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B42470u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42470u) goto L_08B42470;
    return;
L_08B42470:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (ctx.gpr[1] | g4);
    ctx.gpr[17] = (g4 | 0u);
    ctx.gpr[30] = (0u | 24u);
    ctx.gpr[23] = (0u | 13u);
    ctx.gpr[22] = (0u | 9u);
    hot_regs.g4 = g4;
    goto L_08B42490;
}
L_08B42490:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(46)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B424C8;
      }
      goto L_08B424A0;
    }
}
L_08B424A0:
    hot_regs.g31 = (0x08B424A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 133u, 0x08B44F70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B424A8u) goto L_08B424A8;
    return;
L_08B424A8:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 191u);
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B424C0;
      }
      goto L_08B424B8;
    }
L_08B424B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08B42528;
      }
      goto L_08B424C0;
    }
L_08B424C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08B42528;
      }
      goto L_08B424C8;
    }
L_08B424C8:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    goto L_08B424D0;
L_08B424D0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(28)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B424F8;
      }
      goto L_08B424E0;
    }
}
L_08B424E0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(14));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g31 = (0x08B424F0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 196u, 0x08B45234u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B424F0u) goto L_08B424F0;
    return;
L_08B424F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B42508;
      }
      goto L_08B424F8;
    }
L_08B424F8:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g16) < 9 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(2));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B424D0;
      }
      goto L_08B42508;
    }
}
L_08B42508:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08B42528;
      }
      goto L_08B42510;
    }
L_08B42510:
    hot_regs.g31 = (0x08B42518u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    goto L_08B41D30;
L_08B42518:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g31 = (0x08B42524u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_08B42280;
L_08B42524:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    goto L_08B42528;
L_08B42528:
{
    std::uint32_t g19 = ctx.gpr[19];
    ctx.gpr[16] = (g19 + static_cast<std::uint32_t>(-1));
    g19 = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(g19) <= 0;
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08B42550;
      }
      goto L_08B42538;
    }
}
L_08B42538:
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B42490;
      }
      goto L_08B42540;
    }
L_08B42540:
    hot_regs.g31 = (0x08B42548u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42548u) goto L_08B42548;
    return;
L_08B42548:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42490;
      }
      goto L_08B42550;
    }
L_08B42550:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42574;
      }
      goto L_08B42558;
    }
L_08B42558:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B4257C;
      }
      goto L_08B4256C;
    }
}
L_08B4256C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4258C;
      }
      goto L_08B42574;
    }
L_08B42574:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B425F4;
      }
      goto L_08B4257C;
    }
L_08B4257C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (ctx.gpr[18] << 2u);
    g4 = (g4 + hot_regs.g6);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08B4258C;
}
L_08B4258C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B425CC;
      }
      goto L_08B42594;
    }
L_08B42594:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g6 = (0u < g4 ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B425C4;
      }
      goto L_08B425A8;
    }
}
L_08B425A8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f12)) && f12 == f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B425E8;
      }
      goto L_08B425BC;
    }
}
L_08B425BC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (16800u << 16u);
      if (branch_taken) {
          goto L_08B425D4;
      }
      goto L_08B425C4;
    }
L_08B425C4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_08B425F4;
      }
      goto L_08B425CC;
    }
L_08B425CC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_08B425F4;
      }
      goto L_08B425D4;
    }
L_08B425D4:
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B425F0;
      }
      goto L_08B425E8;
    }
L_08B425E8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_08B425F4;
      }
      goto L_08B425F0;
    }
L_08B425F0:
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    goto L_08B425F4;
L_08B425F4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B42624:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5504), hot_regs.g4);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B4262C:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5508), static_cast<std::uint8_t>(hot_regs.g4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B42634:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g2 = (0u | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[8] = (hot_regs.g7 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B426C8;
      }
      goto L_08B4264C;
    }
}
L_08B4264C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (hot_regs.g7 << 5u);
    g6 = (0u + g5);
    g5 = (g5 << 6u);
    g6 = (g6 + g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08B4265C;
}
L_08B4265C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g7) < 0;
    // nop
      if (branch_taken) {
          goto L_08B42674;
      }
      goto L_08B42664;
    }
L_08B42664:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    g5 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g5 != 0u) {
    g5 = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = g5;
        goto L_08B4267C;
    }
    goto L_08B42674;
}
L_08B42674:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B4269C;
      }
      goto L_08B4267C;
    }
L_08B4267C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + hot_regs.g7);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & 128u);
    if (g5 == 0u) {
    g5 = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
        goto L_08B42698;
    }
    goto L_08B42690;
}
L_08B42690:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B4269C;
      }
      goto L_08B42698;
    }
L_08B42698:
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    goto L_08B4269C;
L_08B4269C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B426B4;
      }
      goto L_08B426A4;
    }
L_08B426A4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = g5 != hot_regs.g4;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B426B4;
      }
      goto L_08B426B0;
    }
}
L_08B426B0:
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(1));
    goto L_08B426B4;
L_08B426B4:
{
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g5 = (g7 | 0u);
    g7 = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (g7 | 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-2080));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B4265C;
      }
      goto L_08B426C8;
    }
}
L_08B426C8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B426D0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08B426E8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 573u, 0x08A0F448u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B426E8u) goto L_08B426E8;
    return;
L_08B426E8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B42700;
      }
      goto L_08B426F0;
    }
L_08B426F0:
    hot_regs.g31 = (0x08B426F8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 561u, 0x08A0F37Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B426F8u) goto L_08B426F8;
    return;
L_08B426F8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42714;
      }
      goto L_08B42700;
    }
L_08B42700:
    hot_regs.g31 = (0x08B42708u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 449u, 0x08B0DD38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42708u) goto L_08B42708;
    return;
L_08B42708:
    hot_regs.f13 = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(520)));
      if (branch_taken) {
          goto L_08B42760;
      }
      goto L_08B42714;
    }
L_08B42714:
    hot_regs.g31 = (0x08B4271Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 56u, 0x089902F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4271Cu) goto L_08B4271C;
    return;
L_08B4271C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g5 = (0u | 3u);
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (0u | 3u);
    g5 = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g2); const std::int32_t divisor = static_cast<std::int32_t>(g4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (ctx.hi);
    { const bool branch_taken = g5 == g4;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B42750;
      }
      goto L_08B42748;
    }
}
L_08B42748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42844;
      }
      goto L_08B42750;
    }
L_08B42750:
    hot_regs.g31 = (0x08B42758u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 248u, 0x08B49730u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42758u) goto L_08B42758;
    return;
L_08B42758:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(520)));
    goto L_08B42760;
L_08B42760:
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B42800;
      }
      goto L_08B42770;
    }
L_08B42770:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(f14)) && hot_regs.f12 == f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08B42844;
      }
      goto L_08B42784;
    }
}
L_08B42784:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15820u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (16179u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B427C4;
      }
      goto L_08B427A0;
    }
}
L_08B427A0:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(hot_regs.f14)) && hot_regs.f12 == hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B42844;
      }
      goto L_08B427B0;
    }
L_08B427B0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    hot_regs.g31 = (0x08B427BCu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 125u, 0x089DCA68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B427BCu) goto L_08B427BC;
    return;
L_08B427BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42844;
      }
      goto L_08B427C4;
    }
L_08B427C4:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (g4 | 13107u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    f12 = f12 - f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
        goto L_08B427EC;
    }
    goto L_08B427EC;
}
}
L_08B427EC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B427F8u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 125u, 0x089DCA68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B427F8u) goto L_08B427F8;
    return;
L_08B427F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42844;
      }
      goto L_08B42800;
    }
L_08B42800:
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (15692u << 16u);
      if (branch_taken) {
          goto L_08B42844;
      }
      goto L_08B42810;
    }
L_08B42810:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (g4 | 52429u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
        goto L_08B42838;
    }
    goto L_08B42838;
}
}
L_08B42838:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B42844u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 125u, 0x089DCA68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42844u) goto L_08B42844;
    return;
L_08B42844:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B42854:
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g18);
    g18 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), hot_regs.g31);
    { const bool branch_taken = g18 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B429F4;
      }
      goto L_08B428B0;
    }
}
L_08B428B0:
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f22 = std::bit_cast<float>(0u);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_08B428C8;
L_08B428C8:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[16];
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B428DC;
      }
      goto L_08B428D4;
    }
}
L_08B428D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B429EC;
      }
      goto L_08B428DC;
    }
L_08B428DC:
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(84)));
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B429EC;
      }
      goto L_08B428EC;
    }
L_08B428EC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 512u);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B429EC;
      }
      goto L_08B42904;
    }
}
L_08B42904:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g5 = (g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B429EC;
      }
      goto L_08B42974;
    }
}
}
L_08B42974:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B429EC;
      }
      goto L_08B42988;
    }
L_08B42988:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B429EC;
      }
      goto L_08B4299C;
    }
L_08B4299C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B429EC;
      }
      goto L_08B429B0;
    }
L_08B429B0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B429CC;
    }
    goto L_08B429CC;
}
L_08B429CC:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B429EC;
      }
      goto L_08B429DC;
    }
L_08B429DC:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B429ECu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 370u, 0x08B4A2CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B429ECu) goto L_08B429EC;
    return;
L_08B429EC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B428C8;
      }
      goto L_08B429F4;
    }
L_08B429F4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B42A30:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(533))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[9] = (0u | 3u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B42A88;
      }
      goto L_08B42A78;
    }
}
L_08B42A78:
    hot_regs.g31 = (0x08B42A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42A80u) goto L_08B42A80;
    return;
L_08B42A80:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08B42AA0;
      }
      goto L_08B42A88;
    }
L_08B42A88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 16u);
    if (g4 == hot_regs.g5) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(440)));
    hot_regs.g4 = g4;
        goto L_08B42AA8;
    }
    goto L_08B42A98;
}
L_08B42A98:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B42AB4;
      }
      goto L_08B42AA0;
    }
L_08B42AA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42D88;
      }
      goto L_08B42AA8;
    }
L_08B42AA8:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B42B00;
      }
      goto L_08B42AB0;
    }
L_08B42AB0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_08B42AB4;
L_08B42AB4:
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    ctx.fpr[26] = ctx.fpr[26] - hot_regs.f12;
    ctx.fpr[28] = ctx.fpr[28] - hot_regs.f13;
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x08B42ADCu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42ADCu) goto L_08B42ADC;
    return;
L_08B42ADC:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f22 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_08B42B08;
      }
      goto L_08B42AF8;
    }
L_08B42AF8:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
      if (branch_taken) {
          goto L_08B42B1C;
      }
      goto L_08B42B00;
    }
L_08B42B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42D88;
      }
      goto L_08B42B08;
    }
L_08B42B08:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    f13 = std::bit_cast<float>(g4);
    hot_regs.f20 = hot_regs.f20 + f13;
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    goto L_08B42B1C;
}
}
L_08B42B1C:
{
    float f14 = hot_regs.f14;
    float f24 = ctx.fpr[24];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f24 = hot_regs.f13 + f14;
    f24 = std::sqrt(f24);
    ctx.set_fpu_condition((f24 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08B42BF8;
      }
      goto L_08B42B38;
    }
}
L_08B42B38:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(320)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(320)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(324)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(324)));
    f13 = f13 - f14;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    f15 = f15 - f16;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(86))))));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(86))))));
    { const float fs = ctx.fpr[26]; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g5 = (g5 << 2u);
    g6 = (g6 << 2u);
    { const float fs = ctx.fpr[28]; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    g5 = (g4 + g5);
    g4 = (g4 + g6);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f13 = f13 + f15;
    g6 = (17116u << 16u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    f14 = std::bit_cast<float>(g6);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    f13 = f13 - f16;
    f13 = f13 - f15;
    ctx.set_fpu_condition((ctx.fpr[24] <= f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (g17 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08B42BF0;
      }
      goto L_08B42BB4;
    }
}
}
L_08B42BB4:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = f15 + f16;
    f15 = std::sqrt(f15);
    g4 = (16128u << 16u);
    ctx.set_fpu_condition((!(std::isnan(f15) || std::isnan(hot_regs.f22)) && f15 == hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08B42C00;
      }
      goto L_08B42BE0;
    }
}
}
L_08B42BE0:
    hot_regs.f12 = hot_regs.f13 / hot_regs.f15;
    hot_regs.f14 = hot_regs.f14 / hot_regs.f15;
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42C00;
      }
      goto L_08B42BF0;
    }
L_08B42BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42D88;
      }
      goto L_08B42BF8;
    }
L_08B42BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B42D88;
      }
      goto L_08B42C00;
    }
L_08B42C00:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08B42C0Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42C0Cu) goto L_08B42C0C;
    return;
L_08B42C0C:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_08B42C34;
      }
      goto L_08B42C24;
    }
L_08B42C24:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16585u << 16u);
    g5 = (g5 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g5 = g5;
    goto L_08B42C34;
}
L_08B42C34:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.f13 = hot_regs.f20 - f12;
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
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
    f12 = std::bit_cast<float>(g5);
    g5 = (ctx.gpr[16] << 2u);
    g5 = (hot_regs.g4 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08B42C80;
    }
    goto L_08B42C80;
}
}
L_08B42C80:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (std::bit_cast<std::uint32_t>(f13));
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
    f13 = std::bit_cast<float>(g5);
    g5 = (ctx.gpr[16] << 2u);
    g5 = (hot_regs.g4 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f13 < hot_regs.f22));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
        goto L_08B42CC8;
    }
    goto L_08B42CC8;
}
}
L_08B42CC8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (16409u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (16384u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (hot_regs.g5 | 39322u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    ctx.fpr[24] = hot_regs.f12 / ctx.fpr[24];
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08B42D18u);
    hot_regs.f12 = hot_regs.f20 - hot_regs.f14;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42D18u) goto L_08B42D18;
    return;
L_08B42D18:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B42D2C;
    }
    goto L_08B42D2C;
}
L_08B42D2C:
{
    float f28 = ctx.fpr[28];
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f28));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f28 = std::bit_cast<float>(0x7FC00000u); else f28 = fs * ft; }
    ctx.fpr[28] = f28;
      if (branch_taken) {
          goto L_08B42D4C;
      }
      goto L_08B42D40;
    }
}
L_08B42D40:
    hot_regs.g31 = (0x08B42D48u);
    hot_regs.f12 = hot_regs.f20 - ctx.fpr[28];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42D48u) goto L_08B42D48;
    return;
L_08B42D48:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B42D4C;
L_08B42D4C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08B42D58u);
    hot_regs.f12 = hot_regs.f20 - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42D58u) goto L_08B42D58;
    return;
L_08B42D58:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B42D6C;
    }
    goto L_08B42D6C;
}
L_08B42D6C:
    ctx.set_fpu_condition((ctx.fpr[28] <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B42D88;
      }
      goto L_08B42D7C;
    }
L_08B42D7C:
    hot_regs.g31 = (0x08B42D84u);
    hot_regs.f12 = hot_regs.f20 + ctx.fpr[28];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B42D84u) goto L_08B42D84;
    return;
L_08B42D84:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B42D88;
L_08B42D88:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B42DB8:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), g16);
    g16 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), ctx.gpr[17]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), hot_regs.g7);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), hot_regs.g31);
    { const bool branch_taken = g16 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[8]);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B4308C;
      }
      goto L_08B42E24;
    }
}
L_08B42E24:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (16512u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(112));
    ctx.fpr[30] = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(176));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    goto L_08B42E4C;
}
L_08B42E4C:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(84)));
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B43084;
      }
      goto L_08B42E60;
    }
}
L_08B42E60:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 512u);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B43084;
      }
      goto L_08B42E78;
    }
}
L_08B42E78:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B43084;
      }
      goto L_08B42E84;
    }
L_08B42E84:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g5 = (g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f12));
    g5 = (g29 + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B43084;
      }
      goto L_08B42EF4;
    }
}
}
L_08B42EF4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g5 = (g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B43084;
      }
      goto L_08B42F58;
    }
}
}
L_08B42F58:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g5 = (g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B43084;
      }
      goto L_08B42FBC;
    }
}
}
L_08B42FBC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g5 = (g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
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
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g5 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B43084;
      }
      goto L_08B43020;
    }
}
}
L_08B43020:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B4303C;
    }
    goto L_08B4303C;
}
L_08B4303C:
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B43084;
      }
      goto L_08B4304C;
    }
L_08B4304C:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B43084;
      }
      goto L_08B43054;
    }
L_08B43054:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(616))))));
    g5 = (g5 & 128u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B43074;
      }
      goto L_08B43064;
    }
}
L_08B43064:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(616))))));
    g5 = (g5 & 128u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B43084;
      }
      goto L_08B43074;
    }
}
L_08B43074:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.g31 = (0x08B43084u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_08B42A30;
L_08B43084:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B42E4C;
      }
      goto L_08B4308C;
    }
L_08B4308C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B430D4:
{
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g20);
    g20 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (hot_regs.g7 | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    { const bool branch_taken = g20 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B43370;
      }
      goto L_08B43140;
    }
}
L_08B43140:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16409u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    g4 = (g4 | 39322u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    g4 = (16128u << 16u);
    ctx.gpr[30] = (0u | 3u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_08B43160;
}
L_08B43160:
{
    std::uint32_t g20 = ctx.gpr[20];
    ctx.gpr[21] = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[22];
    g20 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08B43368;
      }
      goto L_08B43174;
    }
}
L_08B43174:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 512u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B43368;
      }
      goto L_08B4318C;
    }
}
L_08B4318C:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B43368;
      }
      goto L_08B43194;
    }
L_08B43194:
{
    std::uint32_t g22 = ctx.gpr[22];
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(g22));
    g22 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_08B43368;
      }
      goto L_08B431B4;
    }
}
L_08B431B4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B43368;
      }
      goto L_08B431C8;
    }
L_08B431C8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B43368;
      }
      goto L_08B431E0;
    }
L_08B431E0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B43368;
      }
      goto L_08B431F4;
    }
L_08B431F4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B43210;
    }
    goto L_08B43210;
}
L_08B43210:
    hot_regs.g4 = (16512u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B43368;
      }
      goto L_08B43228;
    }
L_08B43228:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B43368;
      }
      goto L_08B43234;
    }
L_08B43234:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B43368;
      }
      goto L_08B43240;
    }
L_08B43240:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    if (hot_regs.g4 != ctx.gpr[30]) {
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_08B43260;
    }
    goto L_08B4324C;
L_08B4324C:
    hot_regs.g31 = (0x08B43254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43254u) goto L_08B43254;
    return;
L_08B43254:
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08B43368;
      }
      goto L_08B4325C;
    }
L_08B4325C:
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_08B43260;
L_08B43260:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    hot_regs.f22 = hot_regs.f22 - hot_regs.f12;
    hot_regs.f20 = hot_regs.f20 - hot_regs.f13;
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08B43280u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43280u) goto L_08B43280;
    return;
L_08B43280:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08B432A0;
      }
      goto L_08B43294;
    }
L_08B43294:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.fpr[24] = ctx.fpr[24] + hot_regs.f12;
    hot_regs.g4 = g4;
    goto L_08B432A0;
}
L_08B432A0:
    { const float fs = hot_regs.f22; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f20; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f22 = std::sqrt(hot_regs.f12);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (16204u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f22 = hot_regs.f12 / hot_regs.f22;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08B432F4u);
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B432F4u) goto L_08B432F4;
    return;
L_08B432F4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = hot_regs.f22; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B4330C;
    }
    goto L_08B4330C;
}
L_08B4330C:
{
    float f20 = hot_regs.f20;
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = hot_regs.f22; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08B4332C;
      }
      goto L_08B43320;
    }
}
L_08B43320:
    hot_regs.g31 = (0x08B43328u);
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f20;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43328u) goto L_08B43328;
    return;
L_08B43328:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B4332C;
L_08B4332C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08B43338u);
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43338u) goto L_08B43338;
    return;
L_08B43338:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B4334C;
    }
    goto L_08B4334C;
}
L_08B4334C:
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B43368;
      }
      goto L_08B4335C;
    }
L_08B4335C:
    hot_regs.g31 = (0x08B43364u);
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f20;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43364u) goto L_08B43364;
    return;
L_08B43364:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B43368;
L_08B43368:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B43160;
      }
      goto L_08B43370;
    }
L_08B43370:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08B433B8:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    g8 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    g8 = (aot_mem.aot_load16(g8 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), hot_regs.g31);
    { const bool branch_taken = ctx.gpr[9] != g8;
    ctx.gpr[18] = (hot_regs.g7 | 0u);
    ctx.gpr[8] = g8;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B43450;
      }
      goto L_08B43400;
    }
}
L_08B43400:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (16445u << 16u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    g5 = (g5 | 16253u);
    g9 = (16025u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    g9 = (g9 | 39322u);
    g5 = (15894u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g9);
    g5 = (g5 | 34603u);
    g9 = (16409u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g9 = (g9 | 39322u);
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    ctx.fpr[28] = std::bit_cast<float>(g9);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B436E4;
      }
      goto L_08B43450;
    }
}
L_08B43450:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = hot_regs.g6 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B434AC;
      }
      goto L_08B43464;
    }
}
L_08B43464:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g9 = (16025u << 16u);
    f20 = std::bit_cast<float>(0u);
    g5 = (16190u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    g9 = (g9 | 39322u);
    g5 = (g5 | 30409u);
    ctx.fpr[30] = std::bit_cast<float>(g9);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    g9 = (16409u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g9 = (g9 | 39322u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f20));
    ctx.fpr[28] = std::bit_cast<float>(g9);
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08B436E4;
      }
      goto L_08B434AC;
    }
}
}
L_08B434AC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = hot_regs.g6 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B43508;
      }
      goto L_08B434C0;
    }
}
L_08B434C0:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g9 = (16025u << 16u);
    f20 = std::bit_cast<float>(0u);
    g5 = (15664u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    g9 = (g9 | 39322u);
    g5 = (g5 | 8389u);
    ctx.fpr[30] = std::bit_cast<float>(g9);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    g9 = (16409u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g9 = (g9 | 39322u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f20));
    ctx.fpr[28] = std::bit_cast<float>(g9);
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08B436E4;
      }
      goto L_08B43508;
    }
}
}
L_08B43508:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = hot_regs.g6 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B4356C;
      }
      goto L_08B4351C;
    }
}
L_08B4351C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (16274u << 16u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    g5 = (g5 | 19923u);
    g9 = (16025u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    g9 = (g9 | 39322u);
    g5 = (15892u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g9);
    g5 = (g5 | 31457u);
    g9 = (16409u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g9 = (g9 | 39322u);
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    ctx.fpr[28] = std::bit_cast<float>(g9);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B436E4;
      }
      goto L_08B4356C;
    }
}
L_08B4356C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g6 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B435C8;
      }
      goto L_08B43580;
    }
}
L_08B43580:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g9 = (16025u << 16u);
    f20 = std::bit_cast<float>(0u);
    g9 = (g9 | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    g5 = (48452u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g9);
    g5 = (g5 | 39846u);
    g9 = (16409u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f20));
    g9 = (g9 | 39322u);
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    ctx.fpr[28] = std::bit_cast<float>(g9);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08B436E4;
      }
      goto L_08B435C8;
    }
}
}
L_08B435C8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4368C;
      }
      goto L_08B435DC;
    }
}
L_08B435DC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4368C;
      }
      goto L_08B435EC;
    }
}
L_08B435EC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4368C;
      }
      goto L_08B435FC;
    }
}
L_08B435FC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4368C;
      }
      goto L_08B4360C;
    }
}
L_08B4360C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(210)));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4368C;
      }
      goto L_08B4361C;
    }
}
L_08B4361C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4368C;
      }
      goto L_08B4362C;
    }
}
L_08B4362C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(214)));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4368C;
      }
      goto L_08B4363C;
    }
}
L_08B4363C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4368C;
      }
      goto L_08B4364C;
    }
}
L_08B4364C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4368C;
      }
      goto L_08B4365C;
    }
}
L_08B4365C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4368C;
      }
      goto L_08B4366C;
    }
}
L_08B4366C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(222)));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4368C;
      }
      goto L_08B4367C;
    }
}
L_08B4367C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = hot_regs.g5 != g6;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B43694;
      }
      goto L_08B4368C;
    }
}
L_08B4368C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 1u);
      if (branch_taken) {
          goto L_08B43694;
      }
      goto L_08B43694;
    }
L_08B43694:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B436DC;
      }
      goto L_08B4369C;
    }
L_08B4369C:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g9 = (16025u << 16u);
    f20 = std::bit_cast<float>(0u);
    g9 = (g9 | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    ctx.fpr[30] = std::bit_cast<float>(g9);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f20));
    g9 = (16409u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g9 = (g9 | 39322u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f20));
    ctx.fpr[28] = std::bit_cast<float>(g9);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[9] = g9;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08B436E4;
      }
      goto L_08B436DC;
    }
}
}
L_08B436DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B43838;
      }
      goto L_08B436E4;
    }
L_08B436E4:
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[17];
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f22 = hot_regs.f12 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = hot_regs.f13 - ctx.fpr[24];
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    hot_regs.f22 = hot_regs.f22 - hot_regs.f15;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08B43748u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43748u) goto L_08B43748;
    return;
L_08B43748:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[26] < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08B43768;
      }
      goto L_08B4375C;
    }
L_08B4375C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.fpr[26] = ctx.fpr[26] + hot_regs.f12;
    hot_regs.g4 = g4;
    goto L_08B43768;
}
L_08B43768:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f22; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    ctx.fpr[24] = std::sqrt(hot_regs.f12);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[30] + hot_regs.f12;
    ctx.fpr[24] = hot_regs.f12 / ctx.fpr[24];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08B437B0u);
    hot_regs.f12 = ctx.fpr[26] - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B437B0u) goto L_08B437B0;
    return;
L_08B437B0:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16128u << 16u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B437D0;
    }
    goto L_08B437D0;
}
L_08B437D0:
{
    float f13 = hot_regs.f13;
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f15 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B437F8;
      }
      goto L_08B437E8;
    }
}
L_08B437E8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08B437F4u);
    hot_regs.f12 = ctx.fpr[26] - hot_regs.f13;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B437F4u) goto L_08B437F4;
    return;
L_08B437F4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B437F8;
L_08B437F8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08B43804u);
    hot_regs.f12 = ctx.fpr[26] - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43804u) goto L_08B43804;
    return;
L_08B43804:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B43818;
    }
    goto L_08B43818;
}
L_08B43818:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B43838;
      }
      goto L_08B4382C;
    }
L_08B4382C:
    hot_regs.g31 = (0x08B43834u);
    hot_regs.f12 = ctx.fpr[26] + hot_regs.f13;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43834u) goto L_08B43834;
    return;
L_08B43834:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B43838;
L_08B43838:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B43868:
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g19);
    g19 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (hot_regs.g7 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    { const bool branch_taken = g19 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B439B4;
      }
      goto L_08B438C0;
    }
}
L_08B438C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16230u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    g4 = (g4 | 26214u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    g4 = (16640u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_08B438DC;
}
L_08B438DC:
{
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g5;
    g19 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08B439AC;
      }
      goto L_08B438F0;
    }
}
L_08B438F0:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g6 = (g6 & 512u);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B439AC;
      }
      goto L_08B43908;
    }
}
L_08B43908:
{
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(g5));
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B439AC;
      }
      goto L_08B43928;
    }
}
L_08B43928:
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B439AC;
      }
      goto L_08B43938;
    }
L_08B43938:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B439AC;
      }
      goto L_08B4394C;
    }
L_08B4394C:
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B439AC;
      }
      goto L_08B4395C;
    }
L_08B4395C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B43978;
    }
    goto L_08B43978;
}
L_08B43978:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B439AC;
      }
      goto L_08B43988;
    }
L_08B43988:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B439AC;
      }
      goto L_08B4399C;
    }
L_08B4399C:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B439ACu);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    goto L_08B433B8;
L_08B439AC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B438DC;
      }
      goto L_08B439B4;
    }
L_08B439B4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
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
L_08B439EC:
{
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
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    g7 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-16928)));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    g8 = (g5 << 3u);
    g8 = (g5 + g8);
    g5 = (g5 + g8);
    g9 = (g7 + g5);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
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
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-16928)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g7 = (g6 << 3u);
    g7 = (g6 + g7);
    g6 = (g6 + g7);
    g9 = (g5 + g6);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
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
    g5 = (g29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-16928)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g4 << 3u);
    g6 = (g4 + g6);
    g4 = (g4 + g6);
    g9 = (g5 + g4);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
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
    g4 = (g29 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    f17 = f16 - f17;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    f14 = f15 - f14;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f16 = f12 - f16;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f15 = f13 - f15;
    { const float fs = f17; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f13 = f18 + f19;
    f13 = std::sqrt(f13);
    f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(f12)) && f13 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08B43B74;
      }
      goto L_08B43AE0;
    }
}
}
L_08B43AE0:
{
    float f0 = ctx.fpr[0];
    float f2 = ctx.fpr[2];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f19 = ctx.fpr[19];
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = ctx.fpr[17] / f13;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    { const float fs = hot_regs.f15; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    f2 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    f13 = ctx.fpr[18] / f13;
    f12 = f19 + f0;
    f12 = std::sqrt(f12);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f2)) && f12 == f2));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    ctx.fpr[0] = f0;
    ctx.fpr[2] = f2;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08B43B6C;
      }
      goto L_08B43B10;
    }
}
L_08B43B10:
{
    float f12 = hot_regs.f12;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    f16 = f16 / f12;
    g4 = (16197u << 16u);
    g4 = (g4 | 7864u);
    f12 = hot_regs.f15 / f12;
    { const float fs = f16; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f16 = f12 - f16;
    ctx.set_fpu_condition((f16 <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08B43B64;
      }
      goto L_08B43B40;
    }
}
}
L_08B43B40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (48965u << 16u);
    g4 = (g4 | 7864u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((ctx.fpr[16] < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B43B7C;
      }
      goto L_08B43B5C;
    }
}
L_08B43B5C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 2u);
      if (branch_taken) {
          goto L_08B43B80;
      }
      goto L_08B43B64;
    }
L_08B43B64:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 4u);
      if (branch_taken) {
          goto L_08B43B80;
      }
      goto L_08B43B6C;
    }
L_08B43B6C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B43B80;
      }
      goto L_08B43B74;
    }
L_08B43B74:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B43B80;
      }
      goto L_08B43B7C;
    }
L_08B43B7C:
    hot_regs.g2 = (0u | 1u);
    goto L_08B43B80;
L_08B43B80:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B43B88:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x08B43BACu);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43BACu) goto L_08B43BAC;
    return;
L_08B43BAC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B43BC4;
    }
    goto L_08B43BC4;
}
L_08B43BC4:
{
    float f12 = hot_regs.f12;
    f12 = f12 - hot_regs.f20;
    ctx.set_fpu_condition((hot_regs.f13 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = f12;
        goto L_08B43BD8;
    }
    goto L_08B43BD8;
}
L_08B43BD8:
{
    float f0 = ctx.fpr[0];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = hot_regs.f22 - hot_regs.f20;
    hot_regs.f14 = f12 / f13;
    hot_regs.g4 = (16256u << 16u);
    f0 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = f0 - ctx.fpr[24];
    ctx.set_fpu_condition((f12 <= f13));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    f0 = f0 - f12;
    ctx.fpr[0] = f0;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B43C00;
      }
      goto L_08B43BFC;
    }
}
L_08B43BFC:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08B43C00;
L_08B43C00:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B43C18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 234u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B43C38;
      }
      goto L_08B43C28;
    }
}
L_08B43C28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16179u << 16u);
    g4 = (g4 | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B43C40;
      }
      goto L_08B43C38;
    }
}
L_08B43C38:
    hot_regs.g4 = (16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
    goto L_08B43C40;
L_08B43C40:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B43C48:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    g10 = (g4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f22));
    f22 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f20));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(4)));
    { const float fs = f22; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f20; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    f12 = f14 + f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f24));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), hot_regs.g31);
    f12 = std::sqrt(f12);
    f24 = std::bit_cast<float>(0u);
    ctx.gpr[22] = (g4 + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (g4 + static_cast<std::uint32_t>(320));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[16] = (g4 | 0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f24)) && f12 == f24));
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[9] | 0u);
    ctx.gpr[10] = g10;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08B43CE8;
      }
      goto L_08B43CD8;
    }
}
}
L_08B43CD8:
    hot_regs.f22 = hot_regs.f22 / hot_regs.f12;
    hot_regs.f20 = hot_regs.f20 / hot_regs.f12;
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B43CF0;
      }
      goto L_08B43CE8;
    }
L_08B43CE8:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    goto L_08B43CF0;
L_08B43CF0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = ctx.fpr[28] - hot_regs.f13;
    hot_regs.g31 = (0x08B43D04u);
    hot_regs.f12 = ctx.fpr[26] - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43D04u) goto L_08B43D04;
    return;
L_08B43D04:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08B43D24;
      }
      goto L_08B43D18;
    }
L_08B43D18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g4 = g4;
    goto L_08B43D24;
}
L_08B43D24:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08B43D38u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43D38u) goto L_08B43D38;
    return;
L_08B43D38:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f22 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08B43D58;
      }
      goto L_08B43D4C;
    }
L_08B43D4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.f22 = hot_regs.f22 + hot_regs.f12;
    hot_regs.g4 = g4;
    goto L_08B43D58;
}
L_08B43D58:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(532))))));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B43D80;
      }
      goto L_08B43D68;
    }
L_08B43D68:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B43D7Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 459u, 0x08B4AB3Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43D7Cu) goto L_08B43D7C;
    return;
L_08B43D7C:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B43D80;
L_08B43D80:
    hot_regs.g31 = (0x08B43D88u);
    hot_regs.f12 = hot_regs.f20 - hot_regs.f22;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43D88u) goto L_08B43D88;
    return;
L_08B43D88:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5304)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B43DE4;
      }
      goto L_08B43DB4;
    }
L_08B43DB4:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5308)));
    ctx.set_fpu_condition((f13 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20) ^ 0x80000000u);
    hot_regs.f13 = f13;
        goto L_08B43DCC;
    }
    goto L_08B43DCC;
}
L_08B43DCC:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B43DE4;
      }
      goto L_08B43DDC;
    }
L_08B43DDC:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08B43DE4;
L_08B43DE4:
    hot_regs.g31 = (0x08B43DECu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08B43C18;
L_08B43DEC:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B43E08;
      }
      goto L_08B43E04;
    }
L_08B43E04:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_08B43E08;
L_08B43E08:
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B43E1C;
      }
      goto L_08B43E18;
    }
L_08B43E18:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08B43E1C;
L_08B43E1C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = ctx.fpr[28] - hot_regs.f13;
    hot_regs.g31 = (0x08B43E30u);
    hot_regs.f12 = ctx.fpr[26] - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B43E30u) goto L_08B43E30;
    return;
L_08B43E30:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08B43E50;
      }
      goto L_08B43E44;
    }
L_08B43E44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.fpr[28] = ctx.fpr[28] + hot_regs.f12;
    hot_regs.g4 = g4;
    goto L_08B43E50;
}
L_08B43E50:
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.f12 = ctx.fpr[28] - hot_regs.f22;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5296)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5292)));
    hot_regs.g31 = (0x08B43E64u);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5300)));
    goto L_08B43B88;
}
L_08B43E64:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17008u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f22; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08B43F00;
    }
    goto L_08B43EB8;
L_08B43EB8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5312)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B43EF0;
      }
      goto L_08B43ECC;
    }
L_08B43ECC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5316)));
    f12 = f12 / hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5324)));
    ctx.set_fpu_condition((hot_regs.f14 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5324)));
    hot_regs.f12 = f12;
        goto L_08B43EE8;
    }
    goto L_08B43EE8;
}
}
L_08B43EE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08B43F24;
      }
      goto L_08B43EF0;
    }
L_08B43EF0:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08B43F24;
      }
      goto L_08B43F00;
    }
L_08B43F00:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g28 = ctx.gpr[28];
    f24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5320)));
    f24 = f24 / hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5328)));
    ctx.set_fpu_condition((hot_regs.f14 < f24));
    // nop
    if (ctx.fpu_condition()) {
    f24 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5328)));
    ctx.fpr[24] = f24;
        goto L_08B43F20;
    }
    goto L_08B43F20;
}
}
L_08B43F20:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08B43F24;
L_08B43F24:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B43F68:
{
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    f18 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    f19 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const float fs = f19; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f18; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f17 = f16 + f17;
    ctx.gpr[9] = (hot_regs.g7 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    f17 = std::sqrt(f17);
    f16 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5412)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g7 = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f19));
    hot_regs.g5 = (ctx.gpr[9] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f18));
    ctx.set_fpu_condition((f16 < f17));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    hot_regs.g29 = g29;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08B43FD4;
      }
      goto L_08B43FC8;
    }
}
}
L_08B43FC8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
    f16 = f16 / ctx.fpr[17];
    { const float fs = f13; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f12; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[16] = f16;
    goto L_08B43FD4;
}
L_08B43FD4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[10] = (g4 | 0u);
    g4 = (17008u << 16u);
    f16 = std::bit_cast<float>(g4);
    ctx.gpr[8] = (hot_regs.g6 | 0u);
    { const float fs = f13; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.g6 = (hot_regs.g7 | 0u);
    { const float fs = f12; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.gpr[9] = (hot_regs.g5 | 0u);
    g4 = (0u | 2u);
    hot_regs.g7 = (ctx.gpr[8] | 0u);
    hot_regs.f20 = hot_regs.f15 + f13;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[16] = f16;
    ctx.pc = 0x08B44000u; return;}
}

}

void recomp_unit_0207(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0207_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_207(Runtime &runtime) {
    runtime.register_generated_unit(207u, 0x08B40000u, 16384u, &recomp_unit_0207, &recomp_unit_0207_entry);
    runtime.register_function(0x08B40000u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40008u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40010u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40014u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4001Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40024u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40030u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40038u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40044u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4004Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40078u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40090u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B400C8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B400D0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40118u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40128u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40130u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4016Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40180u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40190u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4019Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B401A4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B401A8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B401B0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B401B8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40200u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40238u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40240u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40250u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4025Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40270u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40278u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40280u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40288u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40298u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B402A0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B402A8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B402C8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B402D0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B402E0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B402E8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B402F8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40308u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40314u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40318u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40328u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40330u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40340u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40350u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40368u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40378u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40384u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40390u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40398u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B403A8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B403B0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B403B8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B403D8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B403E0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B403F0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B403F8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40408u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40418u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40424u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40428u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40438u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40440u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40450u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40460u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40478u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40488u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40494u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B404A0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B404A8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B404B0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B404C0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B404CCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B404D8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B404E0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B404E8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B404F0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B404F4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40508u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40514u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40520u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40528u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40530u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4054Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40554u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40568u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40574u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40580u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40588u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40590u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40598u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4059Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B405ACu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B405B8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B405C4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B405CCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B405D4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B405DCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B405FCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40604u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40614u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4061Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4062Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4063Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40648u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4064Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4065Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40664u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40674u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40684u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4069Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B406A8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B406B4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B406BCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B406C0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B406CCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B406D8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B406E0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B406E4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B406F4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40700u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4070Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40714u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4071Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40724u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40728u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40738u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40744u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40750u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40758u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40760u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40768u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4076Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4077Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40784u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B407C4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B407CCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B407D4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B407F4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40804u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40810u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4081Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40824u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40830u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40838u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40840u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40850u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4085Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40868u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40870u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40878u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40894u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B408A4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B408B0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B408BCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B408C4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B408CCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B408D4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B408D8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B408E4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B408F0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B408F8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B408FCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40908u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40914u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4091Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40920u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40930u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4093Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40948u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40950u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40958u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40960u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4096Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40978u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40980u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40988u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40998u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B409A4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B409B0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B409B8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B409C0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B409C8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B409D0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B409E0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B409E8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40A20u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40A28u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40A48u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40A58u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40A64u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40A70u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40A78u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40A80u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40A90u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40A9Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40AA8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40AB0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40AB8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40AD4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40ADCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40AF0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40AFCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40B08u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40B10u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40B18u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40B20u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40B40u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40B48u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40B58u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40B60u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40B70u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40B80u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40B8Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40B90u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40BA0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40BA8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40BB8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40BC8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40BE0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40BECu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40BF8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C00u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C04u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C10u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C1Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C24u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C28u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C38u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C44u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C50u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C58u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C60u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C68u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C6Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C7Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C88u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C94u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40C9Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40CA4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40CACu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40CB4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40CE4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40CF4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40CFCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40D08u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40D1Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40D24u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40D34u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40D44u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40D50u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40D54u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40D64u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40D78u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40D88u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40D94u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40DA0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40DA8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40DB4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40DBCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40DC4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40DC8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40DF8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40E08u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40E14u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40E4Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40E50u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40E5Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40E60u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40E68u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40EACu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40F38u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40F44u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40F84u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40F90u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40F9Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40FF4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B40FFCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41014u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41050u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41074u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41098u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B410E4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B410F8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4110Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41114u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41128u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41140u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41148u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41188u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4119Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B411A0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B411B4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B411BCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B411D4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B411DCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B411E0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B411ECu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B411FCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4120Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41214u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41220u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4122Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41240u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41244u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4124Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41254u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4125Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41274u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41280u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41288u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4128Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41294u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B412A4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B412C0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B412C8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B412D8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41310u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4132Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41334u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41344u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4134Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41360u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41368u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4136Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41374u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4137Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4138Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41394u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B413D8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B413E4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B413F0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41404u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4142Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4146Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41478u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41484u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B414A4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B414C0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B414C8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B414D8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B414E0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B414F4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B414FCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41500u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4150Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41514u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4151Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4152Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41534u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4153Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41544u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4154Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41584u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4158Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B415A0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B415A8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B415B4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B415BCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B415D8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41608u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41628u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4162Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41650u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41658u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4165Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41670u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41674u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4168Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41694u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B416FCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41764u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4176Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41834u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4183Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41854u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41864u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4186Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41884u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41894u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4189Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41908u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41914u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41934u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4193Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41954u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4196Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B419E0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B419F8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41A4Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41A88u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41AC4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41AE0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41AF8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41B20u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41B44u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41B54u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41B74u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41B7Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41B84u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41B8Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41B90u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41BC4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41BD0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41BDCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41BE4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41BECu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41BFCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C04u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C0Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C1Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C2Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C38u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C44u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C54u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C5Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C68u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C70u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C78u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C80u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C88u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C90u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41C98u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41CA8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41CB8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41CBCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41CC8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41CCCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41CD4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41CE4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41CE8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41CF0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41D00u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41D04u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41D0Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41D1Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41D20u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41D28u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41D30u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41D4Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41D60u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41D7Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41D8Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41D9Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41DA4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41DB8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41DE0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41DF4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41E40u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41E98u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41EA8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41EB4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41EE8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41EF0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41EF8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41F0Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41F1Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41F24u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41F2Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41F4Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41F50u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41F6Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41F88u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41F90u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41FA0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41FBCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41FC8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41FDCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41FF0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B41FF8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42004u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42028u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4203Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4204Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42058u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42084u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42098u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B420B0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B420BCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B420ECu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42104u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42130u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42144u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4214Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42154u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42168u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42180u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42188u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42190u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42194u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B421A8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B421C0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B421C8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B421D4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B421E0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B421F4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42204u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4220Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42224u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42234u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4223Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42240u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42254u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4226Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42274u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42278u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42280u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B422C8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B422F0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42304u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42330u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42338u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42340u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42354u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42364u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4237Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B423BCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B423CCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B423D4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B423E0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B423F8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42404u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42408u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42418u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42420u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42424u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42434u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4243Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42444u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4244Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42454u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4245Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42470u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42490u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B424A0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B424A8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B424B8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B424C0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B424C8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B424D0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B424E0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B424F0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B424F8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42508u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42510u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42518u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42524u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42528u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42538u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42540u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42548u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42550u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42558u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4256Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42574u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4257Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4258Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42594u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B425A8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B425BCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B425C4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B425CCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B425D4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B425E8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B425F0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B425F4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42624u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4262Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42634u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4264Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4265Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42664u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42674u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4267Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42690u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42698u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4269Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B426A4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B426B0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B426B4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B426C8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B426D0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B426E8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B426F0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B426F8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42700u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42708u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42714u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4271Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42748u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42750u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42758u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42760u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42770u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42784u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B427A0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B427B0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B427BCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B427C4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B427ECu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B427F8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42800u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42810u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42838u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42844u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42854u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B428B0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B428C8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B428D4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B428DCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B428ECu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42904u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42974u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42988u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4299Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B429B0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B429CCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B429DCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B429ECu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B429F4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42A30u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42A78u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42A80u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42A88u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42A98u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42AA0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42AA8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42AB0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42AB4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42ADCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42AF8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42B00u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42B08u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42B1Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42B38u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42BB4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42BE0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42BF0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42BF8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42C00u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42C0Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42C24u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42C34u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42C80u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42CC8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42D18u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42D2Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42D40u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42D48u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42D4Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42D58u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42D6Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42D7Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42D84u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42D88u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42DB8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42E24u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42E4Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42E60u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42E78u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42E84u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42EF4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42F58u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B42FBCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43020u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4303Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4304Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43054u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43064u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43074u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43084u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4308Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B430D4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43140u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43160u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43174u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4318Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43194u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B431B4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B431C8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B431E0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B431F4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43210u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43228u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43234u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43240u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4324Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43254u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4325Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43260u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43280u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43294u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B432A0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B432F4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4330Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43320u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43328u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4332Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43338u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4334Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4335Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43364u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43368u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43370u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B433B8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43400u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43450u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43464u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B434ACu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B434C0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43508u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4351Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4356Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43580u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B435C8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B435DCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B435ECu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B435FCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4360Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4361Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4362Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4363Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4364Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4365Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4366Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4367Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4368Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43694u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4369Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B436DCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B436E4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43748u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4375Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43768u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B437B0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B437D0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B437E8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B437F4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B437F8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43804u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43818u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4382Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43834u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43838u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43868u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B438C0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B438DCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B438F0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43908u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43928u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43938u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4394Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4395Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43978u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43988u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B4399Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B439ACu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B439B4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B439ECu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43AE0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43B10u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43B40u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43B5Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43B64u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43B6Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43B74u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43B7Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43B80u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43B88u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43BACu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43BC4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43BD8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43BFCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43C00u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43C18u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43C28u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43C38u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43C40u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43C48u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43CD8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43CE8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43CF0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43D04u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43D18u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43D24u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43D38u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43D4Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43D58u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43D68u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43D7Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43D80u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43D88u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43DB4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43DCCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43DDCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43DE4u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43DECu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43E04u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43E08u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43E18u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43E1Cu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43E30u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43E44u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43E50u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43E64u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43EB8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43ECCu, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43EE8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43EF0u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43F00u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43F20u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43F24u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43F68u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43FC8u, &recomp_unit_0207, "recomp_unit_0207");
    runtime.register_function(0x08B43FD4u, &recomp_unit_0207, "recomp_unit_0207");
}
} // namespace psprecomp
