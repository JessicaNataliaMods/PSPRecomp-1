#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0192[4093] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 34,
    0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44,
    0, 45, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 57, 58, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 0,
    84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0,
    100, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110,
    0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131,
    132, 0, 133, 0, 134, 0, 135, 136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 161,
    0, 0, 0, 162, 0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0,
    182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 0, 200, 0, 0, 201, 0, 202, 0, 203,
    0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 0,
    222, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 231, 0,
    232, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 240,
    0, 241, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 250, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257, 0,
    0, 258, 0, 0, 259, 0, 260, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 270, 271, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    276, 0, 277, 0, 278, 279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 290, 0, 291, 0, 292,
    0, 293, 0, 294, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 0, 300, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0,
    0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 311, 0, 0, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0, 0,
    0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362,
    0, 363, 364, 0, 0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 376, 0,
    0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 378, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 382, 0, 0, 383, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 386, 0, 387, 0, 388, 0, 0, 389, 0, 390, 0, 0, 391, 0,
    392, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0,
    403, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0,
    412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 421,
    0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0,
    0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439,
    0, 0, 0, 440, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 0,
    0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0,
    0, 457, 0, 458, 0, 0, 459, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 466, 0,
    0, 467, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 485, 486, 0, 0, 0, 0, 0, 0, 487,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0,
    0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0,
    0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 510,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0,
    0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 519,
    0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    526, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 533, 534, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538,
    0, 539, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0,
    0, 546, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 552, 553, 0, 0, 0, 554, 0, 0, 0, 555, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559,
    0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0,
    0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0,
    583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 587, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0,
    0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0,
    0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 602, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0,
    0, 607, 608, 0, 0, 609, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0,
    0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623,
    0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 627, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 630,
    0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 637, 0, 0, 0,
    0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 0, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0,
    646, 0, 0, 647, 0, 0, 648, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 652, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 655, 0,
    656, 0, 657, 0, 0, 0, 0, 658, 659, 0, 660, 0, 661, 0, 0, 662, 0, 0, 0, 663, 0, 664, 0, 665, 0, 0, 0, 666, 0, 0, 667, 0,
    668, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 673, 0, 674, 0, 675, 0, 0, 0, 676, 0,
    0, 0, 677, 0, 678, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 682, 0, 683, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 0, 686, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 690, 0, 691, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0,
    694, 0, 0, 695, 0, 0, 0, 696, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0, 0, 700, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 703,
    0, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 706, 0, 707, 0, 708, 0, 0, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0,
    0, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 715, 0, 0, 0, 716, 0, 717, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0,
    0, 0, 0, 0, 0, 720, 0, 0, 0, 721, 0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 0, 726, 0, 727, 0, 0, 728, 0, 0, 729,
    0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 734, 0, 735, 0, 0, 736, 0,
    0, 0, 0, 0, 0, 737, 0, 738, 0, 739, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 743, 744, 0, 0, 0,
    0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 750, 0, 0, 0, 751, 0,
    752, 0, 0, 0, 753, 0, 0, 754, 0, 755, 0, 756, 0, 0, 0, 757, 0, 758, 0, 0, 0, 759, 0, 0, 0, 760, 0, 761, 0, 0, 762, 0,
    0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0,
    769, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 0, 772, 773, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0, 778, 0, 0, 0, 779, 0, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 0, 784, 0, 0,
    0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 789, 0, 0, 790, 0, 791, 0, 792, 0, 793, 0, 0, 794, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 797, 0, 0, 0, 0, 798, 0, 799, 0, 0, 800, 0, 801, 0, 0,
    0, 0, 802, 0, 0, 0, 0, 803, 0, 0, 804, 0, 0, 0, 805, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0, 0, 808, 0, 0, 0, 809, 0,
    810, 0, 0, 811, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 814, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 817, 818, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 823, 0, 824,
    0, 0, 0, 0, 825, 0, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 828, 0, 0, 0, 829, 0, 830, 0, 0, 0, 831, 0, 0, 0,
    0, 832, 0, 0, 0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 0, 835, 0, 836, 0, 0, 0, 837, 0, 0, 838, 0, 839, 0, 840,
};
void recomp_unit_0192_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,16,17 fprs=12,13,20,14 gpr_occ=3281 fpr_occ=1220 gpr_total=4414 fpr_total=1672
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_14 = ctx.fpr[14];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[16] = aot_gpr_16; ctx.gpr[17] = aot_gpr_17; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[14] = aot_fpr_14; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_17 = ctx.gpr[17]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_14 = ctx.fpr[14]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B04000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0192[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B04000;
    case 2u: goto L_08B04008;
    case 3u: goto L_08B04018;
    case 4u: goto L_08B04028;
    case 5u: goto L_08B04048;
    case 6u: goto L_08B04054;
    case 7u: goto L_08B0405C;
    case 8u: goto L_08B04070;
    case 9u: goto L_08B0409C;
    case 10u: goto L_08B040AC;
    case 11u: goto L_08B040B8;
    case 12u: goto L_08B040C4;
    case 13u: goto L_08B040CC;
    case 14u: goto L_08B040E8;
    case 15u: goto L_08B04104;
    case 16u: goto L_08B0410C;
    case 17u: goto L_08B04114;
    case 18u: goto L_08B04128;
    case 19u: goto L_08B04134;
    case 20u: goto L_08B0415C;
    case 21u: goto L_08B04164;
    case 22u: goto L_08B04178;
    case 23u: goto L_08B04194;
    case 24u: goto L_08B0419C;
    case 25u: goto L_08B041A4;
    case 26u: goto L_08B041C0;
    case 27u: goto L_08B041CC;
    case 28u: goto L_08B041D8;
    case 29u: goto L_08B041E8;
    case 30u: goto L_08B04218;
    case 31u: goto L_08B04260;
    case 32u: goto L_08B04268;
    case 33u: goto L_08B04274;
    case 34u: goto L_08B0427C;
    case 35u: goto L_08B04284;
    case 36u: goto L_08B04298;
    case 37u: goto L_08B042A8;
    case 38u: goto L_08B042B0;
    case 39u: goto L_08B042B8;
    case 40u: goto L_08B042DC;
    case 41u: goto L_08B042E4;
    case 42u: goto L_08B042EC;
    case 43u: goto L_08B042F4;
    case 44u: goto L_08B042FC;
    case 45u: goto L_08B04304;
    case 46u: goto L_08B0430C;
    case 47u: goto L_08B04314;
    case 48u: goto L_08B04324;
    case 49u: goto L_08B04334;
    case 50u: goto L_08B04368;
    case 51u: goto L_08B04370;
    case 52u: goto L_08B043A4;
    case 53u: goto L_08B043B4;
    case 54u: goto L_08B043CC;
    case 55u: goto L_08B043D4;
    case 56u: goto L_08B043FC;
    case 57u: goto L_08B04410;
    case 58u: goto L_08B04414;
    case 59u: goto L_08B04430;
    case 60u: goto L_08B04438;
    case 61u: goto L_08B04440;
    case 62u: goto L_08B0444C;
    case 63u: goto L_08B04454;
    case 64u: goto L_08B0445C;
    case 65u: goto L_08B0446C;
    case 66u: goto L_08B0447C;
    case 67u: goto L_08B0448C;
    case 68u: goto L_08B044D0;
    case 69u: goto L_08B044D8;
    case 70u: goto L_08B04514;
    case 71u: goto L_08B0452C;
    case 72u: goto L_08B04578;
    case 73u: goto L_08B04588;
    case 74u: goto L_08B04590;
    case 75u: goto L_08B04598;
    case 76u: goto L_08B045A0;
    case 77u: goto L_08B045A8;
    case 78u: goto L_08B045C4;
    case 79u: goto L_08B045D0;
    case 80u: goto L_08B045D8;
    case 81u: goto L_08B045E8;
    case 82u: goto L_08B045F0;
    case 83u: goto L_08B045F8;
    case 84u: goto L_08B04600;
    case 85u: goto L_08B04608;
    case 86u: goto L_08B04610;
    case 87u: goto L_08B04618;
    case 88u: goto L_08B04630;
    case 89u: goto L_08B04638;
    case 90u: goto L_08B04640;
    case 91u: goto L_08B04648;
    case 92u: goto L_08B04650;
    case 93u: goto L_08B04658;
    case 94u: goto L_08B04660;
    case 95u: goto L_08B04664;
    case 96u: goto L_08B046A8;
    case 97u: goto L_08B046C8;
    case 98u: goto L_08B046D4;
    case 99u: goto L_08B046EC;
    case 100u: goto L_08B04700;
    case 101u: goto L_08B04708;
    case 102u: goto L_08B04710;
    case 103u: goto L_08B04724;
    case 104u: goto L_08B0472C;
    case 105u: goto L_08B04734;
    case 106u: goto L_08B04748;
    case 107u: goto L_08B04750;
    case 108u: goto L_08B04758;
    case 109u: goto L_08B04774;
    case 110u: goto L_08B0477C;
    case 111u: goto L_08B04784;
    case 112u: goto L_08B04798;
    case 113u: goto L_08B047A0;
    case 114u: goto L_08B047A8;
    case 115u: goto L_08B047B0;
    case 116u: goto L_08B047C0;
    case 117u: goto L_08B047DC;
    case 118u: goto L_08B047E4;
    case 119u: goto L_08B047EC;
    case 120u: goto L_08B047F4;
    case 121u: goto L_08B04810;
    case 122u: goto L_08B0481C;
    case 123u: goto L_08B04824;
    case 124u: goto L_08B04834;
    case 125u: goto L_08B0484C;
    case 126u: goto L_08B04854;
    case 127u: goto L_08B0485C;
    case 128u: goto L_08B04864;
    case 129u: goto L_08B0486C;
    case 130u: goto L_08B04874;
    case 131u: goto L_08B0487C;
    case 132u: goto L_08B04880;
    case 133u: goto L_08B04888;
    case 134u: goto L_08B04890;
    case 135u: goto L_08B04898;
    case 136u: goto L_08B0489C;
    case 137u: goto L_08B048A4;
    case 138u: goto L_08B048B4;
    case 139u: goto L_08B048BC;
    case 140u: goto L_08B048D0;
    case 141u: goto L_08B048F0;
    case 142u: goto L_08B04904;
    case 143u: goto L_08B04910;
    case 144u: goto L_08B04928;
    case 145u: goto L_08B04940;
    case 146u: goto L_08B04948;
    case 147u: goto L_08B04960;
    case 148u: goto L_08B04978;
    case 149u: goto L_08B0498C;
    case 150u: goto L_08B0499C;
    case 151u: goto L_08B049A8;
    case 152u: goto L_08B049BC;
    case 153u: goto L_08B049C4;
    case 154u: goto L_08B049D0;
    case 155u: goto L_08B049F0;
    case 156u: goto L_08B049F8;
    case 157u: goto L_08B04A3C;
    case 158u: goto L_08B04A58;
    case 159u: goto L_08B04A60;
    case 160u: goto L_08B04A70;
    case 161u: goto L_08B04A7C;
    case 162u: goto L_08B04A8C;
    case 163u: goto L_08B04A98;
    case 164u: goto L_08B04AA0;
    case 165u: goto L_08B04AA8;
    case 166u: goto L_08B04AB0;
    case 167u: goto L_08B04AD8;
    case 168u: goto L_08B04AEC;
    case 169u: goto L_08B04AF4;
    case 170u: goto L_08B04AFC;
    case 171u: goto L_08B04B10;
    case 172u: goto L_08B04B28;
    case 173u: goto L_08B04B38;
    case 174u: goto L_08B04B40;
    case 175u: goto L_08B04B48;
    case 176u: goto L_08B04B50;
    case 177u: goto L_08B04B58;
    case 178u: goto L_08B04B60;
    case 179u: goto L_08B04B68;
    case 180u: goto L_08B04B70;
    case 181u: goto L_08B04B78;
    case 182u: goto L_08B04B80;
    case 183u: goto L_08B04B88;
    case 184u: goto L_08B04B90;
    case 185u: goto L_08B04B98;
    case 186u: goto L_08B04BA0;
    case 187u: goto L_08B04BB0;
    case 188u: goto L_08B04BC4;
    case 189u: goto L_08B04BCC;
    case 190u: goto L_08B04BD4;
    case 191u: goto L_08B04BEC;
    case 192u: goto L_08B04C04;
    case 193u: goto L_08B04C18;
    case 194u: goto L_08B04C24;
    case 195u: goto L_08B04C30;
    case 196u: goto L_08B04C38;
    case 197u: goto L_08B04C44;
    case 198u: goto L_08B04C4C;
    case 199u: goto L_08B04C54;
    case 200u: goto L_08B04C60;
    case 201u: goto L_08B04C6C;
    case 202u: goto L_08B04C74;
    case 203u: goto L_08B04C7C;
    case 204u: goto L_08B04C84;
    case 205u: goto L_08B04C8C;
    case 206u: goto L_08B04C94;
    case 207u: goto L_08B04CAC;
    case 208u: goto L_08B04CB4;
    case 209u: goto L_08B04CBC;
    case 210u: goto L_08B04CC4;
    case 211u: goto L_08B04CE4;
    case 212u: goto L_08B04D14;
    case 213u: goto L_08B04D74;
    case 214u: goto L_08B04D7C;
    case 215u: goto L_08B04DAC;
    case 216u: goto L_08B04DB4;
    case 217u: goto L_08B04DC0;
    case 218u: goto L_08B04DD0;
    case 219u: goto L_08B04DDC;
    case 220u: goto L_08B04DE4;
    case 221u: goto L_08B04DF0;
    case 222u: goto L_08B04E00;
    case 223u: goto L_08B04E08;
    case 224u: goto L_08B04E18;
    case 225u: goto L_08B04E20;
    case 226u: goto L_08B04E38;
    case 227u: goto L_08B04E48;
    case 228u: goto L_08B04E58;
    case 229u: goto L_08B04E60;
    case 230u: goto L_08B04E70;
    case 231u: goto L_08B04E78;
    case 232u: goto L_08B04E80;
    case 233u: goto L_08B04E8C;
    case 234u: goto L_08B04EA4;
    case 235u: goto L_08B04EB4;
    case 236u: goto L_08B04EBC;
    case 237u: goto L_08B04ED4;
    case 238u: goto L_08B04EE4;
    case 239u: goto L_08B04EF4;
    case 240u: goto L_08B04EFC;
    case 241u: goto L_08B04F04;
    case 242u: goto L_08B04F14;
    case 243u: goto L_08B04F1C;
    case 244u: goto L_08B04F34;
    case 245u: goto L_08B04F44;
    case 246u: goto L_08B04F54;
    case 247u: goto L_08B04F5C;
    case 248u: goto L_08B04F64;
    case 249u: goto L_08B04F70;
    case 250u: goto L_08B04F78;
    case 251u: goto L_08B04F8C;
    case 252u: goto L_08B04FA4;
    case 253u: goto L_08B04FC0;
    case 254u: goto L_08B04FCC;
    case 255u: goto L_08B04FD8;
    case 256u: goto L_08B04FEC;
    case 257u: goto L_08B04FF8;
    case 258u: goto L_08B05004;
    case 259u: goto L_08B05010;
    case 260u: goto L_08B05018;
    case 261u: goto L_08B0501C;
    case 262u: goto L_08B05034;
    case 263u: goto L_08B05048;
    case 264u: goto L_08B05054;
    case 265u: goto L_08B05060;
    case 266u: goto L_08B05074;
    case 267u: goto L_08B05098;
    case 268u: goto L_08B050A8;
    case 269u: goto L_08B050B0;
    case 270u: goto L_08B050B8;
    case 271u: goto L_08B050BC;
    case 272u: goto L_08B050C4;
    case 273u: goto L_08B050D0;
    case 274u: goto L_08B050D8;
    case 275u: goto L_08B050F0;
    case 276u: goto L_08B05100;
    case 277u: goto L_08B05108;
    case 278u: goto L_08B05110;
    case 279u: goto L_08B05114;
    case 280u: goto L_08B0511C;
    case 281u: goto L_08B05134;
    case 282u: goto L_08B0514C;
    case 283u: goto L_08B05164;
    case 284u: goto L_08B05198;
    case 285u: goto L_08B051B4;
    case 286u: goto L_08B051C8;
    case 287u: goto L_08B051D0;
    case 288u: goto L_08B051D8;
    case 289u: goto L_08B051E0;
    case 290u: goto L_08B051EC;
    case 291u: goto L_08B051F4;
    case 292u: goto L_08B051FC;
    case 293u: goto L_08B05204;
    case 294u: goto L_08B0520C;
    case 295u: goto L_08B05210;
    case 296u: goto L_08B0521C;
    case 297u: goto L_08B0522C;
    case 298u: goto L_08B05238;
    case 299u: goto L_08B05244;
    case 300u: goto L_08B05254;
    case 301u: goto L_08B05258;
    case 302u: goto L_08B05260;
    case 303u: goto L_08B05268;
    case 304u: goto L_08B05270;
    case 305u: goto L_08B05278;
    case 306u: goto L_08B05284;
    case 307u: goto L_08B0528C;
    case 308u: goto L_08B05294;
    case 309u: goto L_08B0529C;
    case 310u: goto L_08B052A4;
    case 311u: goto L_08B052A8;
    case 312u: goto L_08B052BC;
    case 313u: goto L_08B052C4;
    case 314u: goto L_08B052D0;
    case 315u: goto L_08B052D8;
    case 316u: goto L_08B052F0;
    case 317u: goto L_08B0531C;
    case 318u: goto L_08B05338;
    case 319u: goto L_08B0534C;
    case 320u: goto L_08B05354;
    case 321u: goto L_08B05364;
    case 322u: goto L_08B0536C;
    case 323u: goto L_08B053A8;
    case 324u: goto L_08B0541C;
    case 325u: goto L_08B05438;
    case 326u: goto L_08B05488;
    case 327u: goto L_08B054EC;
    case 328u: goto L_08B054F8;
    case 329u: goto L_08B05500;
    case 330u: goto L_08B05538;
    case 331u: goto L_08B05540;
    case 332u: goto L_08B05548;
    case 333u: goto L_08B05550;
    case 334u: goto L_08B05558;
    case 335u: goto L_08B05560;
    case 336u: goto L_08B05568;
    case 337u: goto L_08B05570;
    case 338u: goto L_08B05590;
    case 339u: goto L_08B055C0;
    case 340u: goto L_08B0562C;
    case 341u: goto L_08B05634;
    case 342u: goto L_08B05664;
    case 343u: goto L_08B05698;
    case 344u: goto L_08B056B0;
    case 345u: goto L_08B056C8;
    case 346u: goto L_08B056D8;
    case 347u: goto L_08B056EC;
    case 348u: goto L_08B056F4;
    case 349u: goto L_08B05704;
    case 350u: goto L_08B0571C;
    case 351u: goto L_08B05734;
    case 352u: goto L_08B05744;
    case 353u: goto L_08B05758;
    case 354u: goto L_08B05760;
    case 355u: goto L_08B05790;
    case 356u: goto L_08B057C4;
    case 357u: goto L_08B05828;
    case 358u: goto L_08B05830;
    case 359u: goto L_08B0583C;
    case 360u: goto L_08B058A4;
    case 361u: goto L_08B058B0;
    case 362u: goto L_08B058FC;
    case 363u: goto L_08B05904;
    case 364u: goto L_08B05908;
    case 365u: goto L_08B05920;
    case 366u: goto L_08B05928;
    case 367u: goto L_08B05930;
    case 368u: goto L_08B05944;
    case 369u: goto L_08B05958;
    case 370u: goto L_08B05960;
    case 371u: goto L_08B0597C;
    case 372u: goto L_08B0598C;
    case 373u: goto L_08B059F4;
    case 374u: goto L_08B05A00;
    case 375u: goto L_08B05A74;
    case 376u: goto L_08B05A78;
    case 377u: goto L_08B05A84;
    case 378u: goto L_08B05B20;
    case 379u: goto L_08B05B24;
    case 380u: goto L_08B05B30;
    case 381u: goto L_08B05BD8;
    case 382u: goto L_08B05BDC;
    case 383u: goto L_08B05BE8;
    case 384u: goto L_08B05C34;
    case 385u: goto L_08B05C3C;
    case 386u: goto L_08B05C48;
    case 387u: goto L_08B05C50;
    case 388u: goto L_08B05C58;
    case 389u: goto L_08B05C64;
    case 390u: goto L_08B05C6C;
    case 391u: goto L_08B05C78;
    case 392u: goto L_08B05C80;
    case 393u: goto L_08B05C84;
    case 394u: goto L_08B05CA4;
    case 395u: goto L_08B05CC8;
    case 396u: goto L_08B05D2C;
    case 397u: goto L_08B05D34;
    case 398u: goto L_08B05D70;
    case 399u: goto L_08B05D7C;
    case 400u: goto L_08B05DC8;
    case 401u: goto L_08B05DE4;
    case 402u: goto L_08B05DF4;
    case 403u: goto L_08B05E00;
    case 404u: goto L_08B05E08;
    case 405u: goto L_08B05E18;
    case 406u: goto L_08B05E28;
    case 407u: goto L_08B05E48;
    case 408u: goto L_08B05E50;
    case 409u: goto L_08B05E5C;
    case 410u: goto L_08B05E64;
    case 411u: goto L_08B05E74;
    case 412u: goto L_08B05E80;
    case 413u: goto L_08B05E90;
    case 414u: goto L_08B05EA0;
    case 415u: goto L_08B05EAC;
    case 416u: goto L_08B05EBC;
    case 417u: goto L_08B05EC8;
    case 418u: goto L_08B05ED0;
    case 419u: goto L_08B05ED8;
    case 420u: goto L_08B05EEC;
    case 421u: goto L_08B05EFC;
    case 422u: goto L_08B05F08;
    case 423u: goto L_08B05F18;
    case 424u: goto L_08B05F28;
    case 425u: goto L_08B05F34;
    case 426u: goto L_08B05F44;
    case 427u: goto L_08B05F50;
    case 428u: goto L_08B05F58;
    case 429u: goto L_08B05F68;
    case 430u: goto L_08B05F78;
    case 431u: goto L_08B05F98;
    case 432u: goto L_08B05FA0;
    case 433u: goto L_08B05FAC;
    case 434u: goto L_08B05FB4;
    case 435u: goto L_08B05FC4;
    case 436u: goto L_08B05FD0;
    case 437u: goto L_08B05FE0;
    case 438u: goto L_08B05FF0;
    case 439u: goto L_08B05FFC;
    case 440u: goto L_08B0600C;
    case 441u: goto L_08B06018;
    case 442u: goto L_08B06020;
    case 443u: goto L_08B06028;
    case 444u: goto L_08B0603C;
    case 445u: goto L_08B0604C;
    case 446u: goto L_08B06058;
    case 447u: goto L_08B06068;
    case 448u: goto L_08B06078;
    case 449u: goto L_08B06084;
    case 450u: goto L_08B06094;
    case 451u: goto L_08B060A0;
    case 452u: goto L_08B060A8;
    case 453u: goto L_08B060B0;
    case 454u: goto L_08B060C4;
    case 455u: goto L_08B060D4;
    case 456u: goto L_08B060E4;
    case 457u: goto L_08B06104;
    case 458u: goto L_08B0610C;
    case 459u: goto L_08B06118;
    case 460u: goto L_08B06120;
    case 461u: goto L_08B06130;
    case 462u: goto L_08B0613C;
    case 463u: goto L_08B0614C;
    case 464u: goto L_08B0615C;
    case 465u: goto L_08B06168;
    case 466u: goto L_08B06178;
    case 467u: goto L_08B06184;
    case 468u: goto L_08B0618C;
    case 469u: goto L_08B0619C;
    case 470u: goto L_08B061A8;
    case 471u: goto L_08B061B8;
    case 472u: goto L_08B061C8;
    case 473u: goto L_08B061D4;
    case 474u: goto L_08B061E0;
    case 475u: goto L_08B061F8;
    case 476u: goto L_08B0625C;
    case 477u: goto L_08B06274;
    case 478u: goto L_08B062A0;
    case 479u: goto L_08B062A8;
    case 480u: goto L_08B062B0;
    case 481u: goto L_08B062B8;
    case 482u: goto L_08B062C4;
    case 483u: goto L_08B062CC;
    case 484u: goto L_08B062D4;
    case 485u: goto L_08B062DC;
    case 486u: goto L_08B062E0;
    case 487u: goto L_08B062FC;
    case 488u: goto L_08B06328;
    case 489u: goto L_08B0632C;
    case 490u: goto L_08B06338;
    case 491u: goto L_08B06360;
    case 492u: goto L_08B06378;
    case 493u: goto L_08B063F8;
    case 494u: goto L_08B0640C;
    case 495u: goto L_08B0641C;
    case 496u: goto L_08B06430;
    case 497u: goto L_08B06444;
    case 498u: goto L_08B06454;
    case 499u: goto L_08B06468;
    case 500u: goto L_08B06478;
    case 501u: goto L_08B0648C;
    case 502u: goto L_08B0649C;
    case 503u: goto L_08B064B0;
    case 504u: goto L_08B064BC;
    case 505u: goto L_08B0650C;
    case 506u: goto L_08B06560;
    case 507u: goto L_08B065A4;
    case 508u: goto L_08B065E0;
    case 509u: goto L_08B065E8;
    case 510u: goto L_08B065FC;
    case 511u: goto L_08B06670;
    case 512u: goto L_08B06678;
    case 513u: goto L_08B0668C;
    case 514u: goto L_08B066A0;
    case 515u: goto L_08B066B4;
    case 516u: goto L_08B066C4;
    case 517u: goto L_08B066D8;
    case 518u: goto L_08B066E8;
    case 519u: goto L_08B066FC;
    case 520u: goto L_08B0670C;
    case 521u: goto L_08B06720;
    case 522u: goto L_08B0672C;
    case 523u: goto L_08B06740;
    case 524u: goto L_08B06754;
    case 525u: goto L_08B06758;
    case 526u: goto L_08B06780;
    case 527u: goto L_08B06794;
    case 528u: goto L_08B067A4;
    case 529u: goto L_08B067AC;
    case 530u: goto L_08B067C0;
    case 531u: goto L_08B067D0;
    case 532u: goto L_08B067E4;
    case 533u: goto L_08B067F0;
    case 534u: goto L_08B067F4;
    case 535u: goto L_08B06854;
    case 536u: goto L_08B06874;
    case 537u: goto L_08B068BC;
    case 538u: goto L_08B068FC;
    case 539u: goto L_08B06904;
    case 540u: goto L_08B0690C;
    case 541u: goto L_08B06920;
    case 542u: goto L_08B06940;
    case 543u: goto L_08B06948;
    case 544u: goto L_08B0695C;
    case 545u: goto L_08B0696C;
    case 546u: goto L_08B06984;
    case 547u: goto L_08B0698C;
    case 548u: goto L_08B069A0;
    case 549u: goto L_08B069B0;
    case 550u: goto L_08B069C0;
    case 551u: goto L_08B069CC;
    case 552u: goto L_08B069D4;
    case 553u: goto L_08B069D8;
    case 554u: goto L_08B069E8;
    case 555u: goto L_08B069F8;
    case 556u: goto L_08B06A20;
    case 557u: goto L_08B06A34;
    case 558u: goto L_08B06A44;
    case 559u: goto L_08B06A7C;
    case 560u: goto L_08B06A8C;
    case 561u: goto L_08B06AC4;
    case 562u: goto L_08B06AE0;
    case 563u: goto L_08B06B18;
    case 564u: goto L_08B06B28;
    case 565u: goto L_08B06B38;
    case 566u: goto L_08B06B68;
    case 567u: goto L_08B06B9C;
    case 568u: goto L_08B06BAC;
    case 569u: goto L_08B06BF4;
    case 570u: goto L_08B06C94;
    case 571u: goto L_08B06CB0;
    case 572u: goto L_08B06CB8;
    case 573u: goto L_08B06CC0;
    case 574u: goto L_08B06CCC;
    case 575u: goto L_08B06CE4;
    case 576u: goto L_08B06CF4;
    case 577u: goto L_08B06D08;
    case 578u: goto L_08B06D18;
    case 579u: goto L_08B06D30;
    case 580u: goto L_08B06D44;
    case 581u: goto L_08B06D58;
    case 582u: goto L_08B06D6C;
    case 583u: goto L_08B06D80;
    case 584u: goto L_08B06D90;
    case 585u: goto L_08B06DA0;
    case 586u: goto L_08B06DB8;
    case 587u: goto L_08B06DBC;
    case 588u: goto L_08B06DC4;
    case 589u: goto L_08B06DD4;
    case 590u: goto L_08B06DE8;
    case 591u: goto L_08B06DF8;
    case 592u: goto L_08B06E10;
    case 593u: goto L_08B06E20;
    case 594u: goto L_08B06E3C;
    case 595u: goto L_08B06E4C;
    case 596u: goto L_08B06E64;
    case 597u: goto L_08B06E74;
    case 598u: goto L_08B06E8C;
    case 599u: goto L_08B06EA4;
    case 600u: goto L_08B06ED8;
    case 601u: goto L_08B06EE0;
    case 602u: goto L_08B06F0C;
    case 603u: goto L_08B06F14;
    case 604u: goto L_08B06F24;
    case 605u: goto L_08B06F54;
    case 606u: goto L_08B06F74;
    case 607u: goto L_08B06F84;
    case 608u: goto L_08B06F88;
    case 609u: goto L_08B06F94;
    case 610u: goto L_08B06FA8;
    case 611u: goto L_08B06FB0;
    case 612u: goto L_08B06FC0;
    case 613u: goto L_08B06FDC;
    case 614u: goto L_08B07090;
    case 615u: goto L_08B07110;
    case 616u: goto L_08B0719C;
    case 617u: goto L_08B07248;
    case 618u: goto L_08B07258;
    case 619u: goto L_08B07270;
    case 620u: goto L_08B07284;
    case 621u: goto L_08B07294;
    case 622u: goto L_08B072A8;
    case 623u: goto L_08B072FC;
    case 624u: goto L_08B07304;
    case 625u: goto L_08B07324;
    case 626u: goto L_08B0734C;
    case 627u: goto L_08B07350;
    case 628u: goto L_08B07364;
    case 629u: goto L_08B07374;
    case 630u: goto L_08B0737C;
    case 631u: goto L_08B07384;
    case 632u: goto L_08B07390;
    case 633u: goto L_08B073B0;
    case 634u: goto L_08B073B8;
    case 635u: goto L_08B073E0;
    case 636u: goto L_08B073E8;
    case 637u: goto L_08B073F0;
    case 638u: goto L_08B07414;
    case 639u: goto L_08B07420;
    case 640u: goto L_08B07428;
    case 641u: goto L_08B07438;
    case 642u: goto L_08B07448;
    case 643u: goto L_08B07450;
    case 644u: goto L_08B07458;
    case 645u: goto L_08B07470;
    case 646u: goto L_08B07480;
    case 647u: goto L_08B0748C;
    case 648u: goto L_08B07498;
    case 649u: goto L_08B074A0;
    case 650u: goto L_08B074B4;
    case 651u: goto L_08B074BC;
    case 652u: goto L_08B074C4;
    case 653u: goto L_08B074D8;
    case 654u: goto L_08B074E4;
    case 655u: goto L_08B074F8;
    case 656u: goto L_08B07500;
    case 657u: goto L_08B07508;
    case 658u: goto L_08B0751C;
    case 659u: goto L_08B07520;
    case 660u: goto L_08B07528;
    case 661u: goto L_08B07530;
    case 662u: goto L_08B0753C;
    case 663u: goto L_08B0754C;
    case 664u: goto L_08B07554;
    case 665u: goto L_08B0755C;
    case 666u: goto L_08B0756C;
    case 667u: goto L_08B07578;
    case 668u: goto L_08B07580;
    case 669u: goto L_08B0758C;
    case 670u: goto L_08B07594;
    case 671u: goto L_08B075C0;
    case 672u: goto L_08B075C8;
    case 673u: goto L_08B075D8;
    case 674u: goto L_08B075E0;
    case 675u: goto L_08B075E8;
    case 676u: goto L_08B075F8;
    case 677u: goto L_08B07608;
    case 678u: goto L_08B07610;
    case 679u: goto L_08B07618;
    case 680u: goto L_08B07624;
    case 681u: goto L_08B07634;
    case 682u: goto L_08B0763C;
    case 683u: goto L_08B07644;
    case 684u: goto L_08B07650;
    case 685u: goto L_08B07658;
    case 686u: goto L_08B07678;
    case 687u: goto L_08B076A0;
    case 688u: goto L_08B076B0;
    case 689u: goto L_08B076C0;
    case 690u: goto L_08B076C8;
    case 691u: goto L_08B076D0;
    case 692u: goto L_08B076DC;
    case 693u: goto L_08B076F4;
    case 694u: goto L_08B07700;
    case 695u: goto L_08B0770C;
    case 696u: goto L_08B0771C;
    case 697u: goto L_08B07724;
    case 698u: goto L_08B07730;
    case 699u: goto L_08B07738;
    case 700u: goto L_08B0774C;
    case 701u: goto L_08B07754;
    case 702u: goto L_08B07760;
    case 703u: goto L_08B0777C;
    case 704u: goto L_08B07798;
    case 705u: goto L_08B077A4;
    case 706u: goto L_08B077AC;
    case 707u: goto L_08B077B4;
    case 708u: goto L_08B077BC;
    case 709u: goto L_08B077D0;
    case 710u: goto L_08B077DC;
    case 711u: goto L_08B077E4;
    case 712u: goto L_08B07808;
    case 713u: goto L_08B07824;
    case 714u: goto L_08B0782C;
    case 715u: goto L_08B0783C;
    case 716u: goto L_08B0784C;
    case 717u: goto L_08B07854;
    case 718u: goto L_08B07864;
    case 719u: goto L_08B07874;
    case 720u: goto L_08B07894;
    case 721u: goto L_08B078A4;
    case 722u: goto L_08B078AC;
    case 723u: goto L_08B078B4;
    case 724u: goto L_08B078C4;
    case 725u: goto L_08B078D0;
    case 726u: goto L_08B078DC;
    case 727u: goto L_08B078E4;
    case 728u: goto L_08B078F0;
    case 729u: goto L_08B078FC;
    case 730u: goto L_08B0790C;
    case 731u: goto L_08B07918;
    case 732u: goto L_08B07948;
    case 733u: goto L_08B0795C;
    case 734u: goto L_08B07964;
    case 735u: goto L_08B0796C;
    case 736u: goto L_08B07978;
    case 737u: goto L_08B07994;
    case 738u: goto L_08B0799C;
    case 739u: goto L_08B079A4;
    case 740u: goto L_08B079B0;
    case 741u: goto L_08B079C8;
    case 742u: goto L_08B079DC;
    case 743u: goto L_08B079EC;
    case 744u: goto L_08B079F0;
    case 745u: goto L_08B07A0C;
    case 746u: goto L_08B07A3C;
    case 747u: goto L_08B07A48;
    case 748u: goto L_08B07A50;
    case 749u: goto L_08B07A58;
    case 750u: goto L_08B07A68;
    case 751u: goto L_08B07A78;
    case 752u: goto L_08B07A80;
    case 753u: goto L_08B07A90;
    case 754u: goto L_08B07A9C;
    case 755u: goto L_08B07AA4;
    case 756u: goto L_08B07AAC;
    case 757u: goto L_08B07ABC;
    case 758u: goto L_08B07AC4;
    case 759u: goto L_08B07AD4;
    case 760u: goto L_08B07AE4;
    case 761u: goto L_08B07AEC;
    case 762u: goto L_08B07AF8;
    case 763u: goto L_08B07B10;
    case 764u: goto L_08B07B18;
    case 765u: goto L_08B07B38;
    case 766u: goto L_08B07B48;
    case 767u: goto L_08B07B54;
    case 768u: goto L_08B07B74;
    case 769u: goto L_08B07B80;
    case 770u: goto L_08B07BA4;
    case 771u: goto L_08B07BAC;
    case 772u: goto L_08B07BCC;
    case 773u: goto L_08B07BD0;
    case 774u: goto L_08B07BD8;
    case 775u: goto L_08B07C08;
    case 776u: goto L_08B07C18;
    case 777u: goto L_08B07C28;
    case 778u: goto L_08B07C30;
    case 779u: goto L_08B07C40;
    case 780u: goto L_08B07C4C;
    case 781u: goto L_08B07C54;
    case 782u: goto L_08B07C60;
    case 783u: goto L_08B07C68;
    case 784u: goto L_08B07C74;
    case 785u: goto L_08B07C90;
    case 786u: goto L_08B07C98;
    case 787u: goto L_08B07CA8;
    case 788u: goto L_08B07CB4;
    case 789u: goto L_08B07CBC;
    case 790u: goto L_08B07CC8;
    case 791u: goto L_08B07CD0;
    case 792u: goto L_08B07CD8;
    case 793u: goto L_08B07CE0;
    case 794u: goto L_08B07CEC;
    case 795u: goto L_08B07D30;
    case 796u: goto L_08B07D3C;
    case 797u: goto L_08B07D44;
    case 798u: goto L_08B07D58;
    case 799u: goto L_08B07D60;
    case 800u: goto L_08B07D6C;
    case 801u: goto L_08B07D74;
    case 802u: goto L_08B07D88;
    case 803u: goto L_08B07D9C;
    case 804u: goto L_08B07DA8;
    case 805u: goto L_08B07DB8;
    case 806u: goto L_08B07DC4;
    case 807u: goto L_08B07DD4;
    case 808u: goto L_08B07DE8;
    case 809u: goto L_08B07DF8;
    case 810u: goto L_08B07E00;
    case 811u: goto L_08B07E0C;
    case 812u: goto L_08B07E18;
    case 813u: goto L_08B07E38;
    case 814u: goto L_08B07E44;
    case 815u: goto L_08B07E54;
    case 816u: goto L_08B07E5C;
    case 817u: goto L_08B07E70;
    case 818u: goto L_08B07E74;
    case 819u: goto L_08B07EA4;
    case 820u: goto L_08B07EB0;
    case 821u: goto L_08B07ECC;
    case 822u: goto L_08B07EE4;
    case 823u: goto L_08B07EF4;
    case 824u: goto L_08B07EFC;
    case 825u: goto L_08B07F10;
    case 826u: goto L_08B07F1C;
    case 827u: goto L_08B07F38;
    case 828u: goto L_08B07F48;
    case 829u: goto L_08B07F58;
    case 830u: goto L_08B07F60;
    case 831u: goto L_08B07F70;
    case 832u: goto L_08B07F84;
    case 833u: goto L_08B07F9C;
    case 834u: goto L_08B07FAC;
    case 835u: goto L_08B07FBC;
    case 836u: goto L_08B07FC4;
    case 837u: goto L_08B07FD4;
    case 838u: goto L_08B07FE0;
    case 839u: goto L_08B07FE8;
    case 840u: goto L_08B07FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08B04000:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 1004u, 0x08B03FA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B04008;
    }
L_08B04008:
    ctx.gpr[23] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (0u | 1800u);
      if (branch_taken) {
          goto L_08B040AC;
      }
      goto L_08B04018;
    }
L_08B04018:
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1828)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1824)));
    ctx.gpr[22] = (aot_gpr_29 | 0u);
    ctx.gpr[18] = (32768u << 16u);
    goto L_08B04028;
L_08B04028:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(1728), aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[6] & ctx.gpr[18]);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0409C;
      }
      goto L_08B04048;
    }
L_08B04048:
    aot_gpr_5 = (0u | 16u);
    aot_gpr_31 = (0x08B04054u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04054u) goto L_08B04054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04054:
    aot_gpr_31 = (0x08B0405Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0405Cu) goto L_08B0405C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0405C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B04070u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04070u) goto L_08B04070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04070:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_16);
    ctx.gpr[7] = (ctx.gpr[6] < aot_gpr_16 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_17);
    aot_gpr_4 = (ctx.gpr[6] | 0u);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + aot_gpr_4);
    goto L_08B0409C;
L_08B0409C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04028;
      }
      goto L_08B040AC;
    }
L_08B040AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B041E8;
      }
      goto L_08B040B8;
    }
L_08B040B8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B041E8;
      }
      goto L_08B040C4;
    }
L_08B040C4:
    aot_gpr_31 = (0x08B040CCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B040CCu) goto L_08B040CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B040CC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1796)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1792)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B040E8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B040E8u) goto L_08B040E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B040E8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0410C;
      }
      goto L_08B04104;
    }
L_08B04104:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B0410C;
      }
      goto L_08B0410C;
    }
L_08B0410C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B041E8;
      }
      goto L_08B04114;
    }
L_08B04114:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_17 = (aot_gpr_29 | 0u);
      if (branch_taken) {
          goto L_08B041E8;
      }
      goto L_08B04128;
    }
L_08B04128:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (64u << 16u);
    ctx.gpr[22] = (1024u << 16u);
    goto L_08B04134;
L_08B04134:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1360)));
    aot_gpr_5 = (aot_gpr_4 ^ 20u);
    aot_gpr_4 = (aot_gpr_4 ^ 5u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B041A4;
      }
      goto L_08B0415C;
    }
L_08B0415C:
    aot_gpr_31 = (0x08B04164u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04164u) goto L_08B04164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04164:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B04178u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04178u) goto L_08B04178;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04178:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0419C;
      }
      goto L_08B04194;
    }
L_08B04194:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B0419C;
      }
      goto L_08B0419C;
    }
L_08B0419C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B041D8;
      }
      goto L_08B041A4;
    }
L_08B041A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(10000));
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1728), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 & ctx.gpr[21]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B041CC;
      }
      goto L_08B041C0;
    }
L_08B041C0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[22]);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(464), aot_gpr_4);
    goto L_08B041CC;
L_08B041CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_mem.aot_direct_store32(ctx.gpr[20] + static_cast<std::uint32_t>(460), aot_gpr_4);
    goto L_08B041D8;
L_08B041D8:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_17 = (aot_gpr_17 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B04134;
      }
      goto L_08B041E8;
    }
L_08B041E8:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      aot_gpr_17 = aot_run_words[1];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04218:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_17);
    aot_gpr_17 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(616))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(614))))));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_31);
    aot_gpr_31 = (0x08B04260u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04260u) goto L_08B04260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04260:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04514;
      }
      goto L_08B04268;
    }
L_08B04268:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04298;
      }
      goto L_08B04274;
    }
L_08B04274:
    aot_gpr_31 = (0x08B0427Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0427Cu) goto L_08B0427C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0427C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04298;
      }
      goto L_08B04284;
    }
L_08B04284:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B04298;
L_08B04298:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0446C;
      }
      goto L_08B042A8;
    }
L_08B042A8:
    aot_gpr_31 = (0x08B042B0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B042B0u) goto L_08B042B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B042B0:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B0446C;
      }
      goto L_08B042B8;
    }
L_08B042B8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u | 234u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 227u);
      if (branch_taken) {
          goto L_08B043D4;
      }
      goto L_08B042DC;
    }
L_08B042DC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 226u);
      if (branch_taken) {
          goto L_08B04368;
      }
      goto L_08B042E4;
    }
L_08B042E4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 207u);
      if (branch_taken) {
          goto L_08B04334;
      }
      goto L_08B042EC;
    }
L_08B042EC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 183u);
      if (branch_taken) {
          goto L_08B04314;
      }
      goto L_08B042F4;
    }
L_08B042F4:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-959));
      if (branch_taken) {
          goto L_08B04334;
      }
      goto L_08B042FC;
    }
L_08B042FC:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1000));
      if (branch_taken) {
          goto L_08B04334;
      }
      goto L_08B04304;
    }
L_08B04304:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B04430;
      }
      goto L_08B0430C;
    }
L_08B0430C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0446C;
      }
      goto L_08B04314;
    }
L_08B04314:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(1832));
    aot_gpr_4 = (0u | 349u);
    aot_gpr_31 = (0x08B04324u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04324u) goto L_08B04324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04324:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B0446C;
      }
      goto L_08B04334;
    }
L_08B04334:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (2238u << 16u);
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(172)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), aot_gpr_5);
      if (branch_taken) {
          goto L_08B0446C;
      }
      goto L_08B04368;
    }
L_08B04368:
    aot_gpr_31 = (0x08B04370u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04370u) goto L_08B04370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04370:
    aot_gpr_4 = (16800u << 16u);
    aot_gpr_5 = (2238u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1252)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(336)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_08B043B4;
      }
      goto L_08B043A4;
    }
L_08B043A4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(336)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    goto L_08B043B4;
L_08B043B4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B043CCu);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B043CCu) goto L_08B043CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B043CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08B0446C;
      }
      goto L_08B043D4;
    }
L_08B043D4:
    aot_gpr_4 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(337)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1256)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (2238u << 16u);
      if (branch_taken) {
          goto L_08B04410;
      }
      goto L_08B043FC;
    }
L_08B043FC:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(337)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B04414;
      }
      goto L_08B04410;
    }
L_08B04410:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1256)));
    goto L_08B04414;
L_08B04414:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B0446C;
      }
      goto L_08B04430;
    }
L_08B04430:
    aot_gpr_31 = (0x08B04438u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04438u) goto L_08B04438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04438:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B0445C;
      }
      goto L_08B04440;
    }
L_08B04440:
    aot_gpr_5 = (0u | 3u);
    aot_gpr_31 = (0x08B0444Cu);
    ctx.gpr[6] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 630u, 0x08947340u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0444Cu) goto L_08B0444C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0444C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0445C;
      }
      goto L_08B04454;
    }
L_08B04454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0446C;
      }
      goto L_08B0445C;
    }
L_08B0445C:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(1832));
    aot_gpr_4 = (0u | 333u);
    aot_gpr_31 = (0x08B0446Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0446Cu) goto L_08B0446C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0446C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B0448C;
      }
      goto L_08B0447C;
    }
L_08B0447C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_4 = (48291u << 16u);
      if (branch_taken) {
          goto L_08B044D8;
      }
      goto L_08B0448C;
    }
L_08B0448C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (48291u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
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
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B044D0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B044D0u) goto L_08B044D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B044D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04514;
      }
      goto L_08B044D8;
    }
L_08B044D8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(48)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(52)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[18];
    aot_gpr_31 = (0x08B04514u);
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[0];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04514u) goto L_08B04514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04514:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_17 = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0452C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[8] & 64u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B04590;
      }
      goto L_08B04578;
    }
L_08B04578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_5 = (aot_gpr_4 & 496u);
      if (branch_taken) {
          goto L_08B04598;
      }
      goto L_08B04588;
    }
L_08B04588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B045D0;
      }
      goto L_08B04590;
    }
L_08B04590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04598;
    }
L_08B04598:
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B045D0;
      }
      goto L_08B045A0;
    }
L_08B045A0:
    aot_gpr_31 = (0x08B045A8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 223u, 0x0899103Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B045A8u) goto L_08B045A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B045A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (17096u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_gpr_4 & 496u);
      if (branch_taken) {
          goto L_08B045D0;
      }
      goto L_08B045C4;
    }
L_08B045C4:
    ctx.gpr[6] = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08B045D0;
L_08B045D0:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04618;
      }
      goto L_08B045D8;
    }
L_08B045D8:
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04618;
      }
      goto L_08B045E8;
    }
L_08B045E8:
    aot_gpr_31 = (0x08B045F0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B045F0u) goto L_08B045F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B045F0:
    { const bool branch_taken = aot_gpr_17 == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B04618;
      }
      goto L_08B045F8;
    }
L_08B045F8:
    aot_gpr_31 = (0x08B04600u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04600u) goto L_08B04600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04600:
    { const bool branch_taken = aot_gpr_17 != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B04638;
      }
      goto L_08B04608;
    }
L_08B04608:
    aot_gpr_31 = (0x08B04610u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04610u) goto L_08B04610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04610:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04638;
      }
      goto L_08B04618;
    }
L_08B04618:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B04640;
      }
      goto L_08B04630;
    }
L_08B04630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B046C8;
      }
      goto L_08B04638;
    }
L_08B04638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04640;
    }
L_08B04640:
    aot_gpr_31 = (0x08B04648u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04648u) goto L_08B04648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04648:
    if (aot_gpr_17 == ctx.gpr[2]) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08B04664;
    }
    goto L_08B04650;
L_08B04650:
    aot_gpr_31 = (0x08B04658u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04658u) goto L_08B04658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04658:
    { const bool branch_taken = aot_gpr_17 != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B046C8;
      }
      goto L_08B04660;
    }
L_08B04660:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_08B04664;
L_08B04664:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[6] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    ctx.gpr[6] = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(316), aot_gpr_5);
    aot_gpr_31 = (0x08B046A8u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B046A8u) goto L_08B046A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B046A8:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_5 = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7904)));
    aot_gpr_5 = (ctx.hi);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(5));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7904), aot_gpr_4);
    goto L_08B046C8;
L_08B046C8:
    aot_gpr_5 = (ctx.gpr[18] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B047A8;
      }
      goto L_08B046D4;
    }
L_08B046D4:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[18]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30536)));
    jump_target = ctx.gpr[1];
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B046EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (8192u << 16u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04708;
      }
      goto L_08B04700;
    }
L_08B04700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B047A8;
      }
      goto L_08B04708;
    }
L_08B04708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04710;
    }
L_08B04710:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (1024u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0472C;
      }
      goto L_08B04724;
    }
L_08B04724:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B047A8;
      }
      goto L_08B0472C;
    }
L_08B0472C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04734;
    }
L_08B04734:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (2048u << 16u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04750;
      }
      goto L_08B04748;
    }
L_08B04748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B047A8;
      }
      goto L_08B04750;
    }
L_08B04750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04758;
    }
L_08B04758:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0477C;
      }
      goto L_08B04774;
    }
L_08B04774:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B047A8;
      }
      goto L_08B0477C;
    }
L_08B0477C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04784;
    }
L_08B04784:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (4096u << 16u);
    aot_gpr_5 = (aot_gpr_5 & ctx.gpr[6]);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B047A0;
      }
      goto L_08B04798;
    }
L_08B04798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B047A8;
      }
      goto L_08B047A0;
    }
L_08B047A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B047A8;
    }
L_08B047A8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B047DC;
      }
      goto L_08B047B0;
    }
L_08B047B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B047DC;
      }
      goto L_08B047C0;
    }
L_08B047C0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(636)));
    aot_gpr_4 = (17274u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B047EC;
      }
      goto L_08B047DC;
    }
L_08B047DC:
    { const bool branch_taken = aot_gpr_17 != 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B047F4;
      }
      goto L_08B047E4;
    }
L_08B047E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04978;
      }
      goto L_08B047EC;
    }
L_08B047EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B047F4;
    }
L_08B047F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04978;
      }
      goto L_08B04810;
    }
L_08B04810:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (0u | 6u);
      if (branch_taken) {
          goto L_08B04824;
      }
      goto L_08B0481C;
    }
L_08B0481C:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B04978;
      }
      goto L_08B04824;
    }
L_08B04824:
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-19));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(27) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08B04888;
      }
      goto L_08B04834;
    }
L_08B04834:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30720)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0484C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 10u);
      if (branch_taken) {
          goto L_08B04888;
      }
      goto L_08B04854;
    }
L_08B04854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 15u);
      if (branch_taken) {
          goto L_08B04888;
      }
      goto L_08B0485C;
    }
L_08B0485C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 25u);
      if (branch_taken) {
          goto L_08B04888;
      }
      goto L_08B04864;
    }
L_08B04864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 64u);
      if (branch_taken) {
          goto L_08B04888;
      }
      goto L_08B0486C;
    }
L_08B0486C:
    aot_gpr_31 = (0x08B04874u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04874u) goto L_08B04874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04874:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04880;
      }
      goto L_08B0487C;
    }
L_08B0487C:
    ctx.gpr[20] = (0u | 15u);
    goto L_08B04880;
L_08B04880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04888;
      }
      goto L_08B04888;
    }
L_08B04888:
    aot_gpr_31 = (0x08B04890u);
    ctx.gpr[21] = (0u | 319u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04890u) goto L_08B04890;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04890:
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_17;
    // nop
      if (branch_taken) {
          goto L_08B0489C;
      }
      goto L_08B04898;
    }
L_08B04898:
    ctx.gpr[21] = (0u | 127u);
    goto L_08B0489C;
L_08B0489C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04978;
      }
      goto L_08B048A4;
    }
L_08B048A4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04978;
      }
      goto L_08B048B4;
    }
L_08B048B4:
    aot_gpr_31 = (0x08B048BCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B048BCu) goto L_08B048BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B048BC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B048D0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B048D0u) goto L_08B048D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B048D0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04978;
      }
      goto L_08B048F0;
    }
L_08B048F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B04910;
      }
      goto L_08B04904;
    }
L_08B04904:
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B04948;
      }
      goto L_08B04910;
    }
L_08B04910:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[19] = (aot_gpr_5 + static_cast<std::uint32_t>(344));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08B04928u);
    ctx.gpr[20] = (aot_gpr_16 + aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 216u, 0x08B00C90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04928u) goto L_08B04928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04928:
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(13));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B04940u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04940u) goto L_08B04940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04978;
      }
      goto L_08B04948;
    }
L_08B04948:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[19] = (aot_gpr_5 + static_cast<std::uint32_t>(344));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08B04960u);
    ctx.gpr[20] = (aot_gpr_16 + aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 216u, 0x08B00C90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04960u) goto L_08B04960;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04960:
    aot_gpr_5 = (ctx.gpr[2] + static_cast<std::uint32_t>(13));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B04978u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04978u) goto L_08B04978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04978:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(636)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B0498C;
    }
L_08B0498C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[21] = (0u | 18u);
      if (branch_taken) {
          goto L_08B04A3C;
      }
      goto L_08B0499C;
    }
L_08B0499C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04A3C;
      }
      goto L_08B049A8;
    }
L_08B049A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 32u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[6];
    ctx.gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08B049C4;
      }
      goto L_08B049BC;
    }
L_08B049BC:
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B04A3C;
      }
      goto L_08B049C4;
    }
L_08B049C4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(533))))));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B04A3C;
      }
      goto L_08B049D0;
    }
L_08B049D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_5 = (0u | 35000u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04A3C;
      }
      goto L_08B049F0;
    }
L_08B049F0:
    aot_gpr_31 = (0x08B049F8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B049F8u) goto L_08B049F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B049F8:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(352)));
    aot_gpr_5 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 48u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B04A3C;
L_08B04A3C:
    aot_gpr_4 = (ctx.gpr[18] << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(688), aot_gpr_17);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04B48;
      }
      goto L_08B04A58;
    }
L_08B04A58:
    { const bool branch_taken = aot_gpr_17 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04B48;
      }
      goto L_08B04A60;
    }
L_08B04A60:
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08B04A70u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04A70u) goto L_08B04A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04A70:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B04A98;
      }
      goto L_08B04A7C;
    }
L_08B04A7C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B04A98;
      }
      goto L_08B04A8C;
    }
L_08B04A8C:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08B04A98;
L_08B04A98:
    aot_gpr_31 = (0x08B04AA0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 58u, 0x08AD0600u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04AA0u) goto L_08B04AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04AA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04B40;
      }
      goto L_08B04AA8;
    }
L_08B04AA8:
    aot_gpr_31 = (0x08B04AB0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0165_entry, 165u, 450u, 0x08A9B980u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04AB0u) goto L_08B04AB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04AB0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(636)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (17274u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
        goto L_08B04AD8;
    }
    goto L_08B04AD8;
L_08B04AD8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(694))))));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B04AECu);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0008_entry, 8u, 108u, 0x08824A0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04AECu) goto L_08B04AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04AEC:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B04B10;
      }
      goto L_08B04AF4;
    }
L_08B04AF4:
    aot_gpr_31 = (0x08B04AFCu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0008_entry, 8u, 108u, 0x08824A0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04AFCu) goto L_08B04AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04AFC:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(692), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(694), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[19] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(692)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 1000 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B04B28;
      }
      goto L_08B04B10;
    }
L_08B04B10:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(692)));
    aot_gpr_5 = (ctx.gpr[20] & 65535u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(692), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[19] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(692)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 1000 ? 1u : 0u);
    goto L_08B04B28;
L_08B04B28:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 1000u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[19] | 0u);
        goto L_08B04B38;
    }
    goto L_08B04B38;
L_08B04B38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(692), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B04B48;
      }
      goto L_08B04B40;
    }
L_08B04B40:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(694), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B04B48;
L_08B04B48:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08B04BB0;
      }
      goto L_08B04B50;
    }
L_08B04B50:
    { const bool branch_taken = aot_gpr_17 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04BB0;
      }
      goto L_08B04B58;
    }
L_08B04B58:
    aot_gpr_31 = (0x08B04B60u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04B60u) goto L_08B04B60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04B60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04BB0;
      }
      goto L_08B04B68;
    }
L_08B04B68:
    aot_gpr_31 = (0x08B04B70u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04B70u) goto L_08B04B70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04B70:
    { const bool branch_taken = aot_gpr_17 != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B04BB0;
      }
      goto L_08B04B78;
    }
L_08B04B78:
    aot_gpr_31 = (0x08B04B80u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04B80u) goto L_08B04B80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04B80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04BB0;
      }
      goto L_08B04B88;
    }
L_08B04B88:
    aot_gpr_31 = (0x08B04B90u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04B90u) goto L_08B04B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04B90:
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_16;
    // nop
      if (branch_taken) {
          goto L_08B04BB0;
      }
      goto L_08B04B98;
    }
L_08B04B98:
    aot_gpr_31 = (0x08B04BA0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04BA0u) goto L_08B04BA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04BA0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 275u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B04BCC;
      }
      goto L_08B04BB0;
    }
L_08B04BB0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(636)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B04BD4;
      }
      goto L_08B04BC4;
    }
L_08B04BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04C54;
      }
      goto L_08B04BCC;
    }
L_08B04BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04BD4;
    }
L_08B04BD4:
    aot_fpr_13 = aot_fpr_12 - aot_fpr_20;
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B04BECu);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 425u, 0x08B0A360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04BECu) goto L_08B04BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04BEC:
    aot_gpr_4 = (17274u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04C04;
    }
L_08B04C04:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(636)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04C18;
    }
L_08B04C18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04C24;
    }
L_08B04C24:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08B04C30u);
    aot_gpr_5 = (0u | 225u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 383u, 0x08B0D94Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04C30u) goto L_08B04C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04C30:
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1840), aot_gpr_17);
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04C38;
    }
L_08B04C38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1840)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04C44;
    }
L_08B04C44:
    aot_gpr_31 = (0x08B04C4Cu);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(1840));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04C4Cu) goto L_08B04C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04C54;
    }
L_08B04C54:
    aot_gpr_4 = (0u | 44u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08B04C8C;
      }
      goto L_08B04C60;
    }
L_08B04C60:
    aot_gpr_4 = (0u | 32u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B04C8C;
      }
      goto L_08B04C6C;
    }
L_08B04C6C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[21];
    aot_gpr_4 = (0u | 12u);
      if (branch_taken) {
          goto L_08B04C8C;
      }
      goto L_08B04C74;
    }
L_08B04C74:
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    aot_gpr_4 = (0u | 17u);
      if (branch_taken) {
          goto L_08B04C8C;
      }
      goto L_08B04C7C;
    }
L_08B04C7C:
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    aot_gpr_4 = (0u | 15u);
      if (branch_taken) {
          goto L_08B04C8C;
      }
      goto L_08B04C84;
    }
L_08B04C84:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B04CC4;
      }
      goto L_08B04C8C;
    }
L_08B04C8C:
    aot_gpr_31 = (0x08B04C94u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04C94u) goto L_08B04C94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04C94:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 2047u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(668), aot_gpr_17);
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04CAC;
    }
L_08B04CAC:
    { const bool branch_taken = aot_gpr_17 == 0u;
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(668));
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04CB4;
    }
L_08B04CB4:
    aot_gpr_31 = (0x08B04CBCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04CBCu) goto L_08B04CBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04CE4;
      }
      goto L_08B04CC4;
    }
L_08B04CC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(328));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B04CE4u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04CE4u) goto L_08B04CE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04CE4:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      aot_gpr_17 = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04D14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1280));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1240), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1244), aot_gpr_17);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], ctx.gpr[21]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1252), aot_run_words); }
    ctx.gpr[19] = (ctx.gpr[6] & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[21] = (0u | 16u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_17 = (aot_gpr_5 | 0u);
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1216), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1248), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1264), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B05D7C;
      }
      goto L_08B04D74;
    }
L_08B04D74:
    aot_gpr_31 = (0x08B04D7Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04D7Cu) goto L_08B04D7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04D7C:
    aot_gpr_4 = (16076u << 16u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (16128u << 16u);
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[22] = (0u | 6u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[30] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B04FA4;
      }
      goto L_08B04DAC;
    }
L_08B04DAC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04E20;
      }
      goto L_08B04DB4;
    }
L_08B04DB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04FA4;
      }
      goto L_08B04DC0;
    }
L_08B04DC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04DE4;
      }
      goto L_08B04DD0;
    }
L_08B04DD0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B04DDCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04DDCu) goto L_08B04DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04FA4;
      }
      goto L_08B04DE4;
    }
L_08B04DE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B04E08;
      }
      goto L_08B04DF0;
    }
L_08B04DF0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 18u);
    aot_gpr_31 = (0x08B04E00u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04E00u) goto L_08B04E00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04FA4;
      }
      goto L_08B04E08;
    }
L_08B04E08:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 17u);
    aot_gpr_31 = (0x08B04E18u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04E18u) goto L_08B04E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04FA4;
      }
      goto L_08B04E20;
    }
L_08B04E20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1364)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(22))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(23))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04EBC;
      }
      goto L_08B04E38;
    }
L_08B04E38:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2276)));
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B04EBC;
      }
      goto L_08B04E48;
    }
L_08B04E48:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B04EBC;
      }
      goto L_08B04E58;
    }
L_08B04E58:
    aot_gpr_31 = (0x08B04E60u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04E60u) goto L_08B04E60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04E60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1156)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B04EBC;
      }
      goto L_08B04E70;
    }
L_08B04E70:
    aot_gpr_31 = (0x08B04E78u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04E78u) goto L_08B04E78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04E78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04EBC;
      }
      goto L_08B04E80;
    }
L_08B04E80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04EA4;
      }
      goto L_08B04E8C;
    }
L_08B04E8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(464)));
    aot_gpr_5 = (8u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(464), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1372), aot_gpr_16);
      if (branch_taken) {
          goto L_08B04FA4;
      }
      goto L_08B04EA4;
    }
L_08B04EA4:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B04EB4u);
    aot_gpr_5 = (0u | 18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04EB4u) goto L_08B04EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04FA4;
      }
      goto L_08B04EBC;
    }
L_08B04EBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1364)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(22))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(23))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04F1C;
      }
      goto L_08B04ED4;
    }
L_08B04ED4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2276)));
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B04F1C;
      }
      goto L_08B04EE4;
    }
L_08B04EE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B04F1C;
      }
      goto L_08B04EF4;
    }
L_08B04EF4:
    aot_gpr_31 = (0x08B04EFCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04EFCu) goto L_08B04EFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04EFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04F1C;
      }
      goto L_08B04F04;
    }
L_08B04F04:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B04F14u);
    aot_gpr_5 = (0u | 18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04F14u) goto L_08B04F14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04FA4;
      }
      goto L_08B04F1C;
    }
L_08B04F1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1364)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(22))))));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(23))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04FA4;
      }
      goto L_08B04F34;
    }
L_08B04F34:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2276)));
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B04FA4;
      }
      goto L_08B04F44;
    }
L_08B04F44:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B04FA4;
      }
      goto L_08B04F54;
    }
L_08B04F54:
    aot_gpr_31 = (0x08B04F5Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04F5Cu) goto L_08B04F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04F5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04FA4;
      }
      goto L_08B04F64;
    }
L_08B04F64:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B04F70u);
    aot_gpr_5 = (0u | 47u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04F70u) goto L_08B04F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04F70:
    aot_gpr_31 = (0x08B04F78u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04F78u) goto L_08B04F78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04F78:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1864)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B04F8Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04F8Cu) goto L_08B04F8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04F8C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B04FA4;
L_08B04FA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04FF8;
      }
      goto L_08B04FC0;
    }
L_08B04FC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_gpr_31 = (0x08B04FCCu);
    aot_gpr_5 = (0u | 8192u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04FCCu) goto L_08B04FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04FCC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B04FF8;
      }
      goto L_08B04FD8;
    }
L_08B04FD8:
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (0u | 8192u);
    ctx.gpr[6] = (ctx.gpr[6] | 4u);
    aot_gpr_31 = (0x08B04FECu);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0026_entry, 26u, 217u, 0x0886D53Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B04FECu) goto L_08B04FEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B04FEC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B04FD8;
      }
      goto L_08B04FF8;
    }
L_08B04FF8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B05004u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05004u) goto L_08B05004;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05004:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B0501C;
    }
    goto L_08B05010;
L_08B05010:
    aot_gpr_31 = (0x08B05018u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05018u) goto L_08B05018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05018:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B0501C;
L_08B0501C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (17096u << 16u);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(776)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_31 = (0x08B05034u);
    ctx.gpr[7] = (0u | 6u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05034u) goto L_08B05034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05034:
    aot_gpr_4 = (0u | 10u);
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B05048u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0072_entry, 72u, 588u, 0x089266D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05048u) goto L_08B05048;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05048:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B05054u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05054u) goto L_08B05054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05054:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B05060u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05060u) goto L_08B05060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05060:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B050D8;
      }
      goto L_08B05074;
    }
L_08B05074:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (16457u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B050B0;
      }
      goto L_08B05098;
    }
L_08B05098:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B050B0;
      }
      goto L_08B050A8;
    }
L_08B050A8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = aot_fpr_20 + ctx.fpr[22];
      if (branch_taken) {
          goto L_08B050BC;
      }
      goto L_08B050B0;
    }
L_08B050B0:
    aot_gpr_31 = (0x08B050B8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B050B8u) goto L_08B050B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B050B8:
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[22];
    goto L_08B050BC;
L_08B050BC:
    aot_gpr_31 = (0x08B050C4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B050C4u) goto L_08B050C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B050C4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B050D0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B050D0u) goto L_08B050D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B050D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0511C;
      }
      goto L_08B050D8;
    }
L_08B050D8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B05108;
      }
      goto L_08B050F0;
    }
L_08B050F0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B05108;
      }
      goto L_08B05100;
    }
L_08B05100:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08B05114;
      }
      goto L_08B05108;
    }
L_08B05108:
    aot_gpr_31 = (0x08B05110u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05110u) goto L_08B05110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05110:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B05114;
L_08B05114:
    aot_gpr_31 = (0x08B0511Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0511Cu) goto L_08B0511C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0511C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(208)));
    ctx.fpr[22] = ctx.fpr[22] / aot_fpr_12;
    aot_gpr_4 = (aot_gpr_17 < static_cast<std::uint32_t>(49) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05540;
      }
      goto L_08B05134;
    }
L_08B05134:
    aot_gpr_17 = (aot_gpr_17 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_17);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30832)));
    jump_target = ctx.gpr[1];
    aot_gpr_17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_17) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0514C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B05164u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05164u) goto L_08B05164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05164:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1752)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(268)));
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(288)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(292)));
    aot_gpr_4 = (16448u << 16u);
    aot_gpr_5 = (16608u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_gpr_31 = (0x08B05198u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05198u) goto L_08B05198;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05198:
    ctx.fpr[16] = ctx.fpr[22] - ctx.fpr[30];
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_31 = (0x08B051B4u);
    aot_fpr_14 = ctx.fpr[30] + aot_fpr_14;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B051B4u) goto L_08B051B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B051B4:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2116), aot_gpr_16);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1200)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1204)));
      if (branch_taken) {
          goto L_08B051E0;
      }
      goto L_08B051C8;
    }
L_08B051C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B05210;
      }
      goto L_08B051D0;
    }
L_08B051D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_08B051FC;
      }
      goto L_08B051D8;
    }
L_08B051D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 30u);
      if (branch_taken) {
          goto L_08B05210;
      }
      goto L_08B051E0;
    }
L_08B051E0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B05204;
      }
      goto L_08B051EC;
    }
L_08B051EC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0520C;
      }
      goto L_08B051F4;
    }
L_08B051F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05210;
      }
      goto L_08B051FC;
    }
L_08B051FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 27u);
      if (branch_taken) {
          goto L_08B05210;
      }
      goto L_08B05204;
    }
L_08B05204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 121u);
      if (branch_taken) {
          goto L_08B05210;
      }
      goto L_08B0520C;
    }
L_08B0520C:
    ctx.gpr[21] = (0u | 26u);
    goto L_08B05210;
L_08B05210:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08B0522C;
      }
      goto L_08B0521C;
    }
L_08B0521C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B05244;
      }
      goto L_08B0522C;
    }
L_08B0522C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(1493)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05244;
      }
      goto L_08B05238;
    }
L_08B05238:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (aot_gpr_4 | 1024u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(468), aot_gpr_4);
    goto L_08B05244;
L_08B05244:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B05258;
      }
      goto L_08B05254;
    }
L_08B05254:
    ctx.gpr[21] = (0u | 26u);
    goto L_08B05258;
L_08B05258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B058A4;
      }
      goto L_08B05260;
    }
L_08B05260:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B052A8;
      }
      goto L_08B05268;
    }
L_08B05268:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_08B05294;
      }
      goto L_08B05270;
    }
L_08B05270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 30u);
      if (branch_taken) {
          goto L_08B052A8;
      }
      goto L_08B05278;
    }
L_08B05278:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B0529C;
      }
      goto L_08B05284;
    }
L_08B05284:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B052A4;
      }
      goto L_08B0528C;
    }
L_08B0528C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B052A8;
      }
      goto L_08B05294;
    }
L_08B05294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 27u);
      if (branch_taken) {
          goto L_08B052A8;
      }
      goto L_08B0529C;
    }
L_08B0529C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 28u);
      if (branch_taken) {
          goto L_08B052A8;
      }
      goto L_08B052A4;
    }
L_08B052A4:
    ctx.gpr[21] = (0u | 26u);
    goto L_08B052A8;
L_08B052A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(468)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_5 | 1024u);
    aot_gpr_31 = (0x08B052BCu);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(468), aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B052BCu) goto L_08B052BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B052BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B052D0;
      }
      goto L_08B052C4;
    }
L_08B052C4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B052D0u);
    aot_gpr_5 = (0u | 103u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B052D0u) goto L_08B052D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B052D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B058A4;
      }
      goto L_08B052D8;
    }
L_08B052D8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B052F0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(320));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B052F0u) goto L_08B052F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B052F0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1752)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(268)));
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(288)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(292)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1844)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1848)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_gpr_31 = (0x08B0531Cu);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0531Cu) goto L_08B0531C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0531C:
    ctx.fpr[16] = ctx.fpr[22] - ctx.fpr[30];
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_31 = (0x08B05338u);
    aot_fpr_14 = ctx.fpr[30] + aot_fpr_14;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05338u) goto L_08B05338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05338:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2116), aot_gpr_16);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1204)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1200)));
      if (branch_taken) {
          goto L_08B05278;
      }
      goto L_08B0534C;
    }
L_08B0534C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05260;
      }
      goto L_08B05354;
    }
L_08B05354:
    ctx.gpr[21] = (0u | 173u);
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
    aot_gpr_31 = (0x08B05364u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05364u) goto L_08B05364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05364:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2116), aot_gpr_16);
      if (branch_taken) {
          goto L_08B058A4;
      }
      goto L_08B0536C;
    }
L_08B0536C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1208), aot_gpr_17);
    ctx.gpr[21] = (0u | 139u);
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B053A8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B053A8u) goto L_08B053A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B053A8:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2116), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1212), aot_gpr_16);
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11020)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11056)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11024)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11060)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_14 = ctx.fpr[15] + ctx.fpr[16];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11028)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(11064)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B0541Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0541Cu) goto L_08B0541C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0541C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_17 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1876)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1872)));
    ctx.gpr[7] = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B05438u);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05438u) goto L_08B05438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05438:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_16);
    ctx.gpr[7] = (ctx.gpr[6] < aot_gpr_16 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_17);
    aot_gpr_4 = (ctx.gpr[6] | 0u);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(131), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 164u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B05488u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05488u) goto L_08B05488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05488:
    aot_gpr_4 = (16396u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(320));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
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
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(144), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_31 = (0x08B054ECu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B054ECu) goto L_08B054EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B054EC:
    aot_gpr_17 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1208)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1212)));
      if (branch_taken) {
          goto L_08B05500;
      }
      goto L_08B054F8;
    }
L_08B054F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B05500;
L_08B05500:
    aot_gpr_4 = (15820u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    aot_gpr_4 = (0u | 8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 200u);
    aot_gpr_31 = (0x08B05538u);
    ctx.gpr[9] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0079_entry, 79u, 352u, 0x089421CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05538u) goto L_08B05538;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B058A4;
      }
      goto L_08B05540;
    }
L_08B05540:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B05558;
      }
      goto L_08B05548;
    }
L_08B05548:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B058A4;
      }
      goto L_08B05550;
    }
L_08B05550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05570;
      }
      goto L_08B05558;
    }
L_08B05558:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B05634;
      }
      goto L_08B05560;
    }
L_08B05560:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05760;
      }
      goto L_08B05568;
    }
L_08B05568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B058A4;
      }
      goto L_08B05570;
    }
L_08B05570:
    ctx.gpr[21] = (0u | 121u);
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B05590u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05590u) goto L_08B05590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05590:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
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
    aot_gpr_4 = (15800u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20972u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B0562C;
      }
      goto L_08B055C0;
    }
L_08B055C0:
    aot_gpr_4 = (49344u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B0562Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0562Cu) goto L_08B0562C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0562C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2116), aot_gpr_16);
      if (branch_taken) {
          goto L_08B058A4;
      }
      goto L_08B05634;
    }
L_08B05634:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
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
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (15800u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 20972u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B056F4;
      }
      goto L_08B05664;
    }
L_08B05664:
    ctx.gpr[21] = (0u | 29u);
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B05698u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05698u) goto L_08B05698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05698:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    aot_gpr_4 = (16576u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B056B0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 584u, 0x08AFE9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B056B0u) goto L_08B056B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B056B0:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B056C8u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 584u, 0x08AFE9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B056C8u) goto L_08B056C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B056C8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B056D8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 582u, 0x08AFE980u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B056D8u) goto L_08B056D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B056D8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(240), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B056ECu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B056ECu) goto L_08B056EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B056EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05758;
      }
      goto L_08B056F4;
    }
L_08B056F4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (0u | 26u);
    aot_gpr_31 = (0x08B05704u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05704u) goto L_08B05704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05704:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (16640u << 16u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_31 = (0x08B0571Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 584u, 0x08AFE9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0571Cu) goto L_08B0571C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0571C:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    ctx.gpr[6] = (16512u << 16u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_31 = (0x08B05734u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 584u, 0x08AFE9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05734u) goto L_08B05734;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05734:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B05744u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 582u, 0x08AFE980u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05744u) goto L_08B05744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05744:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(288), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B05758u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05758u) goto L_08B05758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B058A4;
      }
      goto L_08B05760;
    }
L_08B05760:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
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
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (15800u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 20972u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B05830;
      }
      goto L_08B05790;
    }
L_08B05790:
    ctx.gpr[21] = (0u | 31u);
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B057C4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B057C4u) goto L_08B057C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B057C4:
    aot_gpr_4 = (49344u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16544u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(368));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(336), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B05828u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05828u) goto L_08B05828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B058A4;
      }
      goto L_08B05830;
    }
L_08B05830:
    ctx.gpr[21] = (0u | 27u);
    aot_gpr_31 = (0x08B0583Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0583Cu) goto L_08B0583C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0583C:
    aot_gpr_4 = (49408u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16512u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(416));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(384), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B058A4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B058A4u) goto L_08B058A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B058A4:
    aot_gpr_4 = (0u | 46u);
    { const bool branch_taken = aot_gpr_17 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B05928;
      }
      goto L_08B058B0;
    }
L_08B058B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 | 4096u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 256u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(236), aot_gpr_4);
    aot_gpr_5 = (1024u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(236), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B05908;
    }
    goto L_08B058FC;
L_08B058FC:
    aot_gpr_31 = (0x08B05904u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05904u) goto L_08B05904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05904:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B05908;
L_08B05908:
    ctx.gpr[8] = (16512u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (0u | 0u);
    aot_gpr_31 = (0x08B05920u);
    ctx.gpr[7] = (0u | 139u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05920u) goto L_08B05920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0598C;
      }
      goto L_08B05928;
    }
L_08B05928:
    { const bool branch_taken = aot_gpr_17 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0598C;
      }
      goto L_08B05930;
    }
L_08B05930:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1252)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B05960;
      }
      goto L_08B05944;
    }
L_08B05944:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 1000u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B05958u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05958u) goto L_08B05958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0597C;
      }
      goto L_08B05960;
    }
L_08B05960:
    ctx.gpr[7] = (16512u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B0597Cu);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0597Cu) goto L_08B0597C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0597C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08B0598C;
L_08B0598C:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x08B059F4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B059F4u) goto L_08B059F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B059F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05A78;
      }
      goto L_08B05A00;
    }
L_08B05A00:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_run_words); }
    aot_gpr_4 = (16204u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(464));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x08B05A74u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05A74u) goto L_08B05A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05A74:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_08B05A78;
L_08B05A78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05B24;
      }
      goto L_08B05A84;
    }
L_08B05A84:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(320));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(544), aot_run_words); }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(544));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(528));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x08B05B20u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05B20u) goto L_08B05B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05B20:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_08B05B24;
L_08B05B24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05BDC;
      }
      goto L_08B05B30;
    }
L_08B05B30:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + static_cast<std::uint32_t>(320));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(624), aot_run_words); }
    aot_gpr_5 = (16204u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(624));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(608));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(560));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x08B05BD8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05BD8u) goto L_08B05BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05BD8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_08B05BDC;
L_08B05BDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05CC8;
      }
      goto L_08B05BE8;
    }
L_08B05BE8:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(672));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(680)));
    aot_gpr_5 = (16384u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(640));
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    aot_gpr_31 = (0x08B05C34u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05C34u) goto L_08B05C34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05C34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B05C84;
      }
      goto L_08B05C3C;
    }
L_08B05C3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05C58;
      }
      goto L_08B05C48;
    }
L_08B05C48:
    aot_gpr_31 = (0x08B05C50u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05C50u) goto L_08B05C50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05C50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08B05CA4;
      }
      goto L_08B05C58;
    }
L_08B05C58:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B05C64u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05C64u) goto L_08B05C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05C64:
    aot_gpr_31 = (0x08B05C6Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05C6Cu) goto L_08B05C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05C6C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B05C78u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05C78u) goto L_08B05C78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05C78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08B05CA4;
      }
      goto L_08B05C80;
    }
L_08B05C80:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    goto L_08B05C84;
L_08B05C84:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[18] + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    goto L_08B05CA4;
L_08B05CA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2116), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 | 1024u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(468), aot_gpr_4);
    aot_gpr_4 = (8192u << 16u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(464), aot_gpr_4);
      if (branch_taken) {
          goto L_08B05D70;
      }
      goto L_08B05CC8;
    }
L_08B05CC8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (16294u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(704));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(688));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16153u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x08B05D2Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05D2Cu) goto L_08B05D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05D2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05D70;
      }
      goto L_08B05D34;
    }
L_08B05D34:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(736), aot_run_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(736));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(720));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(720), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(ctx.gpr[18] + static_cast<std::uint32_t>(48), aot_run_words); }
    goto L_08B05D70;
L_08B05D70:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B05D7Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05D7Cu) goto L_08B05D7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05D7C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1216), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      aot_gpr_17 = aot_run_words[7];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(1280));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05DC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B05DE4u);
    aot_gpr_17 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 559u, 0x08B021B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05DE4u) goto L_08B05DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05DE4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(565)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B05DF4;
    }
L_08B05DF4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B05E00u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05E00u) goto L_08B05E00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05E00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05F44;
      }
      goto L_08B05E08;
    }
L_08B05E08:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(563)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05F44;
      }
      goto L_08B05E18;
    }
L_08B05E18:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(564)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05F44;
      }
      goto L_08B05E28;
    }
L_08B05E28:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 11u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B05E48u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05E48u) goto L_08B05E48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05E48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B05F44;
      }
      goto L_08B05E50;
    }
L_08B05E50:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B05E5Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05E5Cu) goto L_08B05E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05E5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05EBC;
      }
      goto L_08B05E64;
    }
L_08B05E64:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(563)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B05EBC;
      }
      goto L_08B05E74;
    }
L_08B05E74:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B05E80u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05E80u) goto L_08B05E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05E80:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08B05E90u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05E90u) goto L_08B05E90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05E90:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08B05EA0u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05EA0u) goto L_08B05EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05EA0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B05EACu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05EACu) goto L_08B05EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05EAC:
    aot_gpr_4 = (0u | 9u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 1u);
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B05EBC;
    }
L_08B05EBC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B05EC8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05EC8u) goto L_08B05EC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05EC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B05ED0;
    }
L_08B05ED0:
    aot_gpr_31 = (0x08B05ED8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05ED8u) goto L_08B05ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05ED8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B05EEC;
    }
L_08B05EEC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(563)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B05EFC;
    }
L_08B05EFC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B05F08u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05F08u) goto L_08B05F08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05F08:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B05F18u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05F18u) goto L_08B05F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05F18:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08B05F28u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05F28u) goto L_08B05F28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05F28:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B05F34u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05F34u) goto L_08B05F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05F34:
    aot_gpr_4 = (0u | 8u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 1u);
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B05F44;
    }
L_08B05F44:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B05F50u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05F50u) goto L_08B05F50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05F50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06094;
      }
      goto L_08B05F58;
    }
L_08B05F58:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(563)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06094;
      }
      goto L_08B05F68;
    }
L_08B05F68:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(564)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06094;
      }
      goto L_08B05F78;
    }
L_08B05F78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 9u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B05F98u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05F98u) goto L_08B05F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05F98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06094;
      }
      goto L_08B05FA0;
    }
L_08B05FA0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B05FACu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05FACu) goto L_08B05FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05FAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0600C;
      }
      goto L_08B05FB4;
    }
L_08B05FB4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(563)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0600C;
      }
      goto L_08B05FC4;
    }
L_08B05FC4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B05FD0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05FD0u) goto L_08B05FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05FD0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08B05FE0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05FE0u) goto L_08B05FE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05FE0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08B05FF0u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05FF0u) goto L_08B05FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05FF0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B05FFCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B05FFCu) goto L_08B05FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B05FFC:
    aot_gpr_4 = (0u | 11u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 1u);
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B0600C;
    }
L_08B0600C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B06018u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06018u) goto L_08B06018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06018:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B06020;
    }
L_08B06020:
    aot_gpr_31 = (0x08B06028u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06028u) goto L_08B06028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06028:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (1u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B0603C;
    }
L_08B0603C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(563)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B0604C;
    }
L_08B0604C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B06058u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06058u) goto L_08B06058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06058:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B06068u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06068u) goto L_08B06068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06068:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08B06078u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06078u) goto L_08B06078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06078:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B06084u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06084u) goto L_08B06084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06084:
    aot_gpr_4 = (0u | 8u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 1u);
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B06094;
    }
L_08B06094:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B060A0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B060A0u) goto L_08B060A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B060A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B060A8;
    }
L_08B060A8:
    aot_gpr_31 = (0x08B060B0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B060B0u) goto L_08B060B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B060B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(468)));
    aot_gpr_5 = (2u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B060C4;
    }
L_08B060C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(563)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B060D4;
    }
L_08B060D4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(564)));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B060E4;
    }
L_08B060E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_16 + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B06104u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06104u) goto L_08B06104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06104:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B0610C;
    }
L_08B0610C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B06118u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06118u) goto L_08B06118;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06118:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06178;
      }
      goto L_08B06120;
    }
L_08B06120:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(563)));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06178;
      }
      goto L_08B06130;
    }
L_08B06130:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0613Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0613Cu) goto L_08B0613C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0613C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08B0614Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0614Cu) goto L_08B0614C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0614C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B0615Cu);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0615Cu) goto L_08B0615C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0615C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B06168u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06168u) goto L_08B06168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06168:
    aot_gpr_4 = (0u | 11u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_17 = (0u | 1u);
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B06178;
    }
L_08B06178:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B06184u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06184u) goto L_08B06184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06184:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B0618C;
    }
L_08B0618C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(563)));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B061E0;
      }
      goto L_08B0619C;
    }
L_08B0619C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B061A8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B061A8u) goto L_08B061A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B061A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08B061B8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B061B8u) goto L_08B061B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B061B8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B061C8u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B061C8u) goto L_08B061C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B061C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B061D4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B061D4u) goto L_08B061D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B061D4:
    aot_gpr_4 = (0u | 9u);
    aot_mem.aot_direct_store16(ctx.gpr[2] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_17 = (0u | 1u);
    goto L_08B061E0;
L_08B061E0:
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
L_08B061F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1728));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(356)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1664), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1676), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1688), aot_gpr_17);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1716), ctx.gpr[30]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1620), std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_17 = (aot_gpr_4 | 0u);
    ctx.gpr[30] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1660), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1668), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1672), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1680), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1684), aot_gpr_16);
    { const std::uint32_t aot_run_words[6]{ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1692), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1720), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1616), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B062B0;
      }
      goto L_08B0625C;
    }
L_08B0625C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B062A8;
      }
      goto L_08B06274;
    }
L_08B06274:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_16 = (aot_gpr_17 + static_cast<std::uint32_t>(320));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1636), aot_gpr_5);
      if (branch_taken) {
          goto L_08B062B8;
      }
      goto L_08B062A0;
    }
L_08B062A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B062E0;
      }
      goto L_08B062A8;
    }
L_08B062A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 235u, 0x08B08D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B062B0;
    }
L_08B062B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 235u, 0x08B08D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B062B8;
    }
L_08B062B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B062E0;
      }
      goto L_08B062C4;
    }
L_08B062C4:
    aot_gpr_31 = (0x08B062CCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(900)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B062CCu) goto L_08B062CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B062CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B062E0;
      }
      goto L_08B062D4;
    }
L_08B062D4:
    aot_gpr_31 = (0x08B062DCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B062DCu) goto L_08B062DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B062DC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_08B062E0;
L_08B062E0:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (0u | 2u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1628), aot_gpr_16);
        goto L_08B0632C;
    }
    goto L_08B062FC;
L_08B062FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10384));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B06328u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06328u) goto L_08B06328;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06328:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1628), aot_gpr_16);
    goto L_08B0632C;
L_08B0632C:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08B06338u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06338u) goto L_08B06338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06338:
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[30] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 153u, 0x08B08844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B06360;
    }
L_08B06360:
    ctx.gpr[30] = (ctx.gpr[30] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[30]);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31032)));
    jump_target = ctx.gpr[1];
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06378:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    ctx.fpr[22] = aot_fpr_13 / aot_fpr_12;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B063F8u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B063F8u) goto L_08B063F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B063F8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1892)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1888)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B0640Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0640Cu) goto L_08B0640C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0640C:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B0641Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0641Cu) goto L_08B0641C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0641C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1900)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1896)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B06430u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06430u) goto L_08B06430;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06430:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B06444u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06444u) goto L_08B06444;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06444:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B06454u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06454u) goto L_08B06454;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06454:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B06468u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06468u) goto L_08B06468;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06468:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B06478u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(212)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06478u) goto L_08B06478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06478:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B0648Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0648Cu) goto L_08B0648C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0648C:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B0649Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0649Cu) goto L_08B0649C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0649C:
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B064B0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B064B0u) goto L_08B064B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B064B0:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B064BCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B064BCu) goto L_08B064BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B064BC:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (49280u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_run_words);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[16] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[17] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B0650Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0650Cu) goto L_08B0650C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0650C:
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B06560u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06560u) goto L_08B06560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06560:
    aot_gpr_4 = (16384u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_17 + static_cast<std::uint32_t>(32));
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
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_run_words);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[16] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[17] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B065A4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B065A4u) goto L_08B065A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B065A4:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fpr[26] = aot_fpr_12 / ctx.fpr[26];
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B065FC;
      }
      goto L_08B065E0;
    }
L_08B065E0:
    aot_gpr_31 = (0x08B065E8u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B065E8u) goto L_08B065E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B065E8:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_gpr_4 = (48128u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08B065FC;
L_08B065FC:
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (14979u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (15107u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(212)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_run_words);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[16] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[17] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B06670u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06670u) goto L_08B06670;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06670:
    aot_gpr_31 = (0x08B06678u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06678u) goto L_08B06678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06678:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1908)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1904)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B0668Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0668Cu) goto L_08B0668C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0668C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1916)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1912)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B066A0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B066A0u) goto L_08B066A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B066A0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1920)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B066B4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B066B4u) goto L_08B066B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B066B4:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B066C4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B066C4u) goto L_08B066C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B066C4:
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B066D8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B066D8u) goto L_08B066D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B066D8:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B066E8u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B066E8u) goto L_08B066E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B066E8:
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B066FCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B066FCu) goto L_08B066FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B066FC:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B0670Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0670Cu) goto L_08B0670C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0670C:
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B06720u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06720u) goto L_08B06720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06720:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B0672Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0672Cu) goto L_08B0672C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0672C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (15363u << 16u);
      if (branch_taken) {
          goto L_08B06758;
      }
      goto L_08B06740;
    }
L_08B06740:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 192u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B067F4;
      }
      goto L_08B06754;
    }
L_08B06754:
    aot_gpr_4 = (15363u << 16u);
    goto L_08B06758;
L_08B06758:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B067F4;
      }
      goto L_08B06780;
    }
L_08B06780:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B06794u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B01D24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06794u) goto L_08B06794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06794:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B067F4;
      }
      goto L_08B067A4;
    }
L_08B067A4:
    aot_gpr_31 = (0x08B067ACu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B067ACu) goto L_08B067AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B067AC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1932)));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1928)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B067C0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B067C0u) goto L_08B067C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B067C0:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B067D0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B067D0u) goto L_08B067D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B067D0:
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B067E4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B067E4u) goto L_08B067E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B067E4:
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08B067F0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B067F0u) goto L_08B067F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B067F0:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B067F4;
L_08B067F4:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B06854u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06854u) goto L_08B06854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06854:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(208), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(192), aot_run_words);
      ctx.fpr[15] = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[16] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[17] = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B06874u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06874u) goto L_08B06874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06874:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_gpr_5);
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 21u>();
    ctx.execute_vfpu_vec3_ct<0u, 32u, 64u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<32u, 0u, 1u, 20u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<32u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(116)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 153u, 0x08B08844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B068BC;
    }
L_08B068BC:
    aot_gpr_4 = (50716u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16374u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_gpr_17 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (48969u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[28]) || std::isnan(aot_fpr_12)) && ctx.fpr[28] == aot_fpr_12)) ? 0x00800000u : 0u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    aot_gpr_4 = (16201u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(352));
      if (branch_taken) {
          goto L_08B06920;
      }
      goto L_08B068FC;
    }
L_08B068FC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08B06920;
      }
      goto L_08B06904;
    }
L_08B06904:
    aot_gpr_31 = (0x08B0690Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0690Cu) goto L_08B0690C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0690C:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_gpr_4 = (15360u << 16u);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    goto L_08B06920;
L_08B06920:
    aot_gpr_4 = (50716u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1616)));
    aot_gpr_4 = (aot_gpr_4 | 16374u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B069A0;
      }
      goto L_08B06940;
    }
L_08B06940:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08B069A0;
      }
      goto L_08B06948;
    }
L_08B06948:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B0696C;
      }
      goto L_08B0695C;
    }
L_08B0695C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B0696C;
L_08B0696C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(636)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B069A0;
      }
      goto L_08B06984;
    }
L_08B06984:
    aot_gpr_31 = (0x08B0698Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0698Cu) goto L_08B0698C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0698C:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_gpr_4 = (15360u << 16u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08B069A0;
L_08B069A0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[24])) && aot_fpr_12 == ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1616), std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B069CC;
    }
    goto L_08B069B0;
L_08B069B0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[28]) || std::isnan(ctx.fpr[24])) && ctx.fpr[28] == ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1616), std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B069CC;
    }
    goto L_08B069C0;
L_08B069C0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1616), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08B069D8;
      }
      goto L_08B069CC;
    }
L_08B069CC:
    aot_gpr_31 = (0x08B069D4u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B069D4u) goto L_08B069D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B069D4:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B069D8;
L_08B069D8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[26])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08B06A20;
      }
      goto L_08B069E8;
    }
L_08B069E8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06A20;
      }
      goto L_08B069F8;
    }
L_08B069F8:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[30] / aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06B68;
      }
      goto L_08B06A20;
    }
L_08B06A20:
    aot_gpr_4 = (16406u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_20)) ? 0x00800000u : 0u);
    aot_gpr_4 = (aot_gpr_4 | 52196u);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B06A7C;
      }
      goto L_08B06A34;
    }
L_08B06A34:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06A7C;
      }
      goto L_08B06A44;
    }
L_08B06A44:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[30] / aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06B68;
      }
      goto L_08B06A7C;
    }
L_08B06A7C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06AC4;
      }
      goto L_08B06A8C;
    }
L_08B06A8C:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[30] / aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06B68;
      }
      goto L_08B06AC4;
    }
L_08B06AC4:
    aot_gpr_4 = (49174u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52196u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06B18;
      }
      goto L_08B06AE0;
    }
L_08B06AE0:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[30] / aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06B68;
      }
      goto L_08B06B18;
    }
L_08B06B18:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06B68;
      }
      goto L_08B06B28;
    }
L_08B06B28:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[26])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06B68;
      }
      goto L_08B06B38;
    }
L_08B06B38:
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[30] / aot_fpr_12;
    goto L_08B06B68;
L_08B06B68:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1616)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1624), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B06BAC;
      }
      goto L_08B06B9C;
    }
L_08B06B9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B06BAC;
L_08B06BAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[30] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B06C94;
      }
      goto L_08B06BF4;
    }
L_08B06BF4:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(432), aot_run_words); }
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(432));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (15363u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4719u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(368), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B06C94u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06C94u) goto L_08B06C94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06C94:
    aot_gpr_4 = (50716u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16374u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[22]) || std::isnan(aot_fpr_12)) && ctx.fpr[22] == aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1628)));
      if (branch_taken) {
          goto L_08B06CE4;
      }
      goto L_08B06CB0;
    }
L_08B06CB0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08B06CE4;
      }
      goto L_08B06CB8;
    }
L_08B06CB8:
    aot_gpr_31 = (0x08B06CC0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06CC0u) goto L_08B06CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06CC0:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B06CCCu);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B06CCCu) goto L_08B06CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B06CCC:
    aot_gpr_4 = (ctx.gpr[22] - ctx.gpr[2]);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17279u << 16u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = ctx.fpr[22] / aot_fpr_13;
    goto L_08B06CE4;
L_08B06CE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(856)));
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[22] = (0u | 5u);
      if (branch_taken) {
          goto L_08B06DB8;
      }
      goto L_08B06CF4;
    }
L_08B06CF4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B06D18;
      }
      goto L_08B06D08;
    }
L_08B06D08:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[6]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    goto L_08B06D18;
L_08B06D18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(636)));
    aot_gpr_5 = (aot_gpr_5 & 64u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06DBC;
      }
      goto L_08B06D30;
    }
L_08B06D30:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1520)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[30])) && aot_fpr_12 == ctx.fpr[30])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06DBC;
      }
      goto L_08B06D44;
    }
L_08B06D44:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1524)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[30])) && aot_fpr_12 == ctx.fpr[30])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06DBC;
      }
      goto L_08B06D58;
    }
L_08B06D58:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1528)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[30])) && aot_fpr_12 == ctx.fpr[30])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06DBC;
      }
      goto L_08B06D6C;
    }
L_08B06D6C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1532)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[30])) && aot_fpr_12 == ctx.fpr[30])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06DBC;
      }
      goto L_08B06D80;
    }
L_08B06D80:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u | 278u);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B06DB8;
      }
      goto L_08B06D90;
    }
L_08B06D90:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(236)));
    aot_gpr_5 = (aot_gpr_5 & 256u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (15948u << 16u);
      if (branch_taken) {
          goto L_08B06DB8;
      }
      goto L_08B06DA0;
    }
L_08B06DA0:
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06DBC;
      }
      goto L_08B06DB8;
    }
L_08B06DB8:
    aot_gpr_4 = (0u | 1u);
    goto L_08B06DBC;
L_08B06DBC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B06DD4;
      }
      goto L_08B06DC4;
    }
L_08B06DC4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06F14;
      }
      goto L_08B06DD4;
    }
L_08B06DD4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B06DF8;
      }
      goto L_08B06DE8;
    }
L_08B06DE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B06DF8;
L_08B06DF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(636)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
        goto L_08B06E4C;
    }
    goto L_08B06E10;
L_08B06E10:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(236)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B06E3C;
      }
      goto L_08B06E20;
    }
L_08B06E20:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (16384u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08B06E64;
      }
      goto L_08B06E3C;
    }
L_08B06E3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08B06E64;
      }
      goto L_08B06E4C;
    }
L_08B06E4C:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[30];
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08B06E64;
L_08B06E64:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06F88;
      }
      goto L_08B06E74;
    }
L_08B06E74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[30])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06F88;
      }
      goto L_08B06E8C;
    }
L_08B06E8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
        goto L_08B06EE0;
    }
    goto L_08B06EA4;
L_08B06EA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (16166u << 16u);
    aot_fpr_12 = ctx.fpr[26] - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[30] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08B06ED8;
    }
    goto L_08B06ED8;
L_08B06ED8:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08B06F88;
      }
      goto L_08B06EE0;
    }
L_08B06EE0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (16448u << 16u);
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[30] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08B06F0C;
    }
    goto L_08B06F0C;
L_08B06F0C:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08B06F88;
      }
      goto L_08B06F14;
    }
L_08B06F14:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B06F84;
      }
      goto L_08B06F24;
    }
L_08B06F24:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15523u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16632u << 16u);
      if (branch_taken) {
          goto L_08B06F84;
      }
      goto L_08B06F54;
    }
L_08B06F54:
    aot_gpr_4 = (aot_gpr_4 | 20972u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] - aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08B06F74;
    }
    goto L_08B06F74;
L_08B06F74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08B06F88;
      }
      goto L_08B06F84;
    }
L_08B06F84:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08B06F88;
L_08B06F88:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = ctx.gpr[30] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B06FA8;
      }
      goto L_08B06F94;
    }
L_08B06F94:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08B06FC0;
      }
      goto L_08B06FA8;
    }
L_08B06FA8:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08B06FC0;
      }
      goto L_08B06FB0;
    }
L_08B06FB0:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08B06FC0;
L_08B06FC0:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-983));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B07090;
      }
      goto L_08B06FDC;
    }
L_08B06FDC:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(1662)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-11384))))));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_5);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(32));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(512));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(480));
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
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08B07090;
L_08B07090:
    aot_gpr_4 = (15363u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B07110u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07110u) goto L_08B07110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07110:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(272), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_31 = (0x08B0719Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0719Cu) goto L_08B0719C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0719C:
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(304), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1636)));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(144));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1520));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1536), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1536));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1504));
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(1488));
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
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(128));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_17 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B07258;
      }
      goto L_08B07248;
    }
L_08B07248:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B07258;
L_08B07258:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(636)));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B072FC;
      }
      goto L_08B07270;
    }
L_08B07270:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_08B07284;
    }
    goto L_08B07284;
L_08B07284:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B072A8;
      }
      goto L_08B07294;
    }
L_08B07294:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_08B072A8;
    }
    goto L_08B072A8;
L_08B072A8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1624)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) & 0x7FFFFFFFu);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(212)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07350;
      }
      goto L_08B072FC;
    }
L_08B072FC:
    aot_gpr_31 = (0x08B07304u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07304u) goto L_08B07304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1624)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x08B07324u);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 628u, 0x08AFECB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07324u) goto L_08B07324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07324:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[28] + aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08B0734Cu);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 638u, 0x08AFED74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0734Cu) goto L_08B0734C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0734C:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1640)));
    goto L_08B07350;
L_08B07350:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B07364u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 582u, 0x08AFE980u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07364u) goto L_08B07364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07364:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B07374u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 653u, 0x08AFEE60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07374u) goto L_08B07374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07374:
    aot_gpr_31 = (0x08B0737Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0737Cu) goto L_08B0737C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0737C:
    aot_gpr_31 = (0x08B07384u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 639u, 0x08AFED90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07384u) goto L_08B07384;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07384:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B07390u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 637u, 0x08AFED64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07390u) goto L_08B07390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07390:
    aot_gpr_4 = (50716u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1620)));
    aot_gpr_4 = (aot_gpr_4 | 16374u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B073E8;
      }
      goto L_08B073B0;
    }
L_08B073B0:
    aot_gpr_31 = (0x08B073B8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B073B8u) goto L_08B073B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B073B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1624)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(212)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08B073E0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 638u, 0x08AFED74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B073E0u) goto L_08B073E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B073E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07414;
      }
      goto L_08B073E8;
    }
L_08B073E8:
    aot_gpr_31 = (0x08B073F0u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B073F0u) goto L_08B073F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B073F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(212)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08B07414u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 638u, 0x08AFED74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07414u) goto L_08B07414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07414:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1644), ctx.gpr[22]);
    aot_gpr_31 = (0x08B07420u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07420u) goto L_08B07420;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07420:
    aot_gpr_31 = (0x08B07428u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 641u, 0x08AFEDA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07428u) goto L_08B07428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07428:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B07438u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 582u, 0x08AFE980u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07438u) goto L_08B07438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07438:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B07448u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 653u, 0x08AFEE60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07448u) goto L_08B07448;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07448:
    aot_gpr_31 = (0x08B07450u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07450u) goto L_08B07450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07450:
    aot_gpr_31 = (0x08B07458u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 640u, 0x08AFED98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07458u) goto L_08B07458;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07458:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08B07470u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 633u, 0x08AFECFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07470u) goto L_08B07470;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07470:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B07480u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 576u, 0x08AFE8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07480u) goto L_08B07480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07480:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B0748Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 637u, 0x08AFED64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0748Cu) goto L_08B0748C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0748C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_31 = (0x08B07498u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07498u) goto L_08B07498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07498:
    aot_gpr_31 = (0x08B074A0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 641u, 0x08AFEDA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B074A0u) goto L_08B074A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B074A0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1644)));
      if (branch_taken) {
          goto L_08B074E4;
      }
      goto L_08B074B4;
    }
L_08B074B4:
    aot_gpr_31 = (0x08B074BCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B074BCu) goto L_08B074BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B074BC:
    aot_gpr_31 = (0x08B074C4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 639u, 0x08AFED90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B074C4u) goto L_08B074C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B074C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B07520;
      }
      goto L_08B074D8;
    }
L_08B074D8:
    aot_gpr_4 = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B07520;
      }
      goto L_08B074E4;
    }
L_08B074E4:
    aot_gpr_5 = (49024u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B074F8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 638u, 0x08AFED74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B074F8u) goto L_08B074F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B074F8:
    aot_gpr_31 = (0x08B07500u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07500u) goto L_08B07500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07500:
    aot_gpr_31 = (0x08B07508u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 639u, 0x08AFED90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07508u) goto L_08B07508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07508:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B07520;
      }
      goto L_08B0751C;
    }
L_08B0751C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08B07520;
L_08B07520:
    aot_gpr_31 = (0x08B07528u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07528u) goto L_08B07528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07528:
    aot_gpr_31 = (0x08B07530u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 639u, 0x08AFED90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07530u) goto L_08B07530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07530:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B0753Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 580u, 0x08AFE950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0753Cu) goto L_08B0753C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0753C:
    aot_fpr_12 = ctx.fpr[30] - ctx.fpr[0];
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B0754Cu);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0754Cu) goto L_08B0754C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0754C:
    aot_gpr_31 = (0x08B07554u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 640u, 0x08AFED98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07554u) goto L_08B07554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07554:
    aot_gpr_31 = (0x08B0755Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 628u, 0x08AFECB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0755Cu) goto L_08B0755C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0755C:
    aot_fpr_13 = ctx.fpr[30] - ctx.fpr[0];
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B0756Cu);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 930u, 0x08AFFDB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0756Cu) goto L_08B0756C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0756C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B07578u);
    aot_gpr_5 = (0u | 64u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 656u, 0x08AFEF10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07578u) goto L_08B07578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07578:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0758C;
      }
      goto L_08B07580;
    }
L_08B07580:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08B0758C;
L_08B0758C:
    aot_gpr_31 = (0x08B07594u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07594u) goto L_08B07594;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(212)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08B075C0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B075C0u) goto L_08B075C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B075C0:
    aot_gpr_31 = (0x08B075C8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 639u, 0x08AFED90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B075C8u) goto L_08B075C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B075C8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08B075D8u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 584u, 0x08AFE9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B075D8u) goto L_08B075D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B075D8:
    aot_gpr_31 = (0x08B075E0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B075E0u) goto L_08B075E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B075E0:
    aot_gpr_31 = (0x08B075E8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 641u, 0x08AFEDA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B075E8u) goto L_08B075E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B075E8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B075F8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 582u, 0x08AFE980u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B075F8u) goto L_08B075F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B075F8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B07608u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 653u, 0x08AFEE60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07608u) goto L_08B07608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07608:
    aot_gpr_31 = (0x08B07610u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07610u) goto L_08B07610;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07610:
    aot_gpr_31 = (0x08B07618u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 641u, 0x08AFEDA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07618u) goto L_08B07618;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07618:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B07624u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 637u, 0x08AFED64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07624u) goto L_08B07624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07624:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B07634u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 655u, 0x08AFEE90u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07634u) goto L_08B07634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07634:
    aot_gpr_31 = (0x08B0763Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0763Cu) goto L_08B0763C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0763C:
    aot_gpr_31 = (0x08B07644u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 641u, 0x08AFEDA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07644u) goto L_08B07644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07644:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B07650u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 580u, 0x08AFE950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07650u) goto L_08B07650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07650:
    aot_gpr_31 = (0x08B07658u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07658u) goto L_08B07658;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07658:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1632)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_31 = (0x08B07678u);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 628u, 0x08AFECB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07678u) goto L_08B07678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07678:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08B076A0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 638u, 0x08AFED74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B076A0u) goto L_08B076A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B076A0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B076B0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 582u, 0x08AFE980u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B076B0u) goto L_08B076B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B076B0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B076C0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 653u, 0x08AFEE60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B076C0u) goto L_08B076C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B076C0:
    aot_gpr_31 = (0x08B076C8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B076C8u) goto L_08B076C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B076C8:
    aot_gpr_31 = (0x08B076D0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 641u, 0x08AFEDA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B076D0u) goto L_08B076D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B076D0:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08B076DCu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 580u, 0x08AFE950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B076DCu) goto L_08B076DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B076DC:
    aot_gpr_5 = (15395u << 16u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_5 | 55050u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08B076F4u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 636u, 0x08AFED48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B076F4u) goto L_08B076F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B076F4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08B07700u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 631u, 0x08AFECE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07700u) goto L_08B07700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07700:
    aot_fpr_13 = aot_fpr_20 / ctx.fpr[0];
    aot_gpr_31 = (0x08B0770Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 629u, 0x08AFECC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0770Cu) goto L_08B0770C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0770C:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x08B0771Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 631u, 0x08AFECE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0771Cu) goto L_08B0771C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0771C:
    aot_gpr_31 = (0x08B07724u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 625u, 0x08AFEC38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07724u) goto L_08B07724;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07724:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    aot_gpr_31 = (0x08B07730u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 607u, 0x08AFEB40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07730u) goto L_08B07730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07730:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08B07760;
      }
      goto L_08B07738;
    }
L_08B07738:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1724)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B07760;
      }
      goto L_08B0774C;
    }
L_08B0774C:
    aot_gpr_31 = (0x08B07754u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 644u, 0x08AFEDB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07754u) goto L_08B07754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07754:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1944)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(1944), aot_gpr_4);
    goto L_08B07760;
L_08B07760:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_gpr_5 = (15363u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_5 | 4719u);
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[30] != aot_gpr_5;
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B077AC;
      }
      goto L_08B0777C;
    }
L_08B0777C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1880)));
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B077A4;
      }
      goto L_08B07798;
    }
L_08B07798:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1880)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 / ctx.fpr[28];
    goto L_08B077A4;
L_08B077A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B077DC;
      }
      goto L_08B077AC;
    }
L_08B077AC:
    aot_gpr_31 = (0x08B077B4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 607u, 0x08AFEB40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B077B4u) goto L_08B077B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B077B4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08B077DC;
      }
      goto L_08B077BC;
    }
L_08B077BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1988)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[30])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B077DC;
      }
      goto L_08B077D0;
    }
L_08B077D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08B077DC;
L_08B077DC:
    aot_gpr_31 = (0x08B077E4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B077E4u) goto L_08B077E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B077E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_31 = (0x08B07808u);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07808u) goto L_08B07808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07808:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B078A4;
      }
      goto L_08B07824;
    }
L_08B07824:
    aot_gpr_31 = (0x08B0782Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 643u, 0x08AFEDB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0782Cu) goto L_08B0782C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0782C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B0783Cu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B01D24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0783Cu) goto L_08B0783C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0783C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B078A4;
      }
      goto L_08B0784C;
    }
L_08B0784C:
    aot_gpr_31 = (0x08B07854u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07854u) goto L_08B07854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07854:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08B07864u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 643u, 0x08AFEDB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07864u) goto L_08B07864;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07864:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B07874u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B01D24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07874u) goto L_08B07874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07874:
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[0] / aot_fpr_12;
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(532));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(528));
    aot_fpr_12 = ctx.fpr[30] - aot_fpr_12;
    aot_gpr_31 = (0x08B07894u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 589u, 0x08AFEA10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07894u) goto L_08B07894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07894:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08B078A4;
L_08B078A4:
    aot_gpr_31 = (0x08B078ACu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B078ACu) goto L_08B078AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B078AC:
    aot_gpr_31 = (0x08B078B4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 641u, 0x08AFEDA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B078B4u) goto L_08B078B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B078B4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B078C4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 584u, 0x08AFE9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B078C4u) goto L_08B078C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B078C4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B078D0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 637u, 0x08AFED64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B078D0u) goto L_08B078D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B078D0:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B078DCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 651u, 0x08AFEE3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B078DCu) goto L_08B078DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B078DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 153u, 0x08B08844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B078E4;
    }
L_08B078E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_gpr_31 = (0x08B078F0u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(44)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B078F0u) goto L_08B078F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B078F0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B078FCu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 627u, 0x08AFEC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B078FCu) goto L_08B078FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B078FC:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(624));
    aot_gpr_31 = (0x08B0790Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 650u, 0x08AFEE34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0790Cu) goto L_08B0790C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0790C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B07918u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 634u, 0x08AFED10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07918u) goto L_08B07918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07918:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(624)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(628)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(632)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_gpr_17 | 0u);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x08B07948u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(aot_fpr_14));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07948u) goto L_08B07948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07948:
    aot_gpr_5 = (50716u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 16374u);
    aot_gpr_4 = (0u | 8u);
    { const bool branch_taken = ctx.gpr[30] != aot_gpr_4;
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08B07C54;
      }
      goto L_08B0795C;
    }
L_08B0795C:
    aot_gpr_31 = (0x08B07964u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07964u) goto L_08B07964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07964:
    aot_gpr_31 = (0x08B0796Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 640u, 0x08AFED98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B0796Cu) goto L_08B0796C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B0796C:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08B07978u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 580u, 0x08AFE950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07978u) goto L_08B07978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07978:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[26])) && ctx.fpr[22] == ctx.fpr[26])) ? 0x00800000u : 0u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(672));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(688));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(704));
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(736));
      if (branch_taken) {
          goto L_08B079C8;
      }
      goto L_08B07994;
    }
L_08B07994:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08B079C8;
      }
      goto L_08B0799C;
    }
L_08B0799C:
    aot_gpr_31 = (0x08B079A4u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B079A4u) goto L_08B079A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B079A4:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B079B0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B079B0u) goto L_08B079B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B079B0:
    aot_gpr_4 = (aot_gpr_16 - ctx.gpr[2]);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17279u << 16u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = ctx.fpr[22] / aot_fpr_13;
    goto L_08B079C8;
L_08B079C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
        goto L_08B079F0;
    }
    goto L_08B079DC;
L_08B079DC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08B07A0C;
    }
    goto L_08B079EC;
L_08B079EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    goto L_08B079F0;
L_08B079F0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
      if (branch_taken) {
          goto L_08B07A48;
      }
      goto L_08B07A0C;
    }
L_08B07A0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_gpr_5 = (16640u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(752));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(756));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    aot_gpr_31 = (0x08B07A3Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 586u, 0x08AFE9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07A3Cu) goto L_08B07A3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07A3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08B07A48;
L_08B07A48:
    aot_gpr_31 = (0x08B07A50u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07A50u) goto L_08B07A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07A50:
    aot_gpr_31 = (0x08B07A58u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 640u, 0x08AFED98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07A58u) goto L_08B07A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07A58:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B07A68u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07A68u) goto L_08B07A68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07A68:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B07A78u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07A78u) goto L_08B07A78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07A78:
    aot_gpr_31 = (0x08B07A80u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07A80u) goto L_08B07A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07A80:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x08B07A90u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07A90u) goto L_08B07A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07A90:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B07A9Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 651u, 0x08AFEE3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07A9Cu) goto L_08B07A9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07A9C:
    aot_gpr_31 = (0x08B07AA4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07AA4u) goto L_08B07AA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07AA4:
    aot_gpr_31 = (0x08B07AACu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 641u, 0x08AFEDA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07AACu) goto L_08B07AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07AAC:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1720)));
    aot_gpr_31 = (0x08B07ABCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07ABCu) goto L_08B07ABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07ABC:
    aot_gpr_31 = (0x08B07AC4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 640u, 0x08AFED98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07AC4u) goto L_08B07AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07AC4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B07AD4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 584u, 0x08AFE9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07AD4u) goto L_08B07AD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07AD4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B07AE4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 583u, 0x08AFE998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07AE4u) goto L_08B07AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07AE4:
    aot_gpr_31 = (0x08B07AECu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 635u, 0x08AFED20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07AECu) goto L_08B07AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07AEC:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08B07AF8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 580u, 0x08AFE950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07AF8u) goto L_08B07AF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07AF8:
    aot_gpr_4 = (15969u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 18350u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x08B07B10u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 448u, 0x08B01B3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07B10u) goto L_08B07B10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07B10:
    if (ctx.gpr[2] != 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1712)));
        goto L_08B07BD8;
    }
    goto L_08B07B18;
L_08B07B18:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1704)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_16 = (aot_gpr_17 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(768));
    aot_gpr_31 = (0x08B07B38u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(640));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 589u, 0x08AFEA10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07B38u) goto L_08B07B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07B38:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(764), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(764));
    aot_gpr_31 = (0x08B07B48u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(760));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 586u, 0x08AFE9E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07B48u) goto L_08B07B48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07B48:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x08B07B54u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1640)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07B54u) goto L_08B07B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07B54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1700)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B07B74u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1708)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07B74u) goto L_08B07B74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07B74:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08B07B80u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 627u, 0x08AFEC8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07B80u) goto L_08B07B80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07B80:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1640)));
    aot_gpr_4 = (16076u << 16u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B07BAC;
      }
      goto L_08B07BA4;
    }
L_08B07BA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B07BD0;
      }
      goto L_08B07BAC;
    }
L_08B07BAC:
    aot_gpr_4 = (15779u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1640)));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B07BD0;
      }
      goto L_08B07BCC;
    }
L_08B07BCC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B07BD0;
L_08B07BD0:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1640)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1712)));
    goto L_08B07BD8;
L_08B07BD8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1716)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_5 = (15363u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(720));
    ctx.gpr[6] = (aot_gpr_5 | 4719u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_31 = (0x08B07C08u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07C08u) goto L_08B07C08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07C08:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B07C18u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07C18u) goto L_08B07C18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07C18:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B07C28u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07C28u) goto L_08B07C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07C28:
    aot_gpr_31 = (0x08B07C30u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07C30u) goto L_08B07C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07C30:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x08B07C40u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07C40u) goto L_08B07C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07C40:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B07C4Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 651u, 0x08AFEE3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07C4Cu) goto L_08B07C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B07FE0;
      }
      goto L_08B07C54;
    }
L_08B07C54:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(864));
    aot_gpr_31 = (0x08B07C60u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07C60u) goto L_08B07C60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07C60:
    aot_gpr_31 = (0x08B07C68u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 641u, 0x08AFEDA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07C68u) goto L_08B07C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07C68:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B07C74u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 634u, 0x08AFED10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07C74u) goto L_08B07C74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07C74:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(617))))));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(800));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(816));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(832));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(848));
      if (branch_taken) {
          goto L_08B07CD8;
      }
      goto L_08B07C90;
    }
L_08B07C90:
    aot_gpr_31 = (0x08B07C98u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(864)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 625u, 0x08AFEC38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07C98u) goto L_08B07C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07C98:
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B07CA8u);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 623u, 0x08AFEBF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07CA8u) goto L_08B07CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07CA8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(868)));
    aot_gpr_31 = (0x08B07CB4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 625u, 0x08AFEC38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07CB4u) goto L_08B07CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07CB4:
    aot_gpr_31 = (0x08B07CBCu);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 623u, 0x08AFEBF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07CBCu) goto L_08B07CBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07CBC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(872)));
    aot_gpr_31 = (0x08B07CC8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 626u, 0x08AFEC60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07CC8u) goto L_08B07CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07CC8:
    aot_gpr_31 = (0x08B07CD0u);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 624u, 0x08AFEC14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07CD0u) goto L_08B07CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07CD0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B07DB8;
      }
      goto L_08B07CD8;
    }
L_08B07CD8:
    aot_gpr_31 = (0x08B07CE0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 649u, 0x08AFEE2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07CE0u) goto L_08B07CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07CE0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-983));
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B07DB8;
      }
      goto L_08B07CEC;
    }
L_08B07CEC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1652), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1648), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1644), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(1662)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-11384))))));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_20 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_31 = (0x08B07D30u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 624u, 0x08AFEC14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07D30u) goto L_08B07D30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07D30:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x08B07D3Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07D3Cu) goto L_08B07D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07D3C:
    aot_gpr_31 = (0x08B07D44u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 640u, 0x08AFED98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07D44u) goto L_08B07D44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07D44:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(896));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B07D58u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 584u, 0x08AFE9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07D58u) goto L_08B07D58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07D58:
    aot_gpr_31 = (0x08B07D60u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 623u, 0x08AFEBF0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07D60u) goto L_08B07D60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07D60:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x08B07D6Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07D6Cu) goto L_08B07D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07D6C:
    aot_gpr_31 = (0x08B07D74u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 641u, 0x08AFEDA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07D74u) goto L_08B07D74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07D74:
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(912));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B07D88u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 584u, 0x08AFE9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07D88u) goto L_08B07D88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07D88:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(880));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B07D9Cu);
    ctx.gpr[6] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 582u, 0x08AFE980u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07D9Cu) goto L_08B07D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07D9C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B07DA8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 637u, 0x08AFED64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07DA8u) goto L_08B07DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07DA8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(1640), aot_run_words);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[21] = aot_run_words[1];
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
    }
    goto L_08B07DB8;
L_08B07DB8:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08B07DC4u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 580u, 0x08AFE950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07DC4u) goto L_08B07DC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07DC4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B07DE8;
      }
      goto L_08B07DD4;
    }
L_08B07DD4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B07DE8;
L_08B07DE8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[26])) && ctx.fpr[22] == ctx.fpr[26])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
        goto L_08B07E74;
    }
    goto L_08B07DF8;
L_08B07DF8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08B07E70;
      }
      goto L_08B07E00;
    }
L_08B07E00:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1652), ctx.gpr[21]);
    aot_gpr_31 = (0x08B07E0Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07E0Cu) goto L_08B07E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07E0C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B07E18u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07E18u) goto L_08B07E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07E18:
    aot_gpr_4 = (ctx.gpr[21] - ctx.gpr[2]);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (17279u << 16u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[22] = ctx.fpr[22] / aot_fpr_13;
    aot_gpr_31 = (0x08B07E38u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 90u, 0x0898C3A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07E38u) goto L_08B07E38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07E38:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_gpr_31 = (0x08B07E44u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 628u, 0x08AFECB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07E44u) goto L_08B07E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07E44:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= ctx.fpr[30])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1652)));
      if (branch_taken) {
          goto L_08B07E70;
      }
      goto L_08B07E54;
    }
L_08B07E54:
    aot_gpr_31 = (0x08B07E5Cu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 90u, 0x0898C3A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07E5Cu) goto L_08B07E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07E5C:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_gpr_4 = (15360u << 16u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08B07E70;
L_08B07E70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    goto L_08B07E74;
L_08B07E74:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (16102u << 16u);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(1652), ctx.gpr[21]);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_gpr_31 = (0x08B07EA4u);
    aot_fpr_20 = ctx.fpr[15] + ctx.fpr[16];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 633u, 0x08AFECFCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07EA4u) goto L_08B07EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07EA4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B07EB0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 650u, 0x08AFEE34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07EB0u) goto L_08B07EB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07EB0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B07ECCu);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07ECCu) goto L_08B07ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07ECC:
    aot_gpr_4 = (15363u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B07EE4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07EE4u) goto L_08B07EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07EE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B07EF4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07EF4u) goto L_08B07EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07EF4:
    aot_gpr_31 = (0x08B07EFCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07EFCu) goto L_08B07EFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07EFC:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(784));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B07F10u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07F10u) goto L_08B07F10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07F10:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B07F1Cu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 651u, 0x08AFEE3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07F1Cu) goto L_08B07F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07F1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(356)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(640)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08B07F38u);
    aot_fpr_20 = aot_fpr_20 - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 643u, 0x08AFEDB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07F38u) goto L_08B07F38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07F38:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_31 = (0x08B07F48u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B01D24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07F48u) goto L_08B07F48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07F48:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(1652)));
      if (branch_taken) {
          goto L_08B07F84;
      }
      goto L_08B07F58;
    }
L_08B07F58:
    aot_gpr_31 = (0x08B07F60u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 643u, 0x08AFEDB0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07F60u) goto L_08B07F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07F60:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B07F70u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B01D24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07F70u) goto L_08B07F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07F70:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = ctx.fpr[0] + aot_fpr_12;
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08B07F84;
L_08B07F84:
    aot_gpr_5 = (15363u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4719u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B07F9Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07F9Cu) goto L_08B07F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07F9C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B07FACu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07FACu) goto L_08B07FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07FAC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B07FBCu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07FBCu) goto L_08B07FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07FBC:
    aot_gpr_31 = (0x08B07FC4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 648u, 0x08AFEE24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07FC4u) goto L_08B07FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07FC4:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x08B07FD4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 585u, 0x08AFE9CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07FD4u) goto L_08B07FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07FD4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08B07FE0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 651u, 0x08AFEE3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07FE0u) goto L_08B07FE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07FE0:
    aot_gpr_31 = (0x08B07FE8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 642u, 0x08AFEDA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07FE8u) goto L_08B07FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07FE8:
    aot_gpr_31 = (0x08B07FF0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 641u, 0x08AFEDA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B07FF0u) goto L_08B07FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B07FF0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 32u, 0x08B081F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 1u, 0x08B08004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0192(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0192_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_192(Runtime &runtime) {
    runtime.register_generated_unit(192u, 0x08B04000u, 16384u, &recomp_unit_0192, &recomp_unit_0192_entry);
    runtime.register_function(0x08B04000u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04008u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04018u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04028u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04048u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04054u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0405Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04070u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0409Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B040E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04104u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0410Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04114u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04128u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04134u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0415Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04164u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04178u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04194u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0419Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B041E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04218u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04260u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04268u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04274u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0427Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04284u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04298u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B042FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04304u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0430Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04314u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04324u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04334u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04368u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04370u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B043FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04410u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04414u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04430u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04438u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04440u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0444Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04454u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0445Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0446Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0447Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0448Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B044D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B044D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04514u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0452Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04578u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04588u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04590u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04598u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B045F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04600u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04608u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04610u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04618u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04630u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04638u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04640u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04648u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04650u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04658u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04660u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04664u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B046A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B046C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B046D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B046ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04700u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04708u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04710u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04724u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0472Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04734u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04748u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04750u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04758u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04774u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0477Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04784u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04798u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B047F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04810u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0481Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04824u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04834u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0484Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04854u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0485Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04864u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0486Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04874u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0487Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04880u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04888u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04890u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04898u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0489Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B048A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B048B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B048BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B048D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B048F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04904u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04910u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04928u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04940u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04948u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04960u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04978u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0498Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0499Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B049F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04A98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04AFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B10u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04B98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04BECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C04u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04C94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04CACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04CB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04CBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04CC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04CE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04D14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04D74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04D7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DD0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DDCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04DF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04E8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04EA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04EB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04EBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04ED4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04EE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04EF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04EFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F04u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F1Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04F8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B04FF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05004u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05010u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05018u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0501Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05034u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05048u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05054u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05060u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05074u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05098u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B050F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05100u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05108u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05110u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05114u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0511Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05134u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0514Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05164u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05198u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B051FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05204u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0520Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05210u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0521Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0522Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05238u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05244u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05254u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05258u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05260u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05268u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05270u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05278u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05284u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0528Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05294u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0529Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B052F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0531Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05338u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0534Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05354u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05364u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0536Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B053A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0541Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05438u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05488u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B054F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05500u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05538u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05540u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05548u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05550u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05558u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05560u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05568u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05570u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05590u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B055C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0562Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05634u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05664u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05698u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B056F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05704u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0571Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05734u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05744u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05758u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05760u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05790u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B057C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05828u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05830u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0583Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B058FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05904u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05908u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05920u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05928u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05930u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05944u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05958u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05960u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0597Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0598Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B059F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05A84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05B30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BDCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05BE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05C84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05CC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D2Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05D7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05DF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05E90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05ED0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05ED8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05EFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05F98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FD0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FF0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B05FFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0600Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06018u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06020u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06028u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0603Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0604Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06058u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06068u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06078u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06084u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06094u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B060E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06104u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0610Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06118u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06120u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06130u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0613Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0614Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0615Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06168u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06178u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06184u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0618Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0619Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B061F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0625Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06274u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B062FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06328u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0632Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06338u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06360u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06378u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B063F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0640Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0641Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06430u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06444u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06454u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06468u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06478u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0648Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0649Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B064BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0650Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06560u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B065A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B065E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B065E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B065FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06670u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06678u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0668Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B066FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0670Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06720u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0672Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06740u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06754u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06758u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06780u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06794u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B067F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06854u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06874u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B068FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06904u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0690Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06920u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06940u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06948u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0695Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0696Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06984u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0698Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069CCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069D4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B069F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A34u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A7Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06A8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06AC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06AE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06B9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06BACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06BF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06C94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CB8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06CF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06D90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DA0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DB8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06DF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E10u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E20u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E64u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06E8Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06ED8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06EE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F14u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F24u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06F94u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FC0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B06FDCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07090u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07110u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0719Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07248u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07258u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07270u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07284u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07294u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B072A8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B072FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07304u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07324u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0734Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07350u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07364u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07374u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0737Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07384u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07390u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073B8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B073F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07414u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07420u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07428u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07438u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07448u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07450u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07458u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07470u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07480u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0748Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07498u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B074F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07500u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07508u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0751Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07520u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07528u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07530u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0753Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0754Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07554u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0755Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0756Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07578u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07580u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0758Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07594u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075D8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075E0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075E8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B075F8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07608u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07610u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07618u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07624u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07634u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0763Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07644u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07650u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07658u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07678u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076A0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076C0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B076F4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07700u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0770Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0771Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07724u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07730u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07738u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0774Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07754u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07760u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0777Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07798u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077BCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B077E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07808u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07824u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0782Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0783Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0784Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07854u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07864u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07874u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07894u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078ACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078B4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078C4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078D0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078E4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B078FCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0790Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07918u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07948u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0795Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07964u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0796Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07978u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07994u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B0799Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079A4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079B0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079C8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079DCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079ECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B079F0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A50u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A78u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07A9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07ABCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07AF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B10u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07B80u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BCCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BD0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07BD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C08u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C28u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C40u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C4Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C68u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C90u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07C98u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CB4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CC8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CD0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CD8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07CECu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D30u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D3Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D6Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D88u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07D9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DA8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DB8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07DF8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E00u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E0Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E18u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E44u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E54u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E5Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07E74u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EA4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EB0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07ECCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EE4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EF4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07EFCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F10u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F1Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F38u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F48u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F58u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F60u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F70u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F84u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07F9Cu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FACu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FBCu, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FC4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FD4u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FE0u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FE8u, &recomp_unit_0192, "recomp_unit_0192");
    runtime.register_function(0x08B07FF0u, &recomp_unit_0192, "recomp_unit_0192");
}
} // namespace psprecomp
