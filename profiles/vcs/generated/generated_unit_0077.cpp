#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0077[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0,
    0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20,
    21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    27, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 42, 43, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 54,
    0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0,
    66, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 74, 0, 75, 76, 0, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 82, 0, 0, 83, 0, 0, 0, 84, 0, 85,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0,
    0, 90, 0, 0, 91, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110,
    111, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 121, 0, 122,
    0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 142, 143, 0, 0, 144, 0, 0, 0, 0, 145, 146, 0, 147, 0, 148, 0, 149, 0,
    150, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 160, 0,
    0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175,
    0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 184, 0, 185, 0, 186, 0, 187, 0, 0,
    0, 188, 0, 189, 0, 0, 190, 191, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0,
    199, 0, 200, 0, 0, 201, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0,
    0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 223, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 228, 229, 0,
    230, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0,
    0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 0, 244, 0, 245, 0, 0, 246, 0, 0, 247, 248, 0, 0, 249,
    0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0, 0, 258,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0,
    0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 281, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 290,
    0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 0, 299,
    0, 300, 0, 301, 0, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 309, 0, 0, 310, 0,
    0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0,
    0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325,
    0, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 339, 0, 0, 0, 340, 341, 0, 342,
    0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0,
    0, 0, 0, 355, 0, 356, 0, 357, 0, 358, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 366, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 370, 0, 371, 0, 372, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 377, 0, 0, 378, 0, 379, 380, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0,
    0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 395, 0, 396, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 400, 0, 401, 0, 402,
    0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0,
    0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0,
    0, 415, 416, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 424, 0, 0, 0, 0,
    0, 0, 0, 425, 0, 426, 0, 0, 0, 427, 0, 428, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439,
    0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    446, 0, 0, 0, 447, 0, 0, 448, 449, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 463, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 480, 0, 0, 481, 0, 482, 483, 0,
    0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0,
    495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500,
    0, 501, 0, 0, 502, 0, 503, 0, 504, 0, 0, 505, 0, 506, 0, 0, 507, 0, 508, 0, 0, 509, 510, 0, 0, 0, 511, 0, 0, 512, 0, 513,
    0, 514, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 518, 0, 519, 0, 0, 520, 0, 521, 522, 0, 0, 523, 0, 0, 524, 0, 525, 0, 0, 526,
    0, 527, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 532, 0, 0, 533, 0, 534, 0, 535, 0, 0, 0,
    0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 545,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0,
    0, 0, 0, 548, 0, 0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 560, 0, 0, 561, 0, 562, 0, 563, 0, 0, 0, 0, 564,
    0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 571, 0, 0,
    0, 0, 572, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 576, 0, 577, 0, 0, 0, 578, 0, 579, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590,
    0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 594, 0, 0, 595, 0, 0, 0, 0, 596, 597, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 603, 0, 0, 604, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0,
    0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 612, 613, 0, 614, 0, 615, 0,
    0, 616, 0, 617, 618, 0, 619, 0, 0, 620, 0, 0, 621, 0, 622, 623, 0, 624, 0, 0, 625, 0, 626, 0, 627, 0, 0, 0, 0, 628, 0, 0,
    0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 634,
    0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 639, 640, 0, 641, 0, 0, 0, 642,
    0, 643, 0, 644, 0, 645, 0, 0, 0, 0, 0, 646, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 650, 0, 0,
    0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 655,
    0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0,
    0, 659, 0, 0, 660, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 665, 0,
    0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0,
    671, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 677, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 689, 0, 0,
    0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 695, 0, 0, 0,
    0, 0, 696, 0, 0, 0, 0, 697, 0, 698, 0, 699, 700, 0, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0, 0, 704, 0, 0, 0, 0,
    705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 707, 0, 0, 708, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 711, 0, 0,
    0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 718, 0,
    719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0,
    0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 729,
    0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 738, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740,
    0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0,
    0, 0, 746, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 750, 0, 0, 751, 0, 0, 0,
    752, 0, 0, 0, 753, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0,
    0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0,
    761, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 765, 0, 766, 0, 767, 768, 0, 769, 0, 0, 0, 770, 0,
    771, 0, 772, 0, 773, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 777, 0, 0, 778, 0, 0, 779, 0,
    0, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 786, 0, 0, 787, 0, 788, 0, 0, 0, 789, 0, 0,
    790, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0,
    794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 797, 0, 0, 798, 0, 0, 0, 799, 0, 800, 0, 801, 0, 0, 802, 0,
    803, 0, 0, 0, 804, 0, 0, 0, 805, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 808, 0, 0, 0,
    0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 0, 824, 825, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0,
    0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0,
    0, 0, 834, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 843, 0, 0, 0, 0, 844,
    0, 0, 845, 0, 846, 0, 847, 0, 0, 0, 848, 0, 849, 0, 850, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852,
};
void recomp_unit_0077_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08938000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0077[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08938000;
    case 2u: goto L_08938024;
    case 3u: goto L_08938040;
    case 4u: goto L_08938048;
    case 5u: goto L_08938050;
    case 6u: goto L_08938058;
    case 7u: goto L_08938060;
    case 8u: goto L_08938068;
    case 9u: goto L_08938070;
    case 10u: goto L_08938088;
    case 11u: goto L_08938094;
    case 12u: goto L_089380AC;
    case 13u: goto L_089380B8;
    case 14u: goto L_089380CC;
    case 15u: goto L_08938144;
    case 16u: goto L_0893814C;
    case 17u: goto L_08938154;
    case 18u: goto L_0893815C;
    case 19u: goto L_0893816C;
    case 20u: goto L_0893817C;
    case 21u: goto L_08938180;
    case 22u: goto L_08938188;
    case 23u: goto L_08938198;
    case 24u: goto L_089381A8;
    case 25u: goto L_089381D4;
    case 26u: goto L_089381F8;
    case 27u: goto L_08938200;
    case 28u: goto L_08938208;
    case 29u: goto L_08938210;
    case 30u: goto L_08938218;
    case 31u: goto L_08938224;
    case 32u: goto L_0893822C;
    case 33u: goto L_08938234;
    case 34u: goto L_0893823C;
    case 35u: goto L_08938248;
    case 36u: goto L_08938250;
    case 37u: goto L_08938258;
    case 38u: goto L_08938260;
    case 39u: goto L_08938274;
    case 40u: goto L_08938284;
    case 41u: goto L_089382A0;
    case 42u: goto L_089382A8;
    case 43u: goto L_089382AC;
    case 44u: goto L_089382B8;
    case 45u: goto L_089382C8;
    case 46u: goto L_089382D0;
    case 47u: goto L_089382EC;
    case 48u: goto L_08938330;
    case 49u: goto L_08938340;
    case 50u: goto L_08938350;
    case 51u: goto L_0893835C;
    case 52u: goto L_08938364;
    case 53u: goto L_08938374;
    case 54u: goto L_0893837C;
    case 55u: goto L_08938384;
    case 56u: goto L_0893838C;
    case 57u: goto L_08938394;
    case 58u: goto L_089383A0;
    case 59u: goto L_089383AC;
    case 60u: goto L_089383B8;
    case 61u: goto L_089383C4;
    case 62u: goto L_089383CC;
    case 63u: goto L_089383D4;
    case 64u: goto L_089383E0;
    case 65u: goto L_089383F0;
    case 66u: goto L_08938400;
    case 67u: goto L_0893840C;
    case 68u: goto L_08938414;
    case 69u: goto L_0893841C;
    case 70u: goto L_08938430;
    case 71u: goto L_0893846C;
    case 72u: goto L_08938474;
    case 73u: goto L_08938480;
    case 74u: goto L_0893849C;
    case 75u: goto L_089384A4;
    case 76u: goto L_089384A8;
    case 77u: goto L_089384B4;
    case 78u: goto L_089384BC;
    case 79u: goto L_089384C4;
    case 80u: goto L_089384CC;
    case 81u: goto L_089384D4;
    case 82u: goto L_089384D8;
    case 83u: goto L_089384E4;
    case 84u: goto L_089384F4;
    case 85u: goto L_089384FC;
    case 86u: goto L_08938518;
    case 87u: goto L_0893855C;
    case 88u: goto L_08938568;
    case 89u: goto L_08938578;
    case 90u: goto L_08938584;
    case 91u: goto L_08938590;
    case 92u: goto L_0893859C;
    case 93u: goto L_089385A4;
    case 94u: goto L_089385AC;
    case 95u: goto L_089385BC;
    case 96u: goto L_089385C4;
    case 97u: goto L_089385D8;
    case 98u: goto L_08938634;
    case 99u: goto L_08938658;
    case 100u: goto L_08938668;
    case 101u: goto L_089386AC;
    case 102u: goto L_089386F8;
    case 103u: goto L_0893870C;
    case 104u: goto L_08938720;
    case 105u: goto L_08938748;
    case 106u: goto L_08938758;
    case 107u: goto L_08938768;
    case 108u: goto L_089387AC;
    case 109u: goto L_089387F4;
    case 110u: goto L_089387FC;
    case 111u: goto L_08938800;
    case 112u: goto L_0893880C;
    case 113u: goto L_0893881C;
    case 114u: goto L_08938824;
    case 115u: goto L_08938830;
    case 116u: goto L_0893883C;
    case 117u: goto L_08938848;
    case 118u: goto L_08938854;
    case 119u: goto L_0893885C;
    case 120u: goto L_08938864;
    case 121u: goto L_08938874;
    case 122u: goto L_0893887C;
    case 123u: goto L_08938884;
    case 124u: goto L_0893888C;
    case 125u: goto L_08938894;
    case 126u: goto L_0893889C;
    case 127u: goto L_089388A8;
    case 128u: goto L_089388B4;
    case 129u: goto L_089388C0;
    case 130u: goto L_089388D4;
    case 131u: goto L_089388E8;
    case 132u: goto L_089388F4;
    case 133u: goto L_0893890C;
    case 134u: goto L_08938924;
    case 135u: goto L_08938928;
    case 136u: goto L_08938934;
    case 137u: goto L_0893893C;
    case 138u: goto L_08938994;
    case 139u: goto L_0893899C;
    case 140u: goto L_089389A4;
    case 141u: goto L_089389AC;
    case 142u: goto L_089389B8;
    case 143u: goto L_089389BC;
    case 144u: goto L_089389C8;
    case 145u: goto L_089389DC;
    case 146u: goto L_089389E0;
    case 147u: goto L_089389E8;
    case 148u: goto L_089389F0;
    case 149u: goto L_089389F8;
    case 150u: goto L_08938A00;
    case 151u: goto L_08938A08;
    case 152u: goto L_08938A14;
    case 153u: goto L_08938A1C;
    case 154u: goto L_08938A24;
    case 155u: goto L_08938A2C;
    case 156u: goto L_08938A3C;
    case 157u: goto L_08938A58;
    case 158u: goto L_08938A60;
    case 159u: goto L_08938A70;
    case 160u: goto L_08938A78;
    case 161u: goto L_08938A88;
    case 162u: goto L_08938A94;
    case 163u: goto L_08938A9C;
    case 164u: goto L_08938AA8;
    case 165u: goto L_08938AB4;
    case 166u: goto L_08938ABC;
    case 167u: goto L_08938AC4;
    case 168u: goto L_08938AD8;
    case 169u: goto L_08938B14;
    case 170u: goto L_08938B1C;
    case 171u: goto L_08938B3C;
    case 172u: goto L_08938B4C;
    case 173u: goto L_08938B58;
    case 174u: goto L_08938B74;
    case 175u: goto L_08938B7C;
    case 176u: goto L_08938B88;
    case 177u: goto L_08938B90;
    case 178u: goto L_08938B9C;
    case 179u: goto L_08938BB8;
    case 180u: goto L_08938BC0;
    case 181u: goto L_08938BC8;
    case 182u: goto L_08938BD0;
    case 183u: goto L_08938BD8;
    case 184u: goto L_08938BDC;
    case 185u: goto L_08938BE4;
    case 186u: goto L_08938BEC;
    case 187u: goto L_08938BF4;
    case 188u: goto L_08938C04;
    case 189u: goto L_08938C0C;
    case 190u: goto L_08938C18;
    case 191u: goto L_08938C1C;
    case 192u: goto L_08938C28;
    case 193u: goto L_08938C34;
    case 194u: goto L_08938C3C;
    case 195u: goto L_08938C48;
    case 196u: goto L_08938C4C;
    case 197u: goto L_08938C68;
    case 198u: goto L_08938C78;
    case 199u: goto L_08938C80;
    case 200u: goto L_08938C88;
    case 201u: goto L_08938C94;
    case 202u: goto L_08938C98;
    case 203u: goto L_08938CA0;
    case 204u: goto L_08938CBC;
    case 205u: goto L_08938CC4;
    case 206u: goto L_08938CE0;
    case 207u: goto L_08938CE8;
    case 208u: goto L_08938CF8;
    case 209u: goto L_08938D04;
    case 210u: goto L_08938D0C;
    case 211u: goto L_08938D1C;
    case 212u: goto L_08938D28;
    case 213u: goto L_08938D30;
    case 214u: goto L_08938D40;
    case 215u: goto L_08938D4C;
    case 216u: goto L_08938D70;
    case 217u: goto L_08938D94;
    case 218u: goto L_08938DA4;
    case 219u: goto L_08938DAC;
    case 220u: goto L_08938DB4;
    case 221u: goto L_08938DBC;
    case 222u: goto L_08938DC4;
    case 223u: goto L_08938DC8;
    case 224u: goto L_08938DD0;
    case 225u: goto L_08938DD8;
    case 226u: goto L_08938DE4;
    case 227u: goto L_08938DEC;
    case 228u: goto L_08938DF4;
    case 229u: goto L_08938DF8;
    case 230u: goto L_08938E00;
    case 231u: goto L_08938E08;
    case 232u: goto L_08938E24;
    case 233u: goto L_08938E40;
    case 234u: goto L_08938E4C;
    case 235u: goto L_08938E60;
    case 236u: goto L_08938E68;
    case 237u: goto L_08938E78;
    case 238u: goto L_08938E88;
    case 239u: goto L_08938E98;
    case 240u: goto L_08938EA4;
    case 241u: goto L_08938EAC;
    case 242u: goto L_08938EB8;
    case 243u: goto L_08938EC0;
    case 244u: goto L_08938ECC;
    case 245u: goto L_08938ED4;
    case 246u: goto L_08938EE0;
    case 247u: goto L_08938EEC;
    case 248u: goto L_08938EF0;
    case 249u: goto L_08938EFC;
    case 250u: goto L_08938F04;
    case 251u: goto L_08938F1C;
    case 252u: goto L_08938F24;
    case 253u: goto L_08938F30;
    case 254u: goto L_08938F40;
    case 255u: goto L_08938F58;
    case 256u: goto L_08938F60;
    case 257u: goto L_08938F6C;
    case 258u: goto L_08938F7C;
    case 259u: goto L_08938FA4;
    case 260u: goto L_08938FAC;
    case 261u: goto L_08938FC0;
    case 262u: goto L_08938FD8;
    case 263u: goto L_08938FF0;
    case 264u: goto L_08938FF8;
    case 265u: goto L_08939004;
    case 266u: goto L_08939014;
    case 267u: goto L_0893902C;
    case 268u: goto L_08939034;
    case 269u: goto L_08939040;
    case 270u: goto L_08939050;
    case 271u: goto L_08939078;
    case 272u: goto L_08939080;
    case 273u: goto L_08939094;
    case 274u: goto L_089390AC;
    case 275u: goto L_089390EC;
    case 276u: goto L_089390F4;
    case 277u: goto L_08939114;
    case 278u: goto L_08939138;
    case 279u: goto L_08939150;
    case 280u: goto L_08939158;
    case 281u: goto L_08939164;
    case 282u: goto L_08939174;
    case 283u: goto L_08939194;
    case 284u: goto L_0893919C;
    case 285u: goto L_089391AC;
    case 286u: goto L_089391C0;
    case 287u: goto L_089391D8;
    case 288u: goto L_089391E0;
    case 289u: goto L_089391EC;
    case 290u: goto L_089391FC;
    case 291u: goto L_08939214;
    case 292u: goto L_0893921C;
    case 293u: goto L_08939228;
    case 294u: goto L_08939238;
    case 295u: goto L_0893924C;
    case 296u: goto L_08939254;
    case 297u: goto L_0893925C;
    case 298u: goto L_08939268;
    case 299u: goto L_0893927C;
    case 300u: goto L_08939284;
    case 301u: goto L_0893928C;
    case 302u: goto L_08939298;
    case 303u: goto L_089392AC;
    case 304u: goto L_089392B4;
    case 305u: goto L_089392BC;
    case 306u: goto L_089392C8;
    case 307u: goto L_089392DC;
    case 308u: goto L_089392E4;
    case 309u: goto L_089392EC;
    case 310u: goto L_089392F8;
    case 311u: goto L_0893930C;
    case 312u: goto L_08939314;
    case 313u: goto L_0893931C;
    case 314u: goto L_08939328;
    case 315u: goto L_08939348;
    case 316u: goto L_08939350;
    case 317u: goto L_08939360;
    case 318u: goto L_08939374;
    case 319u: goto L_08939394;
    case 320u: goto L_0893939C;
    case 321u: goto L_089393AC;
    case 322u: goto L_089393C0;
    case 323u: goto L_089393CC;
    case 324u: goto L_089393F0;
    case 325u: goto L_089393FC;
    case 326u: goto L_08939408;
    case 327u: goto L_08939410;
    case 328u: goto L_0893941C;
    case 329u: goto L_0893943C;
    case 330u: goto L_08939444;
    case 331u: goto L_08939460;
    case 332u: goto L_0893947C;
    case 333u: goto L_08939490;
    case 334u: goto L_089394A4;
    case 335u: goto L_089394B4;
    case 336u: goto L_089394C0;
    case 337u: goto L_089394CC;
    case 338u: goto L_089394D4;
    case 339u: goto L_089394E0;
    case 340u: goto L_089394F0;
    case 341u: goto L_089394F4;
    case 342u: goto L_089394FC;
    case 343u: goto L_08939504;
    case 344u: goto L_0893950C;
    case 345u: goto L_08939530;
    case 346u: goto L_08939538;
    case 347u: goto L_08939544;
    case 348u: goto L_08939554;
    case 349u: goto L_0893955C;
    case 350u: goto L_08939570;
    case 351u: goto L_0893957C;
    case 352u: goto L_08939590;
    case 353u: goto L_089395D4;
    case 354u: goto L_089395F4;
    case 355u: goto L_0893960C;
    case 356u: goto L_08939614;
    case 357u: goto L_0893961C;
    case 358u: goto L_08939624;
    case 359u: goto L_08939628;
    case 360u: goto L_0893963C;
    case 361u: goto L_0893964C;
    case 362u: goto L_08939674;
    case 363u: goto L_0893967C;
    case 364u: goto L_089396D0;
    case 365u: goto L_089396D8;
    case 366u: goto L_089396DC;
    case 367u: goto L_08939704;
    case 368u: goto L_08939720;
    case 369u: goto L_08939728;
    case 370u: goto L_08939734;
    case 371u: goto L_0893973C;
    case 372u: goto L_08939744;
    case 373u: goto L_08939750;
    case 374u: goto L_08939760;
    case 375u: goto L_08939768;
    case 376u: goto L_08939790;
    case 377u: goto L_08939798;
    case 378u: goto L_089397A4;
    case 379u: goto L_089397AC;
    case 380u: goto L_089397B0;
    case 381u: goto L_089397B8;
    case 382u: goto L_089397CC;
    case 383u: goto L_089397F8;
    case 384u: goto L_08939804;
    case 385u: goto L_0893980C;
    case 386u: goto L_08939814;
    case 387u: goto L_0893981C;
    case 388u: goto L_08939824;
    case 389u: goto L_08939834;
    case 390u: goto L_08939854;
    case 391u: goto L_0893985C;
    case 392u: goto L_0893987C;
    case 393u: goto L_089398A0;
    case 394u: goto L_089398B0;
    case 395u: goto L_089398B8;
    case 396u: goto L_089398C0;
    case 397u: goto L_089398CC;
    case 398u: goto L_089398D4;
    case 399u: goto L_089398DC;
    case 400u: goto L_089398EC;
    case 401u: goto L_089398F4;
    case 402u: goto L_089398FC;
    case 403u: goto L_08939908;
    case 404u: goto L_08939924;
    case 405u: goto L_0893992C;
    case 406u: goto L_08939948;
    case 407u: goto L_08939964;
    case 408u: goto L_08939978;
    case 409u: goto L_0893998C;
    case 410u: goto L_089399A4;
    case 411u: goto L_089399C8;
    case 412u: goto L_089399E0;
    case 413u: goto L_089399EC;
    case 414u: goto L_089399F8;
    case 415u: goto L_08939A04;
    case 416u: goto L_08939A08;
    case 417u: goto L_08939A10;
    case 418u: goto L_08939A18;
    case 419u: goto L_08939A20;
    case 420u: goto L_08939A40;
    case 421u: goto L_08939A4C;
    case 422u: goto L_08939AD8;
    case 423u: goto L_08939AE0;
    case 424u: goto L_08939AEC;
    case 425u: goto L_08939B0C;
    case 426u: goto L_08939B14;
    case 427u: goto L_08939B24;
    case 428u: goto L_08939B2C;
    case 429u: goto L_08939B34;
    case 430u: goto L_08939B40;
    case 431u: goto L_08939B4C;
    case 432u: goto L_08939B60;
    case 433u: goto L_08939B6C;
    case 434u: goto L_08939B98;
    case 435u: goto L_08939BA4;
    case 436u: goto L_08939BC4;
    case 437u: goto L_08939BD0;
    case 438u: goto L_08939BF0;
    case 439u: goto L_08939BFC;
    case 440u: goto L_08939C0C;
    case 441u: goto L_08939C14;
    case 442u: goto L_08939C2C;
    case 443u: goto L_08939C38;
    case 444u: goto L_08939C4C;
    case 445u: goto L_08939C58;
    case 446u: goto L_08939C80;
    case 447u: goto L_08939C90;
    case 448u: goto L_08939C9C;
    case 449u: goto L_08939CA0;
    case 450u: goto L_08939CB4;
    case 451u: goto L_08939CBC;
    case 452u: goto L_08939CC4;
    case 453u: goto L_08939CCC;
    case 454u: goto L_08939CE4;
    case 455u: goto L_08939D24;
    case 456u: goto L_08939D44;
    case 457u: goto L_08939D78;
    case 458u: goto L_08939D90;
    case 459u: goto L_08939DA0;
    case 460u: goto L_08939DC8;
    case 461u: goto L_08939DD0;
    case 462u: goto L_08939DE8;
    case 463u: goto L_08939E10;
    case 464u: goto L_08939E14;
    case 465u: goto L_08939E28;
    case 466u: goto L_08939E3C;
    case 467u: goto L_08939E50;
    case 468u: goto L_08939E6C;
    case 469u: goto L_08939E88;
    case 470u: goto L_08939EAC;
    case 471u: goto L_08939EBC;
    case 472u: goto L_08939EE4;
    case 473u: goto L_08939EFC;
    case 474u: goto L_08939F84;
    case 475u: goto L_08939F94;
    case 476u: goto L_08939FA0;
    case 477u: goto L_08939FA8;
    case 478u: goto L_08939FC8;
    case 479u: goto L_08939FD8;
    case 480u: goto L_08939FE0;
    case 481u: goto L_08939FEC;
    case 482u: goto L_08939FF4;
    case 483u: goto L_08939FF8;
    case 484u: goto L_0893A01C;
    case 485u: goto L_0893A03C;
    case 486u: goto L_0893A044;
    case 487u: goto L_0893A048;
    case 488u: goto L_0893A080;
    case 489u: goto L_0893A08C;
    case 490u: goto L_0893A0BC;
    case 491u: goto L_0893A0CC;
    case 492u: goto L_0893A0E0;
    case 493u: goto L_0893A0EC;
    case 494u: goto L_0893A0F8;
    case 495u: goto L_0893A100;
    case 496u: goto L_0893A10C;
    case 497u: goto L_0893A138;
    case 498u: goto L_0893A150;
    case 499u: goto L_0893A168;
    case 500u: goto L_0893A17C;
    case 501u: goto L_0893A184;
    case 502u: goto L_0893A190;
    case 503u: goto L_0893A198;
    case 504u: goto L_0893A1A0;
    case 505u: goto L_0893A1AC;
    case 506u: goto L_0893A1B4;
    case 507u: goto L_0893A1C0;
    case 508u: goto L_0893A1C8;
    case 509u: goto L_0893A1D4;
    case 510u: goto L_0893A1D8;
    case 511u: goto L_0893A1E8;
    case 512u: goto L_0893A1F4;
    case 513u: goto L_0893A1FC;
    case 514u: goto L_0893A204;
    case 515u: goto L_0893A20C;
    case 516u: goto L_0893A218;
    case 517u: goto L_0893A228;
    case 518u: goto L_0893A230;
    case 519u: goto L_0893A238;
    case 520u: goto L_0893A244;
    case 521u: goto L_0893A24C;
    case 522u: goto L_0893A250;
    case 523u: goto L_0893A25C;
    case 524u: goto L_0893A268;
    case 525u: goto L_0893A270;
    case 526u: goto L_0893A27C;
    case 527u: goto L_0893A284;
    case 528u: goto L_0893A290;
    case 529u: goto L_0893A2A0;
    case 530u: goto L_0893A2C0;
    case 531u: goto L_0893A2D0;
    case 532u: goto L_0893A2D4;
    case 533u: goto L_0893A2E0;
    case 534u: goto L_0893A2E8;
    case 535u: goto L_0893A2F0;
    case 536u: goto L_0893A310;
    case 537u: goto L_0893A338;
    case 538u: goto L_0893A340;
    case 539u: goto L_0893A388;
    case 540u: goto L_0893A39C;
    case 541u: goto L_0893A3B8;
    case 542u: goto L_0893A3CC;
    case 543u: goto L_0893A3E0;
    case 544u: goto L_0893A3F4;
    case 545u: goto L_0893A3FC;
    case 546u: goto L_0893A464;
    case 547u: goto L_0893A470;
    case 548u: goto L_0893A48C;
    case 549u: goto L_0893A498;
    case 550u: goto L_0893A4A0;
    case 551u: goto L_0893A4A8;
    case 552u: goto L_0893A4BC;
    case 553u: goto L_0893A4C4;
    case 554u: goto L_0893A4D0;
    case 555u: goto L_0893A4E0;
    case 556u: goto L_0893A4EC;
    case 557u: goto L_0893A514;
    case 558u: goto L_0893A530;
    case 559u: goto L_0893A548;
    case 560u: goto L_0893A54C;
    case 561u: goto L_0893A558;
    case 562u: goto L_0893A560;
    case 563u: goto L_0893A568;
    case 564u: goto L_0893A57C;
    case 565u: goto L_0893A584;
    case 566u: goto L_0893A5B4;
    case 567u: goto L_0893A5C0;
    case 568u: goto L_0893A5D0;
    case 569u: goto L_0893A5D8;
    case 570u: goto L_0893A5E4;
    case 571u: goto L_0893A5F4;
    case 572u: goto L_0893A608;
    case 573u: goto L_0893A60C;
    case 574u: goto L_0893A624;
    case 575u: goto L_0893A6D4;
    case 576u: goto L_0893A70C;
    case 577u: goto L_0893A714;
    case 578u: goto L_0893A724;
    case 579u: goto L_0893A72C;
    case 580u: goto L_0893A730;
    case 581u: goto L_0893A750;
    case 582u: goto L_0893A75C;
    case 583u: goto L_0893A764;
    case 584u: goto L_0893A770;
    case 585u: goto L_0893A778;
    case 586u: goto L_0893A7A4;
    case 587u: goto L_0893A7C4;
    case 588u: goto L_0893A7CC;
    case 589u: goto L_0893A7E8;
    case 590u: goto L_0893A7FC;
    case 591u: goto L_0893A814;
    case 592u: goto L_0893A824;
    case 593u: goto L_0893A838;
    case 594u: goto L_0893A840;
    case 595u: goto L_0893A84C;
    case 596u: goto L_0893A860;
    case 597u: goto L_0893A864;
    case 598u: goto L_0893A894;
    case 599u: goto L_0893A8A0;
    case 600u: goto L_0893A8B8;
    case 601u: goto L_0893A8CC;
    case 602u: goto L_0893A8DC;
    case 603u: goto L_0893A8E4;
    case 604u: goto L_0893A8F0;
    case 605u: goto L_0893A974;
    case 606u: goto L_0893A984;
    case 607u: goto L_0893A9A4;
    case 608u: goto L_0893A9AC;
    case 609u: goto L_0893A9B8;
    case 610u: goto L_0893A9D0;
    case 611u: goto L_0893A9DC;
    case 612u: goto L_0893A9E4;
    case 613u: goto L_0893A9E8;
    case 614u: goto L_0893A9F0;
    case 615u: goto L_0893A9F8;
    case 616u: goto L_0893AA04;
    case 617u: goto L_0893AA0C;
    case 618u: goto L_0893AA10;
    case 619u: goto L_0893AA18;
    case 620u: goto L_0893AA24;
    case 621u: goto L_0893AA30;
    case 622u: goto L_0893AA38;
    case 623u: goto L_0893AA3C;
    case 624u: goto L_0893AA44;
    case 625u: goto L_0893AA50;
    case 626u: goto L_0893AA58;
    case 627u: goto L_0893AA60;
    case 628u: goto L_0893AA74;
    case 629u: goto L_0893AA8C;
    case 630u: goto L_0893AA9C;
    case 631u: goto L_0893AAC4;
    case 632u: goto L_0893AAE4;
    case 633u: goto L_0893AAF4;
    case 634u: goto L_0893AAFC;
    case 635u: goto L_0893AB04;
    case 636u: goto L_0893AB14;
    case 637u: goto L_0893AB30;
    case 638u: goto L_0893AB44;
    case 639u: goto L_0893AB60;
    case 640u: goto L_0893AB64;
    case 641u: goto L_0893AB6C;
    case 642u: goto L_0893AB7C;
    case 643u: goto L_0893AB84;
    case 644u: goto L_0893AB8C;
    case 645u: goto L_0893AB94;
    case 646u: goto L_0893ABAC;
    case 647u: goto L_0893ABB0;
    case 648u: goto L_0893ABE0;
    case 649u: goto L_0893ABE8;
    case 650u: goto L_0893ABF4;
    case 651u: goto L_0893AC14;
    case 652u: goto L_0893AC1C;
    case 653u: goto L_0893AC64;
    case 654u: goto L_0893AC74;
    case 655u: goto L_0893AC7C;
    case 656u: goto L_0893AC84;
    case 657u: goto L_0893ACA4;
    case 658u: goto L_0893ACF4;
    case 659u: goto L_0893AD04;
    case 660u: goto L_0893AD10;
    case 661u: goto L_0893AD14;
    case 662u: goto L_0893AD9C;
    case 663u: goto L_0893ADE8;
    case 664u: goto L_0893ADF0;
    case 665u: goto L_0893ADF8;
    case 666u: goto L_0893AE1C;
    case 667u: goto L_0893AE2C;
    case 668u: goto L_0893AE5C;
    case 669u: goto L_0893AEEC;
    case 670u: goto L_0893AEF4;
    case 671u: goto L_0893AF00;
    case 672u: goto L_0893AF08;
    case 673u: goto L_0893AF10;
    case 674u: goto L_0893AF30;
    case 675u: goto L_0893AF98;
    case 676u: goto L_0893AFAC;
    case 677u: goto L_0893AFB8;
    case 678u: goto L_0893AFBC;
    case 679u: goto L_0893B044;
    case 680u: goto L_0893B0A8;
    case 681u: goto L_0893B0B0;
    case 682u: goto L_0893B0B8;
    case 683u: goto L_0893B0DC;
    case 684u: goto L_0893B0EC;
    case 685u: goto L_0893B11C;
    case 686u: goto L_0893B144;
    case 687u: goto L_0893B164;
    case 688u: goto L_0893B170;
    case 689u: goto L_0893B174;
    case 690u: goto L_0893B184;
    case 691u: goto L_0893B19C;
    case 692u: goto L_0893B1B0;
    case 693u: goto L_0893B1D4;
    case 694u: goto L_0893B1E4;
    case 695u: goto L_0893B1F0;
    case 696u: goto L_0893B208;
    case 697u: goto L_0893B21C;
    case 698u: goto L_0893B224;
    case 699u: goto L_0893B22C;
    case 700u: goto L_0893B230;
    case 701u: goto L_0893B23C;
    case 702u: goto L_0893B258;
    case 703u: goto L_0893B260;
    case 704u: goto L_0893B26C;
    case 705u: goto L_0893B280;
    case 706u: goto L_0893B2B4;
    case 707u: goto L_0893B2BC;
    case 708u: goto L_0893B2C8;
    case 709u: goto L_0893B2D4;
    case 710u: goto L_0893B2DC;
    case 711u: goto L_0893B2F4;
    case 712u: goto L_0893B304;
    case 713u: goto L_0893B31C;
    case 714u: goto L_0893B328;
    case 715u: goto L_0893B34C;
    case 716u: goto L_0893B368;
    case 717u: goto L_0893B374;
    case 718u: goto L_0893B378;
    case 719u: goto L_0893B380;
    case 720u: goto L_0893B394;
    case 721u: goto L_0893B3AC;
    case 722u: goto L_0893B3C8;
    case 723u: goto L_0893B3D8;
    case 724u: goto L_0893B3E8;
    case 725u: goto L_0893B404;
    case 726u: goto L_0893B414;
    case 727u: goto L_0893B428;
    case 728u: goto L_0893B460;
    case 729u: goto L_0893B47C;
    case 730u: goto L_0893B484;
    case 731u: goto L_0893B4C4;
    case 732u: goto L_0893B508;
    case 733u: goto L_0893B514;
    case 734u: goto L_0893B54C;
    case 735u: goto L_0893B560;
    case 736u: goto L_0893B59C;
    case 737u: goto L_0893B5A4;
    case 738u: goto L_0893B5B8;
    case 739u: goto L_0893B5BC;
    case 740u: goto L_0893B5FC;
    case 741u: goto L_0893B604;
    case 742u: goto L_0893B634;
    case 743u: goto L_0893B644;
    case 744u: goto L_0893B654;
    case 745u: goto L_0893B670;
    case 746u: goto L_0893B688;
    case 747u: goto L_0893B694;
    case 748u: goto L_0893B6A4;
    case 749u: goto L_0893B6DC;
    case 750u: goto L_0893B6E4;
    case 751u: goto L_0893B6F0;
    case 752u: goto L_0893B700;
    case 753u: goto L_0893B710;
    case 754u: goto L_0893B718;
    case 755u: goto L_0893B720;
    case 756u: goto L_0893B734;
    case 757u: goto L_0893B750;
    case 758u: goto L_0893B774;
    case 759u: goto L_0893B788;
    case 760u: goto L_0893B7E4;
    case 761u: goto L_0893B800;
    case 762u: goto L_0893B810;
    case 763u: goto L_0893B820;
    case 764u: goto L_0893B840;
    case 765u: goto L_0893B84C;
    case 766u: goto L_0893B854;
    case 767u: goto L_0893B85C;
    case 768u: goto L_0893B860;
    case 769u: goto L_0893B868;
    case 770u: goto L_0893B878;
    case 771u: goto L_0893B880;
    case 772u: goto L_0893B888;
    case 773u: goto L_0893B890;
    case 774u: goto L_0893B898;
    case 775u: goto L_0893B8C8;
    case 776u: goto L_0893B8D8;
    case 777u: goto L_0893B8E0;
    case 778u: goto L_0893B8EC;
    case 779u: goto L_0893B8F8;
    case 780u: goto L_0893B908;
    case 781u: goto L_0893B910;
    case 782u: goto L_0893B91C;
    case 783u: goto L_0893B924;
    case 784u: goto L_0893B938;
    case 785u: goto L_0893B948;
    case 786u: goto L_0893B950;
    case 787u: goto L_0893B95C;
    case 788u: goto L_0893B964;
    case 789u: goto L_0893B974;
    case 790u: goto L_0893B980;
    case 791u: goto L_0893B9A0;
    case 792u: goto L_0893B9C8;
    case 793u: goto L_0893B9E0;
    case 794u: goto L_0893BA00;
    case 795u: goto L_0893BA2C;
    case 796u: goto L_0893BA38;
    case 797u: goto L_0893BA40;
    case 798u: goto L_0893BA4C;
    case 799u: goto L_0893BA5C;
    case 800u: goto L_0893BA64;
    case 801u: goto L_0893BA6C;
    case 802u: goto L_0893BA78;
    case 803u: goto L_0893BA80;
    case 804u: goto L_0893BA90;
    case 805u: goto L_0893BAA0;
    case 806u: goto L_0893BAB8;
    case 807u: goto L_0893BADC;
    case 808u: goto L_0893BAF0;
    case 809u: goto L_0893BB08;
    case 810u: goto L_0893BB14;
    case 811u: goto L_0893BB20;
    case 812u: goto L_0893BB38;
    case 813u: goto L_0893BB60;
    case 814u: goto L_0893BB90;
    case 815u: goto L_0893BB9C;
    case 816u: goto L_0893BBB4;
    case 817u: goto L_0893BBC8;
    case 818u: goto L_0893BBDC;
    case 819u: goto L_0893BC24;
    case 820u: goto L_0893BC4C;
    case 821u: goto L_0893BC54;
    case 822u: goto L_0893BC8C;
    case 823u: goto L_0893BC9C;
    case 824u: goto L_0893BCB4;
    case 825u: goto L_0893BCB8;
    case 826u: goto L_0893BCC8;
    case 827u: goto L_0893BCE0;
    case 828u: goto L_0893BCF8;
    case 829u: goto L_0893BD18;
    case 830u: goto L_0893BD3C;
    case 831u: goto L_0893BD84;
    case 832u: goto L_0893BDC0;
    case 833u: goto L_0893BDF0;
    case 834u: goto L_0893BE08;
    case 835u: goto L_0893BE24;
    case 836u: goto L_0893BE48;
    case 837u: goto L_0893BE70;
    case 838u: goto L_0893BE98;
    case 839u: goto L_0893BED0;
    case 840u: goto L_0893BEF8;
    case 841u: goto L_0893BF28;
    case 842u: goto L_0893BF58;
    case 843u: goto L_0893BF68;
    case 844u: goto L_0893BF7C;
    case 845u: goto L_0893BF88;
    case 846u: goto L_0893BF90;
    case 847u: goto L_0893BF98;
    case 848u: goto L_0893BFA8;
    case 849u: goto L_0893BFB0;
    case 850u: goto L_0893BFB8;
    case 851u: goto L_0893BFD4;
    case 852u: goto L_0893BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08938000:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (hot_regs.g7 | g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    g6 = (g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08938050;
      }
      goto L_08938024;
    }
}
L_08938024:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08938050;
      }
      goto L_08938040;
    }
}
L_08938040:
    hot_regs.g31 = (0x08938048u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938048u) goto L_08938048;
    return;
L_08938048:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08938068;
      }
      goto L_08938050;
    }
L_08938050:
    hot_regs.g31 = (0x08938058u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938058u) goto L_08938058;
    return;
L_08938058:
    if (hot_regs.g2 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_08938070;
    }
    goto L_08938060;
L_08938060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089380B8;
      }
      goto L_08938068;
    }
L_08938068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089380B8;
      }
      goto L_08938070;
    }
L_08938070:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089380B8;
      }
      goto L_08938088;
    }
}
L_08938088:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08938094u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 708u, 0x089AB5A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938094u) goto L_08938094;
    return;
L_08938094:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089380ACu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089380ACu) goto L_089380AC;
    return;
L_089380AC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089380B8u);
    hot_regs.g5 = (0u | 700u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089380B8u) goto L_089380B8;
    return;
L_089380B8:
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
L_089380CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), hot_regs.g31);
    hot_regs.g31 = (0x08938144u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938144u) goto L_08938144;
    return;
L_08938144:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_0893814C;
    }
L_0893814C:
    hot_regs.g31 = (0x08938154u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938154u) goto L_08938154;
    return;
L_08938154:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_0893815C;
    }
L_0893815C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 2u);
    if (g4 != hot_regs.g5) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    hot_regs.g4 = g4;
        goto L_08938180;
    }
    goto L_0893816C;
}
L_0893816C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    g4 = (g4 & 512u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_0893817C;
    }
}
L_0893817C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    goto L_08938180;
L_08938180:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_08938188;
    }
L_08938188:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    ctx.gpr[20] = (0u | 17u);
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_08938198;
    }
L_08938198:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    hot_regs.g5 = (0u | 18u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_089381A8;
    }
L_089381A8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = (17249u << 16u);
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08938200;
      }
      goto L_089381D4;
    }
}
L_089381D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    g5 = (g4 ^ 13u);
    g4 = (g4 ^ 15u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g5 | g4);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08938208;
      }
      goto L_089381F8;
    }
}
L_089381F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938218;
      }
      goto L_08938200;
    }
L_08938200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938208;
    }
L_08938208:
    hot_regs.g31 = (0x08938210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938210u) goto L_08938210;
    return;
L_08938210:
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_0893822C;
      }
      goto L_08938218;
    }
L_08938218:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08938234;
      }
      goto L_08938224;
    }
L_08938224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938260;
      }
      goto L_0893822C;
    }
L_0893822C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938234;
    }
L_08938234:
    hot_regs.g31 = (0x0893823Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893823Cu) goto L_0893823C;
    return;
L_0893823C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08938258;
      }
      goto L_08938248;
    }
L_08938248:
    hot_regs.g31 = (0x08938250u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 452u, 0x08882930u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938250u) goto L_08938250;
    return;
L_08938250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938260;
      }
      goto L_08938258;
    }
L_08938258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938260;
    }
L_08938260:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 & 128u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08938364;
      }
      goto L_08938274;
    }
}
L_08938274:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 16u);
    if (g4 != hot_regs.g5) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g4 = g4;
        goto L_089382AC;
    }
    goto L_08938284;
}
L_08938284:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g31 = (0x089382A0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089382A0u) goto L_089382A0;
    return;
L_089382A0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08938364;
      }
      goto L_089382A8;
    }
L_089382A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    goto L_089382AC;
L_089382AC:
    hot_regs.g5 = (0u | 9u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08938364;
      }
      goto L_089382B8;
    }
L_089382B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 22u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08938364;
      }
      goto L_089382C8;
    }
L_089382C8:
    hot_regs.g31 = (0x089382D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089382D0u) goto L_089382D0;
    return;
L_089382D0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19296)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089382ECu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089382ECu) goto L_089382EC;
    return;
L_089382EC:
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
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 18u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08938330u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938330u) goto L_08938330;
    return;
L_08938330:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 118u);
    hot_regs.g31 = (0x08938340u);
    hot_regs.g6 = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 294u, 0x0891108Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938340u) goto L_08938340;
    return;
L_08938340:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1716), ctx.gpr[18]);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(1716));
    hot_regs.g31 = (0x08938350u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938350u) goto L_08938350;
    return;
L_08938350:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893835Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893835Cu) goto L_0893835C;
    return;
L_0893835C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938364;
    }
L_08938364:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0893838C;
      }
      goto L_08938374;
    }
L_08938374:
    hot_regs.g31 = (0x0893837Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893837Cu) goto L_0893837C;
    return;
L_0893837C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    ctx.gpr[21] = (0u | 6u);
      if (branch_taken) {
          goto L_089383AC;
      }
      goto L_08938384;
    }
L_08938384:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
      if (branch_taken) {
          goto L_08938394;
      }
      goto L_0893838C;
    }
L_0893838C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938394;
    }
L_08938394:
    hot_regs.g5 = (0u | 16u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089383AC;
      }
      goto L_089383A0;
    }
L_089383A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089383B8;
      }
      goto L_089383AC;
    }
L_089383AC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089383B8u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 119u, 0x089B4624u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089383B8u) goto L_089383B8;
    return;
L_089383B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08938400;
      }
      goto L_089383C4;
    }
L_089383C4:
    hot_regs.g31 = (0x089383CCu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089383CCu) goto L_089383CC;
    return;
L_089383CC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08938400;
      }
      goto L_089383D4;
    }
L_089383D4:
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(2288));
    hot_regs.g31 = (0x089383E0u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 988u, 0x08AB3DB4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089383E0u) goto L_089383E0;
    return;
L_089383E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 4096u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08938414;
      }
      goto L_089383F0;
    }
}
L_089383F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 512u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08938414;
      }
      goto L_08938400;
    }
}
L_08938400:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    if (g4 != ctx.gpr[21]) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g4 = g4;
        goto L_08938474;
    }
    goto L_0893840C;
}
L_0893840C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938414;
    }
L_08938414:
    hot_regs.g31 = (0x0893841Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893841Cu) goto L_0893841C;
    return;
L_0893841C:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19284)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19288)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08938430u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938430u) goto L_08938430;
    return;
L_08938430:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19276)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19280)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g6 = (hot_regs.g2 >> 31u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g6 = (ctx.gpr[1] | hot_regs.g6);
    ctx.gpr[8] = (hot_regs.g6 + hot_regs.g4);
    ctx.gpr[9] = (ctx.gpr[8] < hot_regs.g4 ? 1u : 0u);
    hot_regs.g6 = (ctx.gpr[9] + hot_regs.g7);
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893846Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 654u, 0x089AB1F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893846Cu) goto L_0893846C;
    return;
L_0893846C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_08938474;
    }
L_08938474:
    hot_regs.g5 = (0u | 16u);
    if (hot_regs.g4 != hot_regs.g5) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
        goto L_089384A8;
    }
    goto L_08938480;
L_08938480:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g31 = (0x0893849Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893849Cu) goto L_0893849C;
    return;
L_0893849C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089384A4;
    }
L_089384A4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    goto L_089384A8;
L_089384A8:
    ctx.gpr[20] = (0u | 9u);
    if (hot_regs.g4 != ctx.gpr[20]) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
        goto L_089384D8;
    }
    goto L_089384B4;
L_089384B4:
    hot_regs.g31 = (0x089384BCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089384BCu) goto L_089384BC;
    return;
L_089384BC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089384C4;
    }
L_089384C4:
    hot_regs.g31 = (0x089384CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089384CCu) goto L_089384CC;
    return;
L_089384CC:
    { const bool branch_taken = hot_regs.g2 == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089384D4;
    }
L_089384D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    goto L_089384D8;
L_089384D8:
    hot_regs.g5 = (0u | 22u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089384E4;
    }
L_089384E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089384F4;
    }
L_089384F4:
    hot_regs.g31 = (0x089384FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089384FCu) goto L_089384FC;
    return;
L_089384FC:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19292)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19296)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08938518u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938518u) goto L_08938518;
    return;
L_08938518:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 + ctx.gpr[22]);
    hot_regs.g7 = (hot_regs.g6 < ctx.gpr[22] ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + ctx.gpr[23]);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 17u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0893855Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893855Cu) goto L_0893855C;
    return;
L_0893855C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08938568u);
    hot_regs.g5 = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938568u) goto L_08938568;
    return;
L_08938568:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1716), ctx.gpr[18]);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(1716));
    hot_regs.g31 = (0x08938578u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938578u) goto L_08938578;
    return;
L_08938578:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08938584u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938584u) goto L_08938584;
    return;
L_08938584:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0893859C;
      }
      goto L_08938590;
    }
L_08938590:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893859Cu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 60u, 0x089103CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893859Cu) goto L_0893859C;
    return;
L_0893859C:
    hot_regs.g31 = (0x089385A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089385A4u) goto L_089385A4;
    return;
L_089385A4:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089385AC;
    }
L_089385AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    g4 = (g4 & 64u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08938768;
      }
      goto L_089385BC;
    }
}
L_089385BC:
    hot_regs.g31 = (0x089385C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089385C4u) goto L_089385C4;
    return;
L_089385C4:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19268)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19272)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089385D8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089385D8u) goto L_089385D8;
    return;
L_089385D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g18 = ctx.gpr[18];
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19260)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19264)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g6 = (hot_regs.g2 >> 31u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g6 = (ctx.gpr[1] | g6);
    g8 = (g6 + g4);
    ctx.gpr[9] = (g8 < g4 ? 1u : 0u);
    g6 = (ctx.gpr[9] + hot_regs.g7);
    g5 = (g6 + g5);
    g4 = (g8 | 0u);
    g4 = (g4 | 0u);
    g5 = (0u | 40u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (0u | 0u);
    g18 = (ctx.lo);
    g18 = (g18 + static_cast<std::uint32_t>(1));
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(g18); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g18) ? 1u : 0u);
    ctx.gpr[19] = (ctx.lo);
    { const bool branch_taken = g4 == 0u;
    g4 = (15561u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08938758;
      }
      goto L_08938634;
    }
}
L_08938634:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g4 | 4059u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(16));
    g4 = (16320u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(32));
    g4 = (16128u << 16u);
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(48));
    ctx.fpr[24] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_08938658;
}
L_08938658:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08938668u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938668u) goto L_08938668;
    return;
L_08938668:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[26] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089386ACu);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089386ACu) goto L_089386AC;
    return;
L_089386AC:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = ctx.fpr[28] + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x089386F8u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089386F8u) goto L_089386F8;
    return;
L_089386F8:
    hot_regs.f12 = ctx.fpr[0] + ctx.fpr[24];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08938748;
      }
      goto L_0893870C;
    }
L_0893870C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (0x08938720u);
    ctx.gpr[30] = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938720u) goto L_08938720;
    return;
L_08938720:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g7 = (hot_regs.g4 & 7u);
    hot_regs.g7 = (ctx.gpr[19] + hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (0u | 8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g31 = (0x08938748u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 409u, 0x088F5A3Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938748u) goto L_08938748;
    return;
L_08938748:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08938658;
      }
      goto L_08938758;
    }
}
L_08938758:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-65));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    goto L_08938768;
}
L_08938768:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089387AC:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(72)));
    g6 = (g6 & 14u);
    g6 = (g6 ^ 6u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[19] = (0u | 1u);
    g6 = (g6 & 255u);
    ctx.gpr[20] = (0u | 17u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089387FC;
      }
      goto L_089387F4;
    }
}
L_089387F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08938800;
      }
      goto L_089387FC;
    }
L_089387FC:
    ctx.gpr[18] = (0u | 0u);
    goto L_08938800;
L_08938800:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08938848;
      }
      goto L_0893880C;
    }
L_0893880C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08938848;
      }
      goto L_0893881C;
    }
L_0893881C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938848;
      }
      goto L_08938824;
    }
L_08938824:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08938848;
      }
      goto L_08938830;
    }
L_08938830:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893883Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893883Cu) goto L_0893883C;
    return;
L_0893883C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08938848u);
    hot_regs.g5 = (0u | 20000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938848u) goto L_08938848;
    return;
L_08938848:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08938884;
      }
      goto L_08938854;
    }
L_08938854:
    hot_regs.g31 = (0x0893885Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893885Cu) goto L_0893885C;
    return;
L_0893885C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893887C;
      }
      goto L_08938864;
    }
L_08938864:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[21] = (0u | 55u);
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0893888C;
      }
      goto L_08938874;
    }
L_08938874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893899C;
      }
      goto L_0893887C;
    }
L_0893887C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938884;
    }
L_08938884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_0893888C;
    }
L_0893888C:
    hot_regs.g31 = (0x08938894u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938894u) goto L_08938894;
    return;
L_08938894:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893899C;
      }
      goto L_0893889C;
    }
L_0893889C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893899C;
      }
      goto L_089388A8;
    }
L_089388A8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089388E8;
      }
      goto L_089388B4;
    }
L_089388B4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893899C;
      }
      goto L_089388C0;
    }
L_089388C0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(900)));
    g5 = (g5 + static_cast<std::uint32_t>(2228));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g5 != ctx.gpr[21];
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893899C;
      }
      goto L_089388D4;
    }
}
L_089388D4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(900)));
    hot_regs.g6 = (0u | 38u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = g5 == hot_regs.g6;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893899C;
      }
      goto L_089388E8;
    }
}
L_089388E8:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08938994;
      }
      goto L_089388F4;
    }
L_089388F4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u | 2u);
    g5 = (g5 & 496u);
    g5 = (g5 >> 4u);
    { const bool branch_taken = g5 == hot_regs.g6;
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08938928;
      }
      goto L_0893890C;
    }
}
L_0893890C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u | 3u);
    g5 = (g5 & 496u);
    g5 = (g5 >> 4u);
    { const bool branch_taken = g5 != hot_regs.g6;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08938994;
      }
      goto L_08938924;
    }
}
L_08938924:
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    goto L_08938928;
L_08938928:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(149))))));
    { const bool branch_taken = g5 != ctx.gpr[19];
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08938994;
      }
      goto L_08938934;
    }
}
L_08938934:
    hot_regs.g31 = (0x0893893Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893893Cu) goto L_0893893C;
    return;
L_0893893C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1152)));
    g5 = (0u | 2u);
    g4 = (g4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1152)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(352)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(84)));
    g5 = (17008u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (g4 + static_cast<std::uint32_t>(384));
    g5 = (0u + static_cast<std::uint32_t>(-497));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 << 24u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 24u));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(g6));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1152)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g5 = (g6 & g5);
    g5 = (g5 | 48u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_08938994;
}
}
L_08938994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_0893899C;
    }
L_0893899C:
    hot_regs.g31 = (0x089389A4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089389A4u) goto L_089389A4;
    return;
L_089389A4:
    if (hot_regs.g2 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
        goto L_089389BC;
    }
    goto L_089389AC;
L_089389AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089389F8;
      }
      goto L_089389B8;
    }
L_089389B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    goto L_089389BC;
L_089389BC:
    ctx.gpr[21] = (0u | 2u);
    if (hot_regs.g4 != ctx.gpr[21]) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
        goto L_089389E0;
    }
    goto L_089389C8;
L_089389C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (4u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089389F8;
      }
      goto L_089389DC;
    }
}
L_089389DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    goto L_089389E0;
L_089389E0:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089389F8;
      }
      goto L_089389E8;
    }
L_089389E8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08938A00;
      }
      goto L_089389F0;
    }
L_089389F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938A14;
      }
      goto L_089389F8;
    }
L_089389F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938A00;
    }
L_08938A00:
    hot_regs.g31 = (0x08938A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938A08u) goto L_08938A08;
    return;
L_08938A08:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08938A24;
      }
      goto L_08938A14;
    }
L_08938A14:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938A2C;
      }
      goto L_08938A1C;
    }
L_08938A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938A24;
    }
L_08938A24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938A2C;
    }
L_08938A2C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (hot_regs.g4 & 2048u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08938AA8;
      }
      goto L_08938A3C;
    }
L_08938A3C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g4);
    hot_regs.g31 = (0x08938A58u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938A58u) goto L_08938A58;
    return;
L_08938A58:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08938A9C;
      }
      goto L_08938A60;
    }
L_08938A60:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    g5 = (0u | 31u);
    if (hot_regs.g4 != g5) {
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1364)));
    hot_regs.g5 = g5;
        goto L_08938B1C;
    }
    goto L_08938A70;
}
L_08938A70:
    hot_regs.g31 = (0x08938A78u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 396u, 0x08929C28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938A78u) goto L_08938A78;
    return;
L_08938A78:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 8u);
    hot_regs.g31 = (0x08938A88u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938A88u) goto L_08938A88;
    return;
L_08938A88:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08938A94u);
    hot_regs.g5 = (0u | 20000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938A94u) goto L_08938A94;
    return;
L_08938A94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938A9C;
    }
L_08938A9C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1764), hot_regs.g4);
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938AA8;
    }
L_08938AA8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 & 4096u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g4 = (g4 & 512u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08938ABC;
      }
      goto L_08938AB4;
    }
}
L_08938AB4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08938A60;
      }
      goto L_08938ABC;
    }
L_08938ABC:
    hot_regs.g31 = (0x08938AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938AC4u) goto L_08938AC4;
    return;
L_08938AC4:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19284)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19288)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08938AD8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938AD8u) goto L_08938AD8;
    return;
L_08938AD8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19276)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-19280)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g6 = (hot_regs.g2 >> 31u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g6 = (ctx.gpr[1] | hot_regs.g6);
    ctx.gpr[8] = (hot_regs.g6 + hot_regs.g4);
    ctx.gpr[9] = (ctx.gpr[8] < hot_regs.g4 ? 1u : 0u);
    hot_regs.g6 = (ctx.gpr[9] + hot_regs.g7);
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08938B14u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 654u, 0x089AB1F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938B14u) goto L_08938B14;
    return;
L_08938B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938B1C;
    }
L_08938B1C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(23))))));
    g6 = (0u | 100u);
    g5 = (g6 - g5);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(22))))));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08938B90;
      }
      goto L_08938B3C;
    }
}
L_08938B3C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 10u);
    hot_regs.g31 = (0x08938B4Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938B4Cu) goto L_08938B4C;
    return;
L_08938B4C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08938B58u);
    hot_regs.g5 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938B58u) goto L_08938B58;
    return;
L_08938B58:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g4);
    hot_regs.g31 = (0x08938B74u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938B74u) goto L_08938B74;
    return;
L_08938B74:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938B7C;
    }
L_08938B7C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08938B88u);
    hot_regs.g5 = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938B88u) goto L_08938B88;
    return;
L_08938B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938B90;
    }
L_08938B90:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08938BC0;
      }
      goto L_08938B9C;
    }
L_08938B9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1948)));
    g4 = (g4 + static_cast<std::uint32_t>(-7));
    g4 = (ctx.gpr[19] << (g4 & 31u));
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08938BDC;
      }
      goto L_08938BB8;
    }
}
L_08938BB8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08938BC8;
      }
      goto L_08938BC0;
    }
L_08938BC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938BC8;
    }
L_08938BC8:
    hot_regs.g31 = (0x08938BD0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 514u, 0x08906558u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938BD0u) goto L_08938BD0;
    return;
L_08938BD0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08938BDC;
      }
      goto L_08938BD8;
    }
L_08938BD8:
    hot_regs.g4 = (0u | 0u);
    goto L_08938BDC;
L_08938BDC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08938D30;
      }
      goto L_08938BE4;
    }
L_08938BE4:
    hot_regs.g31 = (0x08938BECu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938BECu) goto L_08938BEC;
    return;
L_08938BEC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08938C0C;
      }
      goto L_08938BF4;
    }
L_08938BF4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (0u | 16u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08938C0C;
      }
      goto L_08938C04;
    }
L_08938C04:
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08938C1C;
      }
      goto L_08938C0C;
    }
L_08938C0C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08938C18u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 119u, 0x089B4624u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938C18u) goto L_08938C18;
    return;
L_08938C18:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    goto L_08938C1C;
L_08938C1C:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 10 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08938C3C;
      }
      goto L_08938C28;
    }
L_08938C28:
    hot_regs.g6 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08938C48;
      }
      goto L_08938C34;
    }
L_08938C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938C4C;
      }
      goto L_08938C3C;
    }
L_08938C3C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 12 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08938C4C;
      }
      goto L_08938C48;
    }
}
L_08938C48:
    hot_regs.g5 = (0u | 1u);
    goto L_08938C4C;
L_08938C4C:
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
          goto L_08938C98;
      }
      goto L_08938C68;
    }
}
L_08938C68:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < 10 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g6 = (0u | 6u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08938C88;
      }
      goto L_08938C78;
    }
}
L_08938C78:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08938C94;
      }
      goto L_08938C80;
    }
L_08938C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938C98;
      }
      goto L_08938C88;
    }
L_08938C88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 12 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08938C98;
      }
      goto L_08938C94;
    }
}
L_08938C94:
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    goto L_08938C98;
L_08938C98:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08938D0C;
      }
      goto L_08938CA0;
    }
L_08938CA0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g4);
    hot_regs.g31 = (0x08938CBCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938CBCu) goto L_08938CBC;
    return;
L_08938CBC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08938CE8;
      }
      goto L_08938CC4;
    }
L_08938CC4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g31 = (0x08938CE0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938CE0u) goto L_08938CE0;
    return;
L_08938CE0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08938D0C;
      }
      goto L_08938CE8;
    }
L_08938CE8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 8u);
    hot_regs.g31 = (0x08938CF8u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938CF8u) goto L_08938CF8;
    return;
L_08938CF8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08938D04u);
    hot_regs.g5 = (0u | 20000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938D04u) goto L_08938D04;
    return;
L_08938D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D28;
      }
      goto L_08938D0C;
    }
L_08938D0C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 10u);
    hot_regs.g31 = (0x08938D1Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938D1Cu) goto L_08938D1C;
    return;
L_08938D1C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08938D28u);
    hot_regs.g5 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938D28u) goto L_08938D28;
    return;
L_08938D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938D4C;
      }
      goto L_08938D30;
    }
L_08938D30:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 10u);
    hot_regs.g31 = (0x08938D40u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938D40u) goto L_08938D40;
    return;
L_08938D40:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08938D4Cu);
    hot_regs.g5 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938D4Cu) goto L_08938D4C;
    return;
L_08938D4C:
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
L_08938D70:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08938E08;
      }
      goto L_08938D94;
    }
}
L_08938D94:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08938DD0;
      }
      goto L_08938DA4;
    }
L_08938DA4:
{
    std::uint32_t g18 = ctx.gpr[18];
    if (g18 == 0u) {
    g18 = (g18 + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = g18;
        goto L_08938DC8;
    }
    goto L_08938DAC;
}
L_08938DAC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08938DC4;
      }
      goto L_08938DB4;
    }
L_08938DB4:
    if (hot_regs.g4 == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
        goto L_08938DC8;
    }
    goto L_08938DBC;
L_08938DBC:
    hot_regs.g31 = (0x08938DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938DC4u) goto L_08938DC4;
    return;
L_08938DC4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_08938DC8;
L_08938DC8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08938DA4;
      }
      goto L_08938DD0;
    }
L_08938DD0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08938DF8;
      }
      goto L_08938DD8;
    }
L_08938DD8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (g4 == 0u) {
    g4 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = g4;
        goto L_08938DF8;
    }
    goto L_08938DE4;
}
L_08938DE4:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (ctx.gpr[16] & 1u);
        goto L_08938DF8;
    }
    goto L_08938DEC;
L_08938DEC:
    hot_regs.g31 = (0x08938DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938DF4u) goto L_08938DF4;
    return;
L_08938DF4:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    goto L_08938DF8;
L_08938DF8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08938E08;
      }
      goto L_08938E00;
    }
L_08938E00:
    hot_regs.g31 = (0x08938E08u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938E08u) goto L_08938E08;
    return;
L_08938E08:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08938E24:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7776), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7780), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7784), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08938E40u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18576));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938E40u) goto L_08938E40;
    return;
L_08938E40:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08938E4C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08938E68;
      }
      goto L_08938E60;
    }
}
L_08938E60:
    hot_regs.g31 = (0x08938E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938E68u) goto L_08938E68;
    return;
L_08938E68:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08938E78:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08938E88u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g29 = g29;
    goto L_0893A10C;
}
L_08938E88:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08938E98:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[9] = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08938EFC;
      }
      goto L_08938EA4;
    }
L_08938EA4:
    hot_regs.g7 = (0u | 92u);
    hot_regs.g6 = (0u | 32u);
    goto L_08938EAC;
L_08938EAC:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != hot_regs.g7;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08938EC0;
      }
      goto L_08938EB8;
    }
}
L_08938EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 47u);
      if (branch_taken) {
          goto L_08938EE0;
      }
      goto L_08938EC0;
    }
L_08938EC0:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (static_cast<std::int32_t>(ctx.gpr[8]) < 97 ? 1u : 0u);
    { const bool branch_taken = g10 != 0u;
    g10 = (static_cast<std::int32_t>(ctx.gpr[8]) < 123 ? 1u : 0u);
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08938EE0;
      }
      goto L_08938ECC;
    }
}
L_08938ECC:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938EE0;
      }
      goto L_08938ED4;
    }
L_08938ED4:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(-32));
    g8 = (g8 << 24u);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 24u));
    ctx.gpr[8] = g8;
    goto L_08938EE0;
}
L_08938EE0:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[8] == hot_regs.g6;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08938EF0;
      }
      goto L_08938EEC;
    }
}
L_08938EEC:
    ctx.gpr[9] = (hot_regs.g4 | 0u);
    goto L_08938EF0;
L_08938EF0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938EAC;
      }
      goto L_08938EFC;
    }
L_08938EFC:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08938F04:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08938F24;
      }
      goto L_08938F1C;
    }
}
L_08938F1C:
    hot_regs.g31 = (0x08938F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938F24u) goto L_08938F24;
    return;
L_08938F24:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g31 = (0x08938F30u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_089393CC;
L_08938F30:
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
L_08938F40:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08938F60;
      }
      goto L_08938F58;
    }
}
L_08938F58:
    hot_regs.g31 = (0x08938F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938F60u) goto L_08938F60;
    return;
L_08938F60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g31 = (0x08938F6Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_08939460;
L_08938F6C:
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
L_08938F7C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = hot_regs.g7 != 0u;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08938FAC;
      }
      goto L_08938FA4;
    }
}
L_08938FA4:
    hot_regs.g31 = (0x08938FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938FACu) goto L_08938FAC;
    return;
L_08938FAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08938FC0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    goto L_089394A4;
L_08938FC0:
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
L_08938FD8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08938FF8;
      }
      goto L_08938FF0;
    }
}
L_08938FF0:
    hot_regs.g31 = (0x08938FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08938FF8u) goto L_08938FF8;
    return;
L_08938FF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g31 = (0x08939004u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_089394FC;
L_08939004:
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
L_08939014:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08939034;
      }
      goto L_0893902C;
    }
}
L_0893902C:
    hot_regs.g31 = (0x08939034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08939034u) goto L_08939034;
    return;
L_08939034:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g31 = (0x08939040u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_08939504;
L_08939040:
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
L_08939050:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = hot_regs.g7 != 0u;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08939080;
      }
      goto L_08939078;
    }
}
L_08939078:
    hot_regs.g31 = (0x08939080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08939080u) goto L_08939080;
    return;
L_08939080:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08939094u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    goto L_0893950C;
L_08939094:
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
L_089390AC:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (g9 & 255u);
    g9 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = g9 != 0u;
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = g9;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089390F4;
      }
      goto L_089390EC;
    }
}
L_089390EC:
    hot_regs.g31 = (0x089390F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089390F4u) goto L_089390F4;
    return;
L_089390F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08939114u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    goto L_08939590;
L_08939114:
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
L_08939138:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08939158;
      }
      goto L_08939150;
    }
}
L_08939150:
    hot_regs.g31 = (0x08939158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08939158u) goto L_08939158;
    return;
L_08939158:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g31 = (0x08939164u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_08939704;
L_08939164:
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
L_08939174:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893919C;
      }
      goto L_08939194;
    }
}
L_08939194:
    hot_regs.g31 = (0x0893919Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893919Cu) goto L_0893919C;
    return;
L_0893919C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089391ACu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_089397CC;
L_089391AC:
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
L_089391C0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089391E0;
      }
      goto L_089391D8;
    }
}
L_089391D8:
    hot_regs.g31 = (0x089391E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089391E0u) goto L_089391E0;
    return;
L_089391E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g31 = (0x089391ECu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_0893987C;
L_089391EC:
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
L_089391FC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893921C;
      }
      goto L_08939214;
    }
}
L_08939214:
    hot_regs.g31 = (0x0893921Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893921Cu) goto L_0893921C;
    return;
L_0893921C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g31 = (0x08939228u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_08939948;
L_08939228:
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
L_08939238:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08939254;
      }
      goto L_0893924C;
    }
}
L_0893924C:
    hot_regs.g31 = (0x08939254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08939254u) goto L_08939254;
    return;
L_08939254:
    hot_regs.g31 = (0x0893925Cu);
    // nop
    goto L_08938E4C;
L_0893925C:
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
L_08939268:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08939284;
      }
      goto L_0893927C;
    }
}
L_0893927C:
    hot_regs.g31 = (0x08939284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08939284u) goto L_08939284;
    return;
L_08939284:
    hot_regs.g31 = (0x0893928Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    goto L_0893998C;
L_0893928C:
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
L_08939298:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089392B4;
      }
      goto L_089392AC;
    }
}
L_089392AC:
    hot_regs.g31 = (0x089392B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089392B4u) goto L_089392B4;
    return;
L_089392B4:
    hot_regs.g31 = (0x089392BCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    goto L_089399E0;
L_089392BC:
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
L_089392C8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089392E4;
      }
      goto L_089392DC;
    }
}
L_089392DC:
    hot_regs.g31 = (0x089392E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089392E4u) goto L_089392E4;
    return;
L_089392E4:
    hot_regs.g31 = (0x089392ECu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    goto L_08939A18;
L_089392EC:
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
L_089392F8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08939314;
      }
      goto L_0893930C;
    }
}
L_0893930C:
    hot_regs.g31 = (0x08939314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08939314u) goto L_08939314;
    return;
L_08939314:
    hot_regs.g31 = (0x0893931Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    goto L_08939A20;
L_0893931C:
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
L_08939328:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08939350;
      }
      goto L_08939348;
    }
}
L_08939348:
    hot_regs.g31 = (0x08939350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08939350u) goto L_08939350;
    return;
L_08939350:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08939360u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_08939A10;
L_08939360:
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
L_08939374:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (g4 & 255u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (hot_regs.g5 & 255u);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893939C;
      }
      goto L_08939394;
    }
}
L_08939394:
    hot_regs.g31 = (0x0893939Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 660u, 0x08B6B650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893939Cu) goto L_0893939C;
    return;
L_0893939C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5908)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089393ACu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_08939C58;
L_089393AC:
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
L_089393C0:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), 0u);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089393CC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(512), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(516), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(520), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(524), hot_regs.g31);
    hot_regs.g31 = (0x089393F0u);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_08939C14;
}
L_089393F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6896)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893943C;
      }
      goto L_089393FC;
    }
L_089393FC:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08939408u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_08938E98;
L_08939408:
    hot_regs.g31 = (0x08939410u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 196u, 0x088B53C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08939410u) goto L_08939410;
    return;
L_08939410:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893943C;
      }
      goto L_0893941C;
    }
L_0893941C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6896)));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(6896), g4);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(8), 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(4), g4);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    goto L_0893943C;
}
L_0893943C:
    hot_regs.g31 = (0x08939444u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08939C38;
L_08939444:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(512)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(516)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(520)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(524)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08939460:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x0893947Cu);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
    goto L_08939C14;
}
L_0893947C:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(6896)));
    hot_regs.g4 = (g16 | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g31 = (0x08939490u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(6896), ctx.gpr[17]);
    goto L_08939C38;
}
L_08939490:
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
L_089394A4:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (g6 | 0u);
    g6 = (0u | 2u);
    { const bool branch_taken = hot_regs.g7 != g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089394C0;
      }
      goto L_089394B4;
    }
}
L_089394B4:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g6 - hot_regs.g4);
      if (branch_taken) {
          goto L_089394D4;
      }
      goto L_089394C0;
    }
L_089394C0:
    hot_regs.g6 = (0u | 1u);
    { const bool branch_taken = hot_regs.g7 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_089394D4;
      }
      goto L_089394CC;
    }
L_089394CC:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    goto L_089394D4;
L_089394D4:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089394F4;
      }
      goto L_089394E0;
    }
L_089394E0:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    hot_regs.g4 = (g6 | 0u);
    hot_regs.g6 = g6;
        goto L_089394F0;
    }
    goto L_089394F0;
}
L_089394F0:
    hot_regs.g2 = (hot_regs.g4 | 0u);
    goto L_089394F4;
L_089394F4:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(8), hot_regs.g2);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089394FC:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939504:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893950C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08939530u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_08939590;
}
L_08939530:
    hot_regs.g31 = (0x08939538u);
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    ctx.pc = 0x08B7347Cu;
    return;
L_08939538:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0893955C;
      }
      goto L_08939544;
    }
L_08939544:
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18548));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08939554u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_08939A10;
L_08939554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939570;
      }
      goto L_0893955C;
    }
L_0893955C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2232u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08939570u);
    g6 = (g6 + static_cast<std::uint32_t>(-10840));
    hot_regs.g6 = g6;
    goto L_08939A10;
}
L_08939570:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893957Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_0893987C;
L_0893957C:
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
L_08939590:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[9] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g31 = (0x089395D4u);
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    hot_regs.g29 = g29;
    goto L_08939C14;
}
L_089395D4:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(6900)));
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(6900));
    g5 = (g5 - 0u);
    g5 = (hot_regs.g4 ^ g5);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08939614;
      }
      goto L_089395F4;
    }
}
L_089395F4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g5 = (g5 - g6);
    g6 = (g5 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08939624;
      }
      goto L_0893960C;
    }
}
L_0893960C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939628;
      }
      goto L_08939614;
    }
L_08939614:
    hot_regs.g31 = (0x0893961Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08939C38;
L_0893961C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089396DC;
      }
      goto L_08939624;
    }
L_08939624:
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    goto L_08939628;
L_08939628:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g5 = (g18 | 0u);
    g18 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(8), hot_regs.g5);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0893964C;
      }
      goto L_0893963C;
    }
}
L_0893963C:
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x0893964Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893964Cu) goto L_0893964C;
    return;
L_0893964C:
{
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(20), hot_regs.g4);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_0893967C;
      }
      goto L_08939674;
    }
}
L_08939674:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[20] = (hot_regs.g4 + ctx.gpr[20]);
    goto L_0893967C;
L_0893967C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(6908));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g4);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g6 - 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), 0u);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(4), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 1u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g18);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g18);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g4 = (g4 + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), g4);
    hot_regs.g31 = (0x089396D0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.pc = 0x08B73424u;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    return;
}
L_089396D0:
    hot_regs.g31 = (0x089396D8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08939C38;
L_089396D8:
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    goto L_089396DC;
L_089396DC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08939704:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08939720u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
    goto L_08939C14;
}
L_08939720:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089397B0;
      }
      goto L_08939728;
    }
L_08939728:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != 0u;
    g4 = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893973C;
      }
      goto L_08939734;
    }
}
L_08939734:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_0893973C;
      }
      goto L_0893973C;
    }
L_0893973C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089397B0;
      }
      goto L_08939744;
    }
L_08939744:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6916)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089397AC;
      }
      goto L_08939750;
    }
L_08939750:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = g4;
        goto L_08939768;
    }
    goto L_08939760;
}
L_08939760:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08939768;
L_08939768:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(40), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089397B0;
      }
      goto L_08939790;
    }
}
L_08939790:
    hot_regs.g31 = (0x08939798u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08939C38;
L_08939798:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089397A4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089397A4u) goto L_089397A4;
    return;
L_089397A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089397B8;
      }
      goto L_089397AC;
    }
L_089397AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_089397B0;
L_089397B0:
    hot_regs.g31 = (0x089397B8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08939C38;
L_089397B8:
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
L_089397CC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x089397F8u);
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_08939C14;
}
L_089397F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != 0u;
    g4 = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893980C;
      }
      goto L_08939804;
    }
}
L_08939804:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_0893980C;
      }
      goto L_0893980C;
    }
L_0893980C:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08939854;
      }
      goto L_08939814;
    }
L_08939814:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08939824;
      }
      goto L_0893981C;
    }
L_0893981C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    goto L_08939824;
L_08939824:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    hot_regs.g31 = (0x08939834u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08939834u) goto L_08939834;
    return;
L_08939834:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(6900));
    g4 = (g4 - 0u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g17);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g17);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08939854;
}
L_08939854:
    hot_regs.g31 = (0x0893985Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_08939C38;
L_0893985C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[19] | 0u);
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
L_0893987C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x089398A0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
    goto L_08939C14;
}
L_089398A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(g4));
    hot_regs.g31 = (0x089398B0u);
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
    goto L_08939C38;
}
L_089398B0:
    ctx.gpr[19] = (0u | 1000u);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    goto L_089398B8;
L_089398B8:
    hot_regs.g31 = (0x089398C0u);
    // nop
    ctx.pc = 0x08B7347Cu;
    return;
L_089398C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089398DC;
      }
      goto L_089398CC;
    }
L_089398CC:
    hot_regs.g31 = (0x089398D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089398D4u) goto L_089398D4;
    return;
L_089398D4:
    hot_regs.g31 = (0x089398DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089398DCu) goto L_089398DC;
    return;
L_089398DC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089398ECu);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    goto L_089397CC;
L_089398EC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089398FC;
      }
      goto L_089398F4;
    }
L_089398F4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0893992C;
      }
      goto L_089398FC;
    }
L_089398FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08939908u);
    hot_regs.g5 = (0u | 1u);
    ctx.pc = 0x08B73424u;
    return;
L_08939908:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (0u | 32u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08939924u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B734ACu;
    return;
L_08939924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089398B8;
      }
      goto L_0893992C;
    }
L_0893992C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08939948:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08939964u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
    goto L_08939C14;
}
L_08939964:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), hot_regs.g5);
    hot_regs.g31 = (0x08939978u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6920), ctx.gpr[17]);
    goto L_08939C38;
L_08939978:
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
L_0893998C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089399A4u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_08939C14;
}
L_089399A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(6908)));
    g5 = (g16 + static_cast<std::uint32_t>(6908));
    g5 = (g5 - 0u);
    g4 = (g4 ^ g5);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    ctx.gpr[17] = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g31 = (0x089399C8u);
    g4 = (g16 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08939C38;
}
L_089399C8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
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
L_089399E0:
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08939A04;
      }
      goto L_089399EC;
    }
L_089399EC:
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(45)));
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 1u);
        goto L_08939A08;
    }
    goto L_089399F8;
L_089399F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(43)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08939A08;
      }
      goto L_08939A04;
    }
}
L_08939A04:
    hot_regs.g5 = (0u | 1u);
    goto L_08939A08;
L_08939A08:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g5 & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939A10:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939A18:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(46)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939A20:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (0u | 4u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08939A40u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B734ACu;
    hot_regs.g29 = g29;
    return;
}
L_08939A40:
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
L_08939A4C:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g6 = (g4 | 0u);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(36)));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(32)));
    g11 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18524)));
    g10 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18528)));
    g8 = (g8 + g10);
    g7 = (g8 < g10 ? 1u : 0u);
    g7 = (g7 + g9);
    g9 = (g7 + g11);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    g1 = (g9 << 21u);
    g10 = (g8 >> 11u);
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g9) >> 11u));
    g10 = (g1 | g10);
    g10 = (g11 >> 21u);
    g8 = (g8 + g10);
    g7 = (g8 < g10 ? 1u : 0u);
    g11 = (0u | 0u);
    g7 = (g7 + g9);
    g2 = (hot_regs.g5 | 0u);
    ctx.gpr[3] = (0u | 0u);
    g9 = (g7 + g11);
    g1 = (g9 << 21u);
    g8 = (g8 >> 11u);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g9) >> 11u));
    g8 = (g1 | g8);
    g4 = (g2 < g8 ? 1u : 0u);
    g7 = (ctx.gpr[3] - g9);
    g8 = (g2 - g8);
    g9 = (g7 - g4);
    g4 = (g8 | 0u);
    g7 = (static_cast<std::int32_t>(g4) < -32 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    // nop
    ctx.gpr[1] = g1;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08939AEC;
      }
      goto L_08939AD8;
    }
}
L_08939AD8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08939B2C;
      }
      goto L_08939AE0;
    }
L_08939AE0:
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g4) < 65 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_08939B14;
      }
      goto L_08939AEC;
    }
L_08939AEC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g4) < 3000 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (0u | 150u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08939B34;
      }
      goto L_08939B0C;
    }
}
}
L_08939B0C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 200u);
      if (branch_taken) {
          goto L_08939B40;
      }
      goto L_08939B14;
    }
L_08939B14:
    hot_regs.g7 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x08939B24u);
    hot_regs.g6 = (hot_regs.g7 | 0u);
    goto L_08939B4C;
L_08939B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939B40;
      }
      goto L_08939B2C;
    }
L_08939B2C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08939B40;
      }
      goto L_08939B34;
    }
L_08939B34:
{
    std::uint32_t g2 = hot_regs.g2;
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g2 = (ctx.lo);
    g2 = (g2 + static_cast<std::uint32_t>(300));
    hot_regs.g2 = g2;
    goto L_08939B40;
}
L_08939B40:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08939B4C:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (20224u << 16u);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) >= 0;
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08939B6C;
      }
      goto L_08939B60;
    }
}
L_08939B60:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    goto L_08939B6C;
L_08939B6C:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (13747u << 16u);
    g4 = (g4 | 52830u);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (16295u << 16u);
    g4 = (g4 | 3293u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    f14 = std::bit_cast<float>(hot_regs.g5);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) >= 0;
    f13 = f13 - hot_regs.f15;
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08939BA4;
      }
      goto L_08939B98;
    }
}
}
L_08939B98:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    goto L_08939BA4;
L_08939BA4:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g4 = (18749u << 16u);
    g4 = (g4 | 29536u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(hot_regs.g6);
    f14 = f14 + hot_regs.f15;
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) >= 0;
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08939BD0;
      }
      goto L_08939BC4;
    }
}
}
L_08939BC4:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f15;
    goto L_08939BD0;
L_08939BD0:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    { const float fs = f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    hot_regs.g4 = (14976u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.set_fpu_condition((f14 < f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f14 - f12;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
        goto L_08939BFC;
    }
    goto L_08939BF0;
}
L_08939BF0:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08939C0C;
      }
      goto L_08939BFC;
    }
L_08939BFC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    g2 = (hot_regs.g4 + g2);
    hot_regs.g2 = g2;
    hot_regs.f12 = f12;
    goto L_08939C0C;
}
}
L_08939C0C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939C14:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08939C2Cu);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    hot_regs.g29 = g29;
    return;
}
L_08939C2C:
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
L_08939C38:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08939C4Cu);
    hot_regs.g5 = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    hot_regs.g29 = g29;
    return;
}
L_08939C4C:
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
L_08939C58:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g6 & 255u);
    hot_regs.g31 = (0x08939C80u);
    // nop
    hot_regs.g29 = g29;
    goto L_08939C14;
}
L_08939C80:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08939CA0;
      }
      goto L_08939C90;
    }
L_08939C90:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08939CA0;
      }
      goto L_08939C9C;
    }
L_08939C9C:
    hot_regs.g4 = (0u | 1u);
    goto L_08939CA0;
L_08939CA0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[17] = (hot_regs.g4 & g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08939CB4u);
    g5 = (0u | 1u);
    ctx.pc = 0x08B73424u;
    hot_regs.g5 = g5;
    return;
}
L_08939CB4:
    hot_regs.g31 = (0x08939CBCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08939C38;
L_08939CBC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939CCC;
      }
      goto L_08939CC4;
    }
L_08939CC4:
    hot_regs.g31 = (0x08939CCCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08939A20;
L_08939CCC:
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
L_08939CE4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(6900));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[17] - 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), hot_regs.g31);
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-27316));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(240));
    hot_regs.g7 = (2196u << 16u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-27712));
    hot_regs.g5 = (0u | 128u);
    hot_regs.g31 = (0x08939D24u);
    hot_regs.g6 = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08939D24u) goto L_08939D24;
    return;
L_08939D24:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(6904), ctx.gpr[17]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(6900), ctx.gpr[17]);
    g4 = (g16 + static_cast<std::uint32_t>(6908));
    g4 = (g4 - 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(6912), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(6908), g4);
    hot_regs.g31 = (0x08939D44u);
    // nop
    ctx.pc = 0x08B7347Cu;
    hot_regs.g4 = g4;
    return;
}
L_08939D44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    g4 = (0u | 1u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    g4 = (g16 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(6896), g4);
    g4 = (0u | 0u);
    hot_regs.g5 = (g16 + static_cast<std::uint32_t>(60));
    hot_regs.g6 = (g16 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    goto L_08939D78;
}
L_08939D78:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(12));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 15 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08939D78;
      }
      goto L_08939D90;
    }
}
L_08939D90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(228));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(240));
    hot_regs.g4 = g4;
    goto L_08939DA0;
}
L_08939DA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g17);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g6);
    g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g5);
    g6 = (static_cast<std::int32_t>(g4) < 128 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(52));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08939DA0;
      }
      goto L_08939DC8;
    }
}
L_08939DC8:
    hot_regs.g31 = (0x08939DD0u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 209u, 0x088B5488u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08939DD0u) goto L_08939DD0;
    return;
L_08939DD0:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (hot_regs.g2 | 0u);
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 0u);
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g6 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08939E28;
      }
      goto L_08939DE8;
    }
}
L_08939DE8:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g7 = (g7 + hot_regs.g6);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(8)));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    g8 = (g8 + static_cast<std::uint32_t>(2047));
    g8 = (g8 >> 11u);
    g7 = (g7 + g8);
    g8 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g8 == 0u;
    // nop
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08939E14;
      }
      goto L_08939E10;
    }
}
L_08939E10:
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    goto L_08939E14;
L_08939E14:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g7 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(12));
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08939DE8;
      }
      goto L_08939E28;
    }
}
L_08939E28:
    hot_regs.g5 = (2232u << 16u);
    hot_regs.g6 = (ctx.gpr[17] << 3u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08939E3Cu);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-10816));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08939E3Cu) goto L_08939E3C;
    return;
L_08939E3C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6916), 0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08939E50u);
    hot_regs.g6 = (0u | 511u);
    ctx.pc = 0x08B73694u;
    return;
L_08939E50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), hot_regs.g2);
    hot_regs.g5 = (0u | 512u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08939E6Cu);
    g4 = (g4 + static_cast<std::uint32_t>(-10784));
    ctx.pc = 0x08B734C4u;
    hot_regs.g4 = g4;
    return;
}
L_08939E6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18520));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08939E88u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B7341Cu;
    return;
L_08939E88:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2196u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18504));
    hot_regs.g7 = (0u | 32768u);
    hot_regs.g6 = (0u | 32u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g31 = (0x08939EACu);
    g5 = (g5 + static_cast<std::uint32_t>(-29064));
    ctx.pc = 0x08B734B4u;
    hot_regs.g5 = g5;
    return;
}
L_08939EAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), hot_regs.g2);
    hot_regs.g31 = (0x08939EBCu);
    hot_regs.g5 = (0u | 4u);
    ctx.pc = 0x08B73424u;
    return;
L_08939EBC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18476)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18480)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(36), g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(32), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), g16);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g31 = (0x08939EE4u);
    g5 = (0u | 4u);
    ctx.pc = 0x08B73464u;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    return;
}
L_08939EE4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08939EFC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g21);
    g21 = (g4 + static_cast<std::uint32_t>(6908));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g16);
    g21 = (g21 - 0u);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), hot_regs.g31);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(6908)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g21);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (32768u << 16u);
    g4 = (g4 ^ hot_regs.g5);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g17 = (g17 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    ctx.gpr[21] = g21;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893A080;
      }
      goto L_08939F84;
    }
}
L_08939F84:
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08939FA8;
      }
      goto L_08939F94;
    }
L_08939F94:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08939FA8;
      }
      goto L_08939FA0;
    }
L_08939FA0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0893A048;
      }
      goto L_08939FA8;
    }
L_08939FA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g23 = ctx.gpr[23];
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    g23 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g5 >> 11u);
    g23 = (g23 + g4);
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08939FC8u);
    g5 = (g23 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[23] = g23;
    goto L_08939A4C;
}
L_08939FC8:
    ctx.gpr[30] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08939FE0;
      }
      goto L_08939FD8;
    }
L_08939FD8:
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    goto L_08939FE0;
L_08939FE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = g4;
        goto L_08939FF8;
    }
    goto L_08939FEC;
}
L_08939FEC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0893A048;
      }
      goto L_08939FF4;
    }
L_08939FF4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    goto L_08939FF8;
L_08939FF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g4 + static_cast<std::uint32_t>(2047));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 11u));
    g5 = (g5 >> 21u);
    g4 = (g4 + g5);
    g6 = (g4 + static_cast<std::uint32_t>(2047));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 11u));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893A01Cu);
    g5 = (ctx.gpr[23] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08939B4C;
}
L_0893A01C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    g4 = (g5 - g4);
    g4 = (g4 + hot_regs.g2);
    g4 = (g4 + ctx.gpr[30]);
    g5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893A044;
      }
      goto L_0893A03C;
    }
}
L_0893A03C:
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    goto L_0893A044;
L_0893A044:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    goto L_0893A048;
L_0893A048:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[21]);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g4 = (g4 ^ g5);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08939F84;
      }
      goto L_0893A080;
    }
}
L_0893A080:
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    if (ctx.gpr[20] != 0u) {
    hot_regs.g2 = (ctx.gpr[20] | 0u);
        goto L_0893A08C;
    }
    goto L_0893A08C;
L_0893A08C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893A0BC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893A100;
      }
      goto L_0893A0CC;
    }
}
L_0893A0CC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2235u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-27332));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), g6);
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5908), 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0893A0EC;
      }
      goto L_0893A0E0;
    }
}
L_0893A0E0:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2235u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), g6);
    hot_regs.g6 = g6;
    goto L_0893A0EC;
}
L_0893A0EC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893A100;
      }
      goto L_0893A0F8;
    }
}
L_0893A0F8:
    hot_regs.g31 = (0x0893A100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893A100u) goto L_0893A100;
    return;
L_0893A100:
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
L_0893A10C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    ctx.gpr[22] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    hot_regs.g29 = g29;
    goto L_0893A138;
}
L_0893A138:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552), g4);
    hot_regs.g31 = (0x0893A150u);
    g4 = (g4 & 255u);
    ctx.pc = 0x08B733DCu;
    hot_regs.g4 = g4;
    return;
}
L_0893A150:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0893A168u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B734ACu;
    return;
L_0893A168:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552)));
    g4 = (g4 | 128u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552), g4);
    hot_regs.g31 = (0x0893A17Cu);
    g4 = (g4 & 255u);
    ctx.pc = 0x08B733DCu;
    hot_regs.g4 = g4;
    return;
}
L_0893A17C:
    hot_regs.g31 = (0x0893A184u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_0893A184:
    hot_regs.g4 = (hot_regs.g2 & 32u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A230;
      }
      goto L_0893A190;
    }
L_0893A190:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(6916), 0u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    goto L_0893A198;
L_0893A198:
    hot_regs.g31 = (0x0893A1A0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.pc = 0x08B73114u;
    return;
L_0893A1A0:
    hot_regs.g4 = (hot_regs.g2 & 1u);
    if (hot_regs.g4 != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_0893A1D8;
    }
    goto L_0893A1AC;
L_0893A1AC:
    hot_regs.g31 = (0x0893A1B4u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_0893A1B4:
    hot_regs.g4 = (hot_regs.g2 & 32u);
    if (hot_regs.g4 == 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_0893A1D8;
    }
    goto L_0893A1C0;
L_0893A1C0:
    hot_regs.g31 = (0x0893A1C8u);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_0893A1C8:
    hot_regs.g4 = (hot_regs.g2 & 8u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A1D8;
      }
      goto L_0893A1D4;
    }
L_0893A1D4:
    ctx.gpr[16] = (0u | 1u);
    goto L_0893A1D8;
L_0893A1D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[16]));
    hot_regs.g31 = (0x0893A1E8u);
    hot_regs.g5 = (0u | 2u);
    ctx.pc = 0x08B73424u;
    return;
L_0893A1E8:
    hot_regs.g4 = (0u | 32u);
    hot_regs.g31 = (0x0893A1F4u);
    hot_regs.g5 = (0u | 1000u);
    ctx.pc = 0x08B7310Cu;
    return;
L_0893A1F4:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893A204;
      }
      goto L_0893A1FC;
    }
L_0893A1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A228;
      }
      goto L_0893A204;
    }
L_0893A204:
    hot_regs.g31 = (0x0893A20Cu);
    // nop
    ctx.pc = 0x08B73114u;
    return;
L_0893A20C:
    hot_regs.g4 = (hot_regs.g2 & 32u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A228;
      }
      goto L_0893A218;
    }
L_0893A218:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_0893A230;
      }
      goto L_0893A228;
    }
L_0893A228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A198;
      }
      goto L_0893A230;
    }
L_0893A230:
    hot_regs.g31 = (0x0893A238u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08939C14;
L_0893A238:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A250;
      }
      goto L_0893A244;
    }
L_0893A244:
    hot_regs.g31 = (0x0893A24Cu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08939EFC;
L_0893A24C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(6916), hot_regs.g2);
    goto L_0893A250;
L_0893A250:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A284;
      }
      goto L_0893A25C;
    }
L_0893A25C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x0893A268u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    ctx.pc = 0x08B734FCu;
    return;
L_0893A268:
    hot_regs.g31 = (0x0893A270u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08939C38;
L_0893A270:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x0893A27Cu);
    hot_regs.g5 = (0u | 2u);
    ctx.pc = 0x08B73424u;
    return;
L_0893A27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A770;
      }
      goto L_0893A284;
    }
L_0893A284:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A2C0;
      }
      goto L_0893A290;
    }
L_0893A290:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893A2C0;
      }
      goto L_0893A2A0;
    }
}
L_0893A2A0:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(31984));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x0893A2C0u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893A2C0u) goto L_0893A2C0;
    return;
L_0893A2C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6920)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0893A2D4;
      }
      goto L_0893A2D0;
    }
L_0893A2D0:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(6920), 0u);
    goto L_0893A2D4;
L_0893A2D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x0893A2E0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-5));
    ctx.pc = 0x08B734FCu;
    return;
L_0893A2E0:
    hot_regs.g31 = (0x0893A2E8u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08939C38;
L_0893A2E8:
    hot_regs.g31 = (0x0893A2F0u);
    // nop
    ctx.pc = 0x08B73494u;
    return;
L_0893A2F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    ctx.gpr[23] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18468)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18472)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x0893A310u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893A310u) goto L_0893A310;
    return;
L_0893A310:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    g5 = (0u | 0u);
    g16 = (hot_regs.g2 + g4);
    g7 = (g16 < g4 ? 1u : 0u);
    g7 = (g7 + ctx.gpr[3]);
    ctx.gpr[17] = (g7 + g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = g16 != g4;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0893A340;
      }
      goto L_0893A338;
    }
}
L_0893A338:
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0893A3B8;
      }
      goto L_0893A340;
    }
L_0893A340:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    g1 = (g17 << 21u);
    g4 = (ctx.gpr[16] >> 11u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 11u));
    g4 = (g1 | g4);
    g4 = (g5 >> 21u);
    g6 = (ctx.gpr[16] + g4);
    g7 = (g6 < g4 ? 1u : 0u);
    g5 = (0u | 0u);
    g7 = (g7 + g17);
    g5 = (g7 + g5);
    g4 = (g6 | 0u);
    g1 = (g5 << 21u);
    g4 = (g4 >> 11u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 11u));
    g4 = (g1 | g4);
    g5 = (g4 | 0u);
    hot_regs.g31 = (0x0893A388u);
    g4 = (ctx.gpr[22] | 0u);
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_08939A4C;
}
L_0893A388:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893A39Cu);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B7369Cu;
    return;
L_0893A39C:
    hot_regs.g4 = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0893A4A0;
      }
      goto L_0893A3B8;
    }
L_0893A3B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 & 2047u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (1u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893A3E0;
      }
      goto L_0893A3CC;
    }
}
L_0893A3CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    g16 = (0u | 2048u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 & 2047u);
    g16 = (g16 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    goto L_0893A3E0;
}
L_0893A3E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893A3FC;
      }
      goto L_0893A3F4;
    }
}
L_0893A3F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(24)));
    goto L_0893A3FC;
L_0893A3FC:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g22 = ctx.gpr[22];
    g5 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(36)));
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(32)));
    g1 = (g5 << 21u);
    g6 = (g4 >> 11u);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 11u));
    g6 = (g1 | g6);
    g6 = (g7 >> 21u);
    g8 = (g4 + g6);
    ctx.gpr[9] = (g8 < g6 ? 1u : 0u);
    g7 = (0u | 0u);
    g4 = (ctx.gpr[9] + g5);
    g7 = (g4 + g7);
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(2047));
    g6 = (g8 | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 11u));
    g1 = (g7 << 21u);
    g6 = (g6 >> 11u);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 11u));
    g6 = (g1 | g6);
    g4 = (g4 >> 21u);
    g5 = (g6 | 0u);
    g4 = (ctx.gpr[16] + g4);
    g6 = (g4 + static_cast<std::uint32_t>(2047));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 11u));
    hot_regs.g31 = (0x0893A464u);
    g4 = (g22 | 0u);
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08939B4C;
}
L_0893A464:
{
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 31u));
    { const bool branch_taken = g16 == 0u;
    ctx.gpr[20] = (g16 | 0u);
      if (branch_taken) {
          goto L_0893A498;
      }
      goto L_0893A470;
    }
}
L_0893A470:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (g6 + hot_regs.g7);
    hot_regs.g31 = (0x0893A48Cu);
    g6 = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B73624u;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    return;
}
L_0893A48C:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g2) >> 31u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_0893A4A0;
      }
      goto L_0893A498;
    }
L_0893A498:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18476)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18480)));
    goto L_0893A4A0;
L_0893A4A0:
    hot_regs.g31 = (0x0893A4A8u);
    // nop
    ctx.pc = 0x08B73494u;
    return;
L_0893A4A8:
    hot_regs.g4 = (hot_regs.g2 - ctx.gpr[23]);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x0893A4BCu);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_0893A4BC:
    hot_regs.g31 = (0x0893A4C4u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08939C14;
L_0893A4C4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A54C;
      }
      goto L_0893A4D0;
    }
L_0893A4D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893A530;
      }
      goto L_0893A4E0;
    }
}
L_0893A4E0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A530;
      }
      goto L_0893A4EC;
    }
L_0893A4EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18460)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18464)));
    g6 = (ctx.gpr[19] ^ g5);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (ctx.gpr[18] < g4 ? 1u : 0u);
    hot_regs.g7 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    g4 = (g6 & g4);
    g4 = (g4 | hot_regs.g7);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0893A530;
      }
      goto L_0893A514;
    }
}
L_0893A514:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    g5 = (21845u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g5 = (g5 + static_cast<std::uint32_t>(21845));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (hot_regs.g6 ^ g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0893A530;
}
L_0893A530:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(31984));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x0893A548u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893A548u) goto L_0893A548;
    return;
L_0893A548:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    goto L_0893A54C;
L_0893A54C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x0893A558u);
    hot_regs.g5 = (0u | 4u);
    ctx.pc = 0x08B73424u;
    return;
L_0893A558:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0893A568;
      }
      goto L_0893A560;
    }
L_0893A560:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0893A5D8;
      }
      goto L_0893A568;
    }
L_0893A568:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552)));
    g4 = (g4 | 64u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552), g4);
    hot_regs.g31 = (0x0893A57Cu);
    g4 = (g4 & 255u);
    ctx.pc = 0x08B733DCu;
    hot_regs.g4 = g4;
    return;
}
L_0893A57C:
    hot_regs.g31 = (0x0893A584u);
    hot_regs.g4 = (0u | 5000u);
    ctx.pc = 0x08B7340Cu;
    return;
L_0893A584:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(6916)));
    g5 = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18452)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18456)));
    hot_regs.g6 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(6916)));
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(36), g5);
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(32), g4);
    g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(36)));
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893A5C0;
      }
      goto L_0893A5B4;
    }
}
L_0893A5B4:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_0893A5D0;
      }
      goto L_0893A5C0;
    }
L_0893A5C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0893A5D0;
}
L_0893A5D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(6916), 0u);
      if (branch_taken) {
          goto L_0893A730;
      }
      goto L_0893A5D8;
    }
L_0893A5D8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A5F4;
      }
      goto L_0893A5E4;
    }
L_0893A5E4:
{
    std::uint32_t g22 = ctx.gpr[22];
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0893A730;
      }
      goto L_0893A5F4;
    }
}
L_0893A5F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893A60C;
      }
      goto L_0893A608;
    }
}
L_0893A608:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_0893A60C;
L_0893A60C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-65));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-18552), g4);
    hot_regs.g31 = (0x0893A624u);
    g4 = (g4 & 255u);
    ctx.pc = 0x08B733DCu;
    hot_regs.g4 = g4;
    return;
}
L_0893A624:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(6916)));
    g7 = (0u | 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), 0u);
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(6916)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g5 = (g6 + g18);
    g8 = (g5 < g18 ? 1u : 0u);
    g6 = (g8 + g7);
    g7 = (g6 + g19);
    g6 = (g5 | 0u);
    g5 = (g6 | 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), g5);
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(6916)));
    g7 = (0u | 0u);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g5 = (g6 + g18);
    g8 = (g5 < g18 ? 1u : 0u);
    g6 = (g8 + g7);
    g7 = (g6 + g19);
    g6 = (g5 | 0u);
    g5 = (g6 | 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), g5);
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(6916)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 31u));
    g5 = (g6 < g18 ? 1u : 0u);
    g8 = (g7 - g19);
    g6 = (g6 - g18);
    g7 = (g8 - g5);
    g5 = (g6 | 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), g5);
    g5 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(36)));
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(32)));
    g6 = (g4 + g18);
    g7 = (g6 < g18 ? 1u : 0u);
    g4 = (g7 + g5);
    g5 = (g4 + g19);
    g4 = (g6 | 0u);
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(36), g5);
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(32), g4);
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(6916)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) > 0;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0893A72C;
      }
      goto L_0893A6D4;
    }
}
L_0893A6D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(6916)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), g5);
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(6916)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g5);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(6916)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0893A72C;
      }
      goto L_0893A70C;
    }
}
L_0893A70C:
    hot_regs.g31 = (0x0893A714u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08939C38;
L_0893A714:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6916)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x0893A724u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893A724u) goto L_0893A724;
    return;
L_0893A724:
    hot_regs.g31 = (0x0893A72Cu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08939C14;
L_0893A72C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(6916), 0u);
    goto L_0893A730;
L_0893A730:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6908)));
    g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(6908));
    g5 = (g5 - 0u);
    g4 = (g4 ^ g5);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893A75C;
      }
      goto L_0893A750;
    }
}
L_0893A750:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x0893A75Cu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    ctx.pc = 0x08B734FCu;
    return;
L_0893A75C:
    hot_regs.g31 = (0x0893A764u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08939C38;
L_0893A764:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x0893A770u);
    hot_regs.g5 = (0u | 2u);
    ctx.pc = 0x08B73424u;
    return;
L_0893A770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A138;
      }
      goto L_0893A778;
    }
L_0893A778:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893A7A4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893A814;
      }
      goto L_0893A7C4;
    }
}
L_0893A7C4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A7E8;
      }
      goto L_0893A7CC;
    }
L_0893A7CC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(8));
    goto L_0893A7E8;
}
L_0893A7E8:
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x0893A7FCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 102u, 0x088906E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893A7FCu) goto L_0893A7FC;
    return;
L_0893A7FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g5 = (2247u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(12), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(16), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0893A814;
}
L_0893A814:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893A824:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0893A838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 98u, 0x08890624u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893A838u) goto L_0893A838;
    return;
L_0893A838:
    hot_regs.g31 = (0x0893A840u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893A840u) goto L_0893A840;
    return;
L_0893A840:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893A84Cu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 110u, 0x0889078Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893A84Cu) goto L_0893A84C;
    return;
L_0893A84C:
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
L_0893A860:
    hot_regs.g5 = (0u | 0u);
    goto L_0893A864;
L_0893A864:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (g5 << 4u);
    g7 = (g6 - g5);
    g7 = (g7 << 2u);
    g6 = (g7 - g6);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (hot_regs.g4 + g6);
    g5 = (g5 << 16u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (static_cast<std::int32_t>(g5) < 8 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0893A864;
      }
      goto L_0893A894;
    }
}
L_0893A894:
    hot_regs.g5 = (0u | 25u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A8A0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893A9A4;
      }
      goto L_0893A8B8;
    }
}
L_0893A8B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893A9A4;
      }
      goto L_0893A8CC;
    }
}
L_0893A8CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0893A8DC;
L_0893A8DC:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A974;
      }
      goto L_0893A8E4;
    }
L_0893A8E4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = g5 == 0u;
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893A974;
      }
      goto L_0893A8F0;
    }
}
L_0893A8F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g8);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g9);
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g8);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), g9);
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), g7);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), g8);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(40)));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), g9);
    g6 = (g6 << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), g7);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), g5);
    g4 = (g6 << 4u);
    g7 = (g4 - g6);
    g7 = (g7 << 2u);
    g4 = (g7 - g4);
    g5 = (static_cast<std::int32_t>(g6) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    g4 = (ctx.gpr[16] + g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_0893A8DC;
      }
      goto L_0893A974;
    }
}
L_0893A974:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893A9A4;
      }
      goto L_0893A984;
    }
}
L_0893A984:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (0x0893A9A4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893A9A4u) goto L_0893A9A4;
    return;
L_0893A9A4:
    hot_regs.g31 = (0x0893A9ACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0893AA9C;
L_0893A9AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AA8C;
      }
      goto L_0893A9B8;
    }
L_0893A9B8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(32304));
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(2052)));
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = g5 == hot_regs.g4;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893AA50;
      }
      goto L_0893A9D0;
    }
}
L_0893A9D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A9E8;
      }
      goto L_0893A9DC;
    }
L_0893A9DC:
    hot_regs.g31 = (0x0893A9E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893A9E4u) goto L_0893A9E4;
    return;
L_0893A9E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0893A9E8;
L_0893A9E8:
    hot_regs.g31 = (0x0893A9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 580u, 0x089BABACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893A9F0u) goto L_0893A9F0;
    return;
L_0893A9F0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AA50;
      }
      goto L_0893A9F8;
    }
L_0893A9F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AA10;
      }
      goto L_0893AA04;
    }
L_0893AA04:
    hot_regs.g31 = (0x0893AA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893AA0Cu) goto L_0893AA0C;
    return;
L_0893AA0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0893AA10;
L_0893AA10:
    hot_regs.g31 = (0x0893AA18u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 552u, 0x089BAA4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893AA18u) goto L_0893AA18;
    return;
L_0893AA18:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AA50;
      }
      goto L_0893AA24;
    }
L_0893AA24:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AA3C;
      }
      goto L_0893AA30;
    }
L_0893AA30:
    hot_regs.g31 = (0x0893AA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893AA38u) goto L_0893AA38;
    return;
L_0893AA38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0893AA3C;
L_0893AA3C:
    hot_regs.g31 = (0x0893AA44u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 552u, 0x089BAA4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893AA44u) goto L_0893AA44;
    return;
L_0893AA44:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AA60;
      }
      goto L_0893AA50;
    }
L_0893AA50:
    hot_regs.g31 = (0x0893AA58u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0893ABE8;
L_0893AA58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AA8C;
      }
      goto L_0893AA60;
    }
L_0893AA60:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    g5 = (g5 < hot_regs.g4 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893AA8C;
      }
      goto L_0893AA74;
    }
}
L_0893AA74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(8)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g5));
    g4 = (g4 + hot_regs.g6);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0893AA8C;
}
L_0893AA8C:
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
L_0893AA9C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-1040));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(1024), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(1028), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(1032), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(1036), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (g29 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893AB6C;
      }
      goto L_0893AAC4;
    }
}
L_0893AAC4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (0x0893AAE4u);
    ctx.gpr[11] = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 515u, 0x08ABAD24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893AAE4u) goto L_0893AAE4;
    return;
L_0893AAE4:
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g7 = (0u | 32u);
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    goto L_0893AAF4;
L_0893AAF4:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AB6C;
      }
      goto L_0893AAFC;
    }
L_0893AAFC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AB6C;
      }
      goto L_0893AB04;
    }
L_0893AB04:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    g8 = (g8 + ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(g8) >= 0;
    // nop
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0893AB30;
      }
      goto L_0893AB14;
    }
}
L_0893AB14:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g18 + static_cast<std::uint32_t>(512), static_cast<std::uint16_t>(hot_regs.g7));
    g17 = (g17 & 65535u);
    g18 = (g17 + g17);
    hot_regs.g6 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    g18 = (hot_regs.g29 + g18);
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0893AB64;
      }
      goto L_0893AB30;
    }
}
L_0893AB30:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + g8);
    g8 = (hot_regs.g29 + g8);
    g8 = (aot_mem.aot_load16(g8 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g8 == 0u;
    // nop
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0893AB60;
      }
      goto L_0893AB44;
    }
}
L_0893AB44:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g18 + static_cast<std::uint32_t>(512), static_cast<std::uint16_t>(ctx.gpr[8]));
    g17 = (g17 & 65535u);
    g18 = (g17 + g17);
    hot_regs.g6 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    g18 = (hot_regs.g29 + g18);
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0893AB64;
      }
      goto L_0893AB60;
    }
}
L_0893AB60:
    hot_regs.g4 = (0u | 1u);
    goto L_0893AB64;
L_0893AB64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AAF4;
      }
      goto L_0893AB6C;
    }
L_0893AB6C:
{
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store16(g18 + static_cast<std::uint32_t>(512), static_cast<std::uint16_t>(0u));
    g18 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = g18 != 0u;
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0893AB8C;
      }
      goto L_0893AB7C;
    }
}
L_0893AB7C:
    hot_regs.g31 = (0x0893AB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893AB84u) goto L_0893AB84;
    return;
L_0893AB84:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
    goto L_0893AB8C;
L_0893AB8C:
    hot_regs.g31 = (0x0893AB94u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 635u, 0x089BAFB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893AB94u) goto L_0893AB94;
    return;
L_0893AB94:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1024)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1028)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1032)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1036)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893ABAC:
    hot_regs.g5 = (0u | 0u);
    goto L_0893ABB0;
L_0893ABB0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (g5 << 4u);
    g7 = (g6 - g5);
    g7 = (g7 << 2u);
    g6 = (g7 - g6);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (hot_regs.g4 + g6);
    g5 = (g5 << 16u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (static_cast<std::int32_t>(g5) < 8 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0893ABB0;
      }
      goto L_0893ABE0;
    }
}
L_0893ABE0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893ABE8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AC14;
      }
      goto L_0893ABF4;
    }
L_0893ABF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8)));
    g5 = (g5 + static_cast<std::uint32_t>(10));
    g5 = (0u - g5);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g5));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (g5 + hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g5);
    hot_regs.g5 = g5;
    goto L_0893AC14;
}
L_0893AC14:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893AC1C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (hot_regs.g6 & 65535u);
    ctx.gpr[19] = (hot_regs.g7 & 65535u);
    ctx.gpr[20] = (ctx.gpr[8] & 65535u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    hot_regs.g31 = (0x0893AC64u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 144u, 0x08AB8A34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893AC64u) goto L_0893AC64;
    return;
L_0893AC64:
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0893AC74;
L_0893AC74:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893AE2C;
      }
      goto L_0893AC7C;
    }
L_0893AC7C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AE2C;
      }
      goto L_0893AC84;
    }
L_0893AC84:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[22] << 4u);
    g5 = (g4 - ctx.gpr[22]);
    g5 = (g5 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893ACF4;
      }
      goto L_0893ACA4;
    }
}
L_0893ACA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g30 = ctx.gpr[30];
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[18]));
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[19]));
    g5 = (g5 + static_cast<std::uint32_t>(10));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[20]));
    g5 = (0u - g5);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g5));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[21]));
    g5 = (g5 + ctx.gpr[18]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), g30);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), g30);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), g30);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), g30);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), g30);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), g30);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893ADE8;
      }
      goto L_0893ACF4;
    }
}
L_0893ACF4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(14)));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893ADE8;
      }
      goto L_0893AD04;
    }
}
L_0893AD04:
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[22]) < 7 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g5 = (0u | 7u);
      if (branch_taken) {
          goto L_0893AD9C;
      }
      goto L_0893AD10;
    }
L_0893AD10:
    hot_regs.g6 = (hot_regs.g5 << 4u);
    goto L_0893AD14;
L_0893AD14:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g7 = (g6 - g5);
    g7 = (g7 << 2u);
    g6 = (g7 - g6);
    g6 = (ctx.gpr[16] + g6);
    g7 = (g6 + static_cast<std::uint32_t>(-40));
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    g6 = (g6 + static_cast<std::uint32_t>(4));
    g10 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g9);
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(8), g10);
    g10 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(12), g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(16), g9);
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), g10);
    g10 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(24), g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(28), g9);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(32), g10);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(36), g8);
    g5 = (g5 << 16u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(40), g7);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g6 = (g5 << 4u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_0893AD14;
      }
      goto L_0893AD9C;
    }
}
L_0893AD9C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g30 = ctx.gpr[30];
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[18]));
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[19]));
    g5 = (g5 + static_cast<std::uint32_t>(10));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[20]));
    g5 = (0u - g5);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g5));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[21]));
    g5 = (g5 + ctx.gpr[18]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), g30);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), g30);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), g30);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), g30);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), g30);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), g30);
    ctx.gpr[23] = (0u | 1u);
    hot_regs.g5 = g5;
    goto L_0893ADE8;
}
L_0893ADE8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AE1C;
      }
      goto L_0893ADF0;
    }
L_0893ADF0:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893AE1C;
      }
      goto L_0893ADF8;
    }
L_0893ADF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (0x0893AE1Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893AE1Cu) goto L_0893AE1C;
    return;
L_0893AE1C:
{
    std::uint32_t g22 = ctx.gpr[22];
    hot_regs.g4 = (g22 + static_cast<std::uint32_t>(1));
    g22 = (hot_regs.g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g22 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g22) >> 16u));
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_0893AC74;
      }
      goto L_0893AE2C;
    }
}
L_0893AE2C:
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
L_0893AE5C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1032), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1028), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1024), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1068), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1052), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1064), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1080), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(1108)));
    hot_regs.g4 = (ctx.gpr[20] & 65535u);
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(1112)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1084), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1044), hot_regs.g4);
    ctx.gpr[8] = (ctx.gpr[19] & 65535u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1048), ctx.gpr[8]);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1072), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1076), ctx.gpr[22]);
    ctx.gpr[21] = (ctx.gpr[11] | 0u);
    ctx.gpr[22] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1040), ctx.gpr[9]);
    hot_regs.g6 = (hot_regs.g7 | 0u);
    hot_regs.g7 = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1056), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1060), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1088), hot_regs.g31);
    hot_regs.g31 = (0x0893AEECu);
    ctx.gpr[11] = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 515u, 0x08ABAD24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893AEECu) goto L_0893AEEC;
    return;
L_0893AEEC:
    hot_regs.g31 = (0x0893AEF4u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 144u, 0x08AB8A34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893AEF4u) goto L_0893AEF4;
    return;
L_0893AEF4:
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(1036), static_cast<std::uint16_t>(hot_regs.g2));
    ctx.gpr[18] = (0u | 0u);
    goto L_0893AF00;
L_0893AF00:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893B0EC;
      }
      goto L_0893AF08;
    }
L_0893AF08:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B0EC;
      }
      goto L_0893AF10;
    }
L_0893AF10:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[17] << 4u);
    g5 = (g4 - ctx.gpr[17]);
    g5 = (g5 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893AF98;
      }
      goto L_0893AF30;
    }
}
L_0893AF30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1032)));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1040)));
    g6 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(g5));
    g5 = (g6 + static_cast<std::uint32_t>(10));
    g5 = (0u - g5);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g5));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1044)));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g7 = (aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(1036)));
    g5 = (g6 + g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g5);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1028)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1024)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0893B0A8;
      }
      goto L_0893AF98;
    }
}
L_0893AF98:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(1048)));
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(14)));
    g5 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893B0A8;
      }
      goto L_0893AFAC;
    }
}
L_0893AFAC:
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g5 = (0u | 7u);
      if (branch_taken) {
          goto L_0893B044;
      }
      goto L_0893AFB8;
    }
L_0893AFB8:
    hot_regs.g6 = (hot_regs.g5 << 4u);
    goto L_0893AFBC;
L_0893AFBC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g7 = (g6 - g5);
    g7 = (g7 << 2u);
    g6 = (g7 - g6);
    g6 = (ctx.gpr[16] + g6);
    g7 = (g6 + static_cast<std::uint32_t>(-40));
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    g6 = (g6 + static_cast<std::uint32_t>(4));
    g10 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g9);
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(8), g10);
    g10 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(12), g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(16), g9);
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), g10);
    g10 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(24), g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(28), g9);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(32), g10);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(36), g8);
    g5 = (g5 << 16u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(40), g7);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g6 = (g5 << 4u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_0893AFBC;
      }
      goto L_0893B044;
    }
}
L_0893B044:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1032)));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1040)));
    g6 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(g5));
    g5 = (g6 + static_cast<std::uint32_t>(10));
    g5 = (0u - g5);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g5));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1044)));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g7 = (aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(1036)));
    g5 = (g6 + g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g5);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1028)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1024)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[18] = (0u | 1u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0893B0A8;
}
L_0893B0A8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B0DC;
      }
      goto L_0893B0B0;
    }
L_0893B0B0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B0DC;
      }
      goto L_0893B0B8;
    }
L_0893B0B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (0x0893B0DCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B0DCu) goto L_0893B0DC;
    return;
L_0893B0DC:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g4 = (g17 + static_cast<std::uint32_t>(1));
    g17 = (hot_regs.g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0893AF00;
      }
      goto L_0893B0EC;
    }
}
L_0893B0EC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1052)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1056)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1060)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1064)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1068)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1072)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1076)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1080)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1084)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1088)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893B11C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    g4 = (0u | 288u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == g4;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893B164;
      }
      goto L_0893B144;
    }
}
L_0893B144:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (g16 + static_cast<std::uint32_t>(20));
    hot_regs.g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g16 + static_cast<std::uint32_t>(12));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), hot_regs.g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), hot_regs.g4);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0893B174;
      }
      goto L_0893B164;
    }
}
L_0893B164:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x0893B170u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 163u, 0x089FCC3Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B170u) goto L_0893B170;
    return;
L_0893B170:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), hot_regs.g2);
    goto L_0893B174;
L_0893B174:
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
L_0893B184:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0893B19Cu);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 163u, 0x089FCC3Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B19Cu) goto L_0893B19C;
    return;
L_0893B19C:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), hot_regs.g2);
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
L_0893B1B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x0893B1D4u);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18440));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 552u, 0x089FB820u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B1D4u) goto L_0893B1D4;
    return;
L_0893B1D4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0893B1E4u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 337u, 0x088B98ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B1E4u) goto L_0893B1E4;
    return;
L_0893B1E4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893B1F0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B1F0u) goto L_0893B1F0;
    return;
L_0893B1F0:
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
L_0893B208:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g5;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893B22C;
      }
      goto L_0893B21C;
    }
}
L_0893B21C:
    hot_regs.g31 = (0x0893B224u);
    // nop
    goto L_0893B11C;
L_0893B224:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_0893B230;
      }
      goto L_0893B22C;
    }
L_0893B22C:
    hot_regs.g2 = (0u | 0u);
    goto L_0893B230;
L_0893B230:
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
L_0893B23C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x0893B258u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_0893B208;
}
L_0893B258:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B26C;
      }
      goto L_0893B260;
    }
L_0893B260:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0893B26Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_0893B1B0;
L_0893B26C:
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
L_0893B280:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x0893B2B4u);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_0893B208;
}
L_0893B2B4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B328;
      }
      goto L_0893B2BC;
    }
L_0893B2BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0893B2DC;
      }
      goto L_0893B2C8;
    }
L_0893B2C8:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0893B2D4u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    goto L_0893B1B0;
L_0893B2D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B328;
      }
      goto L_0893B2DC;
    }
L_0893B2DC:
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (2232u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0893B2F4u);
    ctx.gpr[18] = (hot_regs.g6 + static_cast<std::uint32_t>(-10732));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 552u, 0x089FB820u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B2F4u) goto L_0893B2F4;
    return;
L_0893B2F4:
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0893B304u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 552u, 0x089FB820u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B304u) goto L_0893B304;
    return;
L_0893B304:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x0893B31Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 337u, 0x088B98ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B31Cu) goto L_0893B31C;
    return;
L_0893B31C:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0893B328u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B328u) goto L_0893B328;
    return;
L_0893B328:
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
L_0893B34C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (0u | 278u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893B378;
      }
      goto L_0893B368;
    }
}
L_0893B368:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g31 = (0x0893B374u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18424));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B374u) goto L_0893B374;
    return;
L_0893B374:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    goto L_0893B378;
L_0893B378:
    hot_regs.g31 = (0x0893B380u);
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    goto L_0893B11C;
L_0893B380:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
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
L_0893B394:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    local_pc = jump_target;
    hot_regs.g7 = g7;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893B3AC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0893B3C8u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 212u, 0x08ABCF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B3C8u) goto L_0893B3C8;
    return;
L_0893B3C8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 4u);
    hot_regs.g31 = (0x0893B3D8u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    goto L_0893B394;
L_0893B3D8:
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
L_0893B3E8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x0893B404u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
    goto L_0893B34C;
}
L_0893B404:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0893B414u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    goto L_0893B3AC;
L_0893B414:
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
L_0893B428:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    ctx.gpr[16] = (g5 | 0u);
    g17 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(48)));
    g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(56)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g6 == 0u;
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893B484;
      }
      goto L_0893B460;
    }
}
L_0893B460:
    ctx.gpr[8] = (32768u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    hot_regs.g6 = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18408));
    hot_regs.g7 = (0u | 12u);
    hot_regs.g31 = (0x0893B47Cu);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 139u, 0x08A9D300u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B47Cu) goto L_0893B47C;
    return;
L_0893B47C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), hot_regs.g2);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    goto L_0893B484;
L_0893B484:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(48)));
    hot_regs.g6 = (g4 + g4);
    g4 = (g4 + hot_regs.g6);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    g4 = (g18 + static_cast<std::uint32_t>(48));
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (hot_regs.g2 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893B4C4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g4 + ctx.gpr[18]);
    hot_regs.g7 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18404));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x0893B508u);
    hot_regs.g6 = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 533u, 0x089FB6ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B508u) goto L_0893B508;
    return;
L_0893B508:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893B514u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    goto L_0893B428;
L_0893B514:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(52)));
    g4 = (g4 << 2u);
    g4 = (g17 + g4);
    hot_regs.g5 = (ctx.gpr[18] << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(696));
    g4 = (hot_regs.g5 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g2);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893B54C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(52)));
    g6 = (g6 + hot_regs.g5);
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), g6);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0893B59C;
      }
      goto L_0893B560;
    }
}
L_0893B560:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(52)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g6 - g5);
    g6 = (g6 << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    g6 = (g4 + g6);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(24)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(696)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (g6 + g6);
    g6 = (g6 + ctx.gpr[9]);
    g6 = (g6 << 2u);
    g6 = (g7 + g6);
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0893B560;
      }
      goto L_0893B59C;
    }
}
L_0893B59C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B5A4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(52)));
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893B5FC;
      }
      goto L_0893B5B8;
    }
}
L_0893B5B8:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    goto L_0893B5BC;
L_0893B5BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g7 = (g4 << 2u);
    ctx.gpr[9] = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(24)));
    g7 = (g6 + g7);
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(24)));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(696)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(52), g4);
    g4 = (g7 + g7);
    g4 = (g7 + g4);
    g4 = (g4 << 2u);
    g4 = (g8 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(52)));
    g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0893B5BC;
      }
      goto L_0893B5FC;
    }
}
L_0893B5FC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B604:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x0893B634u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B634u) goto L_0893B634;
    return;
L_0893B634:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893B644u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B644u) goto L_0893B644;
    return;
L_0893B644:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x0893B654u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    goto L_0893B4C4;
L_0893B654:
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
L_0893B670:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0893B688u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_0893B604;
}
L_0893B688:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893B694u);
    hot_regs.g5 = (0u | 1u);
    goto L_0893B54C;
L_0893B694:
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
L_0893B6A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(68)));
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[17] = (g5 | 0u);
    g5 = (static_cast<std::int32_t>(hot_regs.g2) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893B720;
      }
      goto L_0893B6DC;
    }
}
L_0893B6DC:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_0893B6E4;
L_0893B6E4:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = hot_regs.g7 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_0893B700;
      }
      goto L_0893B6F0;
    }
L_0893B6F0:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0893B718;
      }
      goto L_0893B700;
    }
L_0893B700:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (g2 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g2) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(20));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_0893B6E4;
      }
      goto L_0893B710;
    }
}
L_0893B710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B720;
      }
      goto L_0893B718;
    }
L_0893B718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B7E4;
      }
      goto L_0893B720;
    }
L_0893B720:
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g7 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18388));
    hot_regs.g31 = (0x0893B734u);
    hot_regs.g6 = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 533u, 0x089FB6ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B734u) goto L_0893B734;
    return;
L_0893B734:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(36)));
    g7 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    g7 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(28)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0893B788;
      }
      goto L_0893B750;
    }
}
L_0893B750:
    hot_regs.g7 = (hot_regs.g5 + static_cast<std::uint32_t>(36));
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g6 = (hot_regs.g7 | 0u);
    ctx.gpr[8] = (32768u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[28] + static_cast<std::uint32_t>(-18408));
    hot_regs.g7 = (0u | 4u);
    hot_regs.g31 = (0x0893B774u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 139u, 0x08A9D300u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B774u) goto L_0893B774;
    return;
L_0893B774:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), hot_regs.g2);
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_0893B788;
}
L_0893B788:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g4 << 2u);
    g4 = (g6 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (g4 << 4u);
    g4 = (g4 << 2u);
    g4 = (g6 + g4);
    g4 = (ctx.gpr[16] + g4);
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(56));
    hot_regs.g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g6);
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g6);
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(68));
    hot_regs.g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g5 = (hot_regs.g2 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0893B7E4;
}
L_0893B7E4:
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
L_0893B800:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    g2 = (g2 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g2) < 0;
    // nop
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_0893B84C;
      }
      goto L_0893B810;
    }
}
L_0893B810:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g2 << 2u);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(24)));
    g4 = (g4 + hot_regs.g7);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_0893B820;
}
L_0893B820:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(696)));
    ctx.gpr[8] = (g7 + g7);
    g7 = (g7 + ctx.gpr[8]);
    g7 = (g7 << 2u);
    g7 = (hot_regs.g6 + g7);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 == g7;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0893B854;
      }
      goto L_0893B840;
    }
}
L_0893B840:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (g2 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g2) >= 0;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-4));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_0893B820;
      }
      goto L_0893B84C;
    }
}
L_0893B84C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893B854;
      }
      goto L_0893B854;
    }
L_0893B854:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B85C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    goto L_0893B860;
L_0893B860:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B880;
      }
      goto L_0893B868;
    }
L_0893B868:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0893B880;
      }
      goto L_0893B878;
    }
}
L_0893B878:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0893B860;
      }
      goto L_0893B880;
    }
L_0893B880:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B890;
      }
      goto L_0893B888;
    }
L_0893B888:
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), hot_regs.g5);
    goto L_0893B890;
L_0893B890:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B898:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893B8E0;
      }
      goto L_0893B8C8;
    }
}
L_0893B8C8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 7u);
    hot_regs.g31 = (0x0893B8D8u);
    hot_regs.g6 = (0u | 255u);
    goto L_0893B394;
L_0893B8D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B980;
      }
      goto L_0893B8E0;
    }
L_0893B8E0:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0893B8ECu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    goto L_0893B800;
L_0893B8EC:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893B924;
      }
      goto L_0893B8F8;
    }
L_0893B8F8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 5u);
    hot_regs.g31 = (0x0893B908u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    goto L_0893B394;
L_0893B908:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B980;
      }
      goto L_0893B910;
    }
L_0893B910:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0893B91Cu);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    goto L_0893B85C;
L_0893B91C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B980;
      }
      goto L_0893B924;
    }
L_0893B924:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0893B938u);
    hot_regs.g7 = (0u | 0u);
    goto L_0893B898;
L_0893B938:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 7u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0893B964;
      }
      goto L_0893B948;
    }
L_0893B948:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B980;
      }
      goto L_0893B950;
    }
L_0893B950:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0893B95Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 212u, 0x08ABCF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893B95Cu) goto L_0893B95C;
    return;
L_0893B95C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), hot_regs.g2);
      if (branch_taken) {
          goto L_0893B980;
      }
      goto L_0893B964;
    }
L_0893B964:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0893B974u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    goto L_0893B6A4;
L_0893B974:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.g4 = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g4);
    goto L_0893B980;
L_0893B980:
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
L_0893B9A0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x0893B9C8u);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
    goto L_0893B34C;
}
L_0893B9C8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0893B9E0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    goto L_0893B898;
L_0893B9E0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[19] | 0u);
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
L_0893BA00:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (g5 - hot_regs.g6);
    g4 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    g5 = (0u | 12u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g4 != g5;
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893BA64;
      }
      goto L_0893BA2C;
    }
}
L_0893BA2C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(g17) > 0;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0893BA40;
      }
      goto L_0893BA38;
    }
}
L_0893BA38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0893BA4C;
      }
      goto L_0893BA40;
    }
L_0893BA40:
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x0893BA4Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 194u, 0x08ABCDC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BA4Cu) goto L_0893BA4C;
    return;
L_0893BA4C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893BA5Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 218u, 0x08ABD018u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BA5Cu) goto L_0893BA5C;
    return;
L_0893BA5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BAA0;
      }
      goto L_0893BA64;
    }
L_0893BA64:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BA78;
      }
      goto L_0893BA6C;
    }
L_0893BA6C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0893BA78u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 275u, 0x08ABD4FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BA78u) goto L_0893BA78;
    return;
L_0893BA78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893BAA0;
      }
      goto L_0893BA80;
    }
L_0893BA80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0893BA90u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 194u, 0x08ABCDC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BA90u) goto L_0893BA90;
    return;
L_0893BA90:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893BAA0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 112u, 0x08ABC74Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BAA0u) goto L_0893BAA0;
    return;
L_0893BAA0:
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
L_0893BAB8:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    g16 = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x0893BADCu);
    ctx.gpr[17] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_0893B54C;
}
L_0893BADC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    hot_regs.g7 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18376));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893BAF0u);
    hot_regs.g6 = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 533u, 0x089FB6ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BAF0u) goto L_0893BAF0;
    return;
L_0893BAF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(52)));
    hot_regs.g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893BB14;
      }
      goto L_0893BB08;
    }
}
L_0893BB08:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18364));
    hot_regs.g31 = (0x0893BB14u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0893B670;
L_0893BB14:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (0x0893BB20u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 194u, 0x08ABCDC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BB20u) goto L_0893BB20;
    return;
L_0893BB20:
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
L_0893BB38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), hot_regs.g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(16), g6);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), g6);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), g5);
    local_pc = jump_target;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893BB60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g4);
    g4 = (g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x0893BB90u);
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_0893B5A4;
}
L_0893BB90:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BBB4;
      }
      goto L_0893BB9C;
    }
L_0893BB9C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 33u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0893BBB4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BBB4u) goto L_0893BBB4;
    return;
L_0893BBB4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), hot_regs.g5);
    hot_regs.g31 = (0x0893BBC8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 176u, 0x08ABCC8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BBC8u) goto L_0893BBC8;
    return;
L_0893BBC8:
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
L_0893BBDC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (g5 | 0u);
    g5 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(44)));
    g7 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(52)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = g7 == 0u;
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0893BC54;
      }
      goto L_0893BC24;
    }
}
L_0893BC24:
    hot_regs.g7 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (hot_regs.g7 | 0u);
    ctx.gpr[8] = (4u << 16u);
    ctx.gpr[9] = (2232u << 16u);
    hot_regs.g6 = (ctx.gpr[19] + static_cast<std::uint32_t>(52));
    hot_regs.g7 = (0u | 4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x0893BC4Cu);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-10688));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 139u, 0x08A9D300u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BC4Cu) goto L_0893BC4C;
    return;
L_0893BC4C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), hot_regs.g2);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_0893BC54;
L_0893BC54:
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (hot_regs.g6 << 2u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (0u | 34u);
    hot_regs.g31 = (0x0893BC8Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 436u, 0x08ABE004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BC8Cu) goto L_0893BC8C;
    return;
L_0893BC8C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 10u);
    hot_regs.g31 = (0x0893BC9Cu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    goto L_0893B394;
L_0893BC9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(68)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[20] = (0u | 5u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893BCF8;
      }
      goto L_0893BCB4;
    }
}
L_0893BCB4:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_0893BCB8;
L_0893BCB8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (0u | 4u);
    if (hot_regs.g5 == ctx.gpr[20]) {
    hot_regs.g4 = (0u | 0u);
        goto L_0893BCC8;
    }
    goto L_0893BCC8;
L_0893BCC8:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x0893BCE0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BCE0u) goto L_0893BCE0;
    return;
L_0893BCE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(68)));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0893BCB8;
      }
      goto L_0893BCF8;
    }
}
L_0893BCF8:
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
L_0893BD18:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x0893BD3Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 74u, 0x08AB0668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BD3Cu) goto L_0893BD3C;
    return;
L_0893BD3C:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x0893BD84u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 588u, 0x08A93C14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BD84u) goto L_0893BD84;
    return;
L_0893BD84:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(20), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (0u | 2u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(32), hot_regs.g4);
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893BDC0:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x0893BDF0u);
    hot_regs.g5 = (0u | 0u);
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_0893B5A4;
}
L_0893BDF0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 27u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x0893BE08u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 434u, 0x08ABDFCCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BE08u) goto L_0893BE08;
    return;
L_0893BE08:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g7 = (hot_regs.g4 << 2u);
    hot_regs.g31 = (0x0893BE24u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BE24u) goto L_0893BE24;
    return;
L_0893BE24:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), hot_regs.g2);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), hot_regs.g7);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    hot_regs.g7 = (hot_regs.g7 << 2u);
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g31 = (0x0893BE48u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BE48u) goto L_0893BE48;
    return;
L_0893BE48:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (hot_regs.g6 << 3u);
    hot_regs.g7 = (hot_regs.g7 << 3u);
    hot_regs.g31 = (0x0893BE70u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BE70u) goto L_0893BE70;
    return;
L_0893BE70:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g7 = (hot_regs.g7 << 2u);
    hot_regs.g31 = (0x0893BE98u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BE98u) goto L_0893BE98;
    return;
L_0893BE98:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g7 = (hot_regs.g7 << 2u);
    hot_regs.g31 = (0x0893BED0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BED0u) goto L_0893BED0;
    return;
L_0893BED0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g7 = (hot_regs.g7 << 2u);
    hot_regs.g31 = (0x0893BEF8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BEF8u) goto L_0893BEF8;
    return;
L_0893BEF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(28), hot_regs.g2);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(36), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), g4);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g19 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893BF28:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-1568));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1548), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1556), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1552), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1560), hot_regs.g31);
    hot_regs.g31 = (0x0893BF58u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BF58u) goto L_0893BF58;
    return;
L_0893BF58:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0893BF68u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BF68u) goto L_0893BF68;
    return;
L_0893BF68:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893BF7Cu);
    hot_regs.g7 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 569u, 0x089FB95Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BF7Cu) goto L_0893BF7C;
    return;
L_0893BF7C:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(52));
    hot_regs.g31 = (0x0893BF88u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    goto L_0893BD18;
L_0893BF88:
    hot_regs.g31 = (0x0893BF90u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    goto L_0893B11C;
L_0893BF90:
    hot_regs.g31 = (0x0893BF98u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 508u, 0x0893DF20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BF98u) goto L_0893BF98;
    return;
L_0893BF98:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    g5 = (0u | 288u);
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-18360));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893BFB0;
      }
      goto L_0893BFA8;
    }
}
L_0893BFA8:
    hot_regs.g31 = (0x0893BFB0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 543u, 0x089FB798u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BFB0u) goto L_0893BFB0;
    return;
L_0893BFB0:
    hot_regs.g31 = (0x0893BFB8u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    goto L_0893BDC0;
L_0893BFB8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1548)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1552)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1556)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1560)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(1568));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893BFD4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x0893BFFCu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 280u, 0x08ABD558u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893BFFCu) goto L_0893BFFC;
    return;
L_0893BFFC:
    hot_regs.g31 = (0x0893C004u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0893B11C;
}

void recomp_unit_0077(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0077_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_77(Runtime &runtime) {
    runtime.register_generated_unit(77u, 0x08938000u, 16384u, &recomp_unit_0077, &recomp_unit_0077_entry);
    runtime.register_function(0x08938000u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938024u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938040u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938048u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938050u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938058u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938060u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938068u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938070u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938088u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938094u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938144u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893814Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938154u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893815Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893816Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893817Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938180u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938188u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938198u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938200u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938208u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938210u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938218u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938224u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893822Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938234u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893823Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938248u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938250u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938258u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938260u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938274u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938284u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938330u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938340u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938350u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893835Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938364u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938374u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893837Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938384u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893838Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938394u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938400u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893840Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938414u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893841Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938430u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893846Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938474u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938480u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893849Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938518u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893855Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938568u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938578u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938584u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938590u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893859Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938634u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938658u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938668u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893870Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938720u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938748u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938758u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938768u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938800u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893880Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893881Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938824u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938830u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893883Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938848u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938854u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893885Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938864u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938874u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893887Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938884u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893888Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938894u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893889Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893890Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938924u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938928u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938934u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893893Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938994u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893899Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938ABCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938ECCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938ED4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939004u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939014u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893902Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939034u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939040u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939050u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939078u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939080u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939094u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939114u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939138u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939150u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939158u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939164u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939174u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939194u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893919Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939214u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893921Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939228u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939238u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893924Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939254u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893925Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939268u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893927Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939284u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893928Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939298u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893930Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939314u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893931Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939328u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939348u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939350u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939360u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939374u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939394u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893939Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939408u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939410u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893941Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893943Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939444u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939460u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893947Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939490u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939504u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893950Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939530u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939538u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939544u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939554u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893955Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939570u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893957Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939590u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089395F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893960Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939614u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893961Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939624u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939628u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893963Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893964Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939674u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893967Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939704u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939720u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939728u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939734u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893973Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939744u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939750u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939760u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939768u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939790u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939798u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939804u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893980Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939814u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893981Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939824u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939834u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939854u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893985Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893987Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939908u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939924u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893992Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939948u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939964u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939978u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893998Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A01Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A03Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A044u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A048u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A080u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A08Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A100u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A10Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A138u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A150u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A168u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A17Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A184u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A190u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A198u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A204u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A20Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A218u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A228u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A230u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A238u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A244u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A24Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A250u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A25Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A268u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A270u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A27Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A284u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A290u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A310u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A338u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A340u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A388u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A39Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A3FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A464u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A470u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A48Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A498u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A4ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A514u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A530u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A548u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A54Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A558u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A560u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A568u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A57Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A584u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A5F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A608u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A60Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A624u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A70Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A714u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A724u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A72Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A730u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A750u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A75Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A764u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A770u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A778u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A814u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A824u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A838u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A840u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A84Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A860u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A864u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A894u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A8F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A974u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A984u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B044u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B11Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B144u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B164u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B170u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B174u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B184u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B19Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B208u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B21Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B224u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B22Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B230u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B23Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B258u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B260u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B26Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B280u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B304u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B31Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B328u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B34Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B368u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B374u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B378u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B380u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B394u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B3E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B404u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B414u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B428u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B460u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B47Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B484u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B508u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B514u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B54Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B560u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B59Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B5FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B604u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B634u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B644u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B654u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B670u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B688u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B694u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B6F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B700u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B710u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B718u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B720u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B734u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B750u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B774u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B788u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B800u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B810u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B820u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B840u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B84Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B854u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B85Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B860u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B868u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B878u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B880u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B888u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B890u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B898u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B8F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B908u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B910u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B91Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B924u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B938u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B948u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B950u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B95Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B964u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B974u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B980u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BADCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BED0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BEF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFFCu, &recomp_unit_0077, "recomp_unit_0077");
}
} // namespace psprecomp
