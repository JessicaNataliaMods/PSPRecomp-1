#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0201[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 16,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    35, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 47, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0,
    0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 71,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0,
    0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0,
    87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0,
    0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0,
    139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0,
    162, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 196, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0,
    0, 202, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 208, 209,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0,
    222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 239, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 252, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 258, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262,
    0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 273, 0,
    0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 280, 0,
    0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 284, 285, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0,
    0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0,
    0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 305, 306, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0,
    0, 0, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 0,
    333, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0,
    341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0,
    0, 0, 0, 352, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0,
    358, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0,
    367, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 374, 0,
    0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0,
    387, 0, 388, 0, 389, 0, 390, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0,
    0, 0, 0, 396, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0,
    0, 0, 402, 0, 0, 0, 0, 403, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0,
    0, 0, 0, 0, 409, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0,
    0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 431, 0, 432, 0, 0,
    0, 433, 0, 434, 0, 435, 0, 0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0,
    0, 0, 441, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 450, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    453, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 457, 458, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 462, 0, 0, 0,
    0, 0, 463, 0, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470,
    0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0, 0, 0,
    0, 0, 478, 0, 479, 480, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 484, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0,
    0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 494, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497,
    0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    504, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 522, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0,
    0, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 527, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0,
    0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 536, 0, 537, 538,
    0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0,
    0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 549,
    550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 555, 556, 0, 0,
    0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 571, 0, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0,
    0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 586, 0, 587, 0, 0, 0, 588,
    0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0,
    0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 600, 0, 0, 601, 0, 0, 0, 602, 0, 603, 0, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0,
    0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 629, 630,
    0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 635, 636, 0, 0, 0, 0, 0,
    0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 642, 643, 0, 0, 0, 0, 0,
    0, 644, 0, 645, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 648, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 0, 655, 0, 656, 657, 0, 0, 0, 0, 0, 0, 0, 0, 658,
    0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 0, 662, 663, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 670, 671, 0, 0, 0,
    0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 676, 677, 0, 0, 0, 0, 0, 0,
    678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683,
    0, 684, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 0, 690, 691,
    0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0,
    700, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707,
    0, 0, 708, 0, 0, 709, 0, 0, 710, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 714,
    0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 723, 0,
    0, 724, 0, 725, 0, 0, 0, 0, 726, 0, 727, 0, 0, 0, 0, 728, 0, 729, 730, 0, 731, 0, 0, 732, 0, 0, 733, 0, 0, 0, 734, 0,
    0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 737, 0, 738, 0, 739, 0, 0, 0, 740, 0, 741, 742, 0, 0, 743, 0, 0, 0, 744, 0,
    0, 745, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 752, 0,
    0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 762, 0, 0, 0,
    763, 0, 764, 0, 0, 0, 0, 765, 0, 766, 767, 0, 768, 0, 0, 769, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0,
    0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0,
    0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 0,
    784, 785, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 789, 0, 0, 0, 0, 0, 790, 791, 0,
    0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 795,
    0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0, 799, 800, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 802,
    0, 803, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 807, 0, 808, 0, 0, 0, 0, 0, 0, 0, 809,
    0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    813, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 817, 0, 0, 0, 818, 0, 819, 0,
    820, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 824, 0, 0, 825, 0, 826, 0, 0, 827, 0, 828, 0, 829,
};
void recomp_unit_0201_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B28000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0201[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B28000;
    case 2u: goto L_08B28018;
    case 3u: goto L_08B28030;
    case 4u: goto L_08B28064;
    case 5u: goto L_08B28070;
    case 6u: goto L_08B28080;
    case 7u: goto L_08B28090;
    case 8u: goto L_08B28098;
    case 9u: goto L_08B280A4;
    case 10u: goto L_08B280AC;
    case 11u: goto L_08B280BC;
    case 12u: goto L_08B280C4;
    case 13u: goto L_08B280D0;
    case 14u: goto L_08B280E0;
    case 15u: goto L_08B280E4;
    case 16u: goto L_08B280FC;
    case 17u: goto L_08B28104;
    case 18u: goto L_08B28124;
    case 19u: goto L_08B28130;
    case 20u: goto L_08B28148;
    case 21u: goto L_08B2814C;
    case 22u: goto L_08B2816C;
    case 23u: goto L_08B28194;
    case 24u: goto L_08B281A0;
    case 25u: goto L_08B281B0;
    case 26u: goto L_08B281C8;
    case 27u: goto L_08B281F8;
    case 28u: goto L_08B28204;
    case 29u: goto L_08B28224;
    case 30u: goto L_08B2822C;
    case 31u: goto L_08B28230;
    case 32u: goto L_08B2824C;
    case 33u: goto L_08B28254;
    case 34u: goto L_08B28274;
    case 35u: goto L_08B28280;
    case 36u: goto L_08B28298;
    case 37u: goto L_08B2829C;
    case 38u: goto L_08B282B8;
    case 39u: goto L_08B282C8;
    case 40u: goto L_08B282D8;
    case 41u: goto L_08B28304;
    case 42u: goto L_08B28310;
    case 43u: goto L_08B28328;
    case 44u: goto L_08B28334;
    case 45u: goto L_08B28340;
    case 46u: goto L_08B28348;
    case 47u: goto L_08B28354;
    case 48u: goto L_08B28358;
    case 49u: goto L_08B28368;
    case 50u: goto L_08B28370;
    case 51u: goto L_08B28378;
    case 52u: goto L_08B28384;
    case 53u: goto L_08B2838C;
    case 54u: goto L_08B28394;
    case 55u: goto L_08B283B4;
    case 56u: goto L_08B283C0;
    case 57u: goto L_08B283C8;
    case 58u: goto L_08B283D0;
    case 59u: goto L_08B283D8;
    case 60u: goto L_08B283E0;
    case 61u: goto L_08B28400;
    case 62u: goto L_08B2841C;
    case 63u: goto L_08B28424;
    case 64u: goto L_08B28430;
    case 65u: goto L_08B28438;
    case 66u: goto L_08B28440;
    case 67u: goto L_08B28458;
    case 68u: goto L_08B28460;
    case 69u: goto L_08B2846C;
    case 70u: goto L_08B28474;
    case 71u: goto L_08B2847C;
    case 72u: goto L_08B28494;
    case 73u: goto L_08B284B0;
    case 74u: goto L_08B284E0;
    case 75u: goto L_08B284EC;
    case 76u: goto L_08B284F8;
    case 77u: goto L_08B28504;
    case 78u: goto L_08B28514;
    case 79u: goto L_08B28520;
    case 80u: goto L_08B2852C;
    case 81u: goto L_08B28538;
    case 82u: goto L_08B28540;
    case 83u: goto L_08B28548;
    case 84u: goto L_08B28560;
    case 85u: goto L_08B28568;
    case 86u: goto L_08B28570;
    case 87u: goto L_08B28580;
    case 88u: goto L_08B2858C;
    case 89u: goto L_08B2859C;
    case 90u: goto L_08B285BC;
    case 91u: goto L_08B285EC;
    case 92u: goto L_08B285F8;
    case 93u: goto L_08B28604;
    case 94u: goto L_08B28618;
    case 95u: goto L_08B28624;
    case 96u: goto L_08B2863C;
    case 97u: goto L_08B2864C;
    case 98u: goto L_08B28690;
    case 99u: goto L_08B286A8;
    case 100u: goto L_08B286C8;
    case 101u: goto L_08B286CC;
    case 102u: goto L_08B286D4;
    case 103u: goto L_08B286E4;
    case 104u: goto L_08B28704;
    case 105u: goto L_08B2872C;
    case 106u: goto L_08B28738;
    case 107u: goto L_08B28744;
    case 108u: goto L_08B28750;
    case 109u: goto L_08B2875C;
    case 110u: goto L_08B28778;
    case 111u: goto L_08B28790;
    case 112u: goto L_08B287B8;
    case 113u: goto L_08B287C4;
    case 114u: goto L_08B287D0;
    case 115u: goto L_08B287D8;
    case 116u: goto L_08B287F4;
    case 117u: goto L_08B2880C;
    case 118u: goto L_08B28834;
    case 119u: goto L_08B28840;
    case 120u: goto L_08B28850;
    case 121u: goto L_08B28860;
    case 122u: goto L_08B28878;
    case 123u: goto L_08B28898;
    case 124u: goto L_08B288A4;
    case 125u: goto L_08B288AC;
    case 126u: goto L_08B288C0;
    case 127u: goto L_08B288E8;
    case 128u: goto L_08B28914;
    case 129u: goto L_08B2892C;
    case 130u: goto L_08B2894C;
    case 131u: goto L_08B28958;
    case 132u: goto L_08B28968;
    case 133u: goto L_08B2897C;
    case 134u: goto L_08B289B4;
    case 135u: goto L_08B289C0;
    case 136u: goto L_08B289D0;
    case 137u: goto L_08B289DC;
    case 138u: goto L_08B289F4;
    case 139u: goto L_08B28A00;
    case 140u: goto L_08B28A18;
    case 141u: goto L_08B28A28;
    case 142u: goto L_08B28A30;
    case 143u: goto L_08B28A38;
    case 144u: goto L_08B28A44;
    case 145u: goto L_08B28A5C;
    case 146u: goto L_08B28A68;
    case 147u: goto L_08B28A90;
    case 148u: goto L_08B28AA8;
    case 149u: goto L_08B28AC8;
    case 150u: goto L_08B28ACC;
    case 151u: goto L_08B28AD4;
    case 152u: goto L_08B28AE4;
    case 153u: goto L_08B28B0C;
    case 154u: goto L_08B28B34;
    case 155u: goto L_08B28B40;
    case 156u: goto L_08B28B4C;
    case 157u: goto L_08B28B54;
    case 158u: goto L_08B28B5C;
    case 159u: goto L_08B28B68;
    case 160u: goto L_08B28B70;
    case 161u: goto L_08B28B78;
    case 162u: goto L_08B28B80;
    case 163u: goto L_08B28B98;
    case 164u: goto L_08B28BA0;
    case 165u: goto L_08B28BBC;
    case 166u: goto L_08B28BC4;
    case 167u: goto L_08B28BD0;
    case 168u: goto L_08B28BE8;
    case 169u: goto L_08B28C18;
    case 170u: goto L_08B28C24;
    case 171u: goto L_08B28C44;
    case 172u: goto L_08B28C60;
    case 173u: goto L_08B28C88;
    case 174u: goto L_08B28C94;
    case 175u: goto L_08B28CA4;
    case 176u: goto L_08B28CBC;
    case 177u: goto L_08B28CC8;
    case 178u: goto L_08B28CEC;
    case 179u: goto L_08B28D0C;
    case 180u: goto L_08B28D18;
    case 181u: goto L_08B28D34;
    case 182u: goto L_08B28D54;
    case 183u: goto L_08B28D5C;
    case 184u: goto L_08B28D64;
    case 185u: goto L_08B28D78;
    case 186u: goto L_08B28DA0;
    case 187u: goto L_08B28DAC;
    case 188u: goto L_08B28DB8;
    case 189u: goto L_08B28DD0;
    case 190u: goto L_08B28DF8;
    case 191u: goto L_08B28E04;
    case 192u: goto L_08B28E38;
    case 193u: goto L_08B28E60;
    case 194u: goto L_08B28E6C;
    case 195u: goto L_08B28E88;
    case 196u: goto L_08B28E98;
    case 197u: goto L_08B28E9C;
    case 198u: goto L_08B28EB4;
    case 199u: goto L_08B28ED8;
    case 200u: goto L_08B28EE4;
    case 201u: goto L_08B28EF8;
    case 202u: goto L_08B28F04;
    case 203u: goto L_08B28F08;
    case 204u: goto L_08B28F2C;
    case 205u: goto L_08B28F34;
    case 206u: goto L_08B28F54;
    case 207u: goto L_08B28F60;
    case 208u: goto L_08B28F78;
    case 209u: goto L_08B28F7C;
    case 210u: goto L_08B28F90;
    case 211u: goto L_08B28FB8;
    case 212u: goto L_08B28FC4;
    case 213u: goto L_08B28FD4;
    case 214u: goto L_08B28FE4;
    case 215u: goto L_08B28FF4;
    case 216u: goto L_08B2900C;
    case 217u: goto L_08B29034;
    case 218u: goto L_08B29040;
    case 219u: goto L_08B29050;
    case 220u: goto L_08B29064;
    case 221u: goto L_08B29078;
    case 222u: goto L_08B29080;
    case 223u: goto L_08B29094;
    case 224u: goto L_08B290A8;
    case 225u: goto L_08B290B0;
    case 226u: goto L_08B290C4;
    case 227u: goto L_08B290D8;
    case 228u: goto L_08B290E0;
    case 229u: goto L_08B290F4;
    case 230u: goto L_08B29108;
    case 231u: goto L_08B29110;
    case 232u: goto L_08B29120;
    case 233u: goto L_08B29130;
    case 234u: goto L_08B29148;
    case 235u: goto L_08B29170;
    case 236u: goto L_08B2917C;
    case 237u: goto L_08B2922C;
    case 238u: goto L_08B29234;
    case 239u: goto L_08B2923C;
    case 240u: goto L_08B29240;
    case 241u: goto L_08B29264;
    case 242u: goto L_08B2926C;
    case 243u: goto L_08B29284;
    case 244u: goto L_08B29298;
    case 245u: goto L_08B292B8;
    case 246u: goto L_08B292BC;
    case 247u: goto L_08B292D4;
    case 248u: goto L_08B29304;
    case 249u: goto L_08B29310;
    case 250u: goto L_08B2932C;
    case 251u: goto L_08B29340;
    case 252u: goto L_08B29348;
    case 253u: goto L_08B2934C;
    case 254u: goto L_08B29370;
    case 255u: goto L_08B29378;
    case 256u: goto L_08B29398;
    case 257u: goto L_08B293A4;
    case 258u: goto L_08B293BC;
    case 259u: goto L_08B293C0;
    case 260u: goto L_08B293CC;
    case 261u: goto L_08B293F0;
    case 262u: goto L_08B293FC;
    case 263u: goto L_08B29418;
    case 264u: goto L_08B29448;
    case 265u: goto L_08B29454;
    case 266u: goto L_08B29480;
    case 267u: goto L_08B29484;
    case 268u: goto L_08B294A8;
    case 269u: goto L_08B294B0;
    case 270u: goto L_08B294D0;
    case 271u: goto L_08B294DC;
    case 272u: goto L_08B294F4;
    case 273u: goto L_08B294F8;
    case 274u: goto L_08B29514;
    case 275u: goto L_08B2957C;
    case 276u: goto L_08B295A0;
    case 277u: goto L_08B295D8;
    case 278u: goto L_08B295E4;
    case 279u: goto L_08B295F0;
    case 280u: goto L_08B295F8;
    case 281u: goto L_08B2960C;
    case 282u: goto L_08B29614;
    case 283u: goto L_08B29628;
    case 284u: goto L_08B29630;
    case 285u: goto L_08B29634;
    case 286u: goto L_08B2963C;
    case 287u: goto L_08B29648;
    case 288u: goto L_08B29654;
    case 289u: goto L_08B29664;
    case 290u: goto L_08B2966C;
    case 291u: goto L_08B29674;
    case 292u: goto L_08B29684;
    case 293u: goto L_08B29694;
    case 294u: goto L_08B296A0;
    case 295u: goto L_08B296B8;
    case 296u: goto L_08B296C0;
    case 297u: goto L_08B296D8;
    case 298u: goto L_08B296E0;
    case 299u: goto L_08B296F8;
    case 300u: goto L_08B29708;
    case 301u: goto L_08B29714;
    case 302u: goto L_08B29728;
    case 303u: goto L_08B29740;
    case 304u: goto L_08B29754;
    case 305u: goto L_08B2975C;
    case 306u: goto L_08B29760;
    case 307u: goto L_08B29774;
    case 308u: goto L_08B297C0;
    case 309u: goto L_08B29810;
    case 310u: goto L_08B2981C;
    case 311u: goto L_08B29824;
    case 312u: goto L_08B29830;
    case 313u: goto L_08B29844;
    case 314u: goto L_08B29850;
    case 315u: goto L_08B2986C;
    case 316u: goto L_08B2987C;
    case 317u: goto L_08B298BC;
    case 318u: goto L_08B298C8;
    case 319u: goto L_08B298D4;
    case 320u: goto L_08B298DC;
    case 321u: goto L_08B298F0;
    case 322u: goto L_08B298F8;
    case 323u: goto L_08B29910;
    case 324u: goto L_08B29918;
    case 325u: goto L_08B29920;
    case 326u: goto L_08B29928;
    case 327u: goto L_08B29934;
    case 328u: goto L_08B29940;
    case 329u: goto L_08B29950;
    case 330u: goto L_08B29958;
    case 331u: goto L_08B29960;
    case 332u: goto L_08B29970;
    case 333u: goto L_08B29980;
    case 334u: goto L_08B2998C;
    case 335u: goto L_08B299A4;
    case 336u: goto L_08B299AC;
    case 337u: goto L_08B299BC;
    case 338u: goto L_08B299C8;
    case 339u: goto L_08B299E8;
    case 340u: goto L_08B299F0;
    case 341u: goto L_08B29A00;
    case 342u: goto L_08B29A10;
    case 343u: goto L_08B29A1C;
    case 344u: goto L_08B29A30;
    case 345u: goto L_08B29A50;
    case 346u: goto L_08B29A64;
    case 347u: goto L_08B29A6C;
    case 348u: goto L_08B29A80;
    case 349u: goto L_08B29AC0;
    case 350u: goto L_08B29AE8;
    case 351u: goto L_08B29AF4;
    case 352u: goto L_08B29B0C;
    case 353u: goto L_08B29B10;
    case 354u: goto L_08B29B34;
    case 355u: goto L_08B29B3C;
    case 356u: goto L_08B29B5C;
    case 357u: goto L_08B29B68;
    case 358u: goto L_08B29B80;
    case 359u: goto L_08B29B84;
    case 360u: goto L_08B29B9C;
    case 361u: goto L_08B29BC4;
    case 362u: goto L_08B29BD0;
    case 363u: goto L_08B29C0C;
    case 364u: goto L_08B29C30;
    case 365u: goto L_08B29C60;
    case 366u: goto L_08B29C6C;
    case 367u: goto L_08B29C80;
    case 368u: goto L_08B29C84;
    case 369u: goto L_08B29CA8;
    case 370u: goto L_08B29CB0;
    case 371u: goto L_08B29CD0;
    case 372u: goto L_08B29CDC;
    case 373u: goto L_08B29CF4;
    case 374u: goto L_08B29CF8;
    case 375u: goto L_08B29D14;
    case 376u: goto L_08B29D3C;
    case 377u: goto L_08B29D48;
    case 378u: goto L_08B29D58;
    case 379u: goto L_08B29D64;
    case 380u: goto L_08B29D70;
    case 381u: goto L_08B29D88;
    case 382u: goto L_08B29DB8;
    case 383u: goto L_08B29DC4;
    case 384u: goto L_08B29DD4;
    case 385u: goto L_08B29DE4;
    case 386u: goto L_08B29DF0;
    case 387u: goto L_08B29E00;
    case 388u: goto L_08B29E08;
    case 389u: goto L_08B29E10;
    case 390u: goto L_08B29E18;
    case 391u: goto L_08B29E1C;
    case 392u: goto L_08B29E40;
    case 393u: goto L_08B29E48;
    case 394u: goto L_08B29E68;
    case 395u: goto L_08B29E74;
    case 396u: goto L_08B29E8C;
    case 397u: goto L_08B29E90;
    case 398u: goto L_08B29EAC;
    case 399u: goto L_08B29EDC;
    case 400u: goto L_08B29EE8;
    case 401u: goto L_08B29EF8;
    case 402u: goto L_08B29F08;
    case 403u: goto L_08B29F1C;
    case 404u: goto L_08B29F20;
    case 405u: goto L_08B29F44;
    case 406u: goto L_08B29F4C;
    case 407u: goto L_08B29F6C;
    case 408u: goto L_08B29F78;
    case 409u: goto L_08B29F90;
    case 410u: goto L_08B29F94;
    case 411u: goto L_08B29FB0;
    case 412u: goto L_08B29FD0;
    case 413u: goto L_08B29FDC;
    case 414u: goto L_08B2A000;
    case 415u: goto L_08B2A014;
    case 416u: goto L_08B2A03C;
    case 417u: goto L_08B2A048;
    case 418u: goto L_08B2A058;
    case 419u: goto L_08B2A068;
    case 420u: goto L_08B2A078;
    case 421u: goto L_08B2A090;
    case 422u: goto L_08B2A0B8;
    case 423u: goto L_08B2A0C4;
    case 424u: goto L_08B2A0E4;
    case 425u: goto L_08B2A0F8;
    case 426u: goto L_08B2A108;
    case 427u: goto L_08B2A120;
    case 428u: goto L_08B2A14C;
    case 429u: goto L_08B2A158;
    case 430u: goto L_08B2A164;
    case 431u: goto L_08B2A16C;
    case 432u: goto L_08B2A174;
    case 433u: goto L_08B2A184;
    case 434u: goto L_08B2A18C;
    case 435u: goto L_08B2A194;
    case 436u: goto L_08B2A1A0;
    case 437u: goto L_08B2A1A8;
    case 438u: goto L_08B2A1B0;
    case 439u: goto L_08B2A1BC;
    case 440u: goto L_08B2A1F0;
    case 441u: goto L_08B2A208;
    case 442u: goto L_08B2A210;
    case 443u: goto L_08B2A218;
    case 444u: goto L_08B2A224;
    case 445u: goto L_08B2A240;
    case 446u: goto L_08B2A25C;
    case 447u: goto L_08B2A284;
    case 448u: goto L_08B2A290;
    case 449u: goto L_08B2A2A8;
    case 450u: goto L_08B2A2B4;
    case 451u: goto L_08B2A2B8;
    case 452u: goto L_08B2A2D0;
    case 453u: goto L_08B2A300;
    case 454u: goto L_08B2A30C;
    case 455u: goto L_08B2A324;
    case 456u: goto L_08B2A330;
    case 457u: goto L_08B2A338;
    case 458u: goto L_08B2A33C;
    case 459u: goto L_08B2A354;
    case 460u: goto L_08B2A360;
    case 461u: goto L_08B2A368;
    case 462u: goto L_08B2A370;
    case 463u: goto L_08B2A388;
    case 464u: goto L_08B2A394;
    case 465u: goto L_08B2A39C;
    case 466u: goto L_08B2A3A4;
    case 467u: goto L_08B2A3AC;
    case 468u: goto L_08B2A3B4;
    case 469u: goto L_08B2A3D0;
    case 470u: goto L_08B2A3FC;
    case 471u: goto L_08B2A408;
    case 472u: goto L_08B2A42C;
    case 473u: goto L_08B2A434;
    case 474u: goto L_08B2A43C;
    case 475u: goto L_08B2A45C;
    case 476u: goto L_08B2A464;
    case 477u: goto L_08B2A46C;
    case 478u: goto L_08B2A488;
    case 479u: goto L_08B2A490;
    case 480u: goto L_08B2A494;
    case 481u: goto L_08B2A4A4;
    case 482u: goto L_08B2A4AC;
    case 483u: goto L_08B2A4CC;
    case 484u: goto L_08B2A504;
    case 485u: goto L_08B2A510;
    case 486u: goto L_08B2A520;
    case 487u: goto L_08B2A534;
    case 488u: goto L_08B2A53C;
    case 489u: goto L_08B2A540;
    case 490u: goto L_08B2A564;
    case 491u: goto L_08B2A56C;
    case 492u: goto L_08B2A58C;
    case 493u: goto L_08B2A598;
    case 494u: goto L_08B2A5B0;
    case 495u: goto L_08B2A5B4;
    case 496u: goto L_08B2A5D4;
    case 497u: goto L_08B2A5FC;
    case 498u: goto L_08B2A608;
    case 499u: goto L_08B2A618;
    case 500u: goto L_08B2A62C;
    case 501u: goto L_08B2A638;
    case 502u: goto L_08B2A640;
    case 503u: goto L_08B2A658;
    case 504u: goto L_08B2A680;
    case 505u: goto L_08B2A68C;
    case 506u: goto L_08B2A6A0;
    case 507u: goto L_08B2A6AC;
    case 508u: goto L_08B2A6C0;
    case 509u: goto L_08B2A6C8;
    case 510u: goto L_08B2A6DC;
    case 511u: goto L_08B2A6F4;
    case 512u: goto L_08B2A71C;
    case 513u: goto L_08B2A728;
    case 514u: goto L_08B2A738;
    case 515u: goto L_08B2A748;
    case 516u: goto L_08B2A758;
    case 517u: goto L_08B2A770;
    case 518u: goto L_08B2A798;
    case 519u: goto L_08B2A7A4;
    case 520u: goto L_08B2A7C8;
    case 521u: goto L_08B2A7D0;
    case 522u: goto L_08B2A7D4;
    case 523u: goto L_08B2A7F0;
    case 524u: goto L_08B2A7F8;
    case 525u: goto L_08B2A818;
    case 526u: goto L_08B2A824;
    case 527u: goto L_08B2A83C;
    case 528u: goto L_08B2A840;
    case 529u: goto L_08B2A858;
    case 530u: goto L_08B2A878;
    case 531u: goto L_08B2A888;
    case 532u: goto L_08B2A89C;
    case 533u: goto L_08B2A8D0;
    case 534u: goto L_08B2A8DC;
    case 535u: goto L_08B2A8E8;
    case 536u: goto L_08B2A8F0;
    case 537u: goto L_08B2A8F8;
    case 538u: goto L_08B2A8FC;
    case 539u: goto L_08B2A908;
    case 540u: goto L_08B2A91C;
    case 541u: goto L_08B2A93C;
    case 542u: goto L_08B2A95C;
    case 543u: goto L_08B2A978;
    case 544u: goto L_08B2A998;
    case 545u: goto L_08B2A9B4;
    case 546u: goto L_08B2A9DC;
    case 547u: goto L_08B2A9E8;
    case 548u: goto L_08B2A9F4;
    case 549u: goto L_08B2A9FC;
    case 550u: goto L_08B2AA00;
    case 551u: goto L_08B2AA24;
    case 552u: goto L_08B2AA2C;
    case 553u: goto L_08B2AA4C;
    case 554u: goto L_08B2AA58;
    case 555u: goto L_08B2AA70;
    case 556u: goto L_08B2AA74;
    case 557u: goto L_08B2AA8C;
    case 558u: goto L_08B2AAB4;
    case 559u: goto L_08B2AAFC;
    case 560u: goto L_08B2AB24;
    case 561u: goto L_08B2AB70;
    case 562u: goto L_08B2AB9C;
    case 563u: goto L_08B2ABA8;
    case 564u: goto L_08B2ABB8;
    case 565u: goto L_08B2ABCC;
    case 566u: goto L_08B2ABDC;
    case 567u: goto L_08B2ABF8;
    case 568u: goto L_08B2AC20;
    case 569u: goto L_08B2AC2C;
    case 570u: goto L_08B2AC5C;
    case 571u: goto L_08B2AC84;
    case 572u: goto L_08B2AC90;
    case 573u: goto L_08B2ACA0;
    case 574u: goto L_08B2ACA8;
    case 575u: goto L_08B2ACCC;
    case 576u: goto L_08B2ACF0;
    case 577u: goto L_08B2AD08;
    case 578u: goto L_08B2AD30;
    case 579u: goto L_08B2AD3C;
    case 580u: goto L_08B2AD50;
    case 581u: goto L_08B2AD58;
    case 582u: goto L_08B2AD70;
    case 583u: goto L_08B2AD98;
    case 584u: goto L_08B2ADCC;
    case 585u: goto L_08B2ADD4;
    case 586u: goto L_08B2ADE4;
    case 587u: goto L_08B2ADEC;
    case 588u: goto L_08B2ADFC;
    case 589u: goto L_08B2AE08;
    case 590u: goto L_08B2AE28;
    case 591u: goto L_08B2AE40;
    case 592u: goto L_08B2AE68;
    case 593u: goto L_08B2AE74;
    case 594u: goto L_08B2AE84;
    case 595u: goto L_08B2AE94;
    case 596u: goto L_08B2AEA0;
    case 597u: goto L_08B2AEA8;
    case 598u: goto L_08B2AEB0;
    case 599u: goto L_08B2AEC8;
    case 600u: goto L_08B2AF04;
    case 601u: goto L_08B2AF10;
    case 602u: goto L_08B2AF20;
    case 603u: goto L_08B2AF28;
    case 604u: goto L_08B2AF34;
    case 605u: goto L_08B2AF40;
    case 606u: goto L_08B2AF48;
    case 607u: goto L_08B2AF50;
    case 608u: goto L_08B2AF60;
    case 609u: goto L_08B2AF84;
    case 610u: goto L_08B2AFAC;
    case 611u: goto L_08B2AFB8;
    case 612u: goto L_08B2AFC8;
    case 613u: goto L_08B2AFD4;
    case 614u: goto L_08B2AFE0;
    case 615u: goto L_08B2AFF8;
    case 616u: goto L_08B2B020;
    case 617u: goto L_08B2B02C;
    case 618u: goto L_08B2B03C;
    case 619u: goto L_08B2B04C;
    case 620u: goto L_08B2B054;
    case 621u: goto L_08B2B06C;
    case 622u: goto L_08B2B09C;
    case 623u: goto L_08B2B0A8;
    case 624u: goto L_08B2B0B8;
    case 625u: goto L_08B2B0CC;
    case 626u: goto L_08B2B0DC;
    case 627u: goto L_08B2B0E8;
    case 628u: goto L_08B2B0F0;
    case 629u: goto L_08B2B0F8;
    case 630u: goto L_08B2B0FC;
    case 631u: goto L_08B2B118;
    case 632u: goto L_08B2B120;
    case 633u: goto L_08B2B140;
    case 634u: goto L_08B2B14C;
    case 635u: goto L_08B2B164;
    case 636u: goto L_08B2B168;
    case 637u: goto L_08B2B184;
    case 638u: goto L_08B2B1AC;
    case 639u: goto L_08B2B1B8;
    case 640u: goto L_08B2B1CC;
    case 641u: goto L_08B2B1DC;
    case 642u: goto L_08B2B1E4;
    case 643u: goto L_08B2B1E8;
    case 644u: goto L_08B2B204;
    case 645u: goto L_08B2B20C;
    case 646u: goto L_08B2B22C;
    case 647u: goto L_08B2B238;
    case 648u: goto L_08B2B250;
    case 649u: goto L_08B2B254;
    case 650u: goto L_08B2B26C;
    case 651u: goto L_08B2B298;
    case 652u: goto L_08B2B2A4;
    case 653u: goto L_08B2B2B4;
    case 654u: goto L_08B2B2BC;
    case 655u: goto L_08B2B2CC;
    case 656u: goto L_08B2B2D4;
    case 657u: goto L_08B2B2D8;
    case 658u: goto L_08B2B2FC;
    case 659u: goto L_08B2B304;
    case 660u: goto L_08B2B324;
    case 661u: goto L_08B2B330;
    case 662u: goto L_08B2B348;
    case 663u: goto L_08B2B34C;
    case 664u: goto L_08B2B368;
    case 665u: goto L_08B2B398;
    case 666u: goto L_08B2B3A4;
    case 667u: goto L_08B2B3B4;
    case 668u: goto L_08B2B3C8;
    case 669u: goto L_08B2B3E4;
    case 670u: goto L_08B2B3EC;
    case 671u: goto L_08B2B3F0;
    case 672u: goto L_08B2B414;
    case 673u: goto L_08B2B41C;
    case 674u: goto L_08B2B43C;
    case 675u: goto L_08B2B448;
    case 676u: goto L_08B2B460;
    case 677u: goto L_08B2B464;
    case 678u: goto L_08B2B480;
    case 679u: goto L_08B2B4B0;
    case 680u: goto L_08B2B4BC;
    case 681u: goto L_08B2B4CC;
    case 682u: goto L_08B2B4E0;
    case 683u: goto L_08B2B4FC;
    case 684u: goto L_08B2B504;
    case 685u: goto L_08B2B508;
    case 686u: goto L_08B2B52C;
    case 687u: goto L_08B2B534;
    case 688u: goto L_08B2B554;
    case 689u: goto L_08B2B560;
    case 690u: goto L_08B2B578;
    case 691u: goto L_08B2B57C;
    case 692u: goto L_08B2B598;
    case 693u: goto L_08B2B5C0;
    case 694u: goto L_08B2B5CC;
    case 695u: goto L_08B2B5DC;
    case 696u: goto L_08B2B630;
    case 697u: goto L_08B2B648;
    case 698u: goto L_08B2B668;
    case 699u: goto L_08B2B674;
    case 700u: goto L_08B2B680;
    case 701u: goto L_08B2B68C;
    case 702u: goto L_08B2B694;
    case 703u: goto L_08B2B6AC;
    case 704u: goto L_08B2B6B4;
    case 705u: goto L_08B2B6C0;
    case 706u: goto L_08B2B6D4;
    case 707u: goto L_08B2B6FC;
    case 708u: goto L_08B2B708;
    case 709u: goto L_08B2B714;
    case 710u: goto L_08B2B720;
    case 711u: goto L_08B2B728;
    case 712u: goto L_08B2B730;
    case 713u: goto L_08B2B764;
    case 714u: goto L_08B2B77C;
    case 715u: goto L_08B2B79C;
    case 716u: goto L_08B2B7A8;
    case 717u: goto L_08B2B7B4;
    case 718u: goto L_08B2B7BC;
    case 719u: goto L_08B2B7D0;
    case 720u: goto L_08B2B824;
    case 721u: goto L_08B2B838;
    case 722u: goto L_08B2B86C;
    case 723u: goto L_08B2B878;
    case 724u: goto L_08B2B884;
    case 725u: goto L_08B2B88C;
    case 726u: goto L_08B2B8A0;
    case 727u: goto L_08B2B8A8;
    case 728u: goto L_08B2B8BC;
    case 729u: goto L_08B2B8C4;
    case 730u: goto L_08B2B8C8;
    case 731u: goto L_08B2B8D0;
    case 732u: goto L_08B2B8DC;
    case 733u: goto L_08B2B8E8;
    case 734u: goto L_08B2B8F8;
    case 735u: goto L_08B2B918;
    case 736u: goto L_08B2B920;
    case 737u: goto L_08B2B930;
    case 738u: goto L_08B2B938;
    case 739u: goto L_08B2B940;
    case 740u: goto L_08B2B950;
    case 741u: goto L_08B2B958;
    case 742u: goto L_08B2B95C;
    case 743u: goto L_08B2B968;
    case 744u: goto L_08B2B978;
    case 745u: goto L_08B2B984;
    case 746u: goto L_08B2B990;
    case 747u: goto L_08B2B9A8;
    case 748u: goto L_08B2B9B0;
    case 749u: goto L_08B2B9C8;
    case 750u: goto L_08B2B9D8;
    case 751u: goto L_08B2B9E4;
    case 752u: goto L_08B2B9F8;
    case 753u: goto L_08B2BA18;
    case 754u: goto L_08B2BA2C;
    case 755u: goto L_08B2BA34;
    case 756u: goto L_08B2BA48;
    case 757u: goto L_08B2BA84;
    case 758u: goto L_08B2BAB4;
    case 759u: goto L_08B2BAC0;
    case 760u: goto L_08B2BADC;
    case 761u: goto L_08B2BAE8;
    case 762u: goto L_08B2BAF0;
    case 763u: goto L_08B2BB00;
    case 764u: goto L_08B2BB08;
    case 765u: goto L_08B2BB1C;
    case 766u: goto L_08B2BB24;
    case 767u: goto L_08B2BB28;
    case 768u: goto L_08B2BB30;
    case 769u: goto L_08B2BB3C;
    case 770u: goto L_08B2BB44;
    case 771u: goto L_08B2BB58;
    case 772u: goto L_08B2BB6C;
    case 773u: goto L_08B2BB88;
    case 774u: goto L_08B2BBB8;
    case 775u: goto L_08B2BBC4;
    case 776u: goto L_08B2BBF4;
    case 777u: goto L_08B2BC10;
    case 778u: goto L_08B2BC3C;
    case 779u: goto L_08B2BC48;
    case 780u: goto L_08B2BC58;
    case 781u: goto L_08B2BC60;
    case 782u: goto L_08B2BC6C;
    case 783u: goto L_08B2BC74;
    case 784u: goto L_08B2BC80;
    case 785u: goto L_08B2BC84;
    case 786u: goto L_08B2BCA8;
    case 787u: goto L_08B2BCB0;
    case 788u: goto L_08B2BCD0;
    case 789u: goto L_08B2BCDC;
    case 790u: goto L_08B2BCF4;
    case 791u: goto L_08B2BCF8;
    case 792u: goto L_08B2BD14;
    case 793u: goto L_08B2BD50;
    case 794u: goto L_08B2BD5C;
    case 795u: goto L_08B2BD7C;
    case 796u: goto L_08B2BDA0;
    case 797u: goto L_08B2BDAC;
    case 798u: goto L_08B2BDB8;
    case 799u: goto L_08B2BDC0;
    case 800u: goto L_08B2BDC4;
    case 801u: goto L_08B2BDD8;
    case 802u: goto L_08B2BDFC;
    case 803u: goto L_08B2BE04;
    case 804u: goto L_08B2BE20;
    case 805u: goto L_08B2BE34;
    case 806u: goto L_08B2BE50;
    case 807u: goto L_08B2BE54;
    case 808u: goto L_08B2BE5C;
    case 809u: goto L_08B2BE7C;
    case 810u: goto L_08B2BE9C;
    case 811u: goto L_08B2BEC0;
    case 812u: goto L_08B2BED8;
    case 813u: goto L_08B2BF00;
    case 814u: goto L_08B2BF0C;
    case 815u: goto L_08B2BF2C;
    case 816u: goto L_08B2BF54;
    case 817u: goto L_08B2BF60;
    case 818u: goto L_08B2BF70;
    case 819u: goto L_08B2BF78;
    case 820u: goto L_08B2BF80;
    case 821u: goto L_08B2BF88;
    case 822u: goto L_08B2BFA0;
    case 823u: goto L_08B2BFC0;
    case 824u: goto L_08B2BFCC;
    case 825u: goto L_08B2BFD8;
    case 826u: goto L_08B2BFE0;
    case 827u: goto L_08B2BFEC;
    case 828u: goto L_08B2BFF4;
    case 829u: goto L_08B2BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B28000:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 / hot_regs.f14;
    hot_regs.g31 = (0x08B28018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28018u) goto L_08B28018;
    return;
L_08B28018:
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
L_08B28030:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08B28064u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28064u) goto L_08B28064;
    return;
L_08B28064:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28070u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28070u) goto L_08B28070;
    return;
L_08B28070:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B28080u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28080u) goto L_08B28080;
    return;
L_08B28080:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08B28090u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28090u) goto L_08B28090;
    return;
L_08B28090:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B280C4;
      }
      goto L_08B28098;
    }
L_08B28098:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B280C4;
      }
      goto L_08B280A4;
    }
L_08B280A4:
    hot_regs.g31 = (0x08B280ACu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 587u, 0x08A66C04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B280ACu) goto L_08B280AC;
    return;
L_08B280AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = hot_regs.g2 == 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B280E4;
      }
      goto L_08B280BC;
    }
}
L_08B280BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B280E4;
      }
      goto L_08B280C4;
    }
L_08B280C4:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B280D0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 587u, 0x08A66C04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B280D0u) goto L_08B280D0;
    return;
L_08B280D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = hot_regs.g2 == 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B280E4;
      }
      goto L_08B280E0;
    }
}
L_08B280E0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B280E4;
L_08B280E4:
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
          goto L_08B28104;
      }
      goto L_08B280FC;
    }
}
L_08B280FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2814C;
      }
      goto L_08B28104;
    }
L_08B28104:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g6));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g5 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B28130;
      }
      goto L_08B28124;
    }
}
L_08B28124:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2814C;
      }
      goto L_08B28130;
    }
}
L_08B28130:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] | g4);
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2814C;
      }
      goto L_08B28148;
    }
}
L_08B28148:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2814C;
L_08B2814C:
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
L_08B2816C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B28194u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28194u) goto L_08B28194;
    return;
L_08B28194:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B281A0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B281A0u) goto L_08B281A0;
    return;
L_08B281A0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08B281B0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 66u, 0x089083B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B281B0u) goto L_08B281B0;
    return;
L_08B281B0:
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
L_08B281C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08B281F8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B281F8u) goto L_08B281F8;
    return;
L_08B281F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28204u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28204u) goto L_08B28204;
    return;
L_08B28204:
{
    float f13 = hot_regs.f13;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B2822C;
      }
      goto L_08B28224;
    }
}
L_08B28224:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B28230;
      }
      goto L_08B2822C;
    }
L_08B2822C:
    hot_regs.g4 = (0u | 0u);
    goto L_08B28230;
L_08B28230:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B28254;
      }
      goto L_08B2824C;
    }
}
L_08B2824C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2829C;
      }
      goto L_08B28254;
    }
L_08B28254:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B28280;
      }
      goto L_08B28274;
    }
}
L_08B28274:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2829C;
      }
      goto L_08B28280;
    }
}
L_08B28280:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2829C;
      }
      goto L_08B28298;
    }
}
L_08B28298:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2829C;
L_08B2829C:
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
L_08B282B8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08B282C8u);
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 747u, 0x088671E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B282C8u) goto L_08B282C8;
    return;
L_08B282C8:
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
L_08B282D8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08B28304u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28304u) goto L_08B28304;
    return;
L_08B28304:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28310u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28310u) goto L_08B28310;
    return;
L_08B28310:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B28328u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28328u) goto L_08B28328;
    return;
L_08B28328:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B28334u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28334u) goto L_08B28334;
    return;
L_08B28334:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08B28340u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28340u) goto L_08B28340;
    return;
L_08B28340:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28358;
      }
      goto L_08B28348;
    }
L_08B28348:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28358;
      }
      goto L_08B28354;
    }
L_08B28354:
    ctx.gpr[16] = (0u | 1u);
    goto L_08B28358;
L_08B28358:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(476)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B28494;
      }
      goto L_08B28368;
    }
}
L_08B28368:
    hot_regs.g31 = (0x08B28370u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28370u) goto L_08B28370;
    return;
L_08B28370:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B283C8;
      }
      goto L_08B28378;
    }
L_08B28378:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B283C8;
      }
      goto L_08B28384;
    }
L_08B28384:
    hot_regs.g31 = (0x08B2838Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 187u, 0x08B00B68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2838Cu) goto L_08B2838C;
    return;
L_08B2838C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B283C8;
      }
      goto L_08B28394;
    }
L_08B28394:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g31 = (0x08B283B4u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B283B4u) goto L_08B283B4;
    return;
L_08B283B4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (0x08B283C0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B283C0u) goto L_08B283C0;
    return;
L_08B283C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28494;
      }
      goto L_08B283C8;
    }
L_08B283C8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B28494;
      }
      goto L_08B283D0;
    }
L_08B283D0:
    hot_regs.g31 = (0x08B283D8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B283D8u) goto L_08B283D8;
    return;
L_08B283D8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B28494;
      }
      goto L_08B283E0;
    }
L_08B283E0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g31 = (0x08B28400u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28400u) goto L_08B28400;
    return;
L_08B28400:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.g31 = (0x08B2841Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 161u, 0x08A40D58u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2841Cu) goto L_08B2841C;
    return;
L_08B2841C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28460;
      }
      goto L_08B28424;
    }
L_08B28424:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B28430u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28430u) goto L_08B28430;
    return;
L_08B28430:
    hot_regs.g31 = (0x08B28438u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28438u) goto L_08B28438;
    return;
L_08B28438:
    hot_regs.g31 = (0x08B28440u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28440u) goto L_08B28440;
    return;
L_08B28440:
    hot_regs.g6 = (0u | 33u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(776), hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B28458u);
    hot_regs.g7 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28458u) goto L_08B28458;
    return;
L_08B28458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28494;
      }
      goto L_08B28460;
    }
L_08B28460:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2846Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2846Cu) goto L_08B2846C;
    return;
L_08B2846C:
    hot_regs.g31 = (0x08B28474u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28474u) goto L_08B28474;
    return;
L_08B28474:
    hot_regs.g31 = (0x08B2847Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2847Cu) goto L_08B2847C;
    return;
L_08B2847C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(776), 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08B28494u);
    hot_regs.g7 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28494u) goto L_08B28494;
    return;
L_08B28494:
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
L_08B284B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08B284E0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B284E0u) goto L_08B284E0;
    return;
L_08B284E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B284ECu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B284ECu) goto L_08B284EC;
    return;
L_08B284EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B28568;
      }
      goto L_08B284F8;
    }
L_08B284F8:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B28504u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28504u) goto L_08B28504;
    return;
L_08B28504:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 55u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2859C;
      }
      goto L_08B28514;
    }
L_08B28514:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08B28520u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28520u) goto L_08B28520;
    return;
L_08B28520:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(776)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28560;
      }
      goto L_08B2852C;
    }
L_08B2852C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B28538u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28538u) goto L_08B28538;
    return;
L_08B28538:
    hot_regs.g31 = (0x08B28540u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28540u) goto L_08B28540;
    return;
L_08B28540:
    hot_regs.g31 = (0x08B28548u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28548u) goto L_08B28548;
    return;
L_08B28548:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(776), 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08B28560u);
    hot_regs.g7 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28560u) goto L_08B28560;
    return;
L_08B28560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2859C;
      }
      goto L_08B28568;
    }
L_08B28568:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(1396));
    goto L_08B28570;
L_08B28570:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2858C;
      }
      goto L_08B28580;
    }
L_08B28580:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2858Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2858Cu) goto L_08B2858C;
    return;
L_08B2858C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g17 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B28570;
      }
      goto L_08B2859C;
    }
}
L_08B2859C:
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
L_08B285BC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), hot_regs.g31);
    hot_regs.g31 = (0x08B285ECu);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B285ECu) goto L_08B285EC;
    return;
L_08B285EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B285F8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B285F8u) goto L_08B285F8;
    return;
L_08B285F8:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B28604u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28604u) goto L_08B28604;
    return;
L_08B28604:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16585u << 16u);
    g5 = (g5 | 4059u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.f20 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2863C;
      }
      goto L_08B28618;
    }
}
L_08B28618:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2863C;
      }
      goto L_08B28624;
    }
L_08B28624:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2864C;
      }
      goto L_08B2863C;
    }
L_08B2863C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08B2864C;
L_08B2864C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (0x08B28690u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28690u) goto L_08B28690;
    return;
L_08B28690:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = f12 + hot_regs.f20;
    hot_regs.f12 = f12;
        goto L_08B286A8;
    }
    goto L_08B286A8;
}
L_08B286A8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16329u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B286CC;
      }
      goto L_08B286C8;
    }
}
}
L_08B286C8:
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    goto L_08B286CC;
L_08B286CC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B286E4;
      }
      goto L_08B286D4;
    }
L_08B286D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08B286E4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B286E4u) goto L_08B286E4;
    return;
L_08B286E4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
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
L_08B28704:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B2872Cu);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2872Cu) goto L_08B2872C;
    return;
L_08B2872C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28738u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28738u) goto L_08B28738;
    return;
L_08B28738:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28778;
      }
      goto L_08B28744;
    }
L_08B28744:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08B28750u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 786u, 0x08863EF0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28750u) goto L_08B28750;
    return;
L_08B28750:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28778;
      }
      goto L_08B2875C;
    }
L_08B2875C:
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x08B28778u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(21784));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28778u) goto L_08B28778;
    return;
L_08B28778:
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
L_08B28790:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B287B8u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B287B8u) goto L_08B287B8;
    return;
L_08B287B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B287C4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B287C4u) goto L_08B287C4;
    return;
L_08B287C4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B287F4;
      }
      goto L_08B287D0;
    }
L_08B287D0:
    hot_regs.g31 = (0x08B287D8u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B287D8u) goto L_08B287D8;
    return;
L_08B287D8:
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x08B287F4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(21784));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B287F4u) goto L_08B287F4;
    return;
L_08B287F4:
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
L_08B2880C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B28834u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28834u) goto L_08B28834;
    return;
L_08B28834:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28840u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28840u) goto L_08B28840;
    return;
L_08B28840:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B28850u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28850u) goto L_08B28850;
    return;
L_08B28850:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 29u);
    hot_regs.g31 = (0x08B28860u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28860u) goto L_08B28860;
    return;
L_08B28860:
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
L_08B28878:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08B28898u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28898u) goto L_08B28898;
    return;
L_08B28898:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B288A4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B288A4u) goto L_08B288A4;
    return;
L_08B288A4:
    hot_regs.g31 = (0x08B288ACu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 452u, 0x08882930u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B288ACu) goto L_08B288AC;
    return;
L_08B288AC:
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
L_08B288C0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x08B288E8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B288E8u) goto L_08B288E8;
    return;
L_08B288E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x08B28914u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 147u, 0x08AB4B5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28914u) goto L_08B28914;
    return;
L_08B28914:
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
L_08B2892C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08B2894Cu);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2894Cu) goto L_08B2894C;
    return;
L_08B2894C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28958u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28958u) goto L_08B28958;
    return;
L_08B28958:
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(684), 0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B28968u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 890u, 0x08907DB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28968u) goto L_08B28968;
    return;
L_08B28968:
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
L_08B2897C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    hot_regs.g31 = (0x08B289B4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B289B4u) goto L_08B289B4;
    return;
L_08B289B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B289C0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B289C0u) goto L_08B289C0;
    return;
L_08B289C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B289D0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B289D0u) goto L_08B289D0;
    return;
L_08B289D0:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B289DCu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B289DCu) goto L_08B289DC;
    return;
L_08B289DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.f20 = std::bit_cast<float>(g4);
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B28A18;
      }
      goto L_08B289F4;
    }
}
L_08B289F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28A18;
      }
      goto L_08B28A00;
    }
L_08B28A00:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1152)));
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28A28;
      }
      goto L_08B28A18;
    }
L_08B28A18:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    goto L_08B28A28;
L_08B28A28:
    hot_regs.g31 = (0x08B28A30u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28A30u) goto L_08B28A30;
    return;
L_08B28A30:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28A5C;
      }
      goto L_08B28A38;
    }
L_08B28A38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28A5C;
      }
      goto L_08B28A44;
    }
L_08B28A44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
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
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B28A68;
      }
      goto L_08B28A5C;
    }
}
L_08B28A5C:
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    goto L_08B28A68;
L_08B28A68:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08B28A90u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28A90u) goto L_08B28A90;
    return;
L_08B28A90:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = f12 + hot_regs.f20;
    hot_regs.f12 = f12;
        goto L_08B28AA8;
    }
    goto L_08B28AA8;
}
L_08B28AA8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16329u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B28ACC;
      }
      goto L_08B28AC8;
    }
}
}
L_08B28AC8:
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    goto L_08B28ACC;
L_08B28ACC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B28AE4;
      }
      goto L_08B28AD4;
    }
L_08B28AD4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08B28AE4u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28AE4u) goto L_08B28AE4;
    return;
L_08B28AE4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
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
L_08B28B0C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B28B34u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28B34u) goto L_08B28B34;
    return;
L_08B28B34:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28B40u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28B40u) goto L_08B28B40;
    return;
L_08B28B40:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08B28BC4;
      }
      goto L_08B28B4C;
    }
L_08B28B4C:
    hot_regs.g31 = (0x08B28B54u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28B54u) goto L_08B28B54;
    return;
L_08B28B54:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28BA0;
      }
      goto L_08B28B5C;
    }
L_08B28B5C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28BA0;
      }
      goto L_08B28B68;
    }
L_08B28B68:
    hot_regs.g31 = (0x08B28B70u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 854u, 0x0890B608u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28B70u) goto L_08B28B70;
    return;
L_08B28B70:
    hot_regs.g31 = (0x08B28B78u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28B78u) goto L_08B28B78;
    return;
L_08B28B78:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B28BD0;
      }
      goto L_08B28B80;
    }
L_08B28B80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(160));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08B28B98u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28B98u) goto L_08B28B98;
    return;
L_08B28B98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28BD0;
      }
      goto L_08B28BA0;
    }
L_08B28BA0:
    hot_regs.g7 = (16512u << 16u);
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g5 = (0u | 16u);
    hot_regs.g31 = (0x08B28BBCu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28BBCu) goto L_08B28BBC;
    return;
L_08B28BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B28BD0;
      }
      goto L_08B28BC4;
    }
L_08B28BC4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08B28BD0;
}
L_08B28BD0:
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
L_08B28BE8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08B28C18u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28C18u) goto L_08B28C18;
    return;
L_08B28C18:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28C24u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28C24u) goto L_08B28C24;
    return;
L_08B28C24:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(1252)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08B28C44u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g7);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28C44u) goto L_08B28C44;
    return;
L_08B28C44:
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
L_08B28C60:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B28C88u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28C88u) goto L_08B28C88;
    return;
L_08B28C88:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28C94u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28C94u) goto L_08B28C94;
    return;
L_08B28C94:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B28CA4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28CA4u) goto L_08B28CA4;
    return;
L_08B28CA4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08B28CBCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28CBCu) goto L_08B28CBC;
    return;
L_08B28CBC:
    hot_regs.g5 = (0u | 60000u);
    hot_regs.g31 = (0x08B28CC8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28CC8u) goto L_08B28CC8;
    return;
L_08B28CC8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    g4 = (g4 | 64u);
    hot_regs.g2 = (0u | 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), g4);
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
L_08B28CEC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08B28D0Cu);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28D0Cu) goto L_08B28D0C;
    return;
L_08B28D0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28D18u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28D18u) goto L_08B28D18;
    return;
L_08B28D18:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-65));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g31 = (0x08B28D34u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28D34u) goto L_08B28D34;
    return;
L_08B28D34:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    g5 = (0u + static_cast<std::uint32_t>(-33));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2228)));
    g5 = (0u | 3u);
    { const bool branch_taken = g4 == g5;
    g5 = (0u | 2u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B28D5C;
      }
      goto L_08B28D54;
    }
}
L_08B28D54:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B28D64;
      }
      goto L_08B28D5C;
    }
L_08B28D5C:
    hot_regs.g31 = (0x08B28D64u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28D64u) goto L_08B28D64;
    return;
L_08B28D64:
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
L_08B28D78:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B28DA0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28DA0u) goto L_08B28DA0;
    return;
L_08B28DA0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28DACu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28DACu) goto L_08B28DAC;
    return;
L_08B28DAC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B28DB8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 501u, 0x08906484u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28DB8u) goto L_08B28DB8;
    return;
L_08B28DB8:
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
L_08B28DD0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B28DF8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28DF8u) goto L_08B28DF8;
    return;
L_08B28DF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28E04u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28E04u) goto L_08B28E04;
    return;
L_08B28E04:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(776), g4);
    g4 = (65520u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g4 = (hot_regs.g5 & g4);
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
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B28E38:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B28E60u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28E60u) goto L_08B28E60;
    return;
L_08B28E60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28E6Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28E6Cu) goto L_08B28E6C;
    return;
L_08B28E6C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g5 = (hot_regs.g2 | 0u);
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(456)));
    g7 = (65532u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g6 == 0u;
    g4 = (g4 & g7);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B28E98;
      }
      goto L_08B28E88;
    }
}
L_08B28E88:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (4u << 16u);
    g4 = (g4 | hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(456), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B28E9C;
      }
      goto L_08B28E98;
    }
}
L_08B28E98:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(456), hot_regs.g4);
    goto L_08B28E9C;
L_08B28E9C:
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
L_08B28EB4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08B28ED8u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28ED8u) goto L_08B28ED8;
    return;
L_08B28ED8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28EE4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28EE4u) goto L_08B28EE4;
    return;
L_08B28EE4:
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B28EF8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 745u, 0x08863CB4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28EF8u) goto L_08B28EF8;
    return;
L_08B28EF8:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B28F08;
      }
      goto L_08B28F04;
    }
L_08B28F04:
    hot_regs.g5 = (0u | 1u);
    goto L_08B28F08;
L_08B28F08:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (0u < g5 ? 1u : 0u);
    g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(524)));
    g5 = (g5 & 255u);
    g5 = (g5 & 255u);
    g6 = (0u < g6 ? 1u : 0u);
    g5 = (g5 ^ g6);
    g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g6 != 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B28F34;
      }
      goto L_08B28F2C;
    }
}
L_08B28F2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08B28F7C;
      }
      goto L_08B28F34;
    }
L_08B28F34:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (hot_regs.g4 + static_cast<std::uint32_t>(518));
    g7 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(521)));
    g7 = (static_cast<std::int32_t>(g7) < 9 ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    g6 = (0u < g6 ? 1u : 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B28F60;
      }
      goto L_08B28F54;
    }
}
L_08B28F54:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B28F7C;
      }
      goto L_08B28F60;
    }
}
L_08B28F60:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g5 | g6);
    g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::int32_t>(g6) < 21 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B28F7C;
      }
      goto L_08B28F78;
    }
}
L_08B28F78:
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B28F7C;
L_08B28F7C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B28F90:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B28FB8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28FB8u) goto L_08B28FB8;
    return;
L_08B28FB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B28FC4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B28FC4u) goto L_08B28FC4;
    return;
L_08B28FC4:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08B28FE4;
      }
      goto L_08B28FD4;
    }
L_08B28FD4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (16384u << 16u);
    g4 = (g4 | hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B28FF4;
      }
      goto L_08B28FE4;
    }
}
L_08B28FE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (49152u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08B28FF4;
}
L_08B28FF4:
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
L_08B2900C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 6u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08B29034u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29034u) goto L_08B29034;
    return;
L_08B29034:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29040u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29040u) goto L_08B29040;
    return;
L_08B29040:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08B29064;
      }
      goto L_08B29050;
    }
L_08B29050:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (1024u << 16u);
    g4 = (g4 | g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B29078;
      }
      goto L_08B29064;
    }
}
L_08B29064:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (64512u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08B29078;
}
L_08B29078:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29094;
      }
      goto L_08B29080;
    }
L_08B29080:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2048u << 16u);
    g4 = (g4 | g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B290A8;
      }
      goto L_08B29094;
    }
}
L_08B29094:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (63488u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08B290A8;
}
L_08B290A8:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B290C4;
      }
      goto L_08B290B0;
    }
L_08B290B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (4u << 16u);
    g4 = (g4 | g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B290D8;
      }
      goto L_08B290C4;
    }
}
L_08B290C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (65532u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08B290D8;
}
L_08B290D8:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B290F4;
      }
      goto L_08B290E0;
    }
L_08B290E0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (4096u << 16u);
    g4 = (g4 | hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29108;
      }
      goto L_08B290F4;
    }
}
L_08B290F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (61440u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08B29108;
}
L_08B29108:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29120;
      }
      goto L_08B29110;
    }
L_08B29110:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (8192u << 16u);
    g4 = (g4 | hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29130;
      }
      goto L_08B29120;
    }
}
L_08B29120:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (57344u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08B29130;
}
L_08B29130:
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
L_08B29148:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B29170u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29170u) goto L_08B29170;
    return;
L_08B29170:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2917Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2917Cu) goto L_08B2917C;
    return;
L_08B2917C:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
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
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(48);
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
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    hot_regs.g5 = (2246u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g5);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08B29234;
      }
      goto L_08B2922C;
    }
L_08B2922C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u + static_cast<std::uint32_t>(1));
    g5 = (g5 & 255u);
    hot_regs.g5 = g5;
    goto L_08B29234;
}
L_08B29234:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29240;
      }
      goto L_08B2923C;
    }
L_08B2923C:
    hot_regs.g4 = (0u | 1u);
    goto L_08B29240;
L_08B29240:
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
          goto L_08B2926C;
      }
      goto L_08B29264;
    }
}
L_08B29264:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B292BC;
      }
      goto L_08B2926C;
    }
L_08B2926C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B29298;
      }
      goto L_08B29284;
    }
}
L_08B29284:
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
          goto L_08B292BC;
      }
      goto L_08B29298;
    }
}
L_08B29298:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(521)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B292BC;
      }
      goto L_08B292B8;
    }
}
L_08B292B8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B292BC;
L_08B292BC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08B292D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 6u);
    hot_regs.g31 = (0x08B29304u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29304u) goto L_08B29304;
    return;
L_08B29304:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29310u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29310u) goto L_08B29310;
    return;
L_08B29310:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (hot_regs.g2 | 0u);
    ctx.gpr[18] = (0u | 0u);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(456)));
    hot_regs.g6 = (128u << 16u);
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2934C;
      }
      goto L_08B2932C;
    }
}
L_08B2932C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08B29340u);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29340u) goto L_08B29340;
    return;
L_08B29340:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2934C;
      }
      goto L_08B29348;
    }
L_08B29348:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B2934C;
L_08B2934C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (0u < g18 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g18 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g18 = (0u < g18 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B29378;
      }
      goto L_08B29370;
    }
}
L_08B29370:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08B293C0;
      }
      goto L_08B29378;
    }
L_08B29378:
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
          goto L_08B293A4;
      }
      goto L_08B29398;
    }
}
L_08B29398:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[18] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B293C0;
      }
      goto L_08B293A4;
    }
}
L_08B293A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[18] | g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B293C0;
      }
      goto L_08B293BC;
    }
}
L_08B293BC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B293C0;
L_08B293C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B293F0;
      }
      goto L_08B293CC;
    }
L_08B293CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (49864u << 16u);
    hot_regs.g31 = (0x08B293F0u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B293F0u) goto L_08B293F0;
    return;
L_08B293F0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B293FC;
      }
      goto L_08B293FC;
    }
L_08B293FC:
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
L_08B29418:
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
    hot_regs.g31 = (0x08B29448u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29448u) goto L_08B29448;
    return;
L_08B29448:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29454u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29454u) goto L_08B29454;
    return;
L_08B29454:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1929))))));
    g6 = (g5 << 5u);
    g5 = (g5 << 2u);
    g5 = (g6 - g5);
    g5 = (hot_regs.g2 + g5);
    g5 = (g5 + static_cast<std::uint32_t>(1396));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g5 != g6;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B29484;
      }
      goto L_08B29480;
    }
}
L_08B29480:
    hot_regs.g4 = (0u | 1u);
    goto L_08B29484;
L_08B29484:
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
          goto L_08B294B0;
      }
      goto L_08B294A8;
    }
}
L_08B294A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B294F8;
      }
      goto L_08B294B0;
    }
L_08B294B0:
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
          goto L_08B294DC;
      }
      goto L_08B294D0;
    }
}
L_08B294D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B294F8;
      }
      goto L_08B294DC;
    }
}
L_08B294DC:
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
          goto L_08B294F8;
      }
      goto L_08B294F4;
    }
}
L_08B294F4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B294F8;
L_08B294F8:
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
L_08B29514:
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
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (0u | 7u);
    hot_regs.g31 = (0x08B2957Cu);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2957Cu) goto L_08B2957C;
    return;
L_08B2957C:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x08B295A0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B295A0u) goto L_08B295A0;
    return;
L_08B295A0:
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
    ctx.gpr[20] = (ctx.lo);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    ctx.gpr[30] = g30;
    hot_regs.f12 = f12;
    ctx.fpr[30] = f30;
    goto L_08B295D8;
}
}
L_08B295D8:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B2975C;
      }
      goto L_08B295E4;
    }
L_08B295E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != g4;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29760;
      }
      goto L_08B295F0;
    }
}
L_08B295F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B2960C;
      }
      goto L_08B295F8;
    }
L_08B295F8:
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
        goto L_08B29614;
    }
    goto L_08B2960C;
}
L_08B2960C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B29634;
      }
      goto L_08B29614;
    }
L_08B29614:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08B29630;
    }
    goto L_08B29628;
}
L_08B29628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B29634;
      }
      goto L_08B29630;
    }
L_08B29630:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[20]);
    goto L_08B29634;
L_08B29634:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B2963C;
    }
L_08B2963C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29648u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29648u) goto L_08B29648;
    return;
L_08B29648:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7980)));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29654;
    }
L_08B29654:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29664;
    }
L_08B29664:
    hot_regs.g31 = (0x08B2966Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2966Cu) goto L_08B2966C;
    return;
L_08B2966C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29674;
    }
L_08B29674:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    g4 = (32768u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29684;
    }
}
L_08B29684:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29694;
    }
}
L_08B29694:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B296A0;
    }
L_08B296A0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08B296B8u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08863028u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B296B8u) goto L_08B296B8;
    return;
L_08B296B8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B296C0;
    }
L_08B296C0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08B296D8u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B296D8u) goto L_08B296D8;
    return;
L_08B296D8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B296E0;
    }
L_08B296E0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B296F8;
    }
L_08B296F8:
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29708;
    }
L_08B29708:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29714u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29714u) goto L_08B29714;
    return;
L_08B29714:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7980), ctx.gpr[18]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B29728u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29728u) goto L_08B29728;
    return;
L_08B29728:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (g4 & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29754;
      }
      goto L_08B29740;
    }
}
L_08B29740:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B29754u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29754u) goto L_08B29754;
    return;
L_08B29754:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B295D8;
      }
      goto L_08B2975C;
    }
L_08B2975C:
    hot_regs.g4 = (2236u << 16u);
    goto L_08B29760;
L_08B29760:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(29704), ctx.gpr[18]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B29774u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29774u) goto L_08B29774;
    return;
L_08B29774:
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
L_08B297C0:
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
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B29810u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29810u) goto L_08B29810;
    return;
L_08B29810:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[30] = (2236u << 16u);
      if (branch_taken) {
          goto L_08B29824;
      }
      goto L_08B2981C;
    }
L_08B2981C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B29830;
      }
      goto L_08B29824;
    }
L_08B29824:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    g21 = (g21 + hot_regs.g4);
    ctx.gpr[21] = g21;
    goto L_08B29830;
}
L_08B29830:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08B29844u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29844u) goto L_08B29844;
    return;
L_08B29844:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g31 = (0x08B29850u);
    hot_regs.g5 = (hot_regs.g2 & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 516u, 0x08A8EA74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29850u) goto L_08B29850;
    return;
L_08B29850:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.gpr[21] = (ctx.gpr[30] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08B2986Cu);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2986Cu) goto L_08B2986C;
    return;
L_08B2986C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08B2987Cu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2987Cu) goto L_08B2987C;
    return;
L_08B2987C:
{
    float f12 = hot_regs.f12;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    f24 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(16));
    g4 = (16544u << 16u);
    f12 = std::bit_cast<float>(g4);
    hot_regs.f22 = f24 - f12;
    f24 = f24 + f12;
    g4 = (2239u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(21784));
    ctx.gpr[22] = (g17 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g17)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[19] = (ctx.lo);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    ctx.fpr[24] = f24;
    goto L_08B298BC;
}
}
L_08B298BC:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B29A6C;
      }
      goto L_08B298C8;
    }
L_08B298C8:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B29A6C;
      }
      goto L_08B298D4;
    }
L_08B298D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B298F0;
      }
      goto L_08B298DC;
    }
L_08B298DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g4 = g4;
        goto L_08B298F8;
    }
    goto L_08B298F0;
}
L_08B298F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B29920;
      }
      goto L_08B298F8;
    }
L_08B298F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g4 = g4;
        goto L_08B29918;
    }
    goto L_08B29910;
}
L_08B29910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B29920;
      }
      goto L_08B29918;
    }
L_08B29918:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g16 = (g16 + ctx.gpr[19]);
    ctx.gpr[16] = g16;
    goto L_08B29920;
}
L_08B29920:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29928;
    }
L_08B29928:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29934u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29934u) goto L_08B29934;
    return;
L_08B29934:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7980)));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29940;
    }
L_08B29940:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29950;
    }
L_08B29950:
    hot_regs.g31 = (0x08B29958u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29958u) goto L_08B29958;
    return;
L_08B29958:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29960;
    }
L_08B29960:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    g4 = (32768u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29970;
    }
}
L_08B29970:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29980;
    }
}
L_08B29980:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B2998C;
    }
L_08B2998C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(29704)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08B299A4u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08863028u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B299A4u) goto L_08B299A4;
    return;
L_08B299A4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (2u << 16u);
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B299AC;
    }
L_08B299AC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B299BC;
    }
}
L_08B299BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B299C8;
    }
L_08B299C8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (0x08B299E8u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 313u, 0x08A8DAA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B299E8u) goto L_08B299E8;
    return;
L_08B299E8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B299F0;
    }
L_08B299F0:
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29A00;
    }
L_08B29A00:
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29A10;
    }
L_08B29A10:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29A1Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29A1Cu) goto L_08B29A1C;
    return;
L_08B29A1C:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7980), ctx.gpr[18]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B29A30u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29A30u) goto L_08B29A30;
    return;
L_08B29A30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (65532u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (hot_regs.g5 & g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29A64;
      }
      goto L_08B29A50;
    }
}
L_08B29A50:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B29A64u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29A64u) goto L_08B29A64;
    return;
L_08B29A64:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B298BC;
      }
      goto L_08B29A6C;
    }
L_08B29A6C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(29704), ctx.gpr[18]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B29A80u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29A80u) goto L_08B29A80;
    return;
L_08B29A80:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B29AC0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B29AE8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29AE8u) goto L_08B29AE8;
    return;
L_08B29AE8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29AF4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29AF4u) goto L_08B29AF4;
    return;
L_08B29AF4:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(456)));
    hot_regs.g6 = (128u << 16u);
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B29B10;
      }
      goto L_08B29B0C;
    }
}
L_08B29B0C:
    hot_regs.g4 = (0u | 1u);
    goto L_08B29B10;
L_08B29B10:
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
          goto L_08B29B3C;
      }
      goto L_08B29B34;
    }
}
L_08B29B34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B29B84;
      }
      goto L_08B29B3C;
    }
L_08B29B3C:
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
          goto L_08B29B68;
      }
      goto L_08B29B5C;
    }
}
L_08B29B5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29B84;
      }
      goto L_08B29B68;
    }
}
L_08B29B68:
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
          goto L_08B29B84;
      }
      goto L_08B29B80;
    }
}
L_08B29B80:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B29B84;
L_08B29B84:
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
L_08B29B9C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B29BC4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29BC4u) goto L_08B29BC4;
    return;
L_08B29BC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29BD0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29BD0u) goto L_08B29BD0;
    return;
L_08B29BD0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (hot_regs.g2 | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g5 = (g5 & 255u);
    g5 = (g5 & 255u);
    hot_regs.g6 = (17096u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g6);
    f12 = std::bit_cast<float>(g5);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g5 = (16288u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((f13 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08B29C0C;
    }
    goto L_08B29C0C;
}
}
L_08B29C0C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08B29C30:
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
    hot_regs.g31 = (0x08B29C60u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29C60u) goto L_08B29C60;
    return;
L_08B29C60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29C6Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29C6Cu) goto L_08B29C6C;
    return;
L_08B29C6C:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B29C84;
      }
      goto L_08B29C80;
    }
L_08B29C80:
    hot_regs.g4 = (0u | 1u);
    goto L_08B29C84;
L_08B29C84:
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
          goto L_08B29CB0;
      }
      goto L_08B29CA8;
    }
}
L_08B29CA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B29CF8;
      }
      goto L_08B29CB0;
    }
L_08B29CB0:
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
          goto L_08B29CDC;
      }
      goto L_08B29CD0;
    }
}
L_08B29CD0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29CF8;
      }
      goto L_08B29CDC;
    }
}
L_08B29CDC:
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
          goto L_08B29CF8;
      }
      goto L_08B29CF4;
    }
}
L_08B29CF4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B29CF8;
L_08B29CF8:
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
L_08B29D14:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B29D3Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29D3Cu) goto L_08B29D3C;
    return;
L_08B29D3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29D48u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29D48u) goto L_08B29D48;
    return;
L_08B29D48:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08B29D64;
      }
      goto L_08B29D58;
    }
L_08B29D58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 16384u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(456), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29D70;
      }
      goto L_08B29D64;
    }
}
L_08B29D64:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-16385));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(456), g4);
    hot_regs.g4 = g4;
    goto L_08B29D70;
}
L_08B29D70:
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
L_08B29D88:
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
    hot_regs.g31 = (0x08B29DB8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29DB8u) goto L_08B29DB8;
    return;
L_08B29DB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29DC4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29DC4u) goto L_08B29DC4;
    return;
L_08B29DC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = g4 == 0u;
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29E1C;
      }
      goto L_08B29DD4;
    }
}
L_08B29DD4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 49u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g6;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(91))))));
      if (branch_taken) {
          goto L_08B29DF0;
      }
      goto L_08B29DE4;
    }
L_08B29DE4:
    hot_regs.g5 = (0u | 50u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B29E10;
      }
      goto L_08B29DF0;
    }
L_08B29DF0:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B29E00u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 518u, 0x08862E80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29E00u) goto L_08B29E00;
    return;
L_08B29E00:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B29E1C;
      }
      goto L_08B29E08;
    }
L_08B29E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B29E1C;
      }
      goto L_08B29E10;
    }
L_08B29E10:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B29E1C;
      }
      goto L_08B29E18;
    }
L_08B29E18:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B29E1C;
L_08B29E1C:
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
          goto L_08B29E48;
      }
      goto L_08B29E40;
    }
}
L_08B29E40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B29E90;
      }
      goto L_08B29E48;
    }
L_08B29E48:
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
          goto L_08B29E74;
      }
      goto L_08B29E68;
    }
}
L_08B29E68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29E90;
      }
      goto L_08B29E74;
    }
}
L_08B29E74:
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
          goto L_08B29E90;
      }
      goto L_08B29E8C;
    }
}
L_08B29E8C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B29E90;
L_08B29E90:
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
L_08B29EAC:
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
    hot_regs.g31 = (0x08B29EDCu);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29EDCu) goto L_08B29EDC;
    return;
L_08B29EDC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29EE8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29EE8u) goto L_08B29EE8;
    return;
L_08B29EE8:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29EF8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29EF8u) goto L_08B29EF8;
    return;
L_08B29EF8:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08B29F20;
      }
      goto L_08B29F08;
    }
L_08B29F08:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    hot_regs.g6 = (512u << 16u);
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B29F20;
      }
      goto L_08B29F1C;
    }
}
L_08B29F1C:
    hot_regs.g4 = (0u | 1u);
    goto L_08B29F20;
L_08B29F20:
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
          goto L_08B29F4C;
      }
      goto L_08B29F44;
    }
}
L_08B29F44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B29F94;
      }
      goto L_08B29F4C;
    }
L_08B29F4C:
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
          goto L_08B29F78;
      }
      goto L_08B29F6C;
    }
}
L_08B29F6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B29F94;
      }
      goto L_08B29F78;
    }
}
L_08B29F78:
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
          goto L_08B29F94;
      }
      goto L_08B29F90;
    }
}
L_08B29F90:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B29F94;
L_08B29F94:
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
L_08B29FB0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B29FD0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29FD0u) goto L_08B29FD0;
    return;
L_08B29FD0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B29FDCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B29FDCu) goto L_08B29FDC;
    return;
L_08B29FDC:
    hot_regs.g4 = (17530u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 30u);
    hot_regs.g7 = (0u | 6u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x08B2A000u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A000u) goto L_08B2A000;
    return;
L_08B2A000:
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
L_08B2A014:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2A03Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A03Cu) goto L_08B2A03C;
    return;
L_08B2A03C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A048u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A048u) goto L_08B2A048;
    return;
L_08B2A048:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08B2A068;
      }
      goto L_08B2A058;
    }
L_08B2A058:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (2048u << 16u);
    g4 = (g4 | hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(456), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2A078;
      }
      goto L_08B2A068;
    }
}
L_08B2A068:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (63488u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(456), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08B2A078;
}
L_08B2A078:
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
L_08B2A090:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2A0B8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A0B8u) goto L_08B2A0B8;
    return;
L_08B2A0B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A0C4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A0C4u) goto L_08B2A0C4;
    return;
L_08B2A0C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (8u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(76)));
    g4 = (65528u << 16u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08B2A0F8;
      }
      goto L_08B2A0E4;
    }
}
L_08B2A0E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g7 | g6);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(72), g6);
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(76), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B2A108;
      }
      goto L_08B2A0F8;
    }
}
L_08B2A0F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g7 & g4);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(72), g4);
    g4 = (hot_regs.g5 | hot_regs.g6);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(76), g4);
    hot_regs.g4 = g4;
    goto L_08B2A108;
}
L_08B2A108:
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
L_08B2A120:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2A14Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A14Cu) goto L_08B2A14C;
    return;
L_08B2A14C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A158u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A158u) goto L_08B2A158;
    return;
L_08B2A158:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A240;
      }
      goto L_08B2A164;
    }
L_08B2A164:
    hot_regs.g31 = (0x08B2A16Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A16Cu) goto L_08B2A16C;
    return;
L_08B2A16C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A208;
      }
      goto L_08B2A174;
    }
L_08B2A174:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2A208;
      }
      goto L_08B2A184;
    }
L_08B2A184:
    hot_regs.g31 = (0x08B2A18Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A18Cu) goto L_08B2A18C;
    return;
L_08B2A18C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A1B0;
      }
      goto L_08B2A194;
    }
L_08B2A194:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A1B0;
      }
      goto L_08B2A1A0;
    }
L_08B2A1A0:
    hot_regs.g31 = (0x08B2A1A8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 765u, 0x08863DD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A1A8u) goto L_08B2A1A8;
    return;
L_08B2A1A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A208;
      }
      goto L_08B2A1B0;
    }
L_08B2A1B0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2A1BCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A1BCu) goto L_08B2A1BC;
    return;
L_08B2A1BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (65532u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g5 = (4u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-257));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), hot_regs.g4);
    hot_regs.g31 = (0x08B2A1F0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 452u, 0x08882930u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A1F0u) goto L_08B2A1F0;
    return;
L_08B2A1F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (32768u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), hot_regs.g4);
    hot_regs.g31 = (0x08B2A208u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 537u, 0x0889358Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A208u) goto L_08B2A208;
    return;
L_08B2A208:
    hot_regs.g31 = (0x08B2A210u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A210u) goto L_08B2A210;
    return;
L_08B2A210:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A240;
      }
      goto L_08B2A218;
    }
L_08B2A218:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A240;
      }
      goto L_08B2A224;
    }
L_08B2A224:
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(21784));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2A240u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A240u) goto L_08B2A240;
    return;
L_08B2A240:
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
L_08B2A25C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2A284u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A284u) goto L_08B2A284;
    return;
L_08B2A284:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A290u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A290u) goto L_08B2A290;
    return;
L_08B2A290:
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
          goto L_08B2A2B4;
      }
      goto L_08B2A2A8;
    }
}
L_08B2A2A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2A2B8;
      }
      goto L_08B2A2B4;
    }
}
L_08B2A2B4:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(460), hot_regs.g4);
    goto L_08B2A2B8;
L_08B2A2B8:
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
L_08B2A2D0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2A300u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A300u) goto L_08B2A300;
    return;
L_08B2A300:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A30Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A30Cu) goto L_08B2A30C;
    return;
L_08B2A30C:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08B2A324u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A324u) goto L_08B2A324;
    return;
L_08B2A324:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08B2A338;
    }
    goto L_08B2A330;
L_08B2A330:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B2A33C;
      }
      goto L_08B2A338;
    }
L_08B2A338:
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_08B2A33C;
L_08B2A33C:
    ctx.gpr[8] = (hot_regs.g4 | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g6 = (ctx.gpr[8] | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A388;
      }
      goto L_08B2A354;
    }
L_08B2A354:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (static_cast<std::int32_t>(hot_regs.g5) < 65 ? 1u : 0u);
    { const bool branch_taken = g9 != 0u;
    g9 = (static_cast<std::int32_t>(hot_regs.g5) < 91 ? 1u : 0u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B2A370;
      }
      goto L_08B2A360;
    }
}
L_08B2A360:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A370;
      }
      goto L_08B2A368;
    }
L_08B2A368:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    goto L_08B2A370;
}
L_08B2A370:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g7 = (g7 & 255u);
    hot_regs.g6 = (hot_regs.g4 + g7);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B2A354;
      }
      goto L_08B2A388;
    }
}
L_08B2A388:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2A394u);
    hot_regs.g5 = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 671u, 0x0890EE04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A394u) goto L_08B2A394;
    return;
L_08B2A394:
    hot_regs.g31 = (0x08B2A39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A39Cu) goto L_08B2A39C;
    return;
L_08B2A39C:
    hot_regs.g31 = (0x08B2A3A4u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A3A4u) goto L_08B2A3A4;
    return;
L_08B2A3A4:
    hot_regs.g31 = (0x08B2A3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A3ACu) goto L_08B2A3AC;
    return;
L_08B2A3AC:
    hot_regs.g31 = (0x08B2A3B4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 688u, 0x0890EF00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A3B4u) goto L_08B2A3B4;
    return;
L_08B2A3B4:
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
L_08B2A3D0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2A3FCu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A3FCu) goto L_08B2A3FC;
    return;
L_08B2A3FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A408u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A408u) goto L_08B2A408;
    return;
L_08B2A408:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08B2A42Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A42Cu) goto L_08B2A42C;
    return;
L_08B2A42C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.f20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B2A46C;
      }
      goto L_08B2A434;
    }
L_08B2A434:
    hot_regs.g31 = (0x08B2A43Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A43Cu) goto L_08B2A43C;
    return;
L_08B2A43C:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(337)));
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    ctx.set_fpu_condition((hot_regs.f13 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B2A464;
      }
      goto L_08B2A45C;
    }
}
L_08B2A45C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
      if (branch_taken) {
          goto L_08B2A464;
      }
      goto L_08B2A464;
    }
L_08B2A464:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08B2A494;
      }
      goto L_08B2A46C;
    }
L_08B2A46C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    hot_regs.g4 = (17096u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2A490;
      }
      goto L_08B2A488;
    }
L_08B2A488:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
      if (branch_taken) {
          goto L_08B2A490;
      }
      goto L_08B2A490;
    }
L_08B2A490:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08B2A494;
L_08B2A494:
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2A4AC;
      }
      goto L_08B2A4A4;
    }
L_08B2A4A4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08B2A4AC;
      }
      goto L_08B2A4AC;
    }
L_08B2A4AC:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
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
L_08B2A4CC:
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
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2A504u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A504u) goto L_08B2A504;
    return;
L_08B2A504:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A510u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A510u) goto L_08B2A510;
    return;
L_08B2A510:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A520u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A520u) goto L_08B2A520;
    return;
L_08B2A520:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B2A534u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 571u, 0x089068C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A534u) goto L_08B2A534;
    return;
L_08B2A534:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A540;
      }
      goto L_08B2A53C;
    }
L_08B2A53C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2A540;
L_08B2A540:
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
          goto L_08B2A56C;
      }
      goto L_08B2A564;
    }
}
L_08B2A564:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2A5B4;
      }
      goto L_08B2A56C;
    }
L_08B2A56C:
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
          goto L_08B2A598;
      }
      goto L_08B2A58C;
    }
}
L_08B2A58C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2A5B4;
      }
      goto L_08B2A598;
    }
}
L_08B2A598:
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
          goto L_08B2A5B4;
      }
      goto L_08B2A5B0;
    }
}
L_08B2A5B0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2A5B4;
L_08B2A5B4:
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
L_08B2A5D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2A5FCu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A5FCu) goto L_08B2A5FC;
    return;
L_08B2A5FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A608u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A608u) goto L_08B2A608;
    return;
L_08B2A608:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08B2A618u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A618u) goto L_08B2A618;
    return;
L_08B2A618:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 18u);
    hot_regs.g31 = (0x08B2A62Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A62Cu) goto L_08B2A62C;
    return;
L_08B2A62C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2A638u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 878u, 0x0892BA54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A638u) goto L_08B2A638;
    return;
L_08B2A638:
    hot_regs.g31 = (0x08B2A640u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A640u) goto L_08B2A640;
    return;
L_08B2A640:
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
L_08B2A658:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08B2A680u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A680u) goto L_08B2A680;
    return;
L_08B2A680:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A68Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A68Cu) goto L_08B2A68C;
    return;
L_08B2A68C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g5);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A6DC;
      }
      goto L_08B2A6A0;
    }
L_08B2A6A0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) >= 0;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B2A6C8;
      }
      goto L_08B2A6AC;
    }
L_08B2A6AC:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08B2A6C0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A6C0u) goto L_08B2A6C0;
    return;
L_08B2A6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A6DC;
      }
      goto L_08B2A6C8;
    }
L_08B2A6C8:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08B2A6DCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A6DCu) goto L_08B2A6DC;
    return;
L_08B2A6DC:
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
L_08B2A6F4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2A71Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A71Cu) goto L_08B2A71C;
    return;
L_08B2A71C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A728u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A728u) goto L_08B2A728;
    return;
L_08B2A728:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(460)));
      if (branch_taken) {
          goto L_08B2A748;
      }
      goto L_08B2A738;
    }
L_08B2A738:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (4u << 16u);
    g4 = (g4 | hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2A758;
      }
      goto L_08B2A748;
    }
}
L_08B2A748:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (65532u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08B2A758;
}
L_08B2A758:
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
L_08B2A770:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2A798u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A798u) goto L_08B2A798;
    return;
L_08B2A798:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A7A4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A7A4u) goto L_08B2A7A4;
    return;
L_08B2A7A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(1360)));
    g5 = (g4 ^ 20u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 ^ 5u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g5 | g4);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2A7D0;
      }
      goto L_08B2A7C8;
    }
}
L_08B2A7C8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B2A7D4;
      }
      goto L_08B2A7D0;
    }
L_08B2A7D0:
    hot_regs.g4 = (0u | 1u);
    goto L_08B2A7D4;
L_08B2A7D4:
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
          goto L_08B2A7F8;
      }
      goto L_08B2A7F0;
    }
}
L_08B2A7F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2A840;
      }
      goto L_08B2A7F8;
    }
L_08B2A7F8:
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
          goto L_08B2A824;
      }
      goto L_08B2A818;
    }
}
L_08B2A818:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2A840;
      }
      goto L_08B2A824;
    }
}
L_08B2A824:
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
          goto L_08B2A840;
      }
      goto L_08B2A83C;
    }
}
L_08B2A83C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2A840;
L_08B2A840:
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
L_08B2A858:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2A878u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A878u) goto L_08B2A878;
    return;
L_08B2A878:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g31 = (0x08B2A888u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 152u, 0x08AB4BCCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A888u) goto L_08B2A888;
    return;
L_08B2A888:
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
L_08B2A89C:
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
    hot_regs.g31 = (0x08B2A8D0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A8D0u) goto L_08B2A8D0;
    return;
L_08B2A8D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A8DCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A8DCu) goto L_08B2A8DC;
    return;
L_08B2A8DC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B2A8E8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A8E8u) goto L_08B2A8E8;
    return;
L_08B2A8E8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2A8F8;
      }
      goto L_08B2A8F0;
    }
L_08B2A8F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08B2A8FC;
      }
      goto L_08B2A8F8;
    }
L_08B2A8F8:
    ctx.gpr[17] = (0u | 0u);
    goto L_08B2A8FC;
L_08B2A8FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08B2A908u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A908u) goto L_08B2A908;
    return;
L_08B2A908:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08B2A91Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A91Cu) goto L_08B2A91C;
    return;
L_08B2A91C:
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
L_08B2A93C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2A95Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A95Cu) goto L_08B2A95C;
    return;
L_08B2A95C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11836), std::bit_cast<std::uint32_t>(hot_regs.f12));
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
L_08B2A978:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2A998u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A998u) goto L_08B2A998;
    return;
L_08B2A998:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832), hot_regs.g4);
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
L_08B2A9B4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2A9DCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A9DCu) goto L_08B2A9DC;
    return;
L_08B2A9DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2A9E8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A9E8u) goto L_08B2A9E8;
    return;
L_08B2A9E8:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08B2A9F4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2A9F4u) goto L_08B2A9F4;
    return;
L_08B2A9F4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2AA00;
      }
      goto L_08B2A9FC;
    }
L_08B2A9FC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2AA00;
L_08B2AA00:
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
          goto L_08B2AA2C;
      }
      goto L_08B2AA24;
    }
}
L_08B2AA24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2AA74;
      }
      goto L_08B2AA2C;
    }
L_08B2AA2C:
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
          goto L_08B2AA58;
      }
      goto L_08B2AA4C;
    }
}
L_08B2AA4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2AA74;
      }
      goto L_08B2AA58;
    }
}
L_08B2AA58:
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
          goto L_08B2AA74;
      }
      goto L_08B2AA70;
    }
}
L_08B2AA70:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2AA74;
L_08B2AA74:
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
L_08B2AA8C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2AAB4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AAB4u) goto L_08B2AAB4;
    return;
L_08B2AAB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    g5 = (g4 << 2u);
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g5 = (g5 | hot_regs.g7);
    g4 = (g4 << 2u);
    g4 = (g6 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B2AAFC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2AB24u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AB24u) goto L_08B2AB24;
    return;
L_08B2AB24:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    g5 = (g4 << 2u);
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g7 = (~(g7 | 0u));
    g5 = (g5 & g7);
    g4 = (g4 << 2u);
    g4 = (g6 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B2AB70:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08B2AB9Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AB9Cu) goto L_08B2AB9C;
    return;
L_08B2AB9C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2ABA8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2ABA8u) goto L_08B2ABA8;
    return;
L_08B2ABA8:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2ABB8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2ABB8u) goto L_08B2ABB8;
    return;
L_08B2ABB8:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2ABCCu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 65u, 0x0890C42Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2ABCCu) goto L_08B2ABCC;
    return;
L_08B2ABCC:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B2ABDCu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 65u, 0x0890C42Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2ABDCu) goto L_08B2ABDC;
    return;
L_08B2ABDC:
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
L_08B2ABF8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2AC20u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AC20u) goto L_08B2AC20;
    return;
L_08B2AC20:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2AC2Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AC2Cu) goto L_08B2AC2C;
    return;
L_08B2AC2C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(1918), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(464)));
    hot_regs.g5 = (64u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(464), g4);
    g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
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
L_08B2AC5C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2AC84u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AC84u) goto L_08B2AC84;
    return;
L_08B2AC84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2AC90u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AC90u) goto L_08B2AC90;
    return;
L_08B2AC90:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2ACCC;
      }
      goto L_08B2ACA0;
    }
L_08B2ACA0:
    hot_regs.g31 = (0x08B2ACA8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2ACA8u) goto L_08B2ACA8;
    return;
L_08B2ACA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (16384u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), g4);
    g4 = (0u | 2u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(888), static_cast<std::uint8_t>(g4));
    g4 = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(889), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2ACF0;
      }
      goto L_08B2ACCC;
    }
}
L_08B2ACCC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    g5 = (49152u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), g4);
    g4 = (0u | 15u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(888), static_cast<std::uint8_t>(g4));
    g4 = (0u | 30u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(889), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B2ACF0;
}
L_08B2ACF0:
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
L_08B2AD08:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2AD30u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AD30u) goto L_08B2AD30;
    return;
L_08B2AD30:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2AD3Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AD3Cu) goto L_08B2AD3C;
    return;
L_08B2AD3C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 15u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B2AD58;
      }
      goto L_08B2AD50;
    }
L_08B2AD50:
    hot_regs.g31 = (0x08B2AD58u);
    hot_regs.g5 = (0u | 146u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AD58u) goto L_08B2AD58;
    return;
L_08B2AD58:
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
L_08B2AD70:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 6u);
    hot_regs.g31 = (0x08B2AD98u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AD98u) goto L_08B2AD98;
    return;
L_08B2AD98:
{
    std::uint32_t g17 = ctx.gpr[17];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2ADD4;
      }
      goto L_08B2ADCC;
    }
}
L_08B2ADCC:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B2ADD4;
L_08B2ADD4:
    ctx.set_fpu_condition((hot_regs.f13 < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2ADEC;
      }
      goto L_08B2ADE4;
    }
L_08B2ADE4:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08B2ADEC;
L_08B2ADEC:
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
        goto L_08B2AE08;
    }
    goto L_08B2ADFC;
L_08B2ADFC:
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_08B2AE08;
L_08B2AE08:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g31 = (0x08B2AE28u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 143u, 0x08894B04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AE28u) goto L_08B2AE28;
    return;
L_08B2AE28:
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
L_08B2AE40:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08B2AE68u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AE68u) goto L_08B2AE68;
    return;
L_08B2AE68:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2AE74u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AE74u) goto L_08B2AE74;
    return;
L_08B2AE74:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08B2AE84u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AE84u) goto L_08B2AE84;
    return;
L_08B2AE84:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (hot_regs.g2 | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    hot_regs.g6 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2AEA8;
      }
      goto L_08B2AE94;
    }
}
L_08B2AE94:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08B2AEA0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 933u, 0x0892BDC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AEA0u) goto L_08B2AEA0;
    return;
L_08B2AEA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2AEB0;
      }
      goto L_08B2AEA8;
    }
L_08B2AEA8:
    hot_regs.g31 = (0x08B2AEB0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 933u, 0x0892BDC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AEB0u) goto L_08B2AEB0;
    return;
L_08B2AEB0:
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
L_08B2AEC8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2AF04u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AF04u) goto L_08B2AF04;
    return;
L_08B2AF04:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08B2AF10u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AF10u) goto L_08B2AF10;
    return;
L_08B2AF10:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B2AF20u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AF20u) goto L_08B2AF20;
    return;
L_08B2AF20:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2AF48;
      }
      goto L_08B2AF28;
    }
L_08B2AF28:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B2AF34u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AF34u) goto L_08B2AF34;
    return;
L_08B2AF34:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2AF40u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AF40u) goto L_08B2AF40;
    return;
L_08B2AF40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), hot_regs.g2);
      if (branch_taken) {
          goto L_08B2AF50;
      }
      goto L_08B2AF48;
    }
L_08B2AF48:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    goto L_08B2AF50;
L_08B2AF50:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B2AF60u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AF60u) goto L_08B2AF60;
    return;
L_08B2AF60:
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
L_08B2AF84:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2AFACu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AFACu) goto L_08B2AFAC;
    return;
L_08B2AFAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2AFB8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2AFB8u) goto L_08B2AFB8;
    return;
L_08B2AFB8:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_08B2AFD4;
      }
      goto L_08B2AFC8;
    }
L_08B2AFC8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2AFE0;
      }
      goto L_08B2AFD4;
    }
}
L_08B2AFD4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    goto L_08B2AFE0;
}
L_08B2AFE0:
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
L_08B2AFF8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2B020u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B020u) goto L_08B2B020;
    return;
L_08B2B020:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B02Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B02Cu) goto L_08B2B02C;
    return;
L_08B2B02C:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(464)));
      if (branch_taken) {
          goto L_08B2B04C;
      }
      goto L_08B2B03C;
    }
L_08B2B03C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-513));
    g4 = (g4 & hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2B054;
      }
      goto L_08B2B04C;
    }
}
L_08B2B04C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 512u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    goto L_08B2B054;
}
L_08B2B054:
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
L_08B2B06C:
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
    hot_regs.g31 = (0x08B2B09Cu);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B09Cu) goto L_08B2B09C;
    return;
L_08B2B09C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B0A8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B0A8u) goto L_08B2B0A8;
    return;
L_08B2B0A8:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08B2B0B8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B0B8u) goto L_08B2B0B8;
    return;
L_08B2B0B8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    hot_regs.g6 = (0u | 55u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B2B0F8;
      }
      goto L_08B2B0CC;
    }
L_08B2B0CC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    hot_regs.g6 = (0u | 16u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B2B0F8;
      }
      goto L_08B2B0DC;
    }
L_08B2B0DC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B2B0F0;
      }
      goto L_08B2B0E8;
    }
L_08B2B0E8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B2B0FC;
      }
      goto L_08B2B0F0;
    }
L_08B2B0F0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B2B0FC;
      }
      goto L_08B2B0F8;
    }
L_08B2B0F8:
    hot_regs.g4 = (0u | 0u);
    goto L_08B2B0FC;
L_08B2B0FC:
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
          goto L_08B2B120;
      }
      goto L_08B2B118;
    }
}
L_08B2B118:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2B168;
      }
      goto L_08B2B120;
    }
L_08B2B120:
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
          goto L_08B2B14C;
      }
      goto L_08B2B140;
    }
}
L_08B2B140:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2B168;
      }
      goto L_08B2B14C;
    }
}
L_08B2B14C:
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
          goto L_08B2B168;
      }
      goto L_08B2B164;
    }
}
L_08B2B164:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2B168;
L_08B2B168:
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
L_08B2B184:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2B1ACu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B1ACu) goto L_08B2B1AC;
    return;
L_08B2B1AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B1B8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B1B8u) goto L_08B2B1B8;
    return;
L_08B2B1B8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2228)));
    hot_regs.g6 = (0u | 55u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B2B1E4;
      }
      goto L_08B2B1CC;
    }
L_08B2B1CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 16u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2B1E4;
      }
      goto L_08B2B1DC;
    }
}
L_08B2B1DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B2B1E8;
      }
      goto L_08B2B1E4;
    }
L_08B2B1E4:
    hot_regs.g4 = (0u | 0u);
    goto L_08B2B1E8;
L_08B2B1E8:
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
          goto L_08B2B20C;
      }
      goto L_08B2B204;
    }
}
L_08B2B204:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2B254;
      }
      goto L_08B2B20C;
    }
L_08B2B20C:
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
          goto L_08B2B238;
      }
      goto L_08B2B22C;
    }
}
L_08B2B22C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2B254;
      }
      goto L_08B2B238;
    }
}
L_08B2B238:
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
          goto L_08B2B254;
      }
      goto L_08B2B250;
    }
}
L_08B2B250:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2B254;
L_08B2B254:
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
L_08B2B26C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2B298u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B298u) goto L_08B2B298;
    return;
L_08B2B298:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B2A4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B2A4u) goto L_08B2B2A4;
    return;
L_08B2B2A4:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08B2B2B4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B2B4u) goto L_08B2B2B4;
    return;
L_08B2B2B4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B2D8;
      }
      goto L_08B2B2BC;
    }
L_08B2B2BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(2196)));
    g4 = (0u | 17u);
    { const bool branch_taken = g18 == g4;
    g4 = (0u | 18u);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B2B2D8;
      }
      goto L_08B2B2CC;
    }
}
L_08B2B2CC:
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B2B2D8;
      }
      goto L_08B2B2D4;
    }
L_08B2B2D4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2B2D8;
L_08B2B2D8:
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
          goto L_08B2B304;
      }
      goto L_08B2B2FC;
    }
}
L_08B2B2FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2B34C;
      }
      goto L_08B2B304;
    }
L_08B2B304:
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
          goto L_08B2B330;
      }
      goto L_08B2B324;
    }
}
L_08B2B324:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2B34C;
      }
      goto L_08B2B330;
    }
}
L_08B2B330:
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
          goto L_08B2B34C;
      }
      goto L_08B2B348;
    }
}
L_08B2B348:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2B34C;
L_08B2B34C:
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
L_08B2B368:
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
    hot_regs.g31 = (0x08B2B398u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B398u) goto L_08B2B398;
    return;
L_08B2B398:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B3A4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B3A4u) goto L_08B2B3A4;
    return;
L_08B2B3A4:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B3B4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B3B4u) goto L_08B2B3B4;
    return;
L_08B2B3B4:
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B3F0;
      }
      goto L_08B2B3C8;
    }
L_08B2B3C8:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(72)));
    g7 = (g7 & 14u);
    g7 = (g7 ^ 6u);
    g7 = (g7 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g7 = (g7 & 255u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B2B3F0;
      }
      goto L_08B2B3E4;
    }
}
L_08B2B3E4:
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B2B3F0;
      }
      goto L_08B2B3EC;
    }
L_08B2B3EC:
    hot_regs.g4 = (0u | 1u);
    goto L_08B2B3F0;
L_08B2B3F0:
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
          goto L_08B2B41C;
      }
      goto L_08B2B414;
    }
}
L_08B2B414:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2B464;
      }
      goto L_08B2B41C;
    }
L_08B2B41C:
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
          goto L_08B2B448;
      }
      goto L_08B2B43C;
    }
}
L_08B2B43C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2B464;
      }
      goto L_08B2B448;
    }
}
L_08B2B448:
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
          goto L_08B2B464;
      }
      goto L_08B2B460;
    }
}
L_08B2B460:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2B464;
L_08B2B464:
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
L_08B2B480:
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
    hot_regs.g31 = (0x08B2B4B0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B4B0u) goto L_08B2B4B0;
    return;
L_08B2B4B0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B4BCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B4BCu) goto L_08B2B4BC;
    return;
L_08B2B4BC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    hot_regs.g31 = (0x08B2B4CCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B4CCu) goto L_08B2B4CC;
    return;
L_08B2B4CC:
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B508;
      }
      goto L_08B2B4E0;
    }
L_08B2B4E0:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(72)));
    g7 = (g7 & 14u);
    g7 = (g7 ^ 8u);
    g7 = (g7 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g7 = (g7 & 255u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B2B508;
      }
      goto L_08B2B4FC;
    }
}
L_08B2B4FC:
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B2B508;
      }
      goto L_08B2B504;
    }
L_08B2B504:
    hot_regs.g4 = (0u | 1u);
    goto L_08B2B508;
L_08B2B508:
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
          goto L_08B2B534;
      }
      goto L_08B2B52C;
    }
}
L_08B2B52C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B2B57C;
      }
      goto L_08B2B534;
    }
L_08B2B534:
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
          goto L_08B2B560;
      }
      goto L_08B2B554;
    }
}
L_08B2B554:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2B57C;
      }
      goto L_08B2B560;
    }
}
L_08B2B560:
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
          goto L_08B2B57C;
      }
      goto L_08B2B578;
    }
}
L_08B2B578:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2B57C;
L_08B2B57C:
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
L_08B2B598:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 8u);
    hot_regs.g31 = (0x08B2B5C0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B5C0u) goto L_08B2B5C0;
    return;
L_08B2B5C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B5CCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B5CCu) goto L_08B2B5CC;
    return;
L_08B2B5CC:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08B2B5DCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B5DCu) goto L_08B2B5DC;
    return;
L_08B2B5DC:
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
    hot_regs.g31 = (0x08B2B630u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 76u, 0x0892C914u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B630u) goto L_08B2B630;
    return;
L_08B2B630:
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
L_08B2B648:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2B668u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B668u) goto L_08B2B668;
    return;
L_08B2B668:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B674u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B674u) goto L_08B2B674;
    return;
L_08B2B674:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B6C0;
      }
      goto L_08B2B680;
    }
L_08B2B680:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B6C0;
      }
      goto L_08B2B68C;
    }
L_08B2B68C:
    hot_regs.g31 = (0x08B2B694u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 636u, 0x0890EAA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B694u) goto L_08B2B694;
    return;
L_08B2B694:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-257));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g31 = (0x08B2B6ACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B6ACu) goto L_08B2B6AC;
    return;
L_08B2B6AC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B6C0;
      }
      goto L_08B2B6B4;
    }
L_08B2B6B4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3236), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08B2B6C0;
}
L_08B2B6C0:
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
L_08B2B6D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2B6FCu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B6FCu) goto L_08B2B6FC;
    return;
L_08B2B6FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B708u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B708u) goto L_08B2B708;
    return;
L_08B2B708:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B764;
      }
      goto L_08B2B714;
    }
L_08B2B714:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B764;
      }
      goto L_08B2B720;
    }
L_08B2B720:
    hot_regs.g31 = (0x08B2B728u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B728u) goto L_08B2B728;
    return;
L_08B2B728:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B764;
      }
      goto L_08B2B730;
    }
L_08B2B730:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (17204u << 16u);
    f14 = std::bit_cast<float>(g4);
    f12 = f12 / f14;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / f14;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3236), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08B2B764;
}
}
L_08B2B764:
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
L_08B2B77C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2B79Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B79Cu) goto L_08B2B79C;
    return;
L_08B2B79C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B7A8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B7A8u) goto L_08B2B7A8;
    return;
L_08B2B7A8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2B7BC;
      }
      goto L_08B2B7B4;
    }
L_08B2B7B4:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08B2B7BC;
L_08B2B7BC:
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
L_08B2B7D0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g31);
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 9u);
    hot_regs.g31 = (0x08B2B824u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B824u) goto L_08B2B824;
    return;
L_08B2B824:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x08B2B838u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B838u) goto L_08B2B838;
    return;
L_08B2B838:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g30 = ctx.gpr[30];
    f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    g4 = (16672u << 16u);
    f12 = std::bit_cast<float>(g4);
    hot_regs.f20 = f22 - f12;
    f22 = f22 + f12;
    g30 = (2239u << 16u);
    g30 = (g30 + static_cast<std::uint32_t>(21784));
    ctx.gpr[22] = (g18 + static_cast<std::uint32_t>(-1));
    g4 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g18)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[21] = (ctx.lo);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    g4 = (g18 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
    goto L_08B2B86C;
}
}
L_08B2B86C:
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08B2BA34;
      }
      goto L_08B2B878;
    }
L_08B2B878:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B2BA34;
      }
      goto L_08B2B884;
    }
L_08B2B884:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B2B8A0;
      }
      goto L_08B2B88C;
    }
L_08B2B88C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_08B2B8A8;
    }
    goto L_08B2B8A0;
}
L_08B2B8A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2B8C8;
      }
      goto L_08B2B8A8;
    }
L_08B2B8A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[18]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08B2B8C4;
    }
    goto L_08B2B8BC;
}
L_08B2B8BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2B8C8;
      }
      goto L_08B2B8C4;
    }
L_08B2B8C4:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[21]);
    goto L_08B2B8C8;
L_08B2B8C8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B8D0;
    }
L_08B2B8D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B8DCu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B8DCu) goto L_08B2B8DC;
    return;
L_08B2B8DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7980)));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B8E8;
    }
L_08B2B8E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B8F8;
    }
L_08B2B8F8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (0x08B2B918u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 534u, 0x08862F30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B918u) goto L_08B2B918;
    return;
L_08B2B918:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B920;
    }
L_08B2B920:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B930;
    }
L_08B2B930:
    hot_regs.g31 = (0x08B2B938u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B938u) goto L_08B2B938;
    return;
L_08B2B938:
    if (hot_regs.g2 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_08B2B95C;
    }
    goto L_08B2B940;
L_08B2B940:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    g5 = (0u | 55u);
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (0u | 41u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2B958;
      }
      goto L_08B2B950;
    }
}
L_08B2B950:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B958;
    }
L_08B2B958:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_08B2B95C;
L_08B2B95C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    hot_regs.g5 = (32768u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B968;
    }
}
L_08B2B968:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g5 = (hot_regs.g4 & g5);
    { const bool branch_taken = g5 != 0u;
    g5 = (2u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B978;
    }
}
L_08B2B978:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B984;
    }
}
L_08B2B984:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B990;
    }
L_08B2B990:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08B2B9A8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B9A8u) goto L_08B2B9A8;
    return;
L_08B2B9A8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B9B0;
    }
L_08B2B9B0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B9C8;
    }
L_08B2B9C8:
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2B9D8;
    }
L_08B2B9D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2B9E4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B9E4u) goto L_08B2B9E4;
    return;
L_08B2B9E4:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7980), ctx.gpr[19]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2B9F8u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2B9F8u) goto L_08B2B9F8;
    return;
L_08B2B9F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (65532u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (hot_regs.g5 & g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2BA2C;
      }
      goto L_08B2BA18;
    }
}
L_08B2BA18:
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2BA2Cu);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BA2Cu) goto L_08B2BA2C;
    return;
L_08B2BA2C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B2B86C;
      }
      goto L_08B2BA34;
    }
L_08B2BA34:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(29704), ctx.gpr[19]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B2BA48u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BA48u) goto L_08B2BA48;
    return;
L_08B2BA48:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B2BA84:
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
    hot_regs.g31 = (0x08B2BAB4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BAB4u) goto L_08B2BAB4;
    return;
L_08B2BAB4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2BAC0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BAC0u) goto L_08B2BAC0;
    return;
L_08B2BAC0:
{
    std::uint32_t g9 = ctx.gpr[9];
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    g9 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (g9 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g9 == 0u;
    hot_regs.g6 = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B2BB58;
      }
      goto L_08B2BADC;
    }
}
L_08B2BADC:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (ctx.lo);
    goto L_08B2BAE8;
L_08B2BAE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B2BB00;
      }
      goto L_08B2BAF0;
    }
L_08B2BAF0:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    g9 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(g9) ? 1u : 0u);
    if (g9 != 0u) {
    g9 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = g9;
        goto L_08B2BB08;
    }
    goto L_08B2BB00;
}
L_08B2BB00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2BB28;
      }
      goto L_08B2BB08;
    }
L_08B2BB08:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + ctx.gpr[8]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 & 128u);
    if (g9 == 0u) {
    g9 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = g9;
        goto L_08B2BB24;
    }
    goto L_08B2BB1C;
}
L_08B2BB1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08B2BB28;
      }
      goto L_08B2BB24;
    }
L_08B2BB24:
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    goto L_08B2BB28;
L_08B2BB28:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BB44;
      }
      goto L_08B2BB30;
    }
L_08B2BB30:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = g9 != hot_regs.g5;
    // nop
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B2BB44;
      }
      goto L_08B2BB3C;
    }
}
L_08B2BB3C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g7 = (g7 & 255u);
    hot_regs.g7 = g7;
    goto L_08B2BB44;
}
L_08B2BB44:
{
    std::uint32_t g8 = ctx.gpr[8];
    ctx.gpr[9] = (g8 | 0u);
    g8 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (g8 | 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-3344));
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08B2BAE8;
      }
      goto L_08B2BB58;
    }
}
L_08B2BB58:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2BB6Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BB6Cu) goto L_08B2BB6C;
    return;
L_08B2BB6C:
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
L_08B2BB88:
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
    hot_regs.g31 = (0x08B2BBB8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BBB8u) goto L_08B2BBB8;
    return;
L_08B2BBB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2BBC4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BBC4u) goto L_08B2BBC4;
    return;
L_08B2BBC4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g2 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B2BBF4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BBF4u) goto L_08B2BBF4;
    return;
L_08B2BBF4:
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
L_08B2BC10:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2BC3Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BC3Cu) goto L_08B2BC3C;
    return;
L_08B2BC3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2BC48u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BC48u) goto L_08B2BC48;
    return;
L_08B2BC48:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08B2BC58u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BC58u) goto L_08B2BC58;
    return;
L_08B2BC58:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BC84;
      }
      goto L_08B2BC60;
    }
L_08B2BC60:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g18 == 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B2BC84;
      }
      goto L_08B2BC6C;
    }
}
L_08B2BC6C:
    hot_regs.g31 = (0x08B2BC74u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BC74u) goto L_08B2BC74;
    return;
L_08B2BC74:
    hot_regs.g4 = (0u | 2u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08B2BC84;
      }
      goto L_08B2BC80;
    }
L_08B2BC80:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2BC84;
L_08B2BC84:
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
          goto L_08B2BCB0;
      }
      goto L_08B2BCA8;
    }
}
L_08B2BCA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2BCF8;
      }
      goto L_08B2BCB0;
    }
L_08B2BCB0:
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
          goto L_08B2BCDC;
      }
      goto L_08B2BCD0;
    }
}
L_08B2BCD0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2BCF8;
      }
      goto L_08B2BCDC;
    }
}
L_08B2BCDC:
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
          goto L_08B2BCF8;
      }
      goto L_08B2BCF4;
    }
}
L_08B2BCF4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2BCF8;
L_08B2BCF8:
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
L_08B2BD14:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2BD50u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BD50u) goto L_08B2BD50;
    return;
L_08B2BD50:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2BD5Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BD5Cu) goto L_08B2BD5C;
    return;
L_08B2BD5C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 0u);
    g18 = (0u | 0u);
    g4 = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1914)));
    g4 = (g18 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B2BDD8;
      }
      goto L_08B2BD7C;
    }
}
L_08B2BD7C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[18] << 2u);
    g4 = (ctx.gpr[20] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1252)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2BDC4;
      }
      goto L_08B2BDA0;
    }
}
L_08B2BDA0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = g5 != ctx.gpr[19];
    g5 = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B2BDC4;
      }
      goto L_08B2BDAC;
    }
}
L_08B2BDAC:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B2BDB8u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 571u, 0x089068C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BDB8u) goto L_08B2BDB8;
    return;
L_08B2BDB8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BDC4;
      }
      goto L_08B2BDC0;
    }
L_08B2BDC0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B2BDC4;
L_08B2BDC4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(1914)));
    g4 = (g18 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B2BD7C;
      }
      goto L_08B2BDD8;
    }
}
L_08B2BDD8:
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
          goto L_08B2BE04;
      }
      goto L_08B2BDFC;
    }
}
L_08B2BDFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B2BE54;
      }
      goto L_08B2BE04;
    }
L_08B2BE04:
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
        goto L_08B2BE34;
    }
    goto L_08B2BE20;
}
L_08B2BE20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B2BE54;
      }
      goto L_08B2BE34;
    }
}
L_08B2BE34:
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
          goto L_08B2BE54;
      }
      goto L_08B2BE50;
    }
}
L_08B2BE50:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08B2BE54;
L_08B2BE54:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B2BE5C;
      }
      goto L_08B2BE5C;
    }
L_08B2BE5C:
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
L_08B2BE7C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2BE9Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BE9Cu) goto L_08B2BE9C;
    return;
L_08B2BE9C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13362), static_cast<std::uint16_t>(g4));
    g4 = (0u | 1u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13362))))));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 1 ? 1u : 0u);
    if (hot_regs.g6 == 0u) {
    g4 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_08B2BEC0;
    }
    goto L_08B2BEC0;
}
}
L_08B2BEC0:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13362), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g2 = (0u | 0u);
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
L_08B2BED8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2BF00u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BF00u) goto L_08B2BF00;
    return;
L_08B2BF00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2BF0Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BF0Cu) goto L_08B2BF0C;
    return;
L_08B2BF0C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(1776), hot_regs.g4);
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
L_08B2BF2C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08B2BF54u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BF54u) goto L_08B2BF54;
    return;
L_08B2BF54:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2BF60u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BF60u) goto L_08B2BF60;
    return;
L_08B2BF60:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08B2BF80;
      }
      goto L_08B2BF70;
    }
L_08B2BF70:
    hot_regs.g31 = (0x08B2BF78u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 631u, 0x08A067DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BF78u) goto L_08B2BF78;
    return;
L_08B2BF78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B2BF88;
      }
      goto L_08B2BF80;
    }
L_08B2BF80:
    hot_regs.g31 = (0x08B2BF88u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 631u, 0x08A067DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BF88u) goto L_08B2BF88;
    return;
L_08B2BF88:
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
L_08B2BFA0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08B2BFC0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BFC0u) goto L_08B2BFC0;
    return;
L_08B2BFC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08B2BFCCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BFCCu) goto L_08B2BFCC;
    return;
L_08B2BFCC:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B2BFD8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BFD8u) goto L_08B2BFD8;
    return;
L_08B2BFD8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 2u, 0x08B2C014u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08B2BFE0;
    }
L_08B2BFE0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B2BFECu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BFECu) goto L_08B2BFEC;
    return;
L_08B2BFEC:
    hot_regs.g31 = (0x08B2BFF4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BFF4u) goto L_08B2BFF4;
    return;
L_08B2BFF4:
    hot_regs.g31 = (0x08B2BFFCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B2BFFCu) goto L_08B2BFFC;
    return;
L_08B2BFFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), 0u);
    ctx.pc = 0x08B2C000u; return;
}

void recomp_unit_0201(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0201_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_201(Runtime &runtime) {
    runtime.register_generated_unit(201u, 0x08B28000u, 16384u, &recomp_unit_0201, &recomp_unit_0201_entry);
    runtime.register_function(0x08B28000u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28018u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28030u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28064u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28070u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28080u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28090u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28098u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28104u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28124u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28130u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28148u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2814Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2816Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28194u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B281A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B281B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B281C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B281F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28204u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28224u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2822Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28230u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2824Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28254u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28274u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28280u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28298u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2829Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B282B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B282C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B282D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28304u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28310u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28328u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28334u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28340u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28348u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28354u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28358u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28368u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28370u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28378u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28384u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2838Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28394u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28400u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2841Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28424u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28430u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28438u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28440u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28458u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28460u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2846Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28474u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2847Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28494u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B284B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B284E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B284ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B284F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28504u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28514u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28520u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2852Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28538u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28540u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28548u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28560u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28568u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28570u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28580u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2858Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2859Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B285BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B285ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B285F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28604u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28618u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28624u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2863Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2864Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28690u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28704u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2872Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28738u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28744u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28750u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2875Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28778u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28790u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B287B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B287C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B287D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B287D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B287F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2880Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28834u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28840u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28850u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28860u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28878u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28898u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B288A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B288ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B288C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B288E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28914u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2892Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2894Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28958u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28968u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2897Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B289B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B289C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B289D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B289DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B289F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A28u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A38u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28AA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28AC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28ACCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28AD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28AE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B4Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B98u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28BA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28BBCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28BC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28BD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28BE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C24u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28CA4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28CBCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28CC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28CECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D64u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28D78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E38u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E98u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28E9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28EB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28ED8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28EE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28EF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F7Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28FB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28FC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28FD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28FE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28FF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2900Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29034u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29040u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29050u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29064u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29078u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29080u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29094u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B290A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B290B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B290C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B290D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B290E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B290F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29108u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29110u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29120u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29130u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29148u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29170u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2917Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2922Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29234u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2923Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29240u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29264u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2926Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29284u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29298u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B292B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B292BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B292D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29304u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29310u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2932Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29340u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29348u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2934Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29370u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29378u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29398u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29418u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29448u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29454u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29480u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29484u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29514u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2957Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B295A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B295D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B295E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B295F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B295F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2960Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29614u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29628u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29630u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29634u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2963Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29648u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29654u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29664u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2966Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29674u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29684u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29694u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B296A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B296B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B296C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B296D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B296E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B296F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29708u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29714u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29728u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29740u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29754u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2975Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29760u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29774u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B297C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29810u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2981Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29824u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29830u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29844u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29850u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2986Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2987Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B298BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B298C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B298D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B298DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B298F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B298F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29910u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29918u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29920u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29928u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29934u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29940u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29950u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29958u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29960u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29970u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29980u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2998Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A64u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29AC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29AE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29AF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29B9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29BC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29BD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29CA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29CB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29CD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29CDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29CF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29CF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D14u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D64u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29DB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29DC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29DD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29DE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29DF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E8Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29E90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29EACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29EDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29EE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29EF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F4Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29F94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29FB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29FD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29FDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A000u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A014u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A03Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A048u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A058u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A068u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A078u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A090u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A0B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A0C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A0E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A0F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A108u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A120u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A14Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A158u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A164u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A16Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A174u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A184u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A18Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A194u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A1A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A1A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A1B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A1BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A1F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A208u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A210u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A218u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A224u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A240u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A25Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A284u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A290u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A2A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A2B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A2B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A2D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A300u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A30Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A324u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A330u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A338u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A33Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A354u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A360u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A368u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A370u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A388u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A394u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A39Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A408u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A42Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A434u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A43Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A45Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A464u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A46Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A488u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A490u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A494u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A504u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A510u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A520u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A534u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A53Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A540u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A564u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A56Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A58Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A598u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A608u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A618u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A62Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A638u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A640u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A658u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A680u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A68Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A71Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A728u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A738u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A748u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A758u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A770u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A798u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A818u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A824u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A83Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A840u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A858u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A878u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A888u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A89Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A908u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A91Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A93Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A95Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A978u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A998u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA24u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA4Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA8Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAFCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB24u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD98u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADFCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE28u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AEA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AEA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AEB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AEC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF28u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFE0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B020u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B02Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B03Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B04Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B054u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B06Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B09Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B118u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B120u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B140u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B14Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B164u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B168u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B184u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B204u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B20Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B22Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B238u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B250u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B254u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B26Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B298u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B304u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B324u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B330u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B348u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B34Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B368u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B398u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B414u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B41Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B43Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B448u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B460u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B464u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B480u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B504u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B508u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B52Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B534u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B554u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B560u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B578u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B57Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B598u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B630u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B648u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B668u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B674u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B680u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B68Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B694u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B708u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B714u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B720u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B728u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B730u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B764u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B77Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B79Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B824u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B838u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B86Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B878u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B884u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B88Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8E8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B918u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B920u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B930u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B938u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B940u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B950u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B958u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B95Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B968u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B978u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B984u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B990u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BAB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BAC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BADCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BAE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BAF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB08u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB24u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB28u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BB88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BBB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BBC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BBF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BCF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD14u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD7Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDD8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDFCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE34u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE7Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BEC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BED8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFD8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFE0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFFCu, &recomp_unit_0201, "recomp_unit_0201");
}
} // namespace psprecomp
