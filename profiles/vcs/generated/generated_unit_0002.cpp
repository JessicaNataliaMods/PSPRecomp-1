#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0002[4094] = {
    1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 15, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    19, 0, 20, 0, 21, 22, 0, 0, 23, 0, 0, 24, 0, 25, 26, 0, 0, 0, 27, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44,
    0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0,
    0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 67,
    0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0,
    0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87,
    0, 0, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 104, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113,
    0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 122, 123, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0,
    133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 141, 0, 0,
    0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0,
    0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 173,
    0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196, 197, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0,
    201, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0,
    211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 219,
    0, 220, 0, 0, 221, 0, 222, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0,
    0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242,
    0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0,
    253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0,
    0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274,
    0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 281, 0, 282, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0,
    291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 301, 0, 302, 303, 0, 0, 0, 304, 0, 305, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0,
    0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0,
    0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330,
    0, 331, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 0,
    0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0, 0, 362, 0, 363, 364, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 372, 0, 0, 0, 0, 373, 374, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 377,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 382, 383, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 395, 396, 0, 0, 0, 397, 0, 398,
    0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0,
    0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427,
    0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 432, 0, 0, 0, 433, 0,
    434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 435, 0, 436, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0, 0,
    0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449,
    0, 450, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    457, 0, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0,
    0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 469, 0, 0,
    0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 0,
    0, 0, 0, 0, 484, 0, 0, 485, 486, 0, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0,
    0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 497, 0, 498, 0, 499, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 505, 0, 506, 0, 0, 507, 0,
    0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0,
    0, 0, 0, 516, 0, 0, 517, 0, 518, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0,
    522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0,
    0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532,
    533, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 541, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 546, 0, 547, 0, 548, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0,
    551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 554, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 557, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 564, 565, 0, 566,
    0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 572, 0, 573, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 581, 582, 0, 583, 0, 0, 584, 0, 585, 586, 0, 587, 0, 0, 0, 588, 0, 589, 590, 0, 591,
    0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 594, 0, 595, 0, 0, 596, 0, 597, 598, 0, 599, 0, 0, 0, 600, 0, 601, 602, 0, 603, 0, 0,
    0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615,
    0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0,
    0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624, 0, 625, 0, 626, 0, 0, 627, 0, 0, 0,
    0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 630, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 637, 0, 638,
    0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0,
    0, 0, 644, 0, 645, 0, 646, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 650, 0, 651, 652, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 658, 0, 659, 0,
    660, 0, 661, 0, 0, 662, 0, 663, 0, 664, 0, 665, 0, 0, 666, 667, 0, 668, 0, 669, 0, 0, 670, 0, 671, 0, 672, 0, 673, 0, 0, 674,
    0, 675, 0, 676, 0, 677, 0, 0, 678, 0, 679, 0, 680, 0, 681, 0, 0, 682, 0, 683, 0, 684, 0, 0, 685, 686, 0, 687, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 693, 0, 0, 694, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 696,
    0, 697, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 704,
    0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0, 713, 714, 0, 0, 0, 715, 0, 716, 0,
    717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 721, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724,
    0, 0, 0, 0, 725, 0, 726, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 730, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0,
    736, 0, 0, 0, 0, 0, 0, 0, 737, 0, 738, 0, 0, 739, 0, 0, 740, 0, 0, 741, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 744, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0, 748, 0, 0, 749, 0, 0, 750, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0,
    0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762,
    0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 771, 0, 0, 772, 0, 0, 773, 0,
    0, 774, 0, 0, 775, 0, 0, 776, 0, 0, 777, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 0, 783, 0, 0, 784,
    0, 0, 785, 0, 0, 786, 0, 0, 787, 0, 0, 788, 0, 0, 789, 0, 0, 790, 0, 0, 791, 0, 0, 792, 0, 0, 793, 0, 0, 794,
};
void recomp_unit_0002_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,31,16,17 fprs=12,13,14,15 gpr_occ=3765 fpr_occ=841 gpr_total=5184 fpr_total=1278
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_15 = ctx.fpr[15];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.gpr[17] = aot_gpr_17; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[15] = aot_fpr_15; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_17 = ctx.gpr[17]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_15 = ctx.fpr[15]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0880C000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0002[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0880C000;
    case 2u: goto L_0880C008;
    case 3u: goto L_0880C018;
    case 4u: goto L_0880C020;
    case 5u: goto L_0880C030;
    case 6u: goto L_0880C03C;
    case 7u: goto L_0880C048;
    case 8u: goto L_0880C04C;
    case 9u: goto L_0880C064;
    case 10u: goto L_0880C080;
    case 11u: goto L_0880C08C;
    case 12u: goto L_0880C098;
    case 13u: goto L_0880C0A8;
    case 14u: goto L_0880C0B0;
    case 15u: goto L_0880C0B8;
    case 16u: goto L_0880C0BC;
    case 17u: goto L_0880C0D0;
    case 18u: goto L_0880C0F4;
    case 19u: goto L_0880C100;
    case 20u: goto L_0880C108;
    case 21u: goto L_0880C110;
    case 22u: goto L_0880C114;
    case 23u: goto L_0880C120;
    case 24u: goto L_0880C12C;
    case 25u: goto L_0880C134;
    case 26u: goto L_0880C138;
    case 27u: goto L_0880C148;
    case 28u: goto L_0880C14C;
    case 29u: goto L_0880C164;
    case 30u: goto L_0880C18C;
    case 31u: goto L_0880C19C;
    case 32u: goto L_0880C1A8;
    case 33u: goto L_0880C1B4;
    case 34u: goto L_0880C1C4;
    case 35u: goto L_0880C1D4;
    case 36u: goto L_0880C1E0;
    case 37u: goto L_0880C1EC;
    case 38u: goto L_0880C1F8;
    case 39u: goto L_0880C204;
    case 40u: goto L_0880C224;
    case 41u: goto L_0880C258;
    case 42u: goto L_0880C264;
    case 43u: goto L_0880C270;
    case 44u: goto L_0880C27C;
    case 45u: goto L_0880C28C;
    case 46u: goto L_0880C298;
    case 47u: goto L_0880C2A0;
    case 48u: goto L_0880C2B0;
    case 49u: goto L_0880C2BC;
    case 50u: goto L_0880C2C8;
    case 51u: goto L_0880C2D0;
    case 52u: goto L_0880C2D8;
    case 53u: goto L_0880C2E0;
    case 54u: goto L_0880C2F0;
    case 55u: goto L_0880C2F8;
    case 56u: goto L_0880C304;
    case 57u: goto L_0880C310;
    case 58u: goto L_0880C31C;
    case 59u: goto L_0880C324;
    case 60u: goto L_0880C32C;
    case 61u: goto L_0880C338;
    case 62u: goto L_0880C344;
    case 63u: goto L_0880C350;
    case 64u: goto L_0880C358;
    case 65u: goto L_0880C360;
    case 66u: goto L_0880C370;
    case 67u: goto L_0880C37C;
    case 68u: goto L_0880C388;
    case 69u: goto L_0880C394;
    case 70u: goto L_0880C3A0;
    case 71u: goto L_0880C3AC;
    case 72u: goto L_0880C3B8;
    case 73u: goto L_0880C3C8;
    case 74u: goto L_0880C3D4;
    case 75u: goto L_0880C3E0;
    case 76u: goto L_0880C3EC;
    case 77u: goto L_0880C3F8;
    case 78u: goto L_0880C404;
    case 79u: goto L_0880C40C;
    case 80u: goto L_0880C414;
    case 81u: goto L_0880C428;
    case 82u: goto L_0880C438;
    case 83u: goto L_0880C44C;
    case 84u: goto L_0880C454;
    case 85u: goto L_0880C45C;
    case 86u: goto L_0880C470;
    case 87u: goto L_0880C47C;
    case 88u: goto L_0880C490;
    case 89u: goto L_0880C498;
    case 90u: goto L_0880C4A4;
    case 91u: goto L_0880C4B0;
    case 92u: goto L_0880C4BC;
    case 93u: goto L_0880C4C8;
    case 94u: goto L_0880C4D4;
    case 95u: goto L_0880C4D8;
    case 96u: goto L_0880C4F8;
    case 97u: goto L_0880C524;
    case 98u: goto L_0880C52C;
    case 99u: goto L_0880C53C;
    case 100u: goto L_0880C54C;
    case 101u: goto L_0880C558;
    case 102u: goto L_0880C560;
    case 103u: goto L_0880C568;
    case 104u: goto L_0880C578;
    case 105u: goto L_0880C580;
    case 106u: goto L_0880C590;
    case 107u: goto L_0880C5A0;
    case 108u: goto L_0880C5A8;
    case 109u: goto L_0880C5B8;
    case 110u: goto L_0880C5BC;
    case 111u: goto L_0880C5D4;
    case 112u: goto L_0880C5F0;
    case 113u: goto L_0880C5FC;
    case 114u: goto L_0880C60C;
    case 115u: goto L_0880C614;
    case 116u: goto L_0880C624;
    case 117u: goto L_0880C630;
    case 118u: goto L_0880C63C;
    case 119u: goto L_0880C648;
    case 120u: goto L_0880C650;
    case 121u: goto L_0880C65C;
    case 122u: goto L_0880C66C;
    case 123u: goto L_0880C670;
    case 124u: goto L_0880C684;
    case 125u: goto L_0880C6A0;
    case 126u: goto L_0880C6AC;
    case 127u: goto L_0880C6BC;
    case 128u: goto L_0880C6C8;
    case 129u: goto L_0880C6D4;
    case 130u: goto L_0880C6DC;
    case 131u: goto L_0880C6E8;
    case 132u: goto L_0880C6F4;
    case 133u: goto L_0880C700;
    case 134u: goto L_0880C708;
    case 135u: goto L_0880C720;
    case 136u: goto L_0880C73C;
    case 137u: goto L_0880C750;
    case 138u: goto L_0880C75C;
    case 139u: goto L_0880C768;
    case 140u: goto L_0880C770;
    case 141u: goto L_0880C774;
    case 142u: goto L_0880C784;
    case 143u: goto L_0880C790;
    case 144u: goto L_0880C7A0;
    case 145u: goto L_0880C7BC;
    case 146u: goto L_0880C7D0;
    case 147u: goto L_0880C7E8;
    case 148u: goto L_0880C7FC;
    case 149u: goto L_0880C810;
    case 150u: goto L_0880C81C;
    case 151u: goto L_0880C82C;
    case 152u: goto L_0880C850;
    case 153u: goto L_0880C85C;
    case 154u: goto L_0880C86C;
    case 155u: goto L_0880C874;
    case 156u: goto L_0880C884;
    case 157u: goto L_0880C88C;
    case 158u: goto L_0880C89C;
    case 159u: goto L_0880C8A4;
    case 160u: goto L_0880C8AC;
    case 161u: goto L_0880C8B4;
    case 162u: goto L_0880C8C4;
    case 163u: goto L_0880C8CC;
    case 164u: goto L_0880C8DC;
    case 165u: goto L_0880C8F8;
    case 166u: goto L_0880C914;
    case 167u: goto L_0880C920;
    case 168u: goto L_0880C938;
    case 169u: goto L_0880C948;
    case 170u: goto L_0880C958;
    case 171u: goto L_0880C964;
    case 172u: goto L_0880C974;
    case 173u: goto L_0880C97C;
    case 174u: goto L_0880C988;
    case 175u: goto L_0880C994;
    case 176u: goto L_0880C9A4;
    case 177u: goto L_0880C9B4;
    case 178u: goto L_0880C9C0;
    case 179u: goto L_0880C9D4;
    case 180u: goto L_0880C9E0;
    case 181u: goto L_0880C9EC;
    case 182u: goto L_0880C9FC;
    case 183u: goto L_0880CA10;
    case 184u: goto L_0880CA28;
    case 185u: goto L_0880CA30;
    case 186u: goto L_0880CA3C;
    case 187u: goto L_0880CA48;
    case 188u: goto L_0880CA54;
    case 189u: goto L_0880CA68;
    case 190u: goto L_0880CA84;
    case 191u: goto L_0880CAA0;
    case 192u: goto L_0880CAB8;
    case 193u: goto L_0880CAC0;
    case 194u: goto L_0880CAC8;
    case 195u: goto L_0880CAD8;
    case 196u: goto L_0880CAE0;
    case 197u: goto L_0880CAE4;
    case 198u: goto L_0880CAEC;
    case 199u: goto L_0880CB6C;
    case 200u: goto L_0880CB78;
    case 201u: goto L_0880CB80;
    case 202u: goto L_0880CB94;
    case 203u: goto L_0880CB9C;
    case 204u: goto L_0880CBA4;
    case 205u: goto L_0880CBAC;
    case 206u: goto L_0880CBB4;
    case 207u: goto L_0880CBBC;
    case 208u: goto L_0880CBD4;
    case 209u: goto L_0880CBE8;
    case 210u: goto L_0880CBF0;
    case 211u: goto L_0880CC00;
    case 212u: goto L_0880CC14;
    case 213u: goto L_0880CC20;
    case 214u: goto L_0880CC2C;
    case 215u: goto L_0880CC34;
    case 216u: goto L_0880CC40;
    case 217u: goto L_0880CC5C;
    case 218u: goto L_0880CC74;
    case 219u: goto L_0880CC7C;
    case 220u: goto L_0880CC84;
    case 221u: goto L_0880CC90;
    case 222u: goto L_0880CC98;
    case 223u: goto L_0880CC9C;
    case 224u: goto L_0880CCA4;
    case 225u: goto L_0880CCB0;
    case 226u: goto L_0880CCBC;
    case 227u: goto L_0880CCC8;
    case 228u: goto L_0880CCD4;
    case 229u: goto L_0880CCE0;
    case 230u: goto L_0880CCEC;
    case 231u: goto L_0880CCF8;
    case 232u: goto L_0880CD04;
    case 233u: goto L_0880CD10;
    case 234u: goto L_0880CD1C;
    case 235u: goto L_0880CD28;
    case 236u: goto L_0880CD34;
    case 237u: goto L_0880CD40;
    case 238u: goto L_0880CD4C;
    case 239u: goto L_0880CD58;
    case 240u: goto L_0880CD64;
    case 241u: goto L_0880CD70;
    case 242u: goto L_0880CD7C;
    case 243u: goto L_0880CD88;
    case 244u: goto L_0880CD94;
    case 245u: goto L_0880CDA0;
    case 246u: goto L_0880CDAC;
    case 247u: goto L_0880CDB8;
    case 248u: goto L_0880CDC4;
    case 249u: goto L_0880CDD0;
    case 250u: goto L_0880CDDC;
    case 251u: goto L_0880CDE8;
    case 252u: goto L_0880CDF4;
    case 253u: goto L_0880CE00;
    case 254u: goto L_0880CE0C;
    case 255u: goto L_0880CE18;
    case 256u: goto L_0880CE24;
    case 257u: goto L_0880CE30;
    case 258u: goto L_0880CE3C;
    case 259u: goto L_0880CE48;
    case 260u: goto L_0880CE54;
    case 261u: goto L_0880CE60;
    case 262u: goto L_0880CE6C;
    case 263u: goto L_0880CE78;
    case 264u: goto L_0880CE84;
    case 265u: goto L_0880CE90;
    case 266u: goto L_0880CE9C;
    case 267u: goto L_0880CEA8;
    case 268u: goto L_0880CEB4;
    case 269u: goto L_0880CEC0;
    case 270u: goto L_0880CECC;
    case 271u: goto L_0880CED8;
    case 272u: goto L_0880CEE4;
    case 273u: goto L_0880CEF0;
    case 274u: goto L_0880CEFC;
    case 275u: goto L_0880CF08;
    case 276u: goto L_0880CF14;
    case 277u: goto L_0880CF20;
    case 278u: goto L_0880CF28;
    case 279u: goto L_0880CF3C;
    case 280u: goto L_0880CF48;
    case 281u: goto L_0880CF4C;
    case 282u: goto L_0880CF54;
    case 283u: goto L_0880CF5C;
    case 284u: goto L_0880CF70;
    case 285u: goto L_0880CFC4;
    case 286u: goto L_0880CFDC;
    case 287u: goto L_0880D034;
    case 288u: goto L_0880D070;
    case 289u: goto L_0880D0D4;
    case 290u: goto L_0880D0F4;
    case 291u: goto L_0880D100;
    case 292u: goto L_0880D108;
    case 293u: goto L_0880D110;
    case 294u: goto L_0880D138;
    case 295u: goto L_0880D160;
    case 296u: goto L_0880D194;
    case 297u: goto L_0880D1B4;
    case 298u: goto L_0880D1EC;
    case 299u: goto L_0880D228;
    case 300u: goto L_0880D230;
    case 301u: goto L_0880D290;
    case 302u: goto L_0880D298;
    case 303u: goto L_0880D29C;
    case 304u: goto L_0880D2AC;
    case 305u: goto L_0880D2B4;
    case 306u: goto L_0880D2B8;
    case 307u: goto L_0880D2CC;
    case 308u: goto L_0880D2D4;
    case 309u: goto L_0880D2E4;
    case 310u: goto L_0880D2EC;
    case 311u: goto L_0880D31C;
    case 312u: goto L_0880D338;
    case 313u: goto L_0880D358;
    case 314u: goto L_0880D374;
    case 315u: goto L_0880D384;
    case 316u: goto L_0880D390;
    case 317u: goto L_0880D3D4;
    case 318u: goto L_0880D3DC;
    case 319u: goto L_0880D3E4;
    case 320u: goto L_0880D404;
    case 321u: goto L_0880D418;
    case 322u: goto L_0880D428;
    case 323u: goto L_0880D48C;
    case 324u: goto L_0880D498;
    case 325u: goto L_0880D4A4;
    case 326u: goto L_0880D4E4;
    case 327u: goto L_0880D4F8;
    case 328u: goto L_0880D50C;
    case 329u: goto L_0880D548;
    case 330u: goto L_0880D57C;
    case 331u: goto L_0880D584;
    case 332u: goto L_0880D58C;
    case 333u: goto L_0880D59C;
    case 334u: goto L_0880D5A8;
    case 335u: goto L_0880D5B0;
    case 336u: goto L_0880D5B8;
    case 337u: goto L_0880D5C0;
    case 338u: goto L_0880D5C8;
    case 339u: goto L_0880D5E0;
    case 340u: goto L_0880D5EC;
    case 341u: goto L_0880D5F4;
    case 342u: goto L_0880D604;
    case 343u: goto L_0880D60C;
    case 344u: goto L_0880D614;
    case 345u: goto L_0880D61C;
    case 346u: goto L_0880D624;
    case 347u: goto L_0880D654;
    case 348u: goto L_0880D664;
    case 349u: goto L_0880D680;
    case 350u: goto L_0880D6B4;
    case 351u: goto L_0880D6C0;
    case 352u: goto L_0880D6C8;
    case 353u: goto L_0880D6D4;
    case 354u: goto L_0880D6E0;
    case 355u: goto L_0880D738;
    case 356u: goto L_0880D740;
    case 357u: goto L_0880D788;
    case 358u: goto L_0880D794;
    case 359u: goto L_0880D79C;
    case 360u: goto L_0880D7A4;
    case 361u: goto L_0880D7AC;
    case 362u: goto L_0880D7B8;
    case 363u: goto L_0880D7C0;
    case 364u: goto L_0880D7C4;
    case 365u: goto L_0880D7D0;
    case 366u: goto L_0880D7D8;
    case 367u: goto L_0880D7F8;
    case 368u: goto L_0880D870;
    case 369u: goto L_0880D88C;
    case 370u: goto L_0880D89C;
    case 371u: goto L_0880D8A8;
    case 372u: goto L_0880D8B0;
    case 373u: goto L_0880D8C4;
    case 374u: goto L_0880D8C8;
    case 375u: goto L_0880D8DC;
    case 376u: goto L_0880D8E4;
    case 377u: goto L_0880D8FC;
    case 378u: goto L_0880D928;
    case 379u: goto L_0880D964;
    case 380u: goto L_0880D9A4;
    case 381u: goto L_0880D9BC;
    case 382u: goto L_0880D9C0;
    case 383u: goto L_0880D9C4;
    case 384u: goto L_0880D9CC;
    case 385u: goto L_0880D9D4;
    case 386u: goto L_0880DA0C;
    case 387u: goto L_0880DA1C;
    case 388u: goto L_0880DA40;
    case 389u: goto L_0880DA48;
    case 390u: goto L_0880DA50;
    case 391u: goto L_0880DA6C;
    case 392u: goto L_0880DAB0;
    case 393u: goto L_0880DAC8;
    case 394u: goto L_0880DADC;
    case 395u: goto L_0880DAE0;
    case 396u: goto L_0880DAE4;
    case 397u: goto L_0880DAF4;
    case 398u: goto L_0880DAFC;
    case 399u: goto L_0880DB14;
    case 400u: goto L_0880DB24;
    case 401u: goto L_0880DB2C;
    case 402u: goto L_0880DB44;
    case 403u: goto L_0880DB54;
    case 404u: goto L_0880DB5C;
    case 405u: goto L_0880DB84;
    case 406u: goto L_0880DB94;
    case 407u: goto L_0880DBA8;
    case 408u: goto L_0880DBC0;
    case 409u: goto L_0880DBE0;
    case 410u: goto L_0880DBF0;
    case 411u: goto L_0880DC04;
    case 412u: goto L_0880DC1C;
    case 413u: goto L_0880DC34;
    case 414u: goto L_0880DC44;
    case 415u: goto L_0880DC4C;
    case 416u: goto L_0880DC5C;
    case 417u: goto L_0880DCA4;
    case 418u: goto L_0880DCB8;
    case 419u: goto L_0880DCF0;
    case 420u: goto L_0880DD00;
    case 421u: goto L_0880DD3C;
    case 422u: goto L_0880DD60;
    case 423u: goto L_0880DDA8;
    case 424u: goto L_0880DDB4;
    case 425u: goto L_0880DDC0;
    case 426u: goto L_0880DDD0;
    case 427u: goto L_0880DDFC;
    case 428u: goto L_0880DE0C;
    case 429u: goto L_0880DE38;
    case 430u: goto L_0880DE50;
    case 431u: goto L_0880DE60;
    case 432u: goto L_0880DE68;
    case 433u: goto L_0880DE78;
    case 434u: goto L_0880DE80;
    case 435u: goto L_0880DF18;
    case 436u: goto L_0880DF20;
    case 437u: goto L_0880DF24;
    case 438u: goto L_0880DF30;
    case 439u: goto L_0880DF64;
    case 440u: goto L_0880DF6C;
    case 441u: goto L_0880DF74;
    case 442u: goto L_0880DF8C;
    case 443u: goto L_0880DF94;
    case 444u: goto L_0880E024;
    case 445u: goto L_0880E02C;
    case 446u: goto L_0880E030;
    case 447u: goto L_0880E03C;
    case 448u: goto L_0880E06C;
    case 449u: goto L_0880E07C;
    case 450u: goto L_0880E084;
    case 451u: goto L_0880E094;
    case 452u: goto L_0880E09C;
    case 453u: goto L_0880E140;
    case 454u: goto L_0880E148;
    case 455u: goto L_0880E14C;
    case 456u: goto L_0880E158;
    case 457u: goto L_0880E180;
    case 458u: goto L_0880E190;
    case 459u: goto L_0880E198;
    case 460u: goto L_0880E1A4;
    case 461u: goto L_0880E1C4;
    case 462u: goto L_0880E1D8;
    case 463u: goto L_0880E1F4;
    case 464u: goto L_0880E204;
    case 465u: goto L_0880E22C;
    case 466u: goto L_0880E240;
    case 467u: goto L_0880E25C;
    case 468u: goto L_0880E26C;
    case 469u: goto L_0880E274;
    case 470u: goto L_0880E288;
    case 471u: goto L_0880E29C;
    case 472u: goto L_0880E2B8;
    case 473u: goto L_0880E2C8;
    case 474u: goto L_0880E2D0;
    case 475u: goto L_0880E2E4;
    case 476u: goto L_0880E2F8;
    case 477u: goto L_0880E314;
    case 478u: goto L_0880E324;
    case 479u: goto L_0880E340;
    case 480u: goto L_0880E350;
    case 481u: goto L_0880E358;
    case 482u: goto L_0880E360;
    case 483u: goto L_0880E374;
    case 484u: goto L_0880E390;
    case 485u: goto L_0880E39C;
    case 486u: goto L_0880E3A0;
    case 487u: goto L_0880E3AC;
    case 488u: goto L_0880E3B4;
    case 489u: goto L_0880E3C8;
    case 490u: goto L_0880E3DC;
    case 491u: goto L_0880E3F8;
    case 492u: goto L_0880E408;
    case 493u: goto L_0880E410;
    case 494u: goto L_0880E43C;
    case 495u: goto L_0880E450;
    case 496u: goto L_0880E45C;
    case 497u: goto L_0880E488;
    case 498u: goto L_0880E490;
    case 499u: goto L_0880E498;
    case 500u: goto L_0880E49C;
    case 501u: goto L_0880E4A4;
    case 502u: goto L_0880E4C8;
    case 503u: goto L_0880E4D4;
    case 504u: goto L_0880E4DC;
    case 505u: goto L_0880E4E4;
    case 506u: goto L_0880E4EC;
    case 507u: goto L_0880E4F8;
    case 508u: goto L_0880E504;
    case 509u: goto L_0880E50C;
    case 510u: goto L_0880E528;
    case 511u: goto L_0880E538;
    case 512u: goto L_0880E544;
    case 513u: goto L_0880E54C;
    case 514u: goto L_0880E558;
    case 515u: goto L_0880E574;
    case 516u: goto L_0880E58C;
    case 517u: goto L_0880E598;
    case 518u: goto L_0880E5A0;
    case 519u: goto L_0880E5A4;
    case 520u: goto L_0880E5BC;
    case 521u: goto L_0880E5F4;
    case 522u: goto L_0880E600;
    case 523u: goto L_0880E618;
    case 524u: goto L_0880E644;
    case 525u: goto L_0880E668;
    case 526u: goto L_0880E674;
    case 527u: goto L_0880E694;
    case 528u: goto L_0880E6B0;
    case 529u: goto L_0880E6CC;
    case 530u: goto L_0880E6D4;
    case 531u: goto L_0880E6DC;
    case 532u: goto L_0880E6FC;
    case 533u: goto L_0880E700;
    case 534u: goto L_0880E704;
    case 535u: goto L_0880E720;
    case 536u: goto L_0880E748;
    case 537u: goto L_0880E790;
    case 538u: goto L_0880E7AC;
    case 539u: goto L_0880E7DC;
    case 540u: goto L_0880E7E4;
    case 541u: goto L_0880E7EC;
    case 542u: goto L_0880E81C;
    case 543u: goto L_0880E894;
    case 544u: goto L_0880E8AC;
    case 545u: goto L_0880E8BC;
    case 546u: goto L_0880E8C4;
    case 547u: goto L_0880E8CC;
    case 548u: goto L_0880E8D4;
    case 549u: goto L_0880E8E0;
    case 550u: goto L_0880E8F0;
    case 551u: goto L_0880E900;
    case 552u: goto L_0880E918;
    case 553u: goto L_0880E938;
    case 554u: goto L_0880E93C;
    case 555u: goto L_0880E944;
    case 556u: goto L_0880E954;
    case 557u: goto L_0880E994;
    case 558u: goto L_0880E998;
    case 559u: goto L_0880E9C4;
    case 560u: goto L_0880EA04;
    case 561u: goto L_0880EA34;
    case 562u: goto L_0880EA40;
    case 563u: goto L_0880EA68;
    case 564u: goto L_0880EA70;
    case 565u: goto L_0880EA74;
    case 566u: goto L_0880EA7C;
    case 567u: goto L_0880EA84;
    case 568u: goto L_0880EABC;
    case 569u: goto L_0880EAC8;
    case 570u: goto L_0880EAD8;
    case 571u: goto L_0880EAE0;
    case 572u: goto L_0880EB10;
    case 573u: goto L_0880EB18;
    case 574u: goto L_0880EB24;
    case 575u: goto L_0880EB38;
    case 576u: goto L_0880EB5C;
    case 577u: goto L_0880EB64;
    case 578u: goto L_0880EB8C;
    case 579u: goto L_0880EC14;
    case 580u: goto L_0880EC24;
    case 581u: goto L_0880EC2C;
    case 582u: goto L_0880EC30;
    case 583u: goto L_0880EC38;
    case 584u: goto L_0880EC44;
    case 585u: goto L_0880EC4C;
    case 586u: goto L_0880EC50;
    case 587u: goto L_0880EC58;
    case 588u: goto L_0880EC68;
    case 589u: goto L_0880EC70;
    case 590u: goto L_0880EC74;
    case 591u: goto L_0880EC7C;
    case 592u: goto L_0880EC9C;
    case 593u: goto L_0880ECA4;
    case 594u: goto L_0880ECA8;
    case 595u: goto L_0880ECB0;
    case 596u: goto L_0880ECBC;
    case 597u: goto L_0880ECC4;
    case 598u: goto L_0880ECC8;
    case 599u: goto L_0880ECD0;
    case 600u: goto L_0880ECE0;
    case 601u: goto L_0880ECE8;
    case 602u: goto L_0880ECEC;
    case 603u: goto L_0880ECF4;
    case 604u: goto L_0880ED08;
    case 605u: goto L_0880ED24;
    case 606u: goto L_0880EDB0;
    case 607u: goto L_0880EDE8;
    case 608u: goto L_0880EDFC;
    case 609u: goto L_0880EE24;
    case 610u: goto L_0880EE6C;
    case 611u: goto L_0880EEDC;
    case 612u: goto L_0880EEF4;
    case 613u: goto L_0880EF20;
    case 614u: goto L_0880EF34;
    case 615u: goto L_0880EFFC;
    case 616u: goto L_0880F004;
    case 617u: goto L_0880F028;
    case 618u: goto L_0880F040;
    case 619u: goto L_0880F054;
    case 620u: goto L_0880F05C;
    case 621u: goto L_0880F068;
    case 622u: goto L_0880F088;
    case 623u: goto L_0880F0B4;
    case 624u: goto L_0880F0D4;
    case 625u: goto L_0880F0DC;
    case 626u: goto L_0880F0E4;
    case 627u: goto L_0880F0F0;
    case 628u: goto L_0880F108;
    case 629u: goto L_0880F120;
    case 630u: goto L_0880F128;
    case 631u: goto L_0880F130;
    case 632u: goto L_0880F138;
    case 633u: goto L_0880F1B4;
    case 634u: goto L_0880F1BC;
    case 635u: goto L_0880F1D8;
    case 636u: goto L_0880F1E8;
    case 637u: goto L_0880F1F4;
    case 638u: goto L_0880F1FC;
    case 639u: goto L_0880F210;
    case 640u: goto L_0880F23C;
    case 641u: goto L_0880F294;
    case 642u: goto L_0880F2E0;
    case 643u: goto L_0880F2F8;
    case 644u: goto L_0880F308;
    case 645u: goto L_0880F310;
    case 646u: goto L_0880F318;
    case 647u: goto L_0880F320;
    case 648u: goto L_0880F338;
    case 649u: goto L_0880F348;
    case 650u: goto L_0880F350;
    case 651u: goto L_0880F358;
    case 652u: goto L_0880F35C;
    case 653u: goto L_0880F3A0;
    case 654u: goto L_0880F3B4;
    case 655u: goto L_0880F3C4;
    case 656u: goto L_0880F3DC;
    case 657u: goto L_0880F3E4;
    case 658u: goto L_0880F3F0;
    case 659u: goto L_0880F3F8;
    case 660u: goto L_0880F400;
    case 661u: goto L_0880F408;
    case 662u: goto L_0880F414;
    case 663u: goto L_0880F41C;
    case 664u: goto L_0880F424;
    case 665u: goto L_0880F42C;
    case 666u: goto L_0880F438;
    case 667u: goto L_0880F43C;
    case 668u: goto L_0880F444;
    case 669u: goto L_0880F44C;
    case 670u: goto L_0880F458;
    case 671u: goto L_0880F460;
    case 672u: goto L_0880F468;
    case 673u: goto L_0880F470;
    case 674u: goto L_0880F47C;
    case 675u: goto L_0880F484;
    case 676u: goto L_0880F48C;
    case 677u: goto L_0880F494;
    case 678u: goto L_0880F4A0;
    case 679u: goto L_0880F4A8;
    case 680u: goto L_0880F4B0;
    case 681u: goto L_0880F4B8;
    case 682u: goto L_0880F4C4;
    case 683u: goto L_0880F4CC;
    case 684u: goto L_0880F4D4;
    case 685u: goto L_0880F4E0;
    case 686u: goto L_0880F4E4;
    case 687u: goto L_0880F4EC;
    case 688u: goto L_0880F51C;
    case 689u: goto L_0880F524;
    case 690u: goto L_0880F52C;
    case 691u: goto L_0880F534;
    case 692u: goto L_0880F53C;
    case 693u: goto L_0880F544;
    case 694u: goto L_0880F550;
    case 695u: goto L_0880F55C;
    case 696u: goto L_0880F57C;
    case 697u: goto L_0880F584;
    case 698u: goto L_0880F590;
    case 699u: goto L_0880F59C;
    case 700u: goto L_0880F5BC;
    case 701u: goto L_0880F5C4;
    case 702u: goto L_0880F5D0;
    case 703u: goto L_0880F5DC;
    case 704u: goto L_0880F5FC;
    case 705u: goto L_0880F60C;
    case 706u: goto L_0880F688;
    case 707u: goto L_0880F748;
    case 708u: goto L_0880F790;
    case 709u: goto L_0880F7BC;
    case 710u: goto L_0880F7E4;
    case 711u: goto L_0880F83C;
    case 712u: goto L_0880F854;
    case 713u: goto L_0880F85C;
    case 714u: goto L_0880F860;
    case 715u: goto L_0880F870;
    case 716u: goto L_0880F878;
    case 717u: goto L_0880F880;
    case 718u: goto L_0880F890;
    case 719u: goto L_0880F8B0;
    case 720u: goto L_0880F8C0;
    case 721u: goto L_0880F8C8;
    case 722u: goto L_0880F8D4;
    case 723u: goto L_0880F8E4;
    case 724u: goto L_0880F8FC;
    case 725u: goto L_0880F910;
    case 726u: goto L_0880F918;
    case 727u: goto L_0880F920;
    case 728u: goto L_0880F928;
    case 729u: goto L_0880F930;
    case 730u: goto L_0880F984;
    case 731u: goto L_0880F98C;
    case 732u: goto L_0880F994;
    case 733u: goto L_0880F9D4;
    case 734u: goto L_0880F9E0;
    case 735u: goto L_0880F9F8;
    case 736u: goto L_0880FA00;
    case 737u: goto L_0880FA20;
    case 738u: goto L_0880FA28;
    case 739u: goto L_0880FA34;
    case 740u: goto L_0880FA40;
    case 741u: goto L_0880FA4C;
    case 742u: goto L_0880FA50;
    case 743u: goto L_0880FA88;
    case 744u: goto L_0880FB04;
    case 745u: goto L_0880FB10;
    case 746u: goto L_0880FB1C;
    case 747u: goto L_0880FB28;
    case 748u: goto L_0880FB34;
    case 749u: goto L_0880FB40;
    case 750u: goto L_0880FB4C;
    case 751u: goto L_0880FB58;
    case 752u: goto L_0880FB64;
    case 753u: goto L_0880FBD4;
    case 754u: goto L_0880FBF4;
    case 755u: goto L_0880FC18;
    case 756u: goto L_0880FC88;
    case 757u: goto L_0880FCB4;
    case 758u: goto L_0880FCC0;
    case 759u: goto L_0880FCD0;
    case 760u: goto L_0880FCE4;
    case 761u: goto L_0880FD24;
    case 762u: goto L_0880FD7C;
    case 763u: goto L_0880FD84;
    case 764u: goto L_0880FDA0;
    case 765u: goto L_0880FDEC;
    case 766u: goto L_0880FE28;
    case 767u: goto L_0880FE48;
    case 768u: goto L_0880FE78;
    case 769u: goto L_0880FEAC;
    case 770u: goto L_0880FED4;
    case 771u: goto L_0880FEE0;
    case 772u: goto L_0880FEEC;
    case 773u: goto L_0880FEF8;
    case 774u: goto L_0880FF04;
    case 775u: goto L_0880FF10;
    case 776u: goto L_0880FF1C;
    case 777u: goto L_0880FF28;
    case 778u: goto L_0880FF34;
    case 779u: goto L_0880FF40;
    case 780u: goto L_0880FF4C;
    case 781u: goto L_0880FF58;
    case 782u: goto L_0880FF64;
    case 783u: goto L_0880FF70;
    case 784u: goto L_0880FF7C;
    case 785u: goto L_0880FF88;
    case 786u: goto L_0880FF94;
    case 787u: goto L_0880FFA0;
    case 788u: goto L_0880FFAC;
    case 789u: goto L_0880FFB8;
    case 790u: goto L_0880FFC4;
    case 791u: goto L_0880FFD0;
    case 792u: goto L_0880FFDC;
    case 793u: goto L_0880FFE8;
    case 794u: goto L_0880FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_0880C000:
    aot_gpr_31 = (0x0880C008u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C008u) goto L_0880C008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C008:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C018u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C018u) goto L_0880C018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C018:
    { const bool branch_taken = aot_gpr_17 != 0u;
    ctx.gpr[6] = (2231u << 16u);
      if (branch_taken) {
          goto L_0880C030;
      }
      goto L_0880C020;
    }
L_0880C020:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0880C030u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17248));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C030u) goto L_0880C030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C030:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C03Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 466u, 0x08807294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C03Cu) goto L_0880C03C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C03C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C048u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C048u) goto L_0880C048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C048:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_0880C04C;
L_0880C04C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C064:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0880C080u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31952));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C080u) goto L_0880C080;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C080:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880C08Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C08Cu) goto L_0880C08C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C08C:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880C098u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C098u) goto L_0880C098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C098:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880C0A8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C0A8u) goto L_0880C0A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C0A8:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C0B8;
      }
      goto L_0880C0B0;
    }
L_0880C0B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_0880C0BC;
      }
      goto L_0880C0B8;
    }
L_0880C0B8:
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-31940));
    goto L_0880C0BC;
L_0880C0BC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C0D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0880C108;
      }
      goto L_0880C0F4;
    }
L_0880C0F4:
    aot_gpr_5 = (0u | 59u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0880C110;
      }
      goto L_0880C100;
    }
L_0880C100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C114;
      }
      goto L_0880C108;
    }
L_0880C108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880C14C;
      }
      goto L_0880C110;
    }
L_0880C110:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    goto L_0880C114;
L_0880C114:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C120u);
    aot_gpr_5 = (0u | 59u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C120u) goto L_0880C120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C120:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C138;
      }
      goto L_0880C12C;
    }
L_0880C12C:
    aot_gpr_31 = (0x0880C134u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C134u) goto L_0880C134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C134:
    ctx.gpr[18] = (aot_gpr_16 + ctx.gpr[2]);
    goto L_0880C138;
L_0880C138:
    ctx.gpr[6] = (ctx.gpr[18] - aot_gpr_16);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880C148u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C148u) goto L_0880C148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C148:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_0880C14C;
L_0880C14C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C164:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[5]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x0880C18Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C18Cu) goto L_0880C18C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C18C:
    aot_gpr_17 = (2231u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(17276));
    goto L_0880C19C;
L_0880C19C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0880C1A8u);
    aot_gpr_5 = (0u | 63u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C1A8u) goto L_0880C1A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C1A8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C1EC;
      }
      goto L_0880C1B4;
    }
L_0880C1B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 3u);
    aot_gpr_31 = (0x0880C1C4u);
    ctx.gpr[6] = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 265u, 0x0889D420u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C1C4u) goto L_0880C1C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C1C4:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[20]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C1D4u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C1D4u) goto L_0880C1D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C1D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C1E0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C1E0u) goto L_0880C1E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C1E0:
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880C19C;
      }
      goto L_0880C1EC;
    }
L_0880C1EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C1F8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C1F8u) goto L_0880C1F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C1F8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C204u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 546u, 0x08807904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C204u) goto L_0880C204;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C204:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_0880C224:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_31 = (0x0880C258u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C258u) goto L_0880C258;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C258:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C264u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C264u) goto L_0880C264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C264:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31932));
    aot_gpr_31 = (0x0880C270u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C270u) goto L_0880C270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C270:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C27Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C27Cu) goto L_0880C27C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C27C:
    ctx.gpr[18] = (0u | 2u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C28Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C28Cu) goto L_0880C28C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C28C:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0880C2E0;
      }
      goto L_0880C298;
    }
L_0880C298:
    aot_gpr_31 = (0x0880C2A0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0880C064;
L_0880C2A0:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C2B0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C2B0u) goto L_0880C2B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C2B0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C2BCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C2BCu) goto L_0880C2BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C2BC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C2C8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C2C8u) goto L_0880C2C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C2C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C2D8;
      }
      goto L_0880C2D0;
    }
L_0880C2D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C2F8;
      }
      goto L_0880C2D8;
    }
L_0880C2D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0880C4D8;
      }
      goto L_0880C2E0;
    }
L_0880C2E0:
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C2F0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17312));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C2F0u) goto L_0880C2F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C2F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C4D8;
      }
      goto L_0880C2F8;
    }
L_0880C2F8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C304u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C304u) goto L_0880C304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C304:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C310u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0880C0D0;
L_0880C310:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C324;
      }
      goto L_0880C31C;
    }
L_0880C31C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C350;
      }
      goto L_0880C324;
    }
L_0880C324:
    aot_gpr_31 = (0x0880C32Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0880C164;
L_0880C32C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C338u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C338u) goto L_0880C338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C338:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C344u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 470u, 0x0889E124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C344u) goto L_0880C344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C344:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0880C2F8;
      }
      goto L_0880C350;
    }
L_0880C350:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
    // nop
      if (branch_taken) {
          goto L_0880C454;
      }
      goto L_0880C358;
    }
L_0880C358:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880C414;
      }
      goto L_0880C360;
    }
L_0880C360:
    aot_gpr_17 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31924));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C370u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C370u) goto L_0880C370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C370:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C37Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C37Cu) goto L_0880C37C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C37C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C388u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C388u) goto L_0880C388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C388:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C394u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C394u) goto L_0880C394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C394:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C3A0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C3A0u) goto L_0880C3A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C3A0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C3ACu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C3ACu) goto L_0880C3AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C3AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C3B8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C3B8u) goto L_0880C3B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C3B8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0880C3C8u);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C3C8u) goto L_0880C3C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C3C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C3D4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C3D4u) goto L_0880C3D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C3D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C3E0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C3E0u) goto L_0880C3E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C3E0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C3ECu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C3ECu) goto L_0880C3EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C3EC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C3F8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C3F8u) goto L_0880C3F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C3F8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C404u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C404u) goto L_0880C404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C404:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C498;
      }
      goto L_0880C40C;
    }
L_0880C40C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C4B0;
      }
      goto L_0880C414;
    }
L_0880C414:
    ctx.gpr[6] = (2231u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0880C428u);
    aot_gpr_17 = (ctx.gpr[6] + static_cast<std::uint32_t>(17384));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C428u) goto L_0880C428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C428:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C438u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C438u) goto L_0880C438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C438:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0880C44Cu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C44Cu) goto L_0880C44C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C44C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C4D8;
      }
      goto L_0880C454;
    }
L_0880C454:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0880C414;
      }
      goto L_0880C45C;
    }
L_0880C45C:
    ctx.gpr[6] = (2231u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0880C470u);
    aot_gpr_17 = (ctx.gpr[6] + static_cast<std::uint32_t>(17340));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C470u) goto L_0880C470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C470:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0880C47Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0880C064;
L_0880C47C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0880C490u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C490u) goto L_0880C490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C4D8;
      }
      goto L_0880C498;
    }
L_0880C498:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C4A4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C4A4u) goto L_0880C4A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C4A4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C4B0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 320u, 0x088067C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C4B0u) goto L_0880C4B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C4B0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C4BCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C4BCu) goto L_0880C4BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C4BC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C4C8u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C4C8u) goto L_0880C4C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C4C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C4D4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C4D4u) goto L_0880C4D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C4D4:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_0880C4D8;
L_0880C4D8:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_0880C4F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0880C524u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 286u, 0x088064C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C524u) goto L_0880C524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C524:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C53C;
      }
      goto L_0880C52C;
    }
L_0880C52C:
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880C53Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17416));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C53Cu) goto L_0880C53C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C53C:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C54Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 295u, 0x08806564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C54Cu) goto L_0880C54C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C54C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C558u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 592u, 0x08872734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C558u) goto L_0880C558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C558:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C5A8;
      }
      goto L_0880C560;
    }
L_0880C560:
    aot_gpr_31 = (0x0880C568u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C568u) goto L_0880C568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C568:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880C578u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 286u, 0x088064C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C578u) goto L_0880C578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C578:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C590;
      }
      goto L_0880C580;
    }
L_0880C580:
    aot_gpr_5 = (2231u << 16u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880C590u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(17448));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C590u) goto L_0880C590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C590:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880C5A0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 295u, 0x08806564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C5A0u) goto L_0880C5A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C5A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0880C5BC;
      }
      goto L_0880C5A8;
    }
L_0880C5A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880C5B8u);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 295u, 0x08806564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C5B8u) goto L_0880C5B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C5B8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0880C5BC;
L_0880C5BC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C5D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0880C5F0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 407u, 0x08806CC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C5F0u) goto L_0880C5F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C5F0:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 != 0u;
    ctx.gpr[6] = (2231u << 16u);
      if (branch_taken) {
          goto L_0880C60C;
      }
      goto L_0880C5FC;
    }
L_0880C5FC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0880C60Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17476));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C60Cu) goto L_0880C60C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C60C:
    aot_gpr_31 = (0x0880C614u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C614u) goto L_0880C614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C614:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C624u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0880C4F8;
L_0880C624:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_17) >= 0;
    // nop
      if (branch_taken) {
          goto L_0880C650;
      }
      goto L_0880C630;
    }
L_0880C630:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C63Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C63Cu) goto L_0880C63C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C63C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C648u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C648u) goto L_0880C648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0880C670;
      }
      goto L_0880C650;
    }
L_0880C650:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C65Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C65Cu) goto L_0880C65C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C65C:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (0u - aot_gpr_17);
    aot_gpr_31 = (0x0880C66Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C66Cu) goto L_0880C66C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C66C:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    goto L_0880C670;
L_0880C670:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C684:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0880C6A0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10002));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 407u, 0x08806CC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C6A0u) goto L_0880C6A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C6A0:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x0880C6ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C6ACu) goto L_0880C6AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C6AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880C6BCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_0880C4F8;
L_0880C6BC:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_17) >= 0;
    // nop
      if (branch_taken) {
          goto L_0880C708;
      }
      goto L_0880C6C8;
    }
L_0880C6C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C6D4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C6D4u) goto L_0880C6D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C6D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C700;
      }
      goto L_0880C6DC;
    }
L_0880C6DC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C6E8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 221u, 0x0889D184u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C6E8u) goto L_0880C6E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C6E8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C6F4u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C6F4u) goto L_0880C6F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C6F4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C700u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 546u, 0x08807904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C700u) goto L_0880C700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C700:
    aot_gpr_31 = (0x0880C708u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 538u, 0x08807890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C708u) goto L_0880C708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C708:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C720:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0880C73Cu);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 298u, 0x088065D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C73Cu) goto L_0880C73C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C73C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_17 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C750u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C750u) goto L_0880C750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C750:
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    ctx.gpr[6] = (2231u << 16u);
      if (branch_taken) {
          goto L_0880C774;
      }
      goto L_0880C75C;
    }
L_0880C75C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C768u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 331u, 0x088068E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C768u) goto L_0880C768;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C784;
      }
      goto L_0880C770;
    }
L_0880C770:
    ctx.gpr[6] = (2231u << 16u);
    goto L_0880C774;
L_0880C774:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0880C784u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17496));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C784u) goto L_0880C784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C784:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C790u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C790u) goto L_0880C790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C790:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0880C7A0u);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 295u, 0x08806564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C7A0u) goto L_0880C7A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C7A0:
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C7BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0880C7D0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_0880C720;
L_0880C7D0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (2177u << 16u);
    aot_gpr_16 = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    aot_gpr_31 = (0x0880C7E8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-14716));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C7E8u) goto L_0880C7E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C7E8:
    ctx.gpr[2] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C7FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0880C810u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C810u) goto L_0880C810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C810:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C81Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 607u, 0x08872848u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C81Cu) goto L_0880C81C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C81C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C82C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_31);
    aot_gpr_31 = (0x0880C850u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 407u, 0x08806CC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C850u) goto L_0880C850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C850:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 != 0u;
    ctx.gpr[6] = (2231u << 16u);
      if (branch_taken) {
          goto L_0880C86C;
      }
      goto L_0880C85C;
    }
L_0880C85C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x0880C86Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17476));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C86Cu) goto L_0880C86C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C86C:
    { const bool branch_taken = aot_gpr_16 != aot_gpr_17;
    // nop
      if (branch_taken) {
          goto L_0880C88C;
      }
      goto L_0880C874;
    }
L_0880C874:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31908));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C884u);
    ctx.gpr[6] = (0u | 7u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C884u) goto L_0880C884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C8DC;
      }
      goto L_0880C88C;
    }
L_0880C88C:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x0880C89Cu);
    ctx.gpr[6] = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C89Cu) goto L_0880C89C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C89C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C8CC;
      }
      goto L_0880C8A4;
    }
L_0880C8A4:
    aot_gpr_31 = (0x0880C8ACu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C8ACu) goto L_0880C8AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C8AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880C8CC;
      }
      goto L_0880C8B4;
    }
L_0880C8B4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31900));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C8C4u);
    ctx.gpr[6] = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C8C4u) goto L_0880C8C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880C8DC;
      }
      goto L_0880C8CC;
    }
L_0880C8CC:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31892));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C8DCu);
    ctx.gpr[6] = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C8DCu) goto L_0880C8DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C8DC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C8F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31880));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0880C914u);
    ctx.gpr[6] = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C914u) goto L_0880C914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C914:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C920u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C920u) goto L_0880C920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C920:
    ctx.gpr[6] = (2231u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0880C938u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16640));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C938u) goto L_0880C938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C938:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31876));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C948u);
    ctx.gpr[6] = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C948u) goto L_0880C948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C948:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31864));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C958u);
    ctx.gpr[6] = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C958u) goto L_0880C958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C958:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C964u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C964u) goto L_0880C964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C964:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31852));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C974u);
    ctx.gpr[6] = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C974u) goto L_0880C974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C974:
    aot_gpr_31 = (0x0880C97Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C97Cu) goto L_0880C97C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C97C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C988u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C988u) goto L_0880C988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C988:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C994u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C994u) goto L_0880C994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C994:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31840));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C9A4u);
    ctx.gpr[6] = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C9A4u) goto L_0880C9A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C9A4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31832));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C9B4u);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C9B4u) goto L_0880C9B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C9B4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C9C0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C9C0u) goto L_0880C9C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C9C0:
    aot_gpr_5 = (2177u << 16u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_gpr_31 = (0x0880C9D4u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-16572));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C9D4u) goto L_0880C9D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C9D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C9E0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C9E0u) goto L_0880C9E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C9E0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880C9ECu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880C9ECu) goto L_0880C9EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C9EC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880C9FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x0880CA10u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_0880C8F8;
L_0880CA10:
    ctx.gpr[6] = (2231u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31828));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x0880CA28u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16848));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CA28u) goto L_0880CA28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CA28:
    aot_gpr_31 = (0x0880CA30u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CA30u) goto L_0880CA30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CA30:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31932));
    aot_gpr_31 = (0x0880CA3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CA3Cu) goto L_0880CA3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CA3C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880CA48u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CA48u) goto L_0880CA48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CA48:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880CA54u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-10001));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CA54u) goto L_0880CA54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CA54:
    ctx.gpr[2] = (0u | 0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CA68:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (49024u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0880CAC0;
      }
      goto L_0880CA84;
    }
L_0880CA84:
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0880CAC0;
      }
      goto L_0880CAA0;
    }
L_0880CAA0:
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0880CAD8;
      }
      goto L_0880CAB8;
    }
L_0880CAB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CAC8;
      }
      goto L_0880CAC0;
    }
L_0880CAC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880CAE4;
      }
      goto L_0880CAC8;
    }
L_0880CAC8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0880CAE0;
      }
      goto L_0880CAD8;
    }
L_0880CAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880CAE4;
      }
      goto L_0880CAE0;
    }
L_0880CAE0:
    ctx.gpr[2] = (0u | 1u);
    goto L_0880CAE4;
L_0880CAE4:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CAEC:
    ctx.gpr[7] = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-4));
    aot_gpr_5 = (ctx.gpr[7] - aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_4 << 9u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[8] - aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_5 << 9u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[8] - aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(500));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(500));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_15), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[6] + static_cast<std::uint32_t>(16), aot_run_words); }
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(aot_fpr_15));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CB6C:
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880CB9C;
      }
      goto L_0880CB78;
    }
L_0880CB78:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) < 0;
    // nop
      if (branch_taken) {
          goto L_0880CBE8;
      }
      goto L_0880CB80;
    }
L_0880CB80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (16253u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 28836u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) > 0;
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0880CBB4;
      }
      goto L_0880CB94;
    }
L_0880CB94:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = aot_fpr_12 + ctx.fpr[0];
      if (branch_taken) {
          goto L_0880CBE8;
      }
      goto L_0880CB9C;
    }
L_0880CB9C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880CBBC;
      }
      goto L_0880CBA4;
    }
L_0880CBA4:
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880CBD4;
      }
      goto L_0880CBAC;
    }
L_0880CBAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CBE8;
      }
      goto L_0880CBB4;
    }
L_0880CBB4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] - aot_fpr_12;
      if (branch_taken) {
          goto L_0880CBE8;
      }
      goto L_0880CBBC;
    }
L_0880CBBC:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (16253u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 28836u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] + aot_fpr_12;
      if (branch_taken) {
          goto L_0880CBE8;
      }
      goto L_0880CBD4;
    }
L_0880CBD4:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (16253u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 28836u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[0] = aot_fpr_12 - ctx.fpr[0];
    goto L_0880CBE8;
L_0880CBE8:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CBF0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CC34;
      }
      goto L_0880CC00;
    }
L_0880CC00:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28660));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5852), 0u);
      if (branch_taken) {
          goto L_0880CC20;
      }
      goto L_0880CC14;
    }
L_0880CC14:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_0880CC20;
L_0880CC20:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CC34;
      }
      goto L_0880CC2C;
    }
L_0880CC2C:
    aot_gpr_31 = (0x0880CC34u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CC34u) goto L_0880CC34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CC34:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CC40:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0880CF5C;
      }
      goto L_0880CC5C;
    }
L_0880CC5C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28644));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6896));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6836));
        goto L_0880CC9C;
    }
    goto L_0880CC74;
L_0880CC74:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6836));
        goto L_0880CC9C;
    }
    goto L_0880CC7C;
L_0880CC7C:
    aot_gpr_31 = (0x0880CC84u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 346u, 0x08B65788u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CC84u) goto L_0880CC84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CC84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(6896)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6836));
        goto L_0880CC9C;
    }
    goto L_0880CC90;
L_0880CC90:
    aot_gpr_31 = (0x0880CC98u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CC98u) goto L_0880CC98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CC98:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6836));
    goto L_0880CC9C;
L_0880CC9C:
    aot_gpr_31 = (0x0880CCA4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CCA4u) goto L_0880CCA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CCA4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6832));
    aot_gpr_31 = (0x0880CCB0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CCB0u) goto L_0880CCB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CCB0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6828));
    aot_gpr_31 = (0x0880CCBCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CCBCu) goto L_0880CCBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CCBC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6824));
    aot_gpr_31 = (0x0880CCC8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CCC8u) goto L_0880CCC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CCC8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6820));
    aot_gpr_31 = (0x0880CCD4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CCD4u) goto L_0880CCD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CCD4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6816));
    aot_gpr_31 = (0x0880CCE0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CCE0u) goto L_0880CCE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CCE0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6812));
    aot_gpr_31 = (0x0880CCECu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CCECu) goto L_0880CCEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CCEC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6808));
    aot_gpr_31 = (0x0880CCF8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CCF8u) goto L_0880CCF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CCF8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6804));
    aot_gpr_31 = (0x0880CD04u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD04u) goto L_0880CD04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD04:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6800));
    aot_gpr_31 = (0x0880CD10u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD10u) goto L_0880CD10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD10:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6796));
    aot_gpr_31 = (0x0880CD1Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD1Cu) goto L_0880CD1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD1C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6792));
    aot_gpr_31 = (0x0880CD28u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD28u) goto L_0880CD28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD28:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6788));
    aot_gpr_31 = (0x0880CD34u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD34u) goto L_0880CD34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD34:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6784));
    aot_gpr_31 = (0x0880CD40u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD40u) goto L_0880CD40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD40:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6780));
    aot_gpr_31 = (0x0880CD4Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD4Cu) goto L_0880CD4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD4C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6776));
    aot_gpr_31 = (0x0880CD58u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD58u) goto L_0880CD58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD58:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6772));
    aot_gpr_31 = (0x0880CD64u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD64u) goto L_0880CD64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD64:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6768));
    aot_gpr_31 = (0x0880CD70u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD70u) goto L_0880CD70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD70:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6764));
    aot_gpr_31 = (0x0880CD7Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD7Cu) goto L_0880CD7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD7C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6760));
    aot_gpr_31 = (0x0880CD88u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD88u) goto L_0880CD88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD88:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6756));
    aot_gpr_31 = (0x0880CD94u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CD94u) goto L_0880CD94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CD94:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6752));
    aot_gpr_31 = (0x0880CDA0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CDA0u) goto L_0880CDA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CDA0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6748));
    aot_gpr_31 = (0x0880CDACu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CDACu) goto L_0880CDAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CDAC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6744));
    aot_gpr_31 = (0x0880CDB8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CDB8u) goto L_0880CDB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CDB8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6740));
    aot_gpr_31 = (0x0880CDC4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CDC4u) goto L_0880CDC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CDC4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6736));
    aot_gpr_31 = (0x0880CDD0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CDD0u) goto L_0880CDD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CDD0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6732));
    aot_gpr_31 = (0x0880CDDCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CDDCu) goto L_0880CDDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CDDC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6728));
    aot_gpr_31 = (0x0880CDE8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CDE8u) goto L_0880CDE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CDE8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6724));
    aot_gpr_31 = (0x0880CDF4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CDF4u) goto L_0880CDF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CDF4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6720));
    aot_gpr_31 = (0x0880CE00u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE00u) goto L_0880CE00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE00:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6716));
    aot_gpr_31 = (0x0880CE0Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE0Cu) goto L_0880CE0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE0C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6712));
    aot_gpr_31 = (0x0880CE18u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE18u) goto L_0880CE18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE18:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6708));
    aot_gpr_31 = (0x0880CE24u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE24u) goto L_0880CE24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE24:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6704));
    aot_gpr_31 = (0x0880CE30u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE30u) goto L_0880CE30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE30:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6700));
    aot_gpr_31 = (0x0880CE3Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE3Cu) goto L_0880CE3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE3C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6696));
    aot_gpr_31 = (0x0880CE48u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE48u) goto L_0880CE48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE48:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6692));
    aot_gpr_31 = (0x0880CE54u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE54u) goto L_0880CE54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE54:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6688));
    aot_gpr_31 = (0x0880CE60u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE60u) goto L_0880CE60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE60:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6684));
    aot_gpr_31 = (0x0880CE6Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE6Cu) goto L_0880CE6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE6C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6680));
    aot_gpr_31 = (0x0880CE78u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE78u) goto L_0880CE78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE78:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6676));
    aot_gpr_31 = (0x0880CE84u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE84u) goto L_0880CE84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE84:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6672));
    aot_gpr_31 = (0x0880CE90u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE90u) goto L_0880CE90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE90:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6668));
    aot_gpr_31 = (0x0880CE9Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CE9Cu) goto L_0880CE9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CE9C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6664));
    aot_gpr_31 = (0x0880CEA8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CEA8u) goto L_0880CEA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CEA8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6660));
    aot_gpr_31 = (0x0880CEB4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CEB4u) goto L_0880CEB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CEB4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6656));
    aot_gpr_31 = (0x0880CEC0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CEC0u) goto L_0880CEC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CEC0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6652));
    aot_gpr_31 = (0x0880CECCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CECCu) goto L_0880CECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CECC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6648));
    aot_gpr_31 = (0x0880CED8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CED8u) goto L_0880CED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CED8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6644));
    aot_gpr_31 = (0x0880CEE4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CEE4u) goto L_0880CEE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CEE4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6640));
    aot_gpr_31 = (0x0880CEF0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CEF0u) goto L_0880CEF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CEF0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6636));
    aot_gpr_31 = (0x0880CEFCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CEFCu) goto L_0880CEFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CEFC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6632));
    aot_gpr_31 = (0x0880CF08u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CF08u) goto L_0880CF08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CF08:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6628));
    aot_gpr_31 = (0x0880CF14u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CF14u) goto L_0880CF14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CF14:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6624));
    aot_gpr_31 = (0x0880CF20u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 31u, 0x08AF42D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CF20u) goto L_0880CF20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CF20:
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_4 = (aot_gpr_16 & 1u);
      if (branch_taken) {
          goto L_0880CF4C;
      }
      goto L_0880CF28;
    }
L_0880CF28:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28660));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_gpr_4);
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5852), 0u);
      if (branch_taken) {
          goto L_0880CF48;
      }
      goto L_0880CF3C;
    }
L_0880CF3C:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(4), aot_gpr_4);
    goto L_0880CF48;
L_0880CF48:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_0880CF4C;
L_0880CF4C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880CF5C;
      }
      goto L_0880CF54;
    }
L_0880CF54:
    aot_gpr_31 = (0x0880CF5Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880CF5Cu) goto L_0880CF5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CF5C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880CF70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[9]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_17 = (0u | 0u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-225));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[30] = (0u | 255u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_31);
    goto L_0880CFC4;
L_0880CFC4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880CFDCu);
    ctx.gpr[6] = (0u | 0u);
    goto L_0880F4EC;
L_0880CFDC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(656))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[23]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(656))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[22]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(656))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[21]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(656))))));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(628), 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(656))))));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(665), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(668), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 75 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0880CFC4;
      }
      goto L_0880D034;
    }
L_0880D034:
    aot_gpr_4 = (17280u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(6840), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(6844), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6848), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6849), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6850), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6904), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6905), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6906), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6907), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_gpr_31 = (0x0880D070u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    goto L_0880DB14;
L_0880D070:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20])};
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
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(6864));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[20])};
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
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(6880));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
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
L_0880D0D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x0880D0F4u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_0880F1BC;
L_0880D0F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D108;
      }
      goto L_0880D100;
    }
L_0880D100:
    aot_gpr_31 = (0x0880D108u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D108u) goto L_0880D108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D108:
    aot_gpr_31 = (0x0880D110u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 554u, 0x089BAA68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D110u) goto L_0880D110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D110:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(6848), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5956), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5960), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (17530u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6840), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_17 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(6848)));
    goto L_0880D138;
L_0880D138:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[18] << 3u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    ctx.gpr[19] = (aot_gpr_4 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_31 = (0x0880D160u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D160u) goto L_0880D160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D160:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(6848)));
      if (branch_taken) {
          goto L_0880D138;
      }
      goto L_0880D194;
    }
L_0880D194:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(612), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_31 = (0x0880D1B4u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D1B4u) goto L_0880D1B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D1B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(6848)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_31 = (0x0880D1ECu);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D1ECu) goto L_0880D1EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D1EC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(621), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(622), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(623), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_0880D228:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D230:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-368));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_15)) ? 0x00800000u : 0u);
    aot_gpr_4 = (16254u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(316), aot_run_words); }
    { const std::uint32_t aot_run_words[7]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(332), aot_run_words); }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_0880D298;
      }
      goto L_0880D290;
    }
L_0880D290:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_0880D29C;
      }
      goto L_0880D298;
    }
L_0880D298:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
    goto L_0880D29C;
L_0880D29C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_0880D2B4;
      }
      goto L_0880D2AC;
    }
L_0880D2AC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0880D2B8;
      }
      goto L_0880D2B4;
    }
L_0880D2B4:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0880D2B8;
L_0880D2B8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= aot_fpr_15)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_0880D2D4;
      }
      goto L_0880D2CC;
    }
L_0880D2CC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_0880D2D4;
      }
      goto L_0880D2D4;
    }
L_0880D2D4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_15));
      if (branch_taken) {
          goto L_0880D2EC;
      }
      goto L_0880D2E4;
    }
L_0880D2E4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0880D2EC;
      }
      goto L_0880D2EC;
    }
L_0880D2EC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_17 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880D31Cu);
    ctx.gpr[6] = (aot_gpr_29 | 0u);
    goto L_0880EDB0;
L_0880D31C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(120));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880D338u);
    ctx.gpr[6] = (aot_gpr_29 | 0u);
    goto L_0880EDB0;
L_0880D338:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880D358u);
    ctx.gpr[6] = (aot_gpr_29 | 0u);
    goto L_0880EDB0;
L_0880D358:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(136));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880D374u);
    ctx.gpr[6] = (aot_gpr_29 | 0u);
    goto L_0880EDB0;
L_0880D374:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880D384u);
    ctx.gpr[6] = (aot_gpr_17 | 0u);
    goto L_0880F7E4;
L_0880D384:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_17 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D3DC;
      }
      goto L_0880D390;
    }
L_0880D390:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (15112u << 16u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_4 | 34953u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (15216u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 61681u);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_0880D3E4;
      }
      goto L_0880D3D4;
    }
L_0880D3D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D48C;
      }
      goto L_0880D3DC;
    }
L_0880D3DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D50C;
      }
      goto L_0880D3E4;
    }
L_0880D3E4:
    aot_gpr_4 = (16768u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_29 | 0u);
    aot_gpr_4 = (15744u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(240));
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(176));
    goto L_0880D404;
L_0880D404:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0880D418u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    goto L_0880EE6C;
L_0880D418:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x0880D428u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    goto L_0880EB64;
L_0880D428:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(180)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_17) ? 1u : 0u);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880D404;
      }
      goto L_0880D48C;
    }
L_0880D48C:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D50C;
      }
      goto L_0880D498;
    }
L_0880D498:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_31 = (0x0880D4A4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D4A4u) goto L_0880D4A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D4A4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(6848)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (2231u << 16u);
    aot_gpr_16 = (ctx.gpr[8] + static_cast<std::uint32_t>(17560));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    aot_gpr_5 = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0880D4E4u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D4E4u) goto L_0880D4E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D4E4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880D4F8u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 93u, 0x08AF4D64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D4F8u) goto L_0880D4F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D4F8:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (0u | 5u);
    ctx.gpr[6] = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880D50Cu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8272));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D50Cu) goto L_0880D50C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D50C:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(308), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      aot_gpr_16 = aot_run_words[5];
      aot_gpr_17 = aot_run_words[6];
      ctx.gpr[18] = aot_run_words[7];
      ctx.gpr[19] = aot_run_words[8];
      ctx.gpr[20] = aot_run_words[9];
      ctx.gpr[21] = aot_run_words[10];
      ctx.gpr[22] = aot_run_words[11];
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D548:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[20] = (2236u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32304));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, aot_gpr_17, ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0880D584;
      }
      goto L_0880D57C;
    }
L_0880D57C:
    aot_gpr_31 = (0x0880D584u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D584u) goto L_0880D584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D584:
    aot_gpr_31 = (0x0880D58Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 554u, 0x089BAA68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D58Cu) goto L_0880D58C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D58C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(6848), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0880D5EC;
      }
      goto L_0880D59C;
    }
L_0880D59C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D5B0;
      }
      goto L_0880D5A8;
    }
L_0880D5A8:
    aot_gpr_31 = (0x0880D5B0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D5B0u) goto L_0880D5B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D5B0:
    aot_gpr_31 = (0x0880D5B8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 580u, 0x089BABACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D5B8u) goto L_0880D5B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D5B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D5EC;
      }
      goto L_0880D5C0;
    }
L_0880D5C0:
    aot_gpr_31 = (0x0880D5C8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0880F1BC;
L_0880D5C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(6844)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0880D5F4;
      }
      goto L_0880D5E0;
    }
L_0880D5E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(6844)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6840), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0880D6D4;
      }
      goto L_0880D5EC;
    }
L_0880D5EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D7D8;
      }
      goto L_0880D5F4;
    }
L_0880D5F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[18] = (0u | 96u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_17 = (0u | 256u);
      if (branch_taken) {
          goto L_0880D60C;
      }
      goto L_0880D604;
    }
L_0880D604:
    ctx.gpr[18] = (0u | 150u);
    aot_gpr_17 = (0u | 256u);
    goto L_0880D60C;
L_0880D60C:
    aot_gpr_31 = (0x0880D614u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D614u) goto L_0880D614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D614:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D6C8;
      }
      goto L_0880D61C;
    }
L_0880D61C:
    aot_gpr_31 = (0x0880D624u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D624u) goto L_0880D624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D624:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0880D664;
      }
      goto L_0880D654;
    }
L_0880D654:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[18]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6840), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0880D6C0;
      }
      goto L_0880D664;
    }
L_0880D664:
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_17 - ctx.gpr[18]);
      if (branch_taken) {
          goto L_0880D6B4;
      }
      goto L_0880D680;
    }
L_0880D680:
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39321u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_15;
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[18]);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6840), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0880D6C0;
      }
      goto L_0880D6B4;
    }
L_0880D6B4:
    aot_gpr_4 = (17280u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6840), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0880D6C0;
L_0880D6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D6D4;
      }
      goto L_0880D6C8;
    }
L_0880D6C8:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[18]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6840), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0880D6D4;
L_0880D6D4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2053)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0880D738;
      }
      goto L_0880D6E0;
    }
L_0880D6E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5956), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (17280u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5960), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(6840), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_0880D788;
      }
      goto L_0880D738;
    }
L_0880D738:
    aot_gpr_31 = (0x0880D740u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 58u, 0x089604E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D740u) goto L_0880D740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D740:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5956), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5960), std::bit_cast<std::uint32_t>(aot_fpr_15));
    goto L_0880D788;
L_0880D788:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D79C;
      }
      goto L_0880D794;
    }
L_0880D794:
    aot_gpr_31 = (0x0880D79Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D79Cu) goto L_0880D79C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D79C:
    aot_gpr_31 = (0x0880D7A4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 633u, 0x089C6D88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D7A4u) goto L_0880D7A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D7A4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0880D7D8;
      }
      goto L_0880D7AC;
    }
L_0880D7AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_0880D7C4;
    }
    goto L_0880D7B8;
L_0880D7B8:
    aot_gpr_31 = (0x0880D7C0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D7C0u) goto L_0880D7C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D7C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0880D7C4;
L_0880D7C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11240)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0880D7D8;
      }
      goto L_0880D7D0;
    }
L_0880D7D0:
    aot_gpr_31 = (0x0880D7D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0004_entry, 4u, 532u, 0x08816C18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D7D8u) goto L_0880D7D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D7D8:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D7F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_5 & 65535u);
    aot_gpr_5 = (16576u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = aot_fpr_12 + aot_fpr_15;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    ctx.fpr[17] = aot_fpr_13 - aot_fpr_15;
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[6] = (2233u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    aot_gpr_4 = (aot_gpr_17 << 2u);
    aot_gpr_5 = (ctx.gpr[6] + static_cast<std::uint32_t>(-22952));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_fpr_15 = aot_fpr_13 + aot_fpr_15;
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[21] = (ctx.gpr[9] & 255u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_31);
    aot_gpr_31 = (0x0880D870u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D870u) goto L_0880D870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D870:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0880D88Cu);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D88Cu) goto L_0880D88C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D88C:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0880D89Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 72u, 0x08AF4650u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880D89Cu) goto L_0880D89C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D89C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880D8FC;
      }
      goto L_0880D8A8;
    }
L_0880D8A8:
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (0u | 0u);
    goto L_0880D8B0;
L_0880D8B0:
    ctx.gpr[6] = (aot_gpr_4 << 3u);
    ctx.gpr[6] = (aot_gpr_16 + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr_17 != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0880D8C8;
      }
      goto L_0880D8C4;
    }
L_0880D8C4:
    aot_gpr_5 = (0u | 1u);
    goto L_0880D8C8;
L_0880D8C8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_4) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D8B0;
      }
      goto L_0880D8DC;
    }
L_0880D8DC:
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880D8FC;
      }
      goto L_0880D8E4;
    }
L_0880D8E4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr_17));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(612), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_0880D8FC;
L_0880D8FC:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880D928:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, aot_gpr_17, ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_31);
    aot_gpr_4 = (32639u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 65535u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0880D964;
L_0880D964:
    aot_gpr_4 = (aot_gpr_17 << 5u);
    aot_gpr_5 = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[19] << 3u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4224));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_0880D9C0;
      }
      goto L_0880D9A4;
    }
L_0880D9A4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_0880D9C4;
      }
      goto L_0880D9BC;
    }
L_0880D9BC:
    aot_gpr_4 = (0u | 1u);
    goto L_0880D9C0;
L_0880D9C0:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_0880D9C4;
L_0880D9C4:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 101 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880DA48;
      }
      goto L_0880D9CC;
    }
L_0880D9CC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_17 << 5u);
      if (branch_taken) {
          goto L_0880DA48;
      }
      goto L_0880D9D4;
    }
L_0880D9D4:
    aot_gpr_5 = (0u + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[19] << 3u);
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4224));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0880DA0Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0880EDB0;
L_0880DA0C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0880DA1Cu);
    ctx.gpr[6] = (aot_gpr_29 | 0u);
    goto L_0880EB64;
L_0880DA1C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_16 & 65535u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    aot_gpr_31 = (0x0880DA40u);
    ctx.gpr[9] = (0u | 255u);
    goto L_0880D7F8;
L_0880DA40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880D964;
      }
      goto L_0880DA48;
    }
L_0880DA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DA50;
      }
      goto L_0880DA50;
    }
L_0880DA50:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_0880DA6C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (32639u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 65535u);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (0u + aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_5 = (aot_gpr_5 << 3u);
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4224));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_0880DAB0;
L_0880DAB0:
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_15) || std::isnan(ctx.fpr[16])) && aot_fpr_15 == ctx.fpr[16])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0880DAE0;
      }
      goto L_0880DAC8;
    }
L_0880DAC8:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_14) || std::isnan(ctx.fpr[16])) && aot_fpr_14 == ctx.fpr[16])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0880DAE4;
      }
      goto L_0880DADC;
    }
L_0880DADC:
    aot_gpr_5 = (0u | 1u);
    goto L_0880DAE0;
L_0880DAE0:
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_0880DAE4;
L_0880DAE4:
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DAFC;
      }
      goto L_0880DAF4;
    }
L_0880DAF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880DAB0;
      }
      goto L_0880DAFC;
    }
L_0880DAFC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880DB14:
    ctx.gpr[6] = (32639u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 65535u);
    aot_gpr_5 = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    goto L_0880DB24;
L_0880DB24:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    goto L_0880DB2C;
L_0880DB2C:
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4224), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4228), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880DB2C;
      }
      goto L_0880DB44;
    }
L_0880DB44:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(800));
      if (branch_taken) {
          goto L_0880DB24;
      }
      goto L_0880DB54;
    }
L_0880DB54:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880DB5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u | 2400u);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(4224));
    goto L_0880DB84;
L_0880DB84:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880DB94u);
    ctx.gpr[6] = (0u | 800u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880DB94u) goto L_0880DB94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880DB94:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(800));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(800));
      if (branch_taken) {
          goto L_0880DB84;
      }
      goto L_0880DBA8;
    }
L_0880DBA8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880DBC0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[18] = (aot_gpr_5 | 0u);
    aot_gpr_17 = (0u | 0u);
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(4224));
    goto L_0880DBE0;
L_0880DBE0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0880DBF0u);
    ctx.gpr[6] = (0u | 800u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880DBF0u) goto L_0880DBF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880DBF0:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(800));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(800));
      if (branch_taken) {
          goto L_0880DBE0;
      }
      goto L_0880DC04;
    }
L_0880DC04:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880DC1C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, aot_gpr_17, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0880DC34u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    goto L_0880E450;
L_0880DC34:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_17 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0880DC4C;
      }
      goto L_0880DC44;
    }
L_0880DC44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DCA4;
      }
      goto L_0880DC4C;
    }
L_0880DC4C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880DC5Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_0880F4EC;
L_0880DC5C:
    aot_gpr_4 = (aot_gpr_17 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(656))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(656))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(656))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-225));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(628), 0u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(665), static_cast<std::uint8_t>(0u));
    goto L_0880DCA4;
L_0880DCA4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880DCB8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[6]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_17 = (0u + static_cast<std::uint32_t>(-225));
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    goto L_0880DCF0;
L_0880DCF0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x0880DD00u);
    ctx.gpr[6] = (0u | 0u);
    goto L_0880F4EC;
L_0880DD00:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(628), 0u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_17);
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(665), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < 75 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0880DCF0;
      }
      goto L_0880DD3C;
    }
L_0880DD3C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880DD60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[8]{aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-225));
    ctx.gpr[22] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    goto L_0880DDA8;
L_0880DDA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_17;
    // nop
      if (branch_taken) {
          goto L_0880DDFC;
      }
      goto L_0880DDB4;
    }
L_0880DDB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(632)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_16;
    // nop
      if (branch_taken) {
          goto L_0880DDFC;
      }
      goto L_0880DDC0;
    }
L_0880DDC0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0880DDD0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_0880F4EC;
L_0880DDD0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(656))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[21]);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(656))))));
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[20]);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(656))))));
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(628), 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[19]);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(665), static_cast<std::uint8_t>(0u));
    goto L_0880DDFC;
L_0880DDFC:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[23] < static_cast<std::uint32_t>(75) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0880DDA8;
      }
      goto L_0880DE0C;
    }
L_0880DE0C:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_0880DE38:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    goto L_0880DE50;
L_0880DE50:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[6] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[9] = (ctx.gpr[9] & 4u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DE78;
      }
      goto L_0880DE60;
    }
L_0880DE60:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DE78;
      }
      goto L_0880DE68;
    }
L_0880DE68:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (ctx.gpr[7] < static_cast<std::uint32_t>(75) ? 1u : 0u);
      if (branch_taken) {
          goto L_0880DE50;
      }
      goto L_0880DE78;
    }
L_0880DE78:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DF20;
      }
      goto L_0880DE80;
    }
L_0880DE80:
    aot_gpr_5 = (0u | 4u);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(628), aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(624), 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[6] + static_cast<std::uint32_t>(656))))));
    aot_gpr_5 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[6] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[6] + static_cast<std::uint32_t>(656))))));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store8(ctx.gpr[6] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[6] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[9]);
    aot_mem.aot_direct_store8(ctx.gpr[6] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[6] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[9]);
    aot_mem.aot_direct_store8(ctx.gpr[6] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[6] + static_cast<std::uint32_t>(656))))));
    aot_gpr_5 = (aot_gpr_5 | 16u);
    aot_mem.aot_direct_store8(ctx.gpr[6] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[6] + static_cast<std::uint32_t>(640));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(ctx.gpr[6] + static_cast<std::uint32_t>(632), 0u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[6] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[6] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-225));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[8]);
    aot_gpr_5 = (aot_gpr_5 | 64u);
    aot_mem.aot_direct_store8(ctx.gpr[6] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u | 16u);
    aot_mem.aot_direct_store8(ctx.gpr[6] + static_cast<std::uint32_t>(665), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_31 = (0x0880DF18u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    goto L_0880F004;
L_0880DF18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DF24;
      }
      goto L_0880DF20;
    }
L_0880DF20:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0880DF24;
L_0880DF24:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880DF30:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    ctx.gpr[12] = (ctx.gpr[8] | 0u);
    ctx.gpr[13] = (ctx.gpr[7] | 0u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (ctx.gpr[11] & 4u);
    aot_gpr_5 = (ctx.gpr[13] | 0u);
    aot_gpr_4 = (ctx.gpr[12] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    goto L_0880DF64;
L_0880DF64:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DF8C;
      }
      goto L_0880DF6C;
    }
L_0880DF6C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880DF8C;
      }
      goto L_0880DF74;
    }
L_0880DF74:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[3] < static_cast<std::uint32_t>(75) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[11] & 4u);
      if (branch_taken) {
          goto L_0880DF64;
      }
      goto L_0880DF8C;
    }
L_0880DF8C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[11] | 2u);
      if (branch_taken) {
          goto L_0880E02C;
      }
      goto L_0880DF94;
    }
L_0880DF94:
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[9] = (ctx.gpr[9] | 4u);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(656))))));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(628), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[9] & ctx.gpr[10]);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(624), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[7] & ctx.gpr[9]);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(656))))));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(632), ctx.gpr[6]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-225));
    aot_gpr_4 = (aot_gpr_4 & 7u);
    ctx.gpr[6] = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(665), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_31 = (0x0880E024u);
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    goto L_0880F004;
L_0880E024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E030;
      }
      goto L_0880E02C;
    }
L_0880E02C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0880E030;
L_0880E030:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E03C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (ctx.gpr[7] | 0u);
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[2] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (aot_gpr_4 | 0u);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    goto L_0880E06C;
L_0880E06C:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[2] = (ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E094;
      }
      goto L_0880E07C;
    }
L_0880E07C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E094;
      }
      goto L_0880E084;
    }
L_0880E084:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[10] < static_cast<std::uint32_t>(75) ? 1u : 0u);
      if (branch_taken) {
          goto L_0880E06C;
      }
      goto L_0880E094;
    }
L_0880E094:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E148;
      }
      goto L_0880E09C;
    }
L_0880E09C:
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(628), ctx.gpr[6]);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(624), aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(656))))));
    aot_gpr_5 = (aot_gpr_5 | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(656))))));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (ctx.gpr[9] + static_cast<std::uint32_t>(640));
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(ctx.gpr[9] + static_cast<std::uint32_t>(632), 0u);
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[9] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-225));
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[9] + static_cast<std::uint32_t>(665), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    aot_gpr_31 = (0x0880E140u);
    aot_gpr_5 = (ctx.gpr[10] | 0u);
    goto L_0880F004;
L_0880E140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E14C;
      }
      goto L_0880E148;
    }
L_0880E148:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0880E14C;
L_0880E14C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E158:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, aot_gpr_17, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0880E180u);
    // nop
    goto L_0880E03C;
L_0880E180:
    aot_gpr_17 = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_17 != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0880E198;
      }
      goto L_0880E190;
    }
L_0880E190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E1C4;
      }
      goto L_0880E198;
    }
L_0880E198:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0880E1A4u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0880E450;
L_0880E1A4:
    aot_gpr_4 = (ctx.gpr[2] << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(656))))));
    ctx.gpr[2] = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_5 | 8u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_0880E1C4;
L_0880E1C4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E1D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0880E1F4u);
    aot_gpr_17 = (ctx.gpr[6] & 255u);
    goto L_0880E450;
L_0880E1F4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_0880E22C;
      }
      goto L_0880E204;
    }
L_0880E204:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(656))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[7] = (aot_gpr_17 & 1u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 3u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[6]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_0880E22C;
L_0880E22C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E240:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0880E25Cu);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    goto L_0880E450;
L_0880E25C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0880E274;
      }
      goto L_0880E26C;
    }
L_0880E26C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E288;
      }
      goto L_0880E274;
    }
L_0880E274:
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(665), static_cast<std::uint8_t>(aot_gpr_16));
    goto L_0880E288;
L_0880E288:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E29C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0880E2B8u);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    goto L_0880E450;
L_0880E2B8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0880E2D0;
      }
      goto L_0880E2C8;
    }
L_0880E2C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E2E4;
      }
      goto L_0880E2D0;
    }
L_0880E2D0:
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(624), aot_gpr_16);
    goto L_0880E2E4;
L_0880E2E4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E2F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0880E314u);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    goto L_0880E450;
L_0880E314:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0880E350;
      }
      goto L_0880E324;
    }
L_0880E324:
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[6];
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(656))))));
      if (branch_taken) {
          goto L_0880E358;
      }
      goto L_0880E340;
    }
L_0880E340:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_5 = (aot_gpr_17 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_0880E360;
      }
      goto L_0880E350;
    }
L_0880E350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E360;
      }
      goto L_0880E358;
    }
L_0880E358:
    aot_gpr_5 = (aot_gpr_17 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_0880E360;
L_0880E360:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E374:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0880E390u);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    goto L_0880E450;
L_0880E390:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0880E3A0;
      }
      goto L_0880E39C;
    }
L_0880E39C:
    aot_gpr_16 = (0u | 1u);
    goto L_0880E3A0;
L_0880E3A0:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0880E3B4;
      }
      goto L_0880E3AC;
    }
L_0880E3AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E3C8;
      }
      goto L_0880E3B4;
    }
L_0880E3B4:
    aot_gpr_4 = (aot_gpr_4 << 4u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(aot_gpr_16));
    goto L_0880E3C8;
L_0880E3C8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E3DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x0880E3F8u);
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    goto L_0880E450;
L_0880E3F8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_0880E410;
      }
      goto L_0880E408;
    }
L_0880E408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E43C;
      }
      goto L_0880E410;
    }
L_0880E410:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_17 + aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(656))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-225));
    ctx.gpr[7] = (aot_gpr_16 & 255u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] & 7u);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[6]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_0880E43C;
L_0880E43C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E450:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0880E490;
      }
      goto L_0880E45C;
    }
L_0880E45C:
    ctx.gpr[2] = (aot_gpr_5 & 65535u);
    ctx.gpr[7] = (ctx.gpr[2] << 4u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[8] = (65535u << 16u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[8]);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(666)));
    aot_gpr_5 = (aot_gpr_5 >> 16u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0880E498;
      }
      goto L_0880E488;
    }
L_0880E488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E49C;
      }
      goto L_0880E490;
    }
L_0880E490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0880E49C;
      }
      goto L_0880E498;
    }
L_0880E498:
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    goto L_0880E49C;
L_0880E49C:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E4A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_31 = (0x0880E4C8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880E4C8u) goto L_0880E4C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E4C8:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E4E4;
      }
      goto L_0880E4D4;
    }
L_0880E4D4:
    { const bool branch_taken = aot_gpr_16 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880E4EC;
      }
      goto L_0880E4DC;
    }
L_0880E4DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E5A0;
      }
      goto L_0880E4E4;
    }
L_0880E4E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880E5A4;
      }
      goto L_0880E4EC;
    }
L_0880E4EC:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_17 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E5A0;
      }
      goto L_0880E4F8;
    }
L_0880E4F8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0880E504u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    goto L_0880EA04;
L_0880E504:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880E574;
      }
      goto L_0880E50C;
    }
L_0880E50C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(6896)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (0u | 12u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_31 = (0x0880E528u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880E528u) goto L_0880E528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E528:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0880E54C;
      }
      goto L_0880E538;
    }
L_0880E538:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_31 = (0x0880E544u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880E544u) goto L_0880E544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E544:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    goto L_0880E54C;
L_0880E54C:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (aot_gpr_5 != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_17);
        goto L_0880E558;
    }
    goto L_0880E558;
L_0880E558:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    goto L_0880E574;
L_0880E574:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(340)));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E598;
      }
      goto L_0880E58C;
    }
L_0880E58C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(340)));
    aot_gpr_4 = (aot_gpr_4 | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0880E598;
L_0880E598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0880E5A4;
      }
      goto L_0880E5A0;
    }
L_0880E5A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0880E5A4;
L_0880E5A4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E5BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_gpr_31 = (0x0880E5F4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880E5F4u) goto L_0880E5F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E5F4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(6896)));
        goto L_0880E618;
    }
    goto L_0880E600;
L_0880E600:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(340)));
    aot_gpr_5 = (ctx.gpr[6] & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(6896)));
    goto L_0880E618;
L_0880E618:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[19] ^ aot_gpr_4);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0880E720;
      }
      goto L_0880E644;
    }
L_0880E644:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(352)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(3))))));
    if (aot_gpr_17 != ctx.gpr[6]) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
        goto L_0880E704;
    }
    goto L_0880E668;
L_0880E668:
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[18] != aot_gpr_5) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
        goto L_0880E704;
    }
    goto L_0880E674;
L_0880E674:
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (ctx.gpr[21] ^ aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
      if (branch_taken) {
          goto L_0880E700;
      }
      goto L_0880E694;
    }
L_0880E694:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
        goto L_0880E6DC;
    }
    goto L_0880E6B0;
L_0880E6B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), aot_gpr_5);
      if (branch_taken) {
          goto L_0880E6D4;
      }
      goto L_0880E6CC;
    }
L_0880E6CC:
    aot_gpr_31 = (0x0880E6D4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880E6D4u) goto L_0880E6D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E6D4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    goto L_0880E6DC;
L_0880E6DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (ctx.gpr[21] ^ aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880E694;
      }
      goto L_0880E6FC;
    }
L_0880E6FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(6896)));
    goto L_0880E700;
L_0880E700:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    goto L_0880E704;
L_0880E704:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[19] ^ aot_gpr_4);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_0880E644;
      }
      goto L_0880E720;
    }
L_0880E720:
    ctx.gpr[2] = (0u | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
L_0880E748:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0880E9C4;
      }
      goto L_0880E790;
    }
L_0880E790:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(6896)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880E7E4;
      }
      goto L_0880E7AC;
    }
L_0880E7AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(6896)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (15948u << 16u);
      if (branch_taken) {
          goto L_0880E7EC;
      }
      goto L_0880E7DC;
    }
L_0880E7DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E9C4;
      }
      goto L_0880E7E4;
    }
L_0880E7E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E9C4;
      }
      goto L_0880E7EC;
    }
L_0880E7EC:
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (2237u << 16u);
    aot_gpr_4 = (16416u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (16384u << 16u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (0u | 5u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-28736));
    goto L_0880E81C;
L_0880E81C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.gpr[6] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[22];
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-31804)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E8C4;
      }
      goto L_0880E894;
    }
L_0880E894:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[30] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x0880E8ACu);
    ctx.gpr[23] = (ctx.gpr[20] + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880E8ACu) goto L_0880E8AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E8AC:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    jump_target = ctx.gpr[6];
    aot_gpr_31 = (0x0880E8BCu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880E8BCu) goto L_0880E8BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E8BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_0880E8CC;
      }
      goto L_0880E8C4;
    }
L_0880E8C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0880E8CC;
      }
      goto L_0880E8CC;
    }
L_0880E8CC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E93C;
      }
      goto L_0880E8D4;
    }
L_0880E8D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_0880E900;
    }
    goto L_0880E8E0;
L_0880E8E0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0880E8F0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880E8F0u) goto L_0880E8F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E8F0:
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_0880E900;
L_0880E900:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(204))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E93C;
      }
      goto L_0880E918;
    }
L_0880E918:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880E93C;
      }
      goto L_0880E938;
    }
L_0880E938:
    ctx.gpr[19] = (0u | 0u);
    goto L_0880E93C;
L_0880E93C:
    if (ctx.gpr[19] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
        goto L_0880E998;
    }
    goto L_0880E944;
L_0880E944:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    aot_gpr_4 = (0u | 2u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (0u | 1u);
        goto L_0880E954;
    }
    goto L_0880E954;
L_0880E954:
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(49)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[9] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(50)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(6848)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[11] = (0u | 1024u);
    aot_gpr_31 = (0x0880E994u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880E994u) goto L_0880E994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880E994:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_0880E998;
L_0880E998:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(6896)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880E81C;
      }
      goto L_0880E9C4;
    }
L_0880E9C4:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      aot_gpr_17 = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      ctx.gpr[30] = aot_run_words[12];
      aot_gpr_31 = aot_run_words[13];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EA04:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6896)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_gpr_4 ^ ctx.gpr[6]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0880EA68;
      }
      goto L_0880EA34;
    }
L_0880EA34:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0880EA70;
      }
      goto L_0880EA40;
    }
L_0880EA40:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_gpr_4 ^ ctx.gpr[6]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880EA34;
      }
      goto L_0880EA68;
    }
L_0880EA68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880EA74;
      }
      goto L_0880EA70;
    }
L_0880EA70:
    ctx.gpr[2] = (0u | 1u);
    goto L_0880EA74;
L_0880EA74:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EA7C:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EA84:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), aot_gpr_16};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_gpr_16 = (aot_gpr_17 + static_cast<std::uint32_t>(640));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_31);
    goto L_0880EABC;
L_0880EABC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EB24;
      }
      goto L_0880EAC8;
    }
L_0880EAC8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[24])) && ctx.fpr[20] == ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0880EB18;
      }
      goto L_0880EAD8;
    }
L_0880EAD8:
    aot_gpr_31 = (0x0880EAE0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 58u, 0x089604E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880EAE0u) goto L_0880EAE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EAE0:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0880EB18;
      }
      goto L_0880EB10;
    }
L_0880EB10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880EB24;
      }
      goto L_0880EB18;
    }
L_0880EB18:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(656))))));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(656), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0880EB24;
L_0880EB24:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 75 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0880EABC;
      }
      goto L_0880EB38;
    }
L_0880EB38:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      aot_gpr_17 = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EB5C:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6844), std::bit_cast<std::uint32_t>(aot_fpr_12));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EB64:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6851)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_16 = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0880EC14;
      }
      goto L_0880EB8C;
    }
L_0880EB8C:
    aot_gpr_5 = (17264u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6852)));
    aot_gpr_5 = (16143u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 23593u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6860)));
    aot_gpr_5 = (48857u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_5 = (aot_gpr_5 | 59789u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_gpr_5 = (48622u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52219u);
    ctx.gpr[6] = (17124u << 16u);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6856)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6860)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_14 = ctx.fpr[16] - ctx.fpr[17];
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const float fs = aot_fpr_15; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0880ED08;
      }
      goto L_0880EC14;
    }
L_0880EC14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_gpr_5 = (16128u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_0880EC30;
      }
      goto L_0880EC24;
    }
L_0880EC24:
    aot_gpr_31 = (0x0880EC2Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880EC2Cu) goto L_0880EC2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EC2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0880EC30;
L_0880EC30:
    aot_gpr_31 = (0x0880EC38u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 558u, 0x089BAA88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880EC38u) goto L_0880EC38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EC38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0880EC50;
      }
      goto L_0880EC44;
    }
L_0880EC44:
    aot_gpr_31 = (0x0880EC4Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880EC4Cu) goto L_0880EC4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EC4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0880EC50;
L_0880EC50:
    aot_gpr_31 = (0x0880EC58u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 565u, 0x089BAAD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880EC58u) goto L_0880EC58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EC58:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
      if (branch_taken) {
          goto L_0880EC74;
      }
      goto L_0880EC68;
    }
L_0880EC68:
    aot_gpr_31 = (0x0880EC70u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880EC70u) goto L_0880EC70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EC70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0880EC74;
L_0880EC74:
    aot_gpr_31 = (0x0880EC7Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 565u, 0x089BAAD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880EC7Cu) goto L_0880EC7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EC7C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880ECA8;
      }
      goto L_0880EC9C;
    }
L_0880EC9C:
    aot_gpr_31 = (0x0880ECA4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880ECA4u) goto L_0880ECA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880ECA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0880ECA8;
L_0880ECA8:
    aot_gpr_31 = (0x0880ECB0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 561u, 0x089BAAA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880ECB0u) goto L_0880ECB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880ECB0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0880ECC8;
      }
      goto L_0880ECBC;
    }
L_0880ECBC:
    aot_gpr_31 = (0x0880ECC4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880ECC4u) goto L_0880ECC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880ECC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0880ECC8;
L_0880ECC8:
    aot_gpr_31 = (0x0880ECD0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 569u, 0x089BAAFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880ECD0u) goto L_0880ECD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880ECD0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
      if (branch_taken) {
          goto L_0880ECEC;
      }
      goto L_0880ECE0;
    }
L_0880ECE0:
    aot_gpr_31 = (0x0880ECE8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880ECE8u) goto L_0880ECE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880ECE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0880ECEC;
L_0880ECEC:
    aot_gpr_31 = (0x0880ECF4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 569u, 0x089BAAFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880ECF4u) goto L_0880ECF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880ECF4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0880ED08;
L_0880ED08:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      aot_gpr_17 = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880ED24:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6852)));
    ctx.gpr[7] = (17264u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.gpr[7] = (16143u << 16u);
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6860)));
    ctx.gpr[7] = (ctx.gpr[7] | 23593u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_fpr_12 = aot_fpr_12 / aot_fpr_15;
    ctx.gpr[7] = (48857u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 59789u);
    ctx.gpr[8] = (17124u << 16u);
    ctx.gpr[9] = (48622u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52219u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6856)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6860)));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_15) ^ 0x80000000u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = aot_fpr_12 + aot_fpr_15;
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[16];
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[9]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EDB0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5956)));
    { const float fs = aot_fpr_15; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    ctx.gpr[6] = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5960)));
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[17]) || std::isnan(aot_fpr_14)) && ctx.fpr[17] == aot_fpr_14)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_15));
      if (branch_taken) {
          goto L_0880EDFC;
      }
      goto L_0880EDE8;
    }
L_0880EDE8:
    ctx.fpr[16] = ctx.fpr[16] - aot_fpr_13;
    aot_fpr_15 = aot_fpr_15 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_15));
      if (branch_taken) {
          goto L_0880EE24;
      }
      goto L_0880EDFC;
    }
L_0880EDFC:
    ctx.gpr[6] = (49088u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49312u << 16u);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[18];
    ctx.fpr[16] = ctx.fpr[16] - aot_fpr_13;
    aot_fpr_15 = aot_fpr_15 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_15));
    goto L_0880EE24;
L_0880EE24:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6840)));
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5964)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5968)));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = ctx.fpr[18] + ctx.fpr[19];
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EE6C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5964)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5968)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_15 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_15 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_15 = aot_fpr_15 - ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_15));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16256u << 16u);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(6840)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[16])) && aot_fpr_12 == ctx.fpr[16])) ? 0x00800000u : 0u);
    { const float fs = aot_fpr_15; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5956)));
      if (branch_taken) {
          goto L_0880EEF4;
      }
      goto L_0880EEDC;
    }
L_0880EEDC:
    aot_fpr_15 = aot_fpr_15 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5960)));
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[16];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_0880EF20;
      }
      goto L_0880EEF4;
    }
L_0880EEF4:
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    aot_gpr_4 = (49312u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = aot_fpr_13 + aot_fpr_15;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_15));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5960)));
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[17];
    aot_fpr_14 = ctx.fpr[17] + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_0880EF20;
L_0880EF20:
    aot_fpr_13 = aot_fpr_15 / aot_fpr_12;
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EF34:
    aot_gpr_4 = (ctx.gpr[7] + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    ctx.gpr[9] = (ctx.gpr[7] << 9u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[9] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (0u | 8u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[8]);
    ctx.gpr[7] = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_4 << 9u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[8] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2000));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (15107u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_15;
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17150u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16128u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15360u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_15;
    aot_fpr_13 = aot_fpr_13 + aot_fpr_15;
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880EFFC:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(6900), aot_gpr_5);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F004:
    ctx.gpr[6] = (aot_gpr_5 << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[6] + static_cast<std::uint32_t>(666)));
    ctx.gpr[7] = (0u | 65534u);
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F040;
      }
      goto L_0880F028;
    }
L_0880F028:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(ctx.gpr[6] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[6] + static_cast<std::uint32_t>(666)));
    ctx.gpr[2] = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_5 | ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880F054;
      }
      goto L_0880F040;
    }
L_0880F040:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[6] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[6] + static_cast<std::uint32_t>(666)));
    ctx.gpr[2] = (aot_gpr_4 << 16u);
    ctx.gpr[2] = (aot_gpr_5 | ctx.gpr[2]);
    goto L_0880F054;
L_0880F054:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F05C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6851)));
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
        goto L_0880F088;
    }
    goto L_0880F068;
L_0880F068:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[0] = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F0DC;
      }
      goto L_0880F088;
    }
L_0880F088:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[0] = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16256u << 16u);
      if (branch_taken) {
          goto L_0880F0D4;
      }
      goto L_0880F0B4;
    }
L_0880F0B4:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[0];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0880F0D4;
L_0880F0D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F0DC;
      }
      goto L_0880F0DC;
    }
L_0880F0DC:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F0E4:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F130;
      }
      goto L_0880F0F0;
    }
L_0880F0F0:
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0880F128;
      }
      goto L_0880F108;
    }
L_0880F108:
    aot_gpr_5 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (16256u << 16u);
      if (branch_taken) {
          goto L_0880F138;
      }
      goto L_0880F120;
    }
L_0880F120:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 128u);
      if (branch_taken) {
          goto L_0880F1B4;
      }
      goto L_0880F128;
    }
L_0880F128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 255u);
      if (branch_taken) {
          goto L_0880F1B4;
      }
      goto L_0880F130;
    }
L_0880F130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 255u);
      if (branch_taken) {
          goto L_0880F1B4;
      }
      goto L_0880F138;
    }
L_0880F138:
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16656u << 16u);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6848)));
    aot_gpr_5 = (17279u << 16u);
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    aot_fpr_14 = aot_fpr_14 / aot_fpr_15;
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_15 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_15)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0880F1B4;
      }
      goto L_0880F1B4;
    }
L_0880F1B4:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F1BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6851)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), aot_gpr_16, aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0880F1FC;
      }
      goto L_0880F1D8;
    }
L_0880F1D8:
    aot_gpr_16 = (2236u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x0880F1E8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 56u, 0x08A1C658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880F1E8u) goto L_0880F1E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F1E8:
    aot_gpr_4 = (0u | 3u);
    if (ctx.gpr[2] != aot_gpr_4) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
        goto L_0880F210;
    }
    goto L_0880F1F4;
L_0880F1F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F320;
      }
      goto L_0880F1FC;
    }
L_0880F1FC:
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5964), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5968), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0880F3A0;
      }
      goto L_0880F210;
    }
L_0880F210:
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0880F294;
      }
      goto L_0880F23C;
    }
L_0880F23C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(224)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
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
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F2E0;
      }
      goto L_0880F294;
    }
L_0880F294:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_16);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (aot_gpr_16 + static_cast<std::uint32_t>(192));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_0880F2E0;
L_0880F2E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0880F308;
      }
      goto L_0880F2F8;
    }
L_0880F2F8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(ctx.fpr[20])) && aot_fpr_13 == ctx.fpr[20])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0880F318;
      }
      goto L_0880F308;
    }
L_0880F308:
    aot_gpr_31 = (0x0880F310u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880F310u) goto L_0880F310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F310:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0880F318;
      }
      goto L_0880F318;
    }
L_0880F318:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5972), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0880F35C;
      }
      goto L_0880F320;
    }
L_0880F320:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[20])) && aot_fpr_12 == ctx.fpr[20])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0880F348;
      }
      goto L_0880F338;
    }
L_0880F338:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(ctx.fpr[20])) && aot_fpr_13 == ctx.fpr[20])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0880F358;
      }
      goto L_0880F348;
    }
L_0880F348:
    aot_gpr_31 = (0x0880F350u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880F350u) goto L_0880F350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F350:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0880F358;
      }
      goto L_0880F358;
    }
L_0880F358:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5972), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0880F35C;
L_0880F35C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5972)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5964), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5968), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_0880F3A0;
L_0880F3A0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F3B4:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_gpr_4 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0880F4E0;
      }
      goto L_0880F3C4;
    }
L_0880F3C4:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(17632)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F3DC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F3F0;
      }
      goto L_0880F3E4;
    }
L_0880F3E4:
    ctx.gpr[2] = (65352u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(19967));
      if (branch_taken) {
          goto L_0880F3F8;
      }
      goto L_0880F3F0;
    }
L_0880F3F0:
    ctx.gpr[2] = (32512u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(255));
    goto L_0880F3F8;
L_0880F3F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F4E4;
      }
      goto L_0880F400;
    }
L_0880F400:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F414;
      }
      goto L_0880F408;
    }
L_0880F408:
    ctx.gpr[2] = (24480u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(27391));
      if (branch_taken) {
          goto L_0880F41C;
      }
      goto L_0880F414;
    }
L_0880F414:
    ctx.gpr[2] = (127u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(255));
    goto L_0880F41C;
L_0880F41C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F4E4;
      }
      goto L_0880F424;
    }
L_0880F424:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F438;
      }
      goto L_0880F42C;
    }
L_0880F42C:
    ctx.gpr[2] = (18510u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880F43C;
      }
      goto L_0880F438;
    }
L_0880F438:
    ctx.gpr[2] = (0u | 32767u);
    goto L_0880F43C;
L_0880F43C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F4E4;
      }
      goto L_0880F444;
    }
L_0880F444:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F458;
      }
      goto L_0880F44C;
    }
L_0880F44C:
    ctx.gpr[2] = (57826u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7681));
      if (branch_taken) {
          goto L_0880F460;
      }
      goto L_0880F458;
    }
L_0880F458:
    ctx.gpr[2] = (32639u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(32767));
    goto L_0880F460;
L_0880F460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F4E4;
      }
      goto L_0880F468;
    }
L_0880F468:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F47C;
      }
      goto L_0880F470;
    }
L_0880F470:
    ctx.gpr[2] = (65535u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_0880F484;
      }
      goto L_0880F47C;
    }
L_0880F47C:
    ctx.gpr[2] = (32639u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(255));
    goto L_0880F484;
L_0880F484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F4E4;
      }
      goto L_0880F48C;
    }
L_0880F48C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F4A0;
      }
      goto L_0880F494;
    }
L_0880F494:
    ctx.gpr[2] = (60803u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-19201));
      if (branch_taken) {
          goto L_0880F4A8;
      }
      goto L_0880F4A0;
    }
L_0880F4A0:
    ctx.gpr[2] = (28176u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(15615));
    goto L_0880F4A8;
L_0880F4A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F4E4;
      }
      goto L_0880F4B0;
    }
L_0880F4B0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F4C4;
      }
      goto L_0880F4B8;
    }
L_0880F4B8:
    ctx.gpr[2] = (7936u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880F4CC;
      }
      goto L_0880F4C4;
    }
L_0880F4C4:
    ctx.gpr[2] = (88u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(22783));
    goto L_0880F4CC;
L_0880F4CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F4E4;
      }
      goto L_0880F4D4;
    }
L_0880F4D4:
    ctx.gpr[2] = (28176u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(15615));
      if (branch_taken) {
          goto L_0880F4E4;
      }
      goto L_0880F4E0;
    }
L_0880F4E0:
    ctx.gpr[2] = (aot_gpr_5 | 0u);
    goto L_0880F4E4;
L_0880F4E4:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F4EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_5 << 4u);
    ctx.gpr[7] = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(628)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 2 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880F52C;
      }
      goto L_0880F51C;
    }
L_0880F51C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    // nop
      if (branch_taken) {
          goto L_0880F5FC;
      }
      goto L_0880F524;
    }
L_0880F524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F544;
      }
      goto L_0880F52C;
    }
L_0880F52C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880F584;
      }
      goto L_0880F534;
    }
L_0880F534:
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F5C4;
      }
      goto L_0880F53C;
    }
L_0880F53C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F5FC;
      }
      goto L_0880F544;
    }
L_0880F544:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(632)));
    aot_gpr_31 = (0x0880F550u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880F550u) goto L_0880F550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F550:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F57C;
      }
      goto L_0880F55C;
    }
L_0880F55C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (65472u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_16 & 1u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 22u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    goto L_0880F57C;
L_0880F57C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F5FC;
      }
      goto L_0880F584;
    }
L_0880F584:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(632)));
    aot_gpr_31 = (0x0880F590u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880F590u) goto L_0880F590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F590:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F5BC;
      }
      goto L_0880F59C;
    }
L_0880F59C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (65472u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_16 & 1u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 22u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    goto L_0880F5BC;
L_0880F5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F5FC;
      }
      goto L_0880F5C4;
    }
L_0880F5C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(632)));
    aot_gpr_31 = (0x0880F5D0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880F5D0u) goto L_0880F5D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F5D0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F5FC;
      }
      goto L_0880F5DC;
    }
L_0880F5DC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (65472u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_gpr_16 & 1u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 22u);
    aot_gpr_5 = (aot_gpr_5 | ctx.gpr[6]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    goto L_0880F5FC;
L_0880F5FC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F60C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    aot_gpr_5 = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (16329u << 16u);
    ctx.gpr[6] = (aot_gpr_4 & 255u);
    ctx.gpr[8] = (ctx.gpr[8] | 4059u);
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    aot_fpr_15 = std::bit_cast<float>(ctx.gpr[8]);
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_31);
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16201u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (ctx.gpr[8] | 4059u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = aot_fpr_14 - ctx.fpr[16];
    ctx.gpr[8] = (16576u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[9] = (0u | 0u);
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (aot_gpr_29 | 0u);
    goto L_0880F688;
L_0880F688:
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    { const float fs = ctx.fpr[19]; const float ft = aot_fpr_15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[16] + ctx.fpr[19];
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[10]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[10]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = aot_fpr_12 + ctx.fpr[0];
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[10]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[10]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[0] - ctx.fpr[19];
    { const float fs = ctx.fpr[19]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = aot_fpr_13 + ctx.fpr[19];
    aot_mem.aot_direct_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880F688;
      }
      goto L_0880F748;
    }
L_0880F748:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x0880F790u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880F790u) goto L_0880F790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F790:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_31 = (0x0880F7BCu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 80u, 0x08AF46FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880F7BCu) goto L_0880F7BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F7BC:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880F7E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-192));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[12]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_run_words); }
    ctx.gpr[23] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_4);
    ctx.gpr[20] = (0u | 4u);
    aot_gpr_16 = (0u | 0u);
    aot_gpr_17 = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[19]);
    goto L_0880F83C;
L_0880F83C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x0880F854u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0880CA68;
L_0880F854:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F860;
      }
      goto L_0880F85C;
    }
L_0880F85C:
    aot_gpr_16 = (0u | 1u);
    goto L_0880F860;
L_0880F860:
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr_17 != ctx.gpr[20];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880F83C;
      }
      goto L_0880F870;
    }
L_0880F870:
    { const bool branch_taken = aot_gpr_16 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F880;
      }
      goto L_0880F878;
    }
L_0880F878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0880FA50;
      }
      goto L_0880F880;
    }
L_0880F880:
    ctx.gpr[22] = (aot_gpr_29 | 0u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[30] = (0u | 4u);
    goto L_0880F890;
L_0880F890:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    ctx.gpr[23] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (ctx.gpr[20] << 3u);
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    aot_gpr_16 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_0880FA00;
      }
      goto L_0880F8B0;
    }
L_0880F8B0:
    aot_gpr_17 = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_gpr_17 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[20];
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0880F8C8;
      }
      goto L_0880F8C0;
    }
L_0880F8C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_0880F8C8;
      }
      goto L_0880F8C8;
    }
L_0880F8C8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x0880F8D4u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    goto L_0880CB6C;
L_0880F8D4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0880F8E4u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    goto L_0880CB6C;
L_0880F8E4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[20] < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (0u | 1u);
        goto L_0880F8FC;
    }
    goto L_0880F8FC;
L_0880F8FC:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    aot_gpr_5 = (0u | 0u);
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_5 = (0u | 1u);
        goto L_0880F910;
    }
    goto L_0880F910;
L_0880F910:
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0880F920;
      }
      goto L_0880F918;
    }
L_0880F918:
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F9F8;
      }
      goto L_0880F920;
    }
L_0880F920:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F984;
      }
      goto L_0880F928;
    }
L_0880F928:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F984;
      }
      goto L_0880F930;
    }
L_0880F930:
    aot_fpr_12 = ctx.fpr[20] - aot_fpr_12;
    aot_fpr_12 = ctx.fpr[20] / aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_13;
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_fpr_15 = aot_fpr_15 - aot_fpr_13;
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0880F9F8;
      }
      goto L_0880F984;
    }
L_0880F984:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880F9D4;
      }
      goto L_0880F98C;
    }
L_0880F98C:
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F9D4;
      }
      goto L_0880F994;
    }
L_0880F994:
    aot_fpr_12 = ctx.fpr[20] - aot_fpr_12;
    aot_fpr_12 = ctx.fpr[20] / aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = aot_fpr_14 - aot_fpr_13;
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    aot_fpr_15 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_fpr_15 = aot_fpr_15 - aot_fpr_13;
    { const float fs = aot_fpr_15; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880F9F8;
      }
      goto L_0880F9D4;
    }
L_0880F9D4:
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0880F9F8;
      }
      goto L_0880F9E0;
    }
L_0880F9E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(4)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0880F9F8;
L_0880F9F8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0880F8B0;
      }
      goto L_0880FA00;
    }
L_0880FA00:
    aot_gpr_4 = (aot_gpr_16 - ctx.gpr[23]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 3u));
    aot_gpr_5 = (aot_gpr_5 >> 29u);
    ctx.gpr[20] = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 3u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0880FA28;
      }
      goto L_0880FA20;
    }
L_0880FA20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880FA50;
      }
      goto L_0880FA28;
    }
L_0880FA28:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0880F890;
      }
      goto L_0880FA34;
    }
L_0880FA34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[23] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0880FA4C;
      }
      goto L_0880FA40;
    }
L_0880FA40:
    ctx.gpr[6] = (ctx.gpr[20] << 3u);
    aot_gpr_31 = (0x0880FA4Cu);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FA4Cu) goto L_0880FA4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FA4C:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_0880FA50;
L_0880FA50:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      aot_gpr_17 = aot_run_words[3];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FA88:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    ctx.gpr[21] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (49024u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[7]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_4 = (0u | 1u);
    { const std::uint32_t aot_run_words[9]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, aot_gpr_17, ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(148), aot_run_words); }
    aot_gpr_31 = (0x0880FB04u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FB04u) goto L_0880FB04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FB04:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x0880FB10u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FB10u) goto L_0880FB10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FB10:
    aot_gpr_4 = (0u | 9u);
    aot_gpr_31 = (0x0880FB1Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FB1Cu) goto L_0880FB1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FB1C:
    aot_gpr_4 = (0u | 11u);
    aot_gpr_31 = (0x0880FB28u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FB28u) goto L_0880FB28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FB28:
    aot_gpr_4 = (0u | 7u);
    aot_gpr_31 = (0x0880FB34u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FB34u) goto L_0880FB34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FB34:
    aot_gpr_4 = (0u | 5u);
    aot_gpr_31 = (0x0880FB40u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FB40u) goto L_0880FB40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FB40:
    aot_gpr_4 = (0u | 4u);
    aot_gpr_31 = (0x0880FB4Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FB4Cu) goto L_0880FB4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FB4C:
    aot_gpr_4 = (0u | 6u);
    aot_gpr_31 = (0x0880FB58u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FB58u) goto L_0880FB58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FB58:
    aot_gpr_4 = (0u | 10u);
    aot_gpr_31 = (0x0880FB64u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FB64u) goto L_0880FB64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FB64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15112u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_gpr_4 = (aot_gpr_4 | 34953u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_5 = (15216u << 16u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_gpr_5 = (aot_gpr_5 | 61681u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_5 = (16576u << 16u);
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8272));
    { const float fs = ctx.fpr[20]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (aot_gpr_29 + ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_29 | 0u);
    goto L_0880FBD4;
L_0880FBD4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0880FBF4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_0880EB64;
L_0880FBF4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_16 = (aot_gpr_29 | 0u);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_17 = (0u | 0u);
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(40));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_0880FC18;
L_0880FC18:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_17);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[26];
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0880FC88u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_0880EB64;
L_0880FC88:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(44)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_17) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880FC18;
      }
      goto L_0880FCB4;
    }
L_0880FCB4:
    aot_gpr_4 = (0u | 8u);
    aot_gpr_31 = (0x0880FCC0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 97u, 0x08AF4E54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FCC0u) goto L_0880FCC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FCC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (0u | 5u);
    aot_gpr_31 = (0x0880FCD0u);
    ctx.gpr[6] = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0186_entry, 186u, 486u, 0x08AEE120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FCD0u) goto L_0880FCD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FCD0:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880FBD4;
      }
      goto L_0880FCE4;
    }
L_0880FCE4:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      aot_gpr_17 = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      ctx.gpr[30] = aot_run_words[12];
      aot_gpr_31 = aot_run_words[13];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FD24:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_16);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(6851)));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(ctx.fpr[20]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    { const std::uint32_t aot_run_words[4]{aot_gpr_17, ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
        goto L_0880FD84;
    }
    goto L_0880FD7C;
L_0880FD7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
      if (branch_taken) {
          goto L_0880FD84;
      }
      goto L_0880FD84;
    }
L_0880FD84:
    aot_gpr_4 = (aot_gpr_4 & 511u);
    aot_gpr_4 = (aot_gpr_4 >> 7u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(31));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (2233u << 16u);
      if (branch_taken) {
          goto L_0880FE78;
      }
      goto L_0880FDA0;
    }
L_0880FDA0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-22952));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_17 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_4 = (16640u << 16u);
    aot_fpr_14 = ctx.fpr[20] - ctx.fpr[22];
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    ctx.fpr[26] = aot_fpr_12 - ctx.fpr[24];
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.fpr[28] = aot_fpr_12 + ctx.fpr[24];
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[24];
    aot_gpr_31 = (0x0880FDECu);
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FDECu) goto L_0880FDEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FDEC:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_gpr_31 = (0x0880FE28u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FE28u) goto L_0880FE28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FE28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(0)));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[22];
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0880FE48u);
    aot_fpr_14 = aot_fpr_12 + ctx.fpr[24];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FE48u) goto L_0880FE48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FE48:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_fpr_15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_31 = (0x0880FE78u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FE78u) goto L_0880FE78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FE78:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      ctx.fpr[20] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      aot_gpr_17 = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FEAC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28644));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(612), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x0880FED4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6624));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FED4u) goto L_0880FED4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FED4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FEE0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6628));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FEE0u) goto L_0880FEE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FEE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FEECu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6632));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FEECu) goto L_0880FEEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FEEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FEF8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6636));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FEF8u) goto L_0880FEF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FEF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF04u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6640));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF04u) goto L_0880FF04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF10u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6644));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF10u) goto L_0880FF10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF1Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6648));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF1Cu) goto L_0880FF1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF28u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6652));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF28u) goto L_0880FF28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF34u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6656));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF34u) goto L_0880FF34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF40u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6660));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF40u) goto L_0880FF40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF4Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6664));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF4Cu) goto L_0880FF4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF58u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6668));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF58u) goto L_0880FF58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF64u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6672));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF64u) goto L_0880FF64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF70u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6676));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF70u) goto L_0880FF70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF7Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6680));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF7Cu) goto L_0880FF7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF88u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6684));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF88u) goto L_0880FF88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FF94u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6688));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FF94u) goto L_0880FF94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FF94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FFA0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6692));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FFA0u) goto L_0880FFA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FFA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FFACu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6696));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FFACu) goto L_0880FFAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FFAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FFB8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6700));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FFB8u) goto L_0880FFB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FFB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FFC4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FFC4u) goto L_0880FFC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FFC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FFD0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6708));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FFD0u) goto L_0880FFD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FFD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FFDCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6712));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FFDCu) goto L_0880FFDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FFDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FFE8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6716));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FFE8u) goto L_0880FFE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FFE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x0880FFF4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0880FFF4u) goto L_0880FFF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0880FFF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_31 = (0x08810000u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(6724));
    (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }());
    AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0002(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0002_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_2(Runtime &runtime) {
    runtime.register_generated_unit(2u, 0x0880C000u, 16384u, &recomp_unit_0002, &recomp_unit_0002_entry);
    runtime.register_function(0x0880C000u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C008u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C018u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C020u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C030u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C03Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C048u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C04Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C064u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C080u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C08Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C098u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C0F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C100u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C108u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C110u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C114u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C120u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C12Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C134u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C138u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C148u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C14Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C164u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C18Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C19Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C1F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C204u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C224u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C258u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C264u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C270u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C27Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C28Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C298u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C2F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C304u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C310u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C31Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C324u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C32Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C338u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C344u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C350u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C358u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C360u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C370u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C37Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C388u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C394u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C3F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C404u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C40Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C414u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C428u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C438u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C44Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C454u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C45Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C470u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C47Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C490u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C498u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C4F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C524u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C52Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C53Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C54Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C558u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C560u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C568u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C578u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C580u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C590u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C5FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C60Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C614u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C624u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C630u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C63Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C648u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C650u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C65Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C66Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C670u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C684u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C6F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C700u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C708u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C720u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C73Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C750u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C75Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C768u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C770u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C774u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C784u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C790u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C7FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C810u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C81Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C82Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C850u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C85Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C86Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C874u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C884u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C88Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C89Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C8F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C914u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C920u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C938u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C948u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C958u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C964u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C974u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C97Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C988u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C994u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880C9FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA10u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA3Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CA84u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAA0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAB8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAD8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAE4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CAECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB94u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CB9Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBB4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBD4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CBF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC14u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC74u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC84u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC90u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC98u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CC9Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCD4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CCF8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD10u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CD94u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDA0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDB8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDDCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CDF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE18u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE3Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE60u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE84u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE90u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CE9Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEB4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CECCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CED8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEE4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CEFCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF08u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF14u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF3Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CF70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CFC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880CFDCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D034u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D070u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D0D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D0F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D100u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D108u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D110u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D138u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D160u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D194u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D1B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D1ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D228u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D230u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D290u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D298u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D29Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D2ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D31Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D338u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D358u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D374u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D384u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D390u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D3D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D3DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D3E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D404u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D418u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D428u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D48Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D498u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D4A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D4E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D4F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D50Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D548u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D57Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D584u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D58Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D59Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D5F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D604u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D60Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D614u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D61Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D624u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D654u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D664u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D680u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D6B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D6C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D6C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D6D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D6E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D738u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D740u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D788u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D794u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D79Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D7F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D870u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D88Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D89Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D8FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D928u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D964u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880D9D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA50u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DA6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DAB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DAC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DADCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DAE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DAE4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DAF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DAFCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB14u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB44u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB54u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB84u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DB94u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DBA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DBC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DBE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DBF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC44u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DC5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DCA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DCB8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DCF0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD3Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DD60u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDB4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DDFCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE0Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE38u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE50u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE60u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DE80u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF18u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF74u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF8Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880DF94u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E024u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E02Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E030u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E03Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E06Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E07Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E084u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E094u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E09Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E140u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E148u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E14Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E158u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E180u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E190u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E198u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E1F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E204u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E22Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E240u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E25Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E26Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E274u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E288u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E29Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E2F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E314u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E324u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E340u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E350u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E358u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E360u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E374u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E390u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E39Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E3F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E408u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E410u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E43Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E450u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E45Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E488u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E490u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E498u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E49Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E4A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E4C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E4D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E4DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E4E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E4ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E4F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E504u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E50Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E528u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E538u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E544u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E54Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E558u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E574u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E58Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E598u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5A4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E5F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E600u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E618u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E644u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E668u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E674u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E694u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E6FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E700u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E704u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E720u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E748u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E790u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E7ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E81Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E894u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8ACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E8F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E900u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E918u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E938u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E93Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E944u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E954u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E994u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E998u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880E9C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA74u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EA84u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EABCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAD8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EAE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB10u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB18u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB38u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB5Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EB8Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC14u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC2Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC30u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC38u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC44u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC50u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC68u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC74u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EC9Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECA4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECA8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECBCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECC8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ECF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED08u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880ED24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDB0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EDFCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EE6Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EEDCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EEF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EF34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880EFFCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F004u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F028u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F040u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F054u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F05Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F068u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F088u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F0F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F108u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F120u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F128u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F130u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F138u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1D8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1E8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1F4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F1FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F210u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F23Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F294u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F2E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F2F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F308u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F310u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F318u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F320u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F338u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F348u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F350u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F358u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F35Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3B4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3F0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F3F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F400u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F408u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F414u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F41Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F424u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F42Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F438u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F43Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F444u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F44Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F458u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F460u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F468u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F470u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F47Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F484u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F48Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F494u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4A0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4A8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4B8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4CCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F4ECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F51Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F524u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F52Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F534u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F53Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F544u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F550u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F55Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F57Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F584u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F590u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F59Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5C4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5D0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5DCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F5FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F60Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F688u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F748u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F790u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F7BCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F7E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F83Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F854u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F85Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F860u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F870u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F878u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F880u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F890u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8B0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8C0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8C8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8E4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F8FCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F910u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F918u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F920u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F928u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F930u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F984u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F98Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F994u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F9D4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F9E0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880F9F8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA00u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA20u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA50u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FA88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB10u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FB64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FBD4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FBF4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC18u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FC88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FCB4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FCC0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FCD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FCE4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD24u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FD84u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FDA0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FDECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE48u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FE78u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FEACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FED4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FEE0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FEECu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FEF8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF04u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF10u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF1Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF28u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF34u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF40u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF4Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF58u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF64u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF70u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF7Cu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF88u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FF94u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFA0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFACu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFB8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFC4u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFD0u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFDCu, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFE8u, &recomp_unit_0002, "recomp_unit_0002");
    runtime.register_function(0x0880FFF4u, &recomp_unit_0002, "recomp_unit_0002");
}
} // namespace psprecomp
