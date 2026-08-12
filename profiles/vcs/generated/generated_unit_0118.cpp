#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0118[4094] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 7,
    0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 17,
    0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 42, 0, 0, 0, 43, 0, 44, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0,
    61, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 72, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 0, 85,
    0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 160, 0,
    161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185,
    0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 224,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 229, 0, 230, 0, 0, 231, 0, 232, 233, 0, 234, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 245, 0, 0, 0,
    0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 250, 251, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 253, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    0, 266, 0, 0, 267, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0,
    274, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 280, 281, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0,
    0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 0, 304, 0, 305, 0, 306, 307, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 315, 0, 316, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0,
    0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327,
    0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 332, 0, 333, 0, 0, 0, 0, 0, 334, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0,
    338, 0, 339, 0, 0, 0, 0, 340, 0, 341, 342, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0,
    0, 0, 0, 0, 347, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0,
    0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 357,
    0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0,
    0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 368,
    0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 379, 0, 380, 381, 0, 0, 0, 0, 0,
    0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 386, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    0, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0,
    0, 396, 397, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 400, 401, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404,
    0, 0, 405, 0, 0, 0, 0, 0, 406, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 412,
    413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 418, 419, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0, 428, 0, 429,
    0, 0, 0, 0, 430, 0, 0, 431, 0, 432, 0, 433, 434, 435, 0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0, 440, 0, 441, 0, 442,
    0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449, 0, 450, 0, 451, 452, 453, 0, 454, 0, 455, 0,
    0, 0, 456, 0, 0, 457, 0, 458, 0, 459, 0, 460, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463,
    0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0,
    0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 477, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 482, 0, 483, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 488, 0, 0, 489, 0, 490, 491, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0,
    0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 496, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499,
    0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 502, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 506, 0, 507,
    0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0,
    0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 519,
    0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 523, 0, 524, 525, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0,
    528, 0, 0, 529, 0, 0, 0, 0, 0, 530, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0,
    0, 0, 534, 0, 0, 535, 0, 536, 537, 0, 0, 0, 0, 538, 0, 0, 539, 0, 540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0,
    0, 544, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 550, 0, 0,
    551, 0, 0, 552, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 557, 0, 0, 558, 0, 0, 559,
    560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 564, 0, 0, 0, 565, 0, 0, 566, 0, 567, 0,
    0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0,
    574, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0,
    582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 585, 0, 586, 0, 0, 0, 587, 0, 588, 589, 0, 0, 0, 0, 0, 0, 590,
    0, 591, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 594, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 597, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 601, 602, 0, 603, 0, 0, 604, 605, 0, 606, 0, 607, 0, 0, 0,
    608, 0, 609, 0, 0, 0, 0, 0, 610, 611, 0, 612, 0, 613, 614, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617,
    0, 0, 618, 0, 0, 0, 0, 0, 619, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 625,
    0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631,
    0, 632, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 640, 0, 0, 641, 0, 0, 642, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 645, 0, 0, 646, 0, 647, 0, 0, 648, 0, 0, 649, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659,
    0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 664, 0, 0, 0,
    0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0,
    0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 673,
    0, 674, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 679, 0, 680, 0, 681, 0, 0,
    0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 685, 0, 0, 0, 686, 0, 687, 0, 0, 0, 688, 0, 689, 0,
    0, 690, 691, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 695, 0, 0, 0, 0, 0, 696, 697,
    0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 700, 0, 701, 0, 0, 0, 702, 0, 703, 0, 0, 0,
    704, 0, 705, 0, 0, 706, 707, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0,
    0, 0, 712, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 717, 0, 0, 0, 718, 0,
    719, 0, 0, 0, 720, 0, 721, 0, 0, 722, 723, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0,
    727, 0, 0, 0, 0, 0, 728, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 733, 0, 0, 0, 0,
    0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 742, 0, 0, 0, 743, 0, 744, 0, 0, 0, 745, 0, 746, 0, 0, 747, 0,
    0, 748, 0, 0, 749, 750, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 754, 0, 0, 0, 0,
    0, 755, 756, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 760, 0, 761, 0, 0, 0, 0, 762, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768,
    0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 771, 772, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0,
    775, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 780,
    0, 0, 781, 0, 782, 783, 0, 0, 0, 0, 784, 0, 0, 785, 0, 786, 0, 787, 0, 0, 0, 0, 0, 788, 0, 0, 789, 0, 790, 0, 0, 0,
    0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0, 794, 795, 0, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 0,
    798, 0, 0, 799, 0, 0, 0, 0, 0, 800, 801, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 804, 0,
    805, 0, 0, 806, 0, 0, 807, 808, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 812, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 818, 0, 0, 0, 819, 0, 820, 0, 0, 0, 821,
};
void recomp_unit_0118_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089DC004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0118[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089DC004;
    case 2u: goto L_089DC00C;
    case 3u: goto L_089DC034;
    case 4u: goto L_089DC05C;
    case 5u: goto L_089DC070;
    case 6u: goto L_089DC078;
    case 7u: goto L_089DC080;
    case 8u: goto L_089DC088;
    case 9u: goto L_089DC090;
    case 10u: goto L_089DC0A8;
    case 11u: goto L_089DC0BC;
    case 12u: goto L_089DC0C4;
    case 13u: goto L_089DC0CC;
    case 14u: goto L_089DC0D4;
    case 15u: goto L_089DC0EC;
    case 16u: goto L_089DC0F4;
    case 17u: goto L_089DC100;
    case 18u: goto L_089DC108;
    case 19u: goto L_089DC110;
    case 20u: goto L_089DC118;
    case 21u: goto L_089DC120;
    case 22u: goto L_089DC128;
    case 23u: goto L_089DC130;
    case 24u: goto L_089DC13C;
    case 25u: goto L_089DC14C;
    case 26u: goto L_089DC168;
    case 27u: goto L_089DC180;
    case 28u: goto L_089DC190;
    case 29u: goto L_089DC19C;
    case 30u: goto L_089DC1A4;
    case 31u: goto L_089DC1AC;
    case 32u: goto L_089DC1C8;
    case 33u: goto L_089DC1E0;
    case 34u: goto L_089DC1F4;
    case 35u: goto L_089DC208;
    case 36u: goto L_089DC218;
    case 37u: goto L_089DC224;
    case 38u: goto L_089DC234;
    case 39u: goto L_089DC250;
    case 40u: goto L_089DC260;
    case 41u: goto L_089DC280;
    case 42u: goto L_089DC288;
    case 43u: goto L_089DC298;
    case 44u: goto L_089DC2A0;
    case 45u: goto L_089DC2A4;
    case 46u: goto L_089DC2B4;
    case 47u: goto L_089DC2D0;
    case 48u: goto L_089DC324;
    case 49u: goto L_089DC330;
    case 50u: goto L_089DC388;
    case 51u: goto L_089DC390;
    case 52u: goto L_089DC3A0;
    case 53u: goto L_089DC3A8;
    case 54u: goto L_089DC3B4;
    case 55u: goto L_089DC3BC;
    case 56u: goto L_089DC3CC;
    case 57u: goto L_089DC3D8;
    case 58u: goto L_089DC3E0;
    case 59u: goto L_089DC3F0;
    case 60u: goto L_089DC3F8;
    case 61u: goto L_089DC404;
    case 62u: goto L_089DC408;
    case 63u: goto L_089DC414;
    case 64u: goto L_089DC420;
    case 65u: goto L_089DC42C;
    case 66u: goto L_089DC438;
    case 67u: goto L_089DC440;
    case 68u: goto L_089DC448;
    case 69u: goto L_089DC454;
    case 70u: goto L_089DC460;
    case 71u: goto L_089DC470;
    case 72u: goto L_089DC474;
    case 73u: goto L_089DC484;
    case 74u: goto L_089DC4AC;
    case 75u: goto L_089DC4E8;
    case 76u: goto L_089DC518;
    case 77u: goto L_089DC52C;
    case 78u: goto L_089DC534;
    case 79u: goto L_089DC53C;
    case 80u: goto L_089DC54C;
    case 81u: goto L_089DC558;
    case 82u: goto L_089DC560;
    case 83u: goto L_089DC568;
    case 84u: goto L_089DC570;
    case 85u: goto L_089DC580;
    case 86u: goto L_089DC588;
    case 87u: goto L_089DC590;
    case 88u: goto L_089DC5D8;
    case 89u: goto L_089DC5F8;
    case 90u: goto L_089DC608;
    case 91u: goto L_089DC644;
    case 92u: goto L_089DC670;
    case 93u: goto L_089DC67C;
    case 94u: goto L_089DC690;
    case 95u: goto L_089DC6A4;
    case 96u: goto L_089DC6B8;
    case 97u: goto L_089DC6CC;
    case 98u: goto L_089DC6E0;
    case 99u: goto L_089DC6F4;
    case 100u: goto L_089DC708;
    case 101u: goto L_089DC71C;
    case 102u: goto L_089DC72C;
    case 103u: goto L_089DC738;
    case 104u: goto L_089DC750;
    case 105u: goto L_089DC75C;
    case 106u: goto L_089DC764;
    case 107u: goto L_089DC7A0;
    case 108u: goto L_089DC7B4;
    case 109u: goto L_089DC804;
    case 110u: goto L_089DC814;
    case 111u: goto L_089DC830;
    case 112u: goto L_089DC840;
    case 113u: goto L_089DC85C;
    case 114u: goto L_089DC868;
    case 115u: goto L_089DC890;
    case 116u: goto L_089DC898;
    case 117u: goto L_089DC8A4;
    case 118u: goto L_089DC8C8;
    case 119u: goto L_089DC8D0;
    case 120u: goto L_089DC8F4;
    case 121u: goto L_089DC914;
    case 122u: goto L_089DC934;
    case 123u: goto L_089DC94C;
    case 124u: goto L_089DC974;
    case 125u: goto L_089DCA68;
    case 126u: goto L_089DCA84;
    case 127u: goto L_089DCA98;
    case 128u: goto L_089DCAA4;
    case 129u: goto L_089DCAF8;
    case 130u: goto L_089DCB04;
    case 131u: goto L_089DCB28;
    case 132u: goto L_089DCB48;
    case 133u: goto L_089DCB70;
    case 134u: goto L_089DCB78;
    case 135u: goto L_089DCBE4;
    case 136u: goto L_089DCC30;
    case 137u: goto L_089DCC38;
    case 138u: goto L_089DCC70;
    case 139u: goto L_089DCC80;
    case 140u: goto L_089DCC90;
    case 141u: goto L_089DCCA8;
    case 142u: goto L_089DCCBC;
    case 143u: goto L_089DCCC8;
    case 144u: goto L_089DCD00;
    case 145u: goto L_089DCD10;
    case 146u: goto L_089DCD1C;
    case 147u: goto L_089DCD44;
    case 148u: goto L_089DCDC8;
    case 149u: goto L_089DCDD0;
    case 150u: goto L_089DCE08;
    case 151u: goto L_089DCE18;
    case 152u: goto L_089DCE28;
    case 153u: goto L_089DCE40;
    case 154u: goto L_089DCE54;
    case 155u: goto L_089DCE60;
    case 156u: goto L_089DCE98;
    case 157u: goto L_089DCEDC;
    case 158u: goto L_089DCEE4;
    case 159u: goto L_089DCEF8;
    case 160u: goto L_089DCEFC;
    case 161u: goto L_089DCF04;
    case 162u: goto L_089DCF14;
    case 163u: goto L_089DCF24;
    case 164u: goto L_089DCF54;
    case 165u: goto L_089DCF78;
    case 166u: goto L_089DCFCC;
    case 167u: goto L_089DCFF0;
    case 168u: goto L_089DD018;
    case 169u: goto L_089DD024;
    case 170u: goto L_089DD034;
    case 171u: goto L_089DD044;
    case 172u: goto L_089DD068;
    case 173u: goto L_089DD074;
    case 174u: goto L_089DD084;
    case 175u: goto L_089DD0A8;
    case 176u: goto L_089DD0BC;
    case 177u: goto L_089DD0C8;
    case 178u: goto L_089DD0F0;
    case 179u: goto L_089DD21C;
    case 180u: goto L_089DD23C;
    case 181u: goto L_089DD244;
    case 182u: goto L_089DD264;
    case 183u: goto L_089DD26C;
    case 184u: goto L_089DD278;
    case 185u: goto L_089DD280;
    case 186u: goto L_089DD288;
    case 187u: goto L_089DD29C;
    case 188u: goto L_089DD2B0;
    case 189u: goto L_089DD2D8;
    case 190u: goto L_089DD2E8;
    case 191u: goto L_089DD2F8;
    case 192u: goto L_089DD31C;
    case 193u: goto L_089DD3C4;
    case 194u: goto L_089DD3D8;
    case 195u: goto L_089DD424;
    case 196u: goto L_089DD458;
    case 197u: goto L_089DD460;
    case 198u: goto L_089DD49C;
    case 199u: goto L_089DD4B8;
    case 200u: goto L_089DD4C0;
    case 201u: goto L_089DD4C8;
    case 202u: goto L_089DD4D0;
    case 203u: goto L_089DD50C;
    case 204u: goto L_089DD524;
    case 205u: goto L_089DD598;
    case 206u: goto L_089DD5B0;
    case 207u: goto L_089DD5BC;
    case 208u: goto L_089DD5DC;
    case 209u: goto L_089DD608;
    case 210u: goto L_089DD61C;
    case 211u: goto L_089DD624;
    case 212u: goto L_089DD62C;
    case 213u: goto L_089DD684;
    case 214u: goto L_089DD688;
    case 215u: goto L_089DD6A4;
    case 216u: goto L_089DD6D8;
    case 217u: goto L_089DD6EC;
    case 218u: goto L_089DD6F4;
    case 219u: goto L_089DD734;
    case 220u: goto L_089DD754;
    case 221u: goto L_089DD764;
    case 222u: goto L_089DD76C;
    case 223u: goto L_089DD774;
    case 224u: goto L_089DD780;
    case 225u: goto L_089DD794;
    case 226u: goto L_089DD7B0;
    case 227u: goto L_089DD7BC;
    case 228u: goto L_089DD7C4;
    case 229u: goto L_089DD7C8;
    case 230u: goto L_089DD7D0;
    case 231u: goto L_089DD7DC;
    case 232u: goto L_089DD7E4;
    case 233u: goto L_089DD7E8;
    case 234u: goto L_089DD7F0;
    case 235u: goto L_089DD804;
    case 236u: goto L_089DD818;
    case 237u: goto L_089DD820;
    case 238u: goto L_089DD828;
    case 239u: goto L_089DD838;
    case 240u: goto L_089DD850;
    case 241u: goto L_089DD858;
    case 242u: goto L_089DD860;
    case 243u: goto L_089DD868;
    case 244u: goto L_089DD870;
    case 245u: goto L_089DD874;
    case 246u: goto L_089DD890;
    case 247u: goto L_089DD898;
    case 248u: goto L_089DD8B8;
    case 249u: goto L_089DD8C4;
    case 250u: goto L_089DD8DC;
    case 251u: goto L_089DD8E0;
    case 252u: goto L_089DD8F4;
    case 253u: goto L_089DD908;
    case 254u: goto L_089DD910;
    case 255u: goto L_089DD918;
    case 256u: goto L_089DD928;
    case 257u: goto L_089DD948;
    case 258u: goto L_089DD954;
    case 259u: goto L_089DD968;
    case 260u: goto L_089DD990;
    case 261u: goto L_089DD9A0;
    case 262u: goto L_089DD9B4;
    case 263u: goto L_089DD9BC;
    case 264u: goto L_089DD9D0;
    case 265u: goto L_089DD9E8;
    case 266u: goto L_089DDA08;
    case 267u: goto L_089DDA14;
    case 268u: goto L_089DDA1C;
    case 269u: goto L_089DDA24;
    case 270u: goto L_089DDA2C;
    case 271u: goto L_089DDA40;
    case 272u: goto L_089DDA60;
    case 273u: goto L_089DDA68;
    case 274u: goto L_089DDA84;
    case 275u: goto L_089DDA88;
    case 276u: goto L_089DDAAC;
    case 277u: goto L_089DDAB4;
    case 278u: goto L_089DDAD4;
    case 279u: goto L_089DDAE0;
    case 280u: goto L_089DDAF8;
    case 281u: goto L_089DDAFC;
    case 282u: goto L_089DDB14;
    case 283u: goto L_089DDB3C;
    case 284u: goto L_089DDB90;
    case 285u: goto L_089DDBA4;
    case 286u: goto L_089DDBB8;
    case 287u: goto L_089DDBC0;
    case 288u: goto L_089DDBC8;
    case 289u: goto L_089DDBD0;
    case 290u: goto L_089DDBD8;
    case 291u: goto L_089DDBEC;
    case 292u: goto L_089DDBF4;
    case 293u: goto L_089DDC08;
    case 294u: goto L_089DDC10;
    case 295u: goto L_089DDC18;
    case 296u: goto L_089DDC20;
    case 297u: goto L_089DDC28;
    case 298u: goto L_089DDC34;
    case 299u: goto L_089DDC3C;
    case 300u: goto L_089DDC44;
    case 301u: goto L_089DDC4C;
    case 302u: goto L_089DDC54;
    case 303u: goto L_089DDC5C;
    case 304u: goto L_089DDC68;
    case 305u: goto L_089DDC70;
    case 306u: goto L_089DDC78;
    case 307u: goto L_089DDC7C;
    case 308u: goto L_089DDC8C;
    case 309u: goto L_089DDCE4;
    case 310u: goto L_089DDCF4;
    case 311u: goto L_089DDD14;
    case 312u: goto L_089DDD30;
    case 313u: goto L_089DDD38;
    case 314u: goto L_089DDD40;
    case 315u: goto L_089DDD4C;
    case 316u: goto L_089DDD54;
    case 317u: goto L_089DDD58;
    case 318u: goto L_089DDD64;
    case 319u: goto L_089DDD70;
    case 320u: goto L_089DDD78;
    case 321u: goto L_089DDD98;
    case 322u: goto L_089DDDB0;
    case 323u: goto L_089DDDBC;
    case 324u: goto L_089DDDC0;
    case 325u: goto L_089DDDC8;
    case 326u: goto L_089DDDF8;
    case 327u: goto L_089DDE00;
    case 328u: goto L_089DDE0C;
    case 329u: goto L_089DDE20;
    case 330u: goto L_089DDE54;
    case 331u: goto L_089DDE7C;
    case 332u: goto L_089DDE88;
    case 333u: goto L_089DDE90;
    case 334u: goto L_089DDEA8;
    case 335u: goto L_089DDEAC;
    case 336u: goto L_089DDEC4;
    case 337u: goto L_089DDEF8;
    case 338u: goto L_089DDF04;
    case 339u: goto L_089DDF0C;
    case 340u: goto L_089DDF20;
    case 341u: goto L_089DDF28;
    case 342u: goto L_089DDF2C;
    case 343u: goto L_089DDF48;
    case 344u: goto L_089DDF50;
    case 345u: goto L_089DDF70;
    case 346u: goto L_089DDF7C;
    case 347u: goto L_089DDF94;
    case 348u: goto L_089DDF98;
    case 349u: goto L_089DDFB4;
    case 350u: goto L_089DDFE4;
    case 351u: goto L_089DDFF0;
    case 352u: goto L_089DDFF8;
    case 353u: goto L_089DE010;
    case 354u: goto L_089DE02C;
    case 355u: goto L_089DE06C;
    case 356u: goto L_089DE078;
    case 357u: goto L_089DE080;
    case 358u: goto L_089DE0A0;
    case 359u: goto L_089DE0B8;
    case 360u: goto L_089DE0C4;
    case 361u: goto L_089DE0CC;
    case 362u: goto L_089DE0FC;
    case 363u: goto L_089DE108;
    case 364u: goto L_089DE11C;
    case 365u: goto L_089DE144;
    case 366u: goto L_089DE16C;
    case 367u: goto L_089DE178;
    case 368u: goto L_089DE180;
    case 369u: goto L_089DE18C;
    case 370u: goto L_089DE1A4;
    case 371u: goto L_089DE1CC;
    case 372u: goto L_089DE1D8;
    case 373u: goto L_089DE1E0;
    case 374u: goto L_089DE1EC;
    case 375u: goto L_089DE204;
    case 376u: goto L_089DE234;
    case 377u: goto L_089DE240;
    case 378u: goto L_089DE248;
    case 379u: goto L_089DE260;
    case 380u: goto L_089DE268;
    case 381u: goto L_089DE26C;
    case 382u: goto L_089DE288;
    case 383u: goto L_089DE290;
    case 384u: goto L_089DE2B0;
    case 385u: goto L_089DE2BC;
    case 386u: goto L_089DE2D4;
    case 387u: goto L_089DE2D8;
    case 388u: goto L_089DE2F4;
    case 389u: goto L_089DE314;
    case 390u: goto L_089DE320;
    case 391u: goto L_089DE328;
    case 392u: goto L_089DE334;
    case 393u: goto L_089DE348;
    case 394u: goto L_089DE370;
    case 395u: goto L_089DE37C;
    case 396u: goto L_089DE388;
    case 397u: goto L_089DE38C;
    case 398u: goto L_089DE3A4;
    case 399u: goto L_089DE3B0;
    case 400u: goto L_089DE3B8;
    case 401u: goto L_089DE3BC;
    case 402u: goto L_089DE3D8;
    case 403u: goto L_089DE3E0;
    case 404u: goto L_089DE400;
    case 405u: goto L_089DE40C;
    case 406u: goto L_089DE424;
    case 407u: goto L_089DE428;
    case 408u: goto L_089DE430;
    case 409u: goto L_089DE45C;
    case 410u: goto L_089DE468;
    case 411u: goto L_089DE470;
    case 412u: goto L_089DE480;
    case 413u: goto L_089DE484;
    case 414u: goto L_089DE4A8;
    case 415u: goto L_089DE4B0;
    case 416u: goto L_089DE4D0;
    case 417u: goto L_089DE4DC;
    case 418u: goto L_089DE4F4;
    case 419u: goto L_089DE4F8;
    case 420u: goto L_089DE510;
    case 421u: goto L_089DE538;
    case 422u: goto L_089DE544;
    case 423u: goto L_089DE54C;
    case 424u: goto L_089DE554;
    case 425u: goto L_089DE55C;
    case 426u: goto L_089DE564;
    case 427u: goto L_089DE56C;
    case 428u: goto L_089DE578;
    case 429u: goto L_089DE580;
    case 430u: goto L_089DE594;
    case 431u: goto L_089DE5A0;
    case 432u: goto L_089DE5A8;
    case 433u: goto L_089DE5B0;
    case 434u: goto L_089DE5B4;
    case 435u: goto L_089DE5B8;
    case 436u: goto L_089DE5C0;
    case 437u: goto L_089DE5C8;
    case 438u: goto L_089DE5DC;
    case 439u: goto L_089DE5E8;
    case 440u: goto L_089DE5F0;
    case 441u: goto L_089DE5F8;
    case 442u: goto L_089DE600;
    case 443u: goto L_089DE614;
    case 444u: goto L_089DE61C;
    case 445u: goto L_089DE624;
    case 446u: goto L_089DE62C;
    case 447u: goto L_089DE634;
    case 448u: goto L_089DE648;
    case 449u: goto L_089DE654;
    case 450u: goto L_089DE65C;
    case 451u: goto L_089DE664;
    case 452u: goto L_089DE668;
    case 453u: goto L_089DE66C;
    case 454u: goto L_089DE674;
    case 455u: goto L_089DE67C;
    case 456u: goto L_089DE68C;
    case 457u: goto L_089DE698;
    case 458u: goto L_089DE6A0;
    case 459u: goto L_089DE6A8;
    case 460u: goto L_089DE6B0;
    case 461u: goto L_089DE6B8;
    case 462u: goto L_089DE6D0;
    case 463u: goto L_089DE700;
    case 464u: goto L_089DE70C;
    case 465u: goto L_089DE714;
    case 466u: goto L_089DE730;
    case 467u: goto L_089DE74C;
    case 468u: goto L_089DE76C;
    case 469u: goto L_089DE774;
    case 470u: goto L_089DE788;
    case 471u: goto L_089DE7B0;
    case 472u: goto L_089DE7BC;
    case 473u: goto L_089DE7C4;
    case 474u: goto L_089DE7D4;
    case 475u: goto L_089DE7E0;
    case 476u: goto L_089DE7E8;
    case 477u: goto L_089DE7F4;
    case 478u: goto L_089DE80C;
    case 479u: goto L_089DE830;
    case 480u: goto L_089DE83C;
    case 481u: goto L_089DE848;
    case 482u: goto L_089DE850;
    case 483u: goto L_089DE858;
    case 484u: goto L_089DE85C;
    case 485u: goto L_089DE870;
    case 486u: goto L_089DE898;
    case 487u: goto L_089DE8A4;
    case 488u: goto L_089DE8AC;
    case 489u: goto L_089DE8B8;
    case 490u: goto L_089DE8C0;
    case 491u: goto L_089DE8C4;
    case 492u: goto L_089DE8E8;
    case 493u: goto L_089DE8F0;
    case 494u: goto L_089DE910;
    case 495u: goto L_089DE91C;
    case 496u: goto L_089DE934;
    case 497u: goto L_089DE938;
    case 498u: goto L_089DE950;
    case 499u: goto L_089DE980;
    case 500u: goto L_089DE9A0;
    case 501u: goto L_089DE9B8;
    case 502u: goto L_089DE9C4;
    case 503u: goto L_089DE9C8;
    case 504u: goto L_089DE9E4;
    case 505u: goto L_089DE9F0;
    case 506u: goto L_089DE9F8;
    case 507u: goto L_089DEA00;
    case 508u: goto L_089DEA20;
    case 509u: goto L_089DEA30;
    case 510u: goto L_089DEA40;
    case 511u: goto L_089DEA70;
    case 512u: goto L_089DEA78;
    case 513u: goto L_089DEA8C;
    case 514u: goto L_089DEAA8;
    case 515u: goto L_089DEAD4;
    case 516u: goto L_089DEAE0;
    case 517u: goto L_089DEAEC;
    case 518u: goto L_089DEAF8;
    case 519u: goto L_089DEB00;
    case 520u: goto L_089DEB0C;
    case 521u: goto L_089DEB1C;
    case 522u: goto L_089DEB24;
    case 523u: goto L_089DEB2C;
    case 524u: goto L_089DEB34;
    case 525u: goto L_089DEB38;
    case 526u: goto L_089DEB5C;
    case 527u: goto L_089DEB64;
    case 528u: goto L_089DEB84;
    case 529u: goto L_089DEB90;
    case 530u: goto L_089DEBA8;
    case 531u: goto L_089DEBAC;
    case 532u: goto L_089DEBC8;
    case 533u: goto L_089DEBF8;
    case 534u: goto L_089DEC0C;
    case 535u: goto L_089DEC18;
    case 536u: goto L_089DEC20;
    case 537u: goto L_089DEC24;
    case 538u: goto L_089DEC38;
    case 539u: goto L_089DEC44;
    case 540u: goto L_089DEC4C;
    case 541u: goto L_089DEC54;
    case 542u: goto L_089DEC6C;
    case 543u: goto L_089DEC78;
    case 544u: goto L_089DEC88;
    case 545u: goto L_089DEC90;
    case 546u: goto L_089DECA0;
    case 547u: goto L_089DECBC;
    case 548u: goto L_089DECE4;
    case 549u: goto L_089DECF0;
    case 550u: goto L_089DECF8;
    case 551u: goto L_089DED04;
    case 552u: goto L_089DED10;
    case 553u: goto L_089DED14;
    case 554u: goto L_089DED2C;
    case 555u: goto L_089DED54;
    case 556u: goto L_089DED60;
    case 557u: goto L_089DED68;
    case 558u: goto L_089DED74;
    case 559u: goto L_089DED80;
    case 560u: goto L_089DED84;
    case 561u: goto L_089DED9C;
    case 562u: goto L_089DEDC4;
    case 563u: goto L_089DEDD0;
    case 564u: goto L_089DEDD8;
    case 565u: goto L_089DEDE8;
    case 566u: goto L_089DEDF4;
    case 567u: goto L_089DEDFC;
    case 568u: goto L_089DEE08;
    case 569u: goto L_089DEE20;
    case 570u: goto L_089DEE44;
    case 571u: goto L_089DEE4C;
    case 572u: goto L_089DEE68;
    case 573u: goto L_089DEE7C;
    case 574u: goto L_089DEE84;
    case 575u: goto L_089DEE8C;
    case 576u: goto L_089DEE94;
    case 577u: goto L_089DEE9C;
    case 578u: goto L_089DEEB8;
    case 579u: goto L_089DEED0;
    case 580u: goto L_089DEED8;
    case 581u: goto L_089DEEF0;
    case 582u: goto L_089DEF04;
    case 583u: goto L_089DEF28;
    case 584u: goto L_089DEF38;
    case 585u: goto L_089DEF40;
    case 586u: goto L_089DEF48;
    case 587u: goto L_089DEF58;
    case 588u: goto L_089DEF60;
    case 589u: goto L_089DEF64;
    case 590u: goto L_089DEF80;
    case 591u: goto L_089DEF88;
    case 592u: goto L_089DEFA8;
    case 593u: goto L_089DEFB4;
    case 594u: goto L_089DEFCC;
    case 595u: goto L_089DEFD0;
    case 596u: goto L_089DEFE8;
    case 597u: goto L_089DF010;
    case 598u: goto L_089DF01C;
    case 599u: goto L_089DF030;
    case 600u: goto L_089DF03C;
    case 601u: goto L_089DF048;
    case 602u: goto L_089DF04C;
    case 603u: goto L_089DF054;
    case 604u: goto L_089DF060;
    case 605u: goto L_089DF064;
    case 606u: goto L_089DF06C;
    case 607u: goto L_089DF074;
    case 608u: goto L_089DF084;
    case 609u: goto L_089DF08C;
    case 610u: goto L_089DF0A4;
    case 611u: goto L_089DF0A8;
    case 612u: goto L_089DF0B0;
    case 613u: goto L_089DF0B8;
    case 614u: goto L_089DF0BC;
    case 615u: goto L_089DF0D8;
    case 616u: goto L_089DF0E0;
    case 617u: goto L_089DF100;
    case 618u: goto L_089DF10C;
    case 619u: goto L_089DF124;
    case 620u: goto L_089DF128;
    case 621u: goto L_089DF140;
    case 622u: goto L_089DF160;
    case 623u: goto L_089DF16C;
    case 624u: goto L_089DF174;
    case 625u: goto L_089DF180;
    case 626u: goto L_089DF198;
    case 627u: goto L_089DF1A4;
    case 628u: goto L_089DF1AC;
    case 629u: goto L_089DF1CC;
    case 630u: goto L_089DF1F4;
    case 631u: goto L_089DF200;
    case 632u: goto L_089DF208;
    case 633u: goto L_089DF210;
    case 634u: goto L_089DF21C;
    case 635u: goto L_089DF234;
    case 636u: goto L_089DF268;
    case 637u: goto L_089DF278;
    case 638u: goto L_089DF2A0;
    case 639u: goto L_089DF2AC;
    case 640u: goto L_089DF2B4;
    case 641u: goto L_089DF2C0;
    case 642u: goto L_089DF2CC;
    case 643u: goto L_089DF2D0;
    case 644u: goto L_089DF2E8;
    case 645u: goto L_089DF310;
    case 646u: goto L_089DF31C;
    case 647u: goto L_089DF324;
    case 648u: goto L_089DF330;
    case 649u: goto L_089DF33C;
    case 650u: goto L_089DF340;
    case 651u: goto L_089DF358;
    case 652u: goto L_089DF390;
    case 653u: goto L_089DF39C;
    case 654u: goto L_089DF3AC;
    case 655u: goto L_089DF3B8;
    case 656u: goto L_089DF3C0;
    case 657u: goto L_089DF3D0;
    case 658u: goto L_089DF3E0;
    case 659u: goto L_089DF400;
    case 660u: goto L_089DF410;
    case 661u: goto L_089DF430;
    case 662u: goto L_089DF460;
    case 663u: goto L_089DF46C;
    case 664u: goto L_089DF474;
    case 665u: goto L_089DF494;
    case 666u: goto L_089DF4AC;
    case 667u: goto L_089DF4B8;
    case 668u: goto L_089DF4C0;
    case 669u: goto L_089DF4F4;
    case 670u: goto L_089DF514;
    case 671u: goto L_089DF544;
    case 672u: goto L_089DF574;
    case 673u: goto L_089DF580;
    case 674u: goto L_089DF588;
    case 675u: goto L_089DF590;
    case 676u: goto L_089DF5A0;
    case 677u: goto L_089DF5BC;
    case 678u: goto L_089DF5DC;
    case 679u: goto L_089DF5E8;
    case 680u: goto L_089DF5F0;
    case 681u: goto L_089DF5F8;
    case 682u: goto L_089DF60C;
    case 683u: goto L_089DF638;
    case 684u: goto L_089DF644;
    case 685u: goto L_089DF64C;
    case 686u: goto L_089DF65C;
    case 687u: goto L_089DF664;
    case 688u: goto L_089DF674;
    case 689u: goto L_089DF67C;
    case 690u: goto L_089DF688;
    case 691u: goto L_089DF68C;
    case 692u: goto L_089DF6B0;
    case 693u: goto L_089DF6B8;
    case 694u: goto L_089DF6D8;
    case 695u: goto L_089DF6E4;
    case 696u: goto L_089DF6FC;
    case 697u: goto L_089DF700;
    case 698u: goto L_089DF71C;
    case 699u: goto L_089DF748;
    case 700u: goto L_089DF754;
    case 701u: goto L_089DF75C;
    case 702u: goto L_089DF76C;
    case 703u: goto L_089DF774;
    case 704u: goto L_089DF784;
    case 705u: goto L_089DF78C;
    case 706u: goto L_089DF798;
    case 707u: goto L_089DF79C;
    case 708u: goto L_089DF7C0;
    case 709u: goto L_089DF7C8;
    case 710u: goto L_089DF7E8;
    case 711u: goto L_089DF7F4;
    case 712u: goto L_089DF80C;
    case 713u: goto L_089DF810;
    case 714u: goto L_089DF82C;
    case 715u: goto L_089DF858;
    case 716u: goto L_089DF864;
    case 717u: goto L_089DF86C;
    case 718u: goto L_089DF87C;
    case 719u: goto L_089DF884;
    case 720u: goto L_089DF894;
    case 721u: goto L_089DF89C;
    case 722u: goto L_089DF8A8;
    case 723u: goto L_089DF8AC;
    case 724u: goto L_089DF8D0;
    case 725u: goto L_089DF8D8;
    case 726u: goto L_089DF8F8;
    case 727u: goto L_089DF904;
    case 728u: goto L_089DF91C;
    case 729u: goto L_089DF920;
    case 730u: goto L_089DF93C;
    case 731u: goto L_089DF95C;
    case 732u: goto L_089DF968;
    case 733u: goto L_089DF970;
    case 734u: goto L_089DF988;
    case 735u: goto L_089DF9B8;
    case 736u: goto L_089DF9C4;
    case 737u: goto L_089DF9CC;
    case 738u: goto L_089DF9E4;
    case 739u: goto L_089DFA00;
    case 740u: goto L_089DFA2C;
    case 741u: goto L_089DFA38;
    case 742u: goto L_089DFA40;
    case 743u: goto L_089DFA50;
    case 744u: goto L_089DFA58;
    case 745u: goto L_089DFA68;
    case 746u: goto L_089DFA70;
    case 747u: goto L_089DFA7C;
    case 748u: goto L_089DFA88;
    case 749u: goto L_089DFA94;
    case 750u: goto L_089DFA98;
    case 751u: goto L_089DFABC;
    case 752u: goto L_089DFAC4;
    case 753u: goto L_089DFAE4;
    case 754u: goto L_089DFAF0;
    case 755u: goto L_089DFB08;
    case 756u: goto L_089DFB0C;
    case 757u: goto L_089DFB28;
    case 758u: goto L_089DFB48;
    case 759u: goto L_089DFB54;
    case 760u: goto L_089DFB5C;
    case 761u: goto L_089DFB64;
    case 762u: goto L_089DFB78;
    case 763u: goto L_089DFBAC;
    case 764u: goto L_089DFBBC;
    case 765u: goto L_089DFBC8;
    case 766u: goto L_089DFBD4;
    case 767u: goto L_089DFBF8;
    case 768u: goto L_089DFC00;
    case 769u: goto L_089DFC20;
    case 770u: goto L_089DFC2C;
    case 771u: goto L_089DFC44;
    case 772u: goto L_089DFC48;
    case 773u: goto L_089DFC50;
    case 774u: goto L_089DFC78;
    case 775u: goto L_089DFC84;
    case 776u: goto L_089DFC8C;
    case 777u: goto L_089DFCA0;
    case 778u: goto L_089DFCB8;
    case 779u: goto L_089DFCEC;
    case 780u: goto L_089DFD00;
    case 781u: goto L_089DFD0C;
    case 782u: goto L_089DFD14;
    case 783u: goto L_089DFD18;
    case 784u: goto L_089DFD2C;
    case 785u: goto L_089DFD38;
    case 786u: goto L_089DFD40;
    case 787u: goto L_089DFD48;
    case 788u: goto L_089DFD60;
    case 789u: goto L_089DFD6C;
    case 790u: goto L_089DFD74;
    case 791u: goto L_089DFD8C;
    case 792u: goto L_089DFD9C;
    case 793u: goto L_089DFDAC;
    case 794u: goto L_089DFDBC;
    case 795u: goto L_089DFDC0;
    case 796u: goto L_089DFDDC;
    case 797u: goto L_089DFDE4;
    case 798u: goto L_089DFE04;
    case 799u: goto L_089DFE10;
    case 800u: goto L_089DFE28;
    case 801u: goto L_089DFE2C;
    case 802u: goto L_089DFE4C;
    case 803u: goto L_089DFE70;
    case 804u: goto L_089DFE7C;
    case 805u: goto L_089DFE84;
    case 806u: goto L_089DFE90;
    case 807u: goto L_089DFE9C;
    case 808u: goto L_089DFEA0;
    case 809u: goto L_089DFEB4;
    case 810u: goto L_089DFEDC;
    case 811u: goto L_089DFEE8;
    case 812u: goto L_089DFEF0;
    case 813u: goto L_089DFF20;
    case 814u: goto L_089DFF30;
    case 815u: goto L_089DFF48;
    case 816u: goto L_089DFF70;
    case 817u: goto L_089DFFB8;
    case 818u: goto L_089DFFD0;
    case 819u: goto L_089DFFE0;
    case 820u: goto L_089DFFE8;
    case 821u: goto L_089DFFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089DC004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC4AC;
      }
      goto L_089DC00C;
    }
L_089DC00C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11408)));
    f12 = f12 / f13;
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f13));
    ctx.set_fpu_condition((f12 < f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_089DC034;
    }
    goto L_089DC034;
}
L_089DC034:
{
    float f13 = hot_regs.f13;
    float f28 = ctx.fpr[28];
    float f30 = ctx.fpr[30];
{
    std::uint32_t g16 = ctx.gpr[16];
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(208)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11408)));
    f13 = f13 / hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (g16 + static_cast<std::uint32_t>(2032));
    { const float fs = f30; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f30 = std::bit_cast<float>(0x7FC00000u); else f30 = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[26] <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = f28; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f28 = std::bit_cast<float>(0x7FC00000u); else f28 = fs * ft; }
    hot_regs.f13 = f13;
    ctx.fpr[28] = f28;
    ctx.fpr[30] = f30;
      if (branch_taken) {
          goto L_089DC088;
      }
      goto L_089DC05C;
    }
}
}
L_089DC05C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    hot_regs.g6 = (8u << 16u);
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DC080;
      }
      goto L_089DC070;
    }
}
L_089DC070:
{
    std::uint32_t g4 = hot_regs.g4;
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
        goto L_089DC090;
    }
    goto L_089DC078;
}
L_089DC078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC0A8;
      }
      goto L_089DC080;
    }
L_089DC080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC4AC;
      }
      goto L_089DC088;
    }
L_089DC088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC4AC;
      }
      goto L_089DC090;
    }
L_089DC090:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DC0CC;
      }
      goto L_089DC0A8;
    }
}
L_089DC0A8:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(200)));
    hot_regs.g31 = (0x089DC0BCu);
    { const float fs = ctx.fpr[26]; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC0BCu) goto L_089DC0BC;
    return;
L_089DC0BC:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_089DC13C;
      }
      goto L_089DC0C4;
    }
L_089DC0C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC180;
      }
      goto L_089DC0CC;
    }
L_089DC0CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC4AC;
      }
      goto L_089DC0D4;
    }
L_089DC0D4:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089DC0ECu);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 265u, 0x08B00F0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC0ECu) goto L_089DC0EC;
    return;
L_089DC0EC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC108;
      }
      goto L_089DC0F4;
    }
L_089DC0F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 18u);
    { const bool branch_taken = ctx.gpr[18] != g4;
    g4 = (0u | 52u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DC110;
      }
      goto L_089DC100;
    }
}
L_089DC100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC130;
      }
      goto L_089DC108;
    }
L_089DC108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC4AC;
      }
      goto L_089DC110;
    }
L_089DC110:
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g4;
    hot_regs.g4 = (0u | 51u);
      if (branch_taken) {
          goto L_089DC130;
      }
      goto L_089DC118;
    }
L_089DC118:
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g4;
    hot_regs.g4 = (0u | 44u);
      if (branch_taken) {
          goto L_089DC130;
      }
      goto L_089DC120;
    }
L_089DC120:
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089DC130;
      }
      goto L_089DC128;
    }
L_089DC128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC4AC;
      }
      goto L_089DC130;
    }
L_089DC130:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_089DC0A8;
      }
      goto L_089DC13C;
    }
L_089DC13C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    g4 = (16576u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DC168;
      }
      goto L_089DC14C;
    }
}
L_089DC14C:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16128u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    { const float fs = hot_regs.f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089DC1F4;
      }
      goto L_089DC168;
    }
}
L_089DC168:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = hot_regs.f20 / f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    f12 = hot_regs.f13 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089DC1F4;
      }
      goto L_089DC180;
    }
}
L_089DC180:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    g4 = (16704u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DC1E0;
      }
      goto L_089DC190;
    }
}
L_089DC190:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = g4 == 0u;
    g4 = (16000u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DC1C8;
      }
      goto L_089DC19C;
    }
}
L_089DC19C:
    hot_regs.g31 = (0x089DC1A4u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC1A4u) goto L_089DC1A4;
    return;
L_089DC1A4:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    hot_regs.g4 = (16000u << 16u);
      if (branch_taken) {
          goto L_089DC1C8;
      }
      goto L_089DC1AC;
    }
L_089DC1AC:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16320u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = hot_regs.f20 / f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    f12 = hot_regs.f13 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089DC1F4;
      }
      goto L_089DC1C8;
    }
}
L_089DC1C8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    { const float fs = hot_regs.f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089DC1F4;
      }
      goto L_089DC1E0;
    }
}
L_089DC1E0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = hot_regs.f20 / f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    f12 = hot_regs.f13 - f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_089DC1F4;
}
L_089DC1F4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DC224;
      }
      goto L_089DC208;
    }
L_089DC208:
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DC224;
      }
      goto L_089DC218;
    }
L_089DC218:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089DC224;
L_089DC224:
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DC260;
      }
      goto L_089DC234;
    }
L_089DC234:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DC288;
      }
      goto L_089DC250;
    }
L_089DC250:
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DC288;
      }
      goto L_089DC260;
    }
L_089DC260:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(328));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089DC280u);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC280u) goto L_089DC280;
    return;
L_089DC280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC4AC;
      }
      goto L_089DC288;
    }
L_089DC288:
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_089DC2A4;
    }
    goto L_089DC298;
L_089DC298:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC4AC;
      }
      goto L_089DC2A0;
    }
L_089DC2A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_089DC2A4;
L_089DC2A4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u | 80u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DC4AC;
      }
      goto L_089DC2B4;
    }
}
L_089DC2B4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    hot_regs.g4 = (17530u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DC4AC;
      }
      goto L_089DC2D0;
    }
L_089DC2D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(48));
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
    g4 = (g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 4u, 3u);
      ctx.read_vfpu_vector_ct<8u, 3u>(vfpu_target_raw);
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
    g5 = (g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    g5 = (0u | 12u);
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(80));
    hot_regs.g6 = (g16 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089DC324;
}
L_089DC324:
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC390;
      }
      goto L_089DC330;
    }
L_089DC330:
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(1264)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DC390;
      }
      goto L_089DC388;
    }
L_089DC388:
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    hot_regs.f12 = std::sqrt(hot_regs.f13);
    goto L_089DC390;
L_089DC390:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(g5) < 27 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DC324;
      }
      goto L_089DC3A0;
    }
}
L_089DC3A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DC4AC;
      }
      goto L_089DC3A8;
    }
L_089DC3A8:
    hot_regs.g4 = (0u | 16u);
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g4;
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(944));
      if (branch_taken) {
          goto L_089DC408;
      }
      goto L_089DC3B4;
    }
L_089DC3B4:
    hot_regs.g31 = (0x089DC3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC3BCu) goto L_089DC3BC;
    return;
L_089DC3BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DC408;
      }
      goto L_089DC3CC;
    }
}
L_089DC3CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC3F8;
      }
      goto L_089DC3D8;
    }
L_089DC3D8:
    hot_regs.g31 = (0x089DC3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC3E0u) goto L_089DC3E0;
    return;
L_089DC3E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DC3F8;
      }
      goto L_089DC3F0;
    }
}
L_089DC3F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 17u);
      if (branch_taken) {
          goto L_089DC408;
      }
      goto L_089DC3F8;
    }
L_089DC3F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC408;
      }
      goto L_089DC404;
    }
L_089DC404:
    ctx.gpr[18] = (0u | 18u);
    goto L_089DC408;
L_089DC408:
    hot_regs.g5 = (ctx.gpr[18] & 255u);
    hot_regs.g31 = (0x089DC414u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 360u, 0x08B0D7B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC414u) goto L_089DC414;
    return;
L_089DC414:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (ctx.gpr[18] << 2u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    g21 = (ctx.gpr[16] + g21);
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_089DC470;
      }
      goto L_089DC420;
    }
}
L_089DC420:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089DC42Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 419u, 0x08B0DB54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC42Cu) goto L_089DC42C;
    return;
L_089DC42C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    { const bool branch_taken = hot_regs.g2 != g4;
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DC448;
      }
      goto L_089DC438;
    }
}
L_089DC438:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 23 ? 1u : 0u);
      if (branch_taken) {
          goto L_089DC448;
      }
      goto L_089DC440;
    }
L_089DC440:
    if (hot_regs.g4 != 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
        goto L_089DC474;
    }
    goto L_089DC448;
L_089DC448:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089DC454u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 419u, 0x08B0DB54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC454u) goto L_089DC454;
    return;
L_089DC454:
    hot_regs.g4 = (0u | 2u);
    if (hot_regs.g2 != hot_regs.g4) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
        goto L_089DC474;
    }
    goto L_089DC460;
L_089DC460:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1264)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089DC470u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 3u, 0x08B00014u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC470u) goto L_089DC470;
    return;
L_089DC470:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    goto L_089DC474;
L_089DC474:
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089DC484u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 795u, 0x08833928u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC484u) goto L_089DC484;
    return;
L_089DC484:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1264)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(96));
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
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089DC4AC;
}
}
L_089DC4AC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089DC4E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (g4 | 0u);
    g4 = (hot_regs.g6 & 64u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089DC534;
      }
      goto L_089DC518;
    }
}
L_089DC518:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.f20 = std::bit_cast<float>(0u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-984));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DC558;
      }
      goto L_089DC52C;
    }
}
L_089DC52C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC53C;
      }
      goto L_089DC534;
    }
L_089DC534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC8F4;
      }
      goto L_089DC53C;
    }
L_089DC53C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 34u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089DC558;
      }
      goto L_089DC54C;
    }
L_089DC54C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089DC570;
      }
      goto L_089DC558;
    }
L_089DC558:
    hot_regs.g31 = (0x089DC560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC560u) goto L_089DC560;
    return;
L_089DC560:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g2;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089DC590;
      }
      goto L_089DC568;
    }
L_089DC568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC580;
      }
      goto L_089DC570;
    }
L_089DC570:
    hot_regs.g4 = (0u | 34u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_089DC8F4;
      }
      goto L_089DC580;
    }
L_089DC580:
    hot_regs.g31 = (0x089DC588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC588u) goto L_089DC588;
    return;
L_089DC588:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_089DC5F8;
      }
      goto L_089DC590;
    }
L_089DC590:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 << 8u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-6992));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(320)));
    hot_regs.g6 = (16672u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(316)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(316), hot_regs.g5);
    hot_regs.g31 = (0x089DC5D8u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC5D8u) goto L_089DC5D8;
    return;
L_089DC5D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g2 & 65535u);
    g5 = (0u | 6000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7904)));
    g5 = (ctx.hi);
    g4 = (g5 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7904), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089DC5F8;
}
L_089DC5F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
        goto L_089DC644;
    }
    goto L_089DC608;
}
L_089DC608:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(72)));
    g5 = (65528u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(72), g4);
    g5 = (0u + static_cast<std::uint32_t>(-513));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(72), g4);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f20));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089DC644;
}
}
L_089DC644:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | 80u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g5 = (32u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(944));
    hot_regs.g31 = (0x089DC670u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(660), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 420u, 0x08B0DB74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC670u) goto L_089DC670;
    return;
L_089DC670:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089DC764;
      }
      goto L_089DC67C;
    }
L_089DC67C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 12u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x089DC690u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 310u, 0x088316CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC690u) goto L_089DC690;
    return;
L_089DC690:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 13u);
    hot_regs.g6 = (0u | 6u);
    hot_regs.g31 = (0x089DC6A4u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 310u, 0x088316CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC6A4u) goto L_089DC6A4;
    return;
L_089DC6A4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 18u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x089DC6B8u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC6B8u) goto L_089DC6B8;
    return;
L_089DC6B8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 19u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x089DC6CCu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC6CCu) goto L_089DC6CC;
    return;
L_089DC6CC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 10u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x089DC6E0u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC6E0u) goto L_089DC6E0;
    return;
L_089DC6E0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 8u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x089DC6F4u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC6F4u) goto L_089DC6F4;
    return;
L_089DC6F4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 11u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x089DC708u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC708u) goto L_089DC708;
    return;
L_089DC708:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 9u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x089DC71Cu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC71Cu) goto L_089DC71C;
    return;
L_089DC71C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 5u);
    hot_regs.g31 = (0x089DC72Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 275u, 0x08845928u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC72Cu) goto L_089DC72C;
    return;
L_089DC72C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1284)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC764;
      }
      goto L_089DC738;
    }
L_089DC738:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g5 = (2179u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1284)));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089DC750u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(992));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC750u) goto L_089DC750;
    return;
L_089DC750:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC764;
      }
      goto L_089DC75C;
    }
L_089DC75C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_089DC764;
L_089DC764:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1653))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-8));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = (16076u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x089DC7A0u);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 572u, 0x08A1BC64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC7A0u) goto L_089DC7A0;
    return;
L_089DC7A0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089DC7B4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 877u, 0x08AFFAC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC7B4u) goto L_089DC7B4;
    return;
L_089DC7B4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-17));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2016), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(706))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-4));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(706), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-65));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(618))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-33));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089DC804u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 604u, 0x08832988u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC804u) goto L_089DC804;
    return;
L_089DC804:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DC830;
      }
      goto L_089DC814;
    }
}
L_089DC814:
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
    goto L_089DC830;
}
L_089DC830:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DC85C;
      }
      goto L_089DC840;
    }
}
L_089DC840:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-5));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5456), g4);
    hot_regs.g4 = g4;
    goto L_089DC85C;
}
L_089DC85C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089DC868u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC868u) goto L_089DC868;
    return;
L_089DC868:
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g31 = (0x089DC890u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(14864));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 167u, 0x089D1074u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC890u) goto L_089DC890;
    return;
L_089DC890:
    hot_regs.g31 = (0x089DC898u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 544u, 0x08A362BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC898u) goto L_089DC898;
    return;
L_089DC898:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089DC8D0;
      }
      goto L_089DC8A4;
    }
L_089DC8A4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 12u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    hot_regs.g31 = (0x089DC8C8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 287u, 0x089E974Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC8C8u) goto L_089DC8C8;
    return;
L_089DC8C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC8F4;
      }
      goto L_089DC8D0;
    }
L_089DC8D0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 6u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    hot_regs.g31 = (0x089DC8F4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 287u, 0x089E974Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC8F4u) goto L_089DC8F4;
    return;
L_089DC8F4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089DC914:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (16102u << 16u);
    f12 = std::bit_cast<float>(0u);
    g4 = (g4 | 26214u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9648), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9652), std::bit_cast<std::uint32_t>(hot_regs.f13));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9656), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089DC934:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089DC94C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g7 = (2206u << 16u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (0u | 4u);
    hot_regs.g6 = (0u | 6u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089DC974u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-14028));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DC974u) goto L_089DC974;
    return;
L_089DC974:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    f12 = std::bit_cast<float>(0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(154))))));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f12));
    g5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(154), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(112), 0u);
    g4 = (0u | 1000u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(154))))));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(116), g4);
    g4 = (16672u << 16u);
    g6 = (0u + static_cast<std::uint32_t>(-3));
    f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(f12));
    g4 = (g5 & g6);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(f13));
    g5 = (16256u << 16u);
    f13 = std::bit_cast<float>(g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(154), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(154))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(0u));
    g5 = (0u | 10u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(g5));
    g6 = (0u + static_cast<std::uint32_t>(-5));
    g5 = (0u | 10u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(0u));
    g4 = (g4 & g6);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(153), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(154), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(154))))));
    g5 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(154), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(154))))));
    g5 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(154), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(128), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(120), g4);
    hot_regs.g2 = (g16 | 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(124), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089DCA68:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (15395u << 16u);
    g5 = (g5 | 55050u);
    f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((f13 < hot_regs.f12));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
        goto L_089DCA84;
    }
    goto L_089DCA84;
}
}
L_089DCA84:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(g5);
    { const bool branch_taken = static_cast<std::int32_t>(g5) >= 0;
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089DCAA4;
      }
      goto L_089DCA98;
    }
}
}
L_089DCA98:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    goto L_089DCAA4;
L_089DCAA4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(132)));
    f14 = f14 / f12;
    hot_regs.g6 = (17530u << 16u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(112)));
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g6);
    f16 = std::bit_cast<float>(hot_regs.g7);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = std::bit_cast<float>(g5);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    f13 = f13 - f12;
    f13 = f13 / f16;
    g5 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(116), g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    f12 = std::bit_cast<float>(g5);
    { const bool branch_taken = static_cast<std::int32_t>(g5) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_089DCB04;
      }
      goto L_089DCAF8;
    }
}
}
L_089DCAF8:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    goto L_089DCB04;
L_089DCB04:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(116)));
    f14 = std::bit_cast<float>(g5);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(112), g5);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089DCB28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(60))))));
    hot_regs.g5 = (0u | 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(60))))));
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089DCB70;
      }
      goto L_089DCB48;
    }
}
L_089DCB48:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g5 << 2u);
    g7 = (hot_regs.g4 + g7);
    ctx.gpr[8] = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g5 = (g5 << 16u);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g7 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089DCB48;
      }
      goto L_089DCB70;
    }
}
L_089DCB70:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCB78:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(112)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(116)));
    g7 = (g4 + static_cast<std::uint32_t>(38));
    g5 = (g5 + g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(112), g5);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0))))));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(2))))));
    g5 = (g4 + static_cast<std::uint32_t>(32));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g9));
    g5 = (g4 + static_cast<std::uint32_t>(44));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(2))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g9));
    g4 = (g4 + static_cast<std::uint32_t>(50));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(2))))));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g7));
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g4));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089DCBE4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g7 = (hot_regs.g7 & 255u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(2))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g6));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x089DCC30u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 509u, 0x08B46834u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DCC30u) goto L_089DCC30;
    return;
L_089DCC30:
    hot_regs.g31 = (0x089DCC38u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089DD2B0;
L_089DCC38:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(132)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(136)));
    f12 = f12 / hot_regs.f13;
    g4 = (17530u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(116), g4);
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089DCC70;
}
}
L_089DCC70:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089DCC80u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    goto L_089DCF78;
L_089DCC80:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089DCC70;
      }
      goto L_089DCC90;
    }
}
L_089DCC90:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g31 = (0x089DCCA8u);
    ctx.gpr[8] = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 577u, 0x08A17018u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DCCA8u) goto L_089DCCA8;
    return;
L_089DCCA8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089DCCC8;
      }
      goto L_089DCCBC;
    }
}
}
L_089DCCBC:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    goto L_089DCCC8;
L_089DCCC8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(116)));
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(112), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089DCD00:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    f12 = std::bit_cast<float>(g5);
    { const bool branch_taken = static_cast<std::int32_t>(g5) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089DCD1C;
      }
      goto L_089DCD10;
    }
}
}
L_089DCD10:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_089DCD1C;
L_089DCD1C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(116)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(144)));
    f14 = std::bit_cast<float>(g5);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(112), g5);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089DCD44:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g7 = (ctx.gpr[8] & 255u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[10]));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(38));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(2))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(2))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g5));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(hot_regs.g6));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x089DCDC8u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 509u, 0x08B46834u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DCDC8u) goto L_089DCDC8;
    return;
L_089DCDC8:
    hot_regs.g31 = (0x089DCDD0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089DD2B0;
L_089DCDD0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(132)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(136)));
    f12 = f12 / hot_regs.f13;
    g4 = (17530u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(116), g4);
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089DCE08;
}
}
L_089DCE08:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089DCE18u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    goto L_089DCF78;
L_089DCE18:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089DCE08;
      }
      goto L_089DCE28;
    }
}
L_089DCE28:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g31 = (0x089DCE40u);
    ctx.gpr[8] = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 577u, 0x08A17018u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DCE40u) goto L_089DCE40;
    return;
L_089DCE40:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089DCE60;
      }
      goto L_089DCE54;
    }
}
}
L_089DCE54:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    goto L_089DCE60;
L_089DCE60:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(116)));
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(112), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089DCE98:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    g7 = (16281u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f20));
    f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 | 39322u);
    f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    ctx.set_fpu_condition((f20 <= f12));
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_089DCEE4;
      }
      goto L_089DCEDC;
    }
}
}
L_089DCEDC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_089DCEFC;
      }
      goto L_089DCEE4;
    }
L_089DCEE4:
    hot_regs.f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DCEFC;
      }
      goto L_089DCEF8;
    }
L_089DCEF8:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089DCEFC;
L_089DCEFC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    goto L_089DCF04;
L_089DCF04:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089DCF14u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    goto L_089DCF78;
L_089DCF14:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089DCF04;
      }
      goto L_089DCF24;
    }
}
L_089DCF24:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[9] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089DCF54u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 583u, 0x08A17304u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DCF54u) goto L_089DCF54;
    return;
L_089DCF54:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_089DCF78:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-208));
    hot_regs.g7 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g7);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    hot_regs.g5 = (hot_regs.g5 << 2u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), hot_regs.g31);
    hot_regs.g31 = (0x089DCFCCu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 117u, 0x08978E60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DCFCCu) goto L_089DCFCC;
    return;
L_089DCFCC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16384u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    g5 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    g4 = (g4 & 7u);
    g5 = (16416u << 16u);
    { const bool branch_taken = g4 != 0u;
    hot_regs.f12 = std::bit_cast<float>(g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DD034;
      }
      goto L_089DCFF0;
    }
}
L_089DCFF0:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    f15 = std::bit_cast<float>(g4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    g4 = (hot_regs.g5 & 56u);
    g4 = (g4 >> 3u);
    f15 = std::bit_cast<float>(g4);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    { const float fs = ctx.fpr[16]; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_089DD024;
      }
      goto L_089DD018;
    }
}
}
L_089DD018:
    hot_regs.g4 = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = hot_regs.f15 + ctx.fpr[16];
    goto L_089DD024;
L_089DD024:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = f13 - hot_regs.f15;
    f13 = hot_regs.f14 + f13;
    { const bool branch_taken = 0u == 0u;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089DD0F0;
      }
      goto L_089DD034;
    }
}
L_089DD034:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    g4 = (g4 & 56u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DD084;
      }
      goto L_089DD044;
    }
}
L_089DD044:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    f15 = std::bit_cast<float>(g4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    g4 = (hot_regs.g5 & 7u);
    f15 = std::bit_cast<float>(g4);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    { const float fs = ctx.fpr[16]; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_089DD074;
      }
      goto L_089DD068;
    }
}
}
L_089DD068:
    hot_regs.g4 = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = hot_regs.f15 + ctx.fpr[16];
    goto L_089DD074;
L_089DD074:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = f13 - hot_regs.f15;
    f13 = hot_regs.f14 + f13;
    { const bool branch_taken = 0u == 0u;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089DD0F0;
      }
      goto L_089DD084;
    }
}
L_089DD084:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    g5 = (g5 + static_cast<std::uint32_t>(5));
    g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(5));
    hot_regs.g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g6 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (g6 == 0u) {
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_089DD0BC;
    }
    goto L_089DD0A8;
}
L_089DD0A8:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 255u);
    f15 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    hot_regs.g4 = g4;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_089DD0C8;
      }
      goto L_089DD0BC;
    }
}
}
L_089DD0BC:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 255u);
    f15 = std::bit_cast<float>(g4);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    hot_regs.g4 = g4;
    hot_regs.f15 = f15;
    goto L_089DD0C8;
}
}
L_089DD0C8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5))))));
    f16 = std::bit_cast<float>(g4);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    g4 = (15744u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(g4);
    { const float fs = f15; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = f14 + f13;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 + f15;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    goto L_089DD0F0;
}
}
L_089DD0F0:
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = hot_regs.f14 - hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = ctx.fpr[16] + hot_regs.f13;
    hot_regs.f13 = std::sqrt(hot_regs.f13);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
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
    hot_regs.g31 = (0x089DD21Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD21Cu) goto L_089DD21C;
    return;
L_089DD21C:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089DD23C:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD244:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089DD26C;
      }
      goto L_089DD264;
    }
}
L_089DD264:
    hot_regs.g31 = (0x089DD26Cu);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD26Cu) goto L_089DD26C;
    return;
L_089DD26C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089DD288;
      }
      goto L_089DD278;
    }
L_089DD278:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD288;
      }
      goto L_089DD280;
    }
L_089DD280:
    hot_regs.g31 = (0x089DD288u);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD288u) goto L_089DD288;
    return;
L_089DD288:
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
L_089DD29C:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g4 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089DD2B0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), hot_regs.g31);
    hot_regs.g29 = g29;
    goto L_089DD2D8;
}
L_089DD2D8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089DD2E8u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    goto L_089DCF78;
L_089DD2E8:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089DD2D8;
      }
      goto L_089DD2F8;
    }
}
L_089DD2F8:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089DD31Cu);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 587u, 0x08A17634u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD31Cu) goto L_089DD31C;
    return;
L_089DD31C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g31 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD3C4:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11240)));
    g6 = (static_cast<std::int32_t>(g6) < 16 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089DD458;
      }
      goto L_089DD3D8;
    }
}
L_089DD3D8:
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (2236u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(32304));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(48));
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (17096u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DD458;
      }
      goto L_089DD424;
    }
L_089DD424:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g28 = ctx.gpr[28];
    g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-11240)));
    g6 = (g6 << 5u);
    g7 = (2279u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(19776));
    g6 = (g6 + g7);
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-11240)));
    g6 = (g4 << 5u);
    g6 = (g6 + g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(16), hot_regs.g5);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-11240), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_089DD458;
}
L_089DD458:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DD460:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[17] = (g6 | 0u);
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11240)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f20));
    f20 = std::bit_cast<float>(0u);
    g6 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    g7 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    { const bool branch_taken = g7 == 0u;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_089DD61C;
      }
      goto L_089DD49C;
    }
}
}
L_089DD49C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (2279u << 16u);
    g7 = (hot_regs.g6 << 5u);
    g8 = (g8 + static_cast<std::uint32_t>(19776));
    g7 = (g7 + g8);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(16)));
    if (static_cast<std::int32_t>(g7) > 0) {
    g7 = (static_cast<std::int32_t>(g7) < 2 ? 1u : 0u);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
        goto L_089DD4C8;
    }
    goto L_089DD4B8;
}
L_089DD4B8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g7) < 0;
    // nop
      if (branch_taken) {
          goto L_089DD608;
      }
      goto L_089DD4C0;
    }
L_089DD4C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD608;
      }
      goto L_089DD4C8;
    }
L_089DD4C8:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD608;
      }
      goto L_089DD4D0;
    }
L_089DD4D0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    g7 = (16752u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g7);
    g8 = (2279u << 16u);
    g7 = (hot_regs.g6 << 5u);
    f12 = f12 + hot_regs.f13;
    g8 = (g8 + static_cast<std::uint32_t>(19776));
    hot_regs.f14 = std::bit_cast<float>(0u);
    g7 = (g7 + g8);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(8)));
    f12 = f12 - hot_regs.f15;
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
        goto L_089DD50C;
    }
    goto L_089DD50C;
}
}
L_089DD50C:
    hot_regs.g7 = (16928u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DD608;
      }
      goto L_089DD524;
    }
L_089DD524:
    hot_regs.g7 = (16928u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.g7 = (16256u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    hot_regs.g7 = (hot_regs.g6 << 5u);
    ctx.gpr[8] = (2279u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(19776));
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[8]);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g7 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g7 = (16968u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g7);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DD608;
      }
      goto L_089DD598;
    }
L_089DD598:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16800u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g5 = (16800u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DD5BC;
      }
      goto L_089DD5B0;
    }
}
L_089DD5B0:
    hot_regs.g5 = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
      if (branch_taken) {
          goto L_089DD5DC;
      }
      goto L_089DD5BC;
    }
L_089DD5BC:
{
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
{
    std::uint32_t g5 = hot_regs.g5;
    f14 = std::bit_cast<float>(g5);
    g5 = (16880u << 16u);
    f14 = hot_regs.f13 - f14;
    hot_regs.f15 = std::bit_cast<float>(g5);
    f20 = f14 / hot_regs.f15;
    g5 = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g5);
    f20 = ctx.fpr[16] - f20;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
    hot_regs.f20 = f20;
    goto L_089DD5DC;
}
}
L_089DD5DC:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16128u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    g5 = (0u | 1u);
    { const float fs = f12; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = hot_regs.f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    f20 = f20 / hot_regs.f13;
    f22 = f22 / hot_regs.f13;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
    goto L_089DD608;
}
}
L_089DD608:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11240)));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g7 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089DD49C;
      }
      goto L_089DD61C;
    }
}
L_089DD61C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD684;
      }
      goto L_089DD624;
    }
L_089DD624:
    hot_regs.g31 = (0x089DD62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD62Cu) goto L_089DD62C;
    return;
L_089DD62C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 31u);
    g4 = (g4 + static_cast<std::uint32_t>(-16));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (15205u << 16u);
    g4 = (g4 | 24642u);
    f13 = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(g4);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    f12 = f12 + hot_regs.f14;
    hot_regs.g2 = (0u | 1u);
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = f15 + f16;
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    f12 = f13 + f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_089DD688;
      }
      goto L_089DD684;
    }
}
}
L_089DD684:
    hot_regs.g2 = (0u | 0u);
    goto L_089DD688;
L_089DD688:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089DD6A4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    hot_regs.g31 = (0x089DD6D8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD6D8u) goto L_089DD6D8;
    return;
L_089DD6D8:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089DD6F4;
      }
      goto L_089DD6EC;
    }
L_089DD6EC:
    hot_regs.g31 = (0x089DD6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD6F4u) goto L_089DD6F4;
    return;
L_089DD6F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g4 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089DD734:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089DD754u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD754u) goto L_089DD754;
    return;
L_089DD754:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    g4 = (2236u << 16u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DD774;
      }
      goto L_089DD764;
    }
}
L_089DD764:
    hot_regs.g31 = (0x089DD76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 218u, 0x08A1D29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD76Cu) goto L_089DD76C;
    return;
L_089DD76C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD780;
      }
      goto L_089DD774;
    }
L_089DD774:
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x089DD780u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2652), static_cast<std::uint8_t>(hot_regs.g5));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 203u, 0x08A1D1F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD780u) goto L_089DD780;
    return;
L_089DD780:
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
L_089DD794:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DD7B0u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD7B0u) goto L_089DD7B0;
    return;
L_089DD7B0:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[16] != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_089DD7C4;
    }
    goto L_089DD7BC;
L_089DD7BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089DD7C8;
      }
      goto L_089DD7C4;
    }
L_089DD7C4:
    ctx.gpr[16] = (hot_regs.g4 + ctx.gpr[16]);
    goto L_089DD7C8;
L_089DD7C8:
    hot_regs.g31 = (0x089DD7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 327u, 0x088099B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD7D0u) goto L_089DD7D0;
    return;
L_089DD7D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    hot_regs.g4 = g4;
        goto L_089DD7E8;
    }
    goto L_089DD7DC;
}
L_089DD7DC:
    hot_regs.g31 = (0x089DD7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD7E4u) goto L_089DD7E4;
    return;
L_089DD7E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_089DD7E8;
L_089DD7E8:
    hot_regs.g31 = (0x089DD7F0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 96u, 0x0884C928u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD7F0u) goto L_089DD7F0;
    return;
L_089DD7F0:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_089DD804:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089DD820;
      }
      goto L_089DD818;
    }
}
L_089DD818:
    hot_regs.g31 = (0x089DD820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD820u) goto L_089DD820;
    return;
L_089DD820:
    hot_regs.g31 = (0x089DD828u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 992u, 0x08B3B948u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD828u) goto L_089DD828;
    return;
L_089DD828:
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
L_089DD838:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089DD858;
      }
      goto L_089DD850;
    }
}
L_089DD850:
    hot_regs.g31 = (0x089DD858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD858u) goto L_089DD858;
    return;
L_089DD858:
    hot_regs.g31 = (0x089DD860u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 977u, 0x08B3B824u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD860u) goto L_089DD860;
    return;
L_089DD860:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD870;
      }
      goto L_089DD868;
    }
L_089DD868:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_089DD874;
      }
      goto L_089DD870;
    }
L_089DD870:
    hot_regs.g4 = (0u | 0u);
    goto L_089DD874;
L_089DD874:
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
          goto L_089DD898;
      }
      goto L_089DD890;
    }
}
L_089DD890:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089DD8E0;
      }
      goto L_089DD898;
    }
L_089DD898:
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
          goto L_089DD8C4;
      }
      goto L_089DD8B8;
    }
}
L_089DD8B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DD8E0;
      }
      goto L_089DD8C4;
    }
}
L_089DD8C4:
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
          goto L_089DD8E0;
      }
      goto L_089DD8DC;
    }
}
L_089DD8DC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DD8E0;
L_089DD8E0:
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
L_089DD8F4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089DD910;
      }
      goto L_089DD908;
    }
}
L_089DD908:
    hot_regs.g31 = (0x089DD910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD910u) goto L_089DD910;
    return;
L_089DD910:
    hot_regs.g31 = (0x089DD918u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 93u, 0x0884C8F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD918u) goto L_089DD918;
    return;
L_089DD918:
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
L_089DD928:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089DD948u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD948u) goto L_089DD948;
    return;
L_089DD948:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x089DD954u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 593u, 0x08AD35C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD954u) goto L_089DD954;
    return;
L_089DD954:
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
L_089DD968:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DD990u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD990u) goto L_089DD990;
    return;
L_089DD990:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
      if (branch_taken) {
          goto L_089DD9BC;
      }
      goto L_089DD9A0;
    }
L_089DD9A0:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x089DD9B4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 346u, 0x088DE1A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD9B4u) goto L_089DD9B4;
    return;
L_089DD9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD9D0;
      }
      goto L_089DD9BC;
    }
L_089DD9BC:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x089DD9D0u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 346u, 0x088DE1A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DD9D0u) goto L_089DD9D0;
    return;
L_089DD9D0:
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
L_089DD9E8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089DDA08u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDA08u) goto L_089DDA08;
    return;
L_089DDA08:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
      if (branch_taken) {
          goto L_089DDA24;
      }
      goto L_089DDA14;
    }
L_089DDA14:
    hot_regs.g31 = (0x089DDA1Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 350u, 0x088DE1D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDA1Cu) goto L_089DDA1C;
    return;
L_089DDA1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDA2C;
      }
      goto L_089DDA24;
    }
L_089DDA24:
    hot_regs.g31 = (0x089DDA2Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 350u, 0x088DE1D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDA2Cu) goto L_089DDA2C;
    return;
L_089DDA2C:
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
L_089DDA40:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089DDA68;
      }
      goto L_089DDA60;
    }
}
L_089DDA60:
    hot_regs.g31 = (0x089DDA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDA68u) goto L_089DDA68;
    return;
L_089DDA68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g4 = (g4 ^ 2u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DDA88;
      }
      goto L_089DDA84;
    }
}
L_089DDA84:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DDA88;
L_089DDA88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089DDAB4;
      }
      goto L_089DDAAC;
    }
}
L_089DDAAC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089DDAFC;
      }
      goto L_089DDAB4;
    }
L_089DDAB4:
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
          goto L_089DDAE0;
      }
      goto L_089DDAD4;
    }
}
L_089DDAD4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DDAFC;
      }
      goto L_089DDAE0;
    }
}
L_089DDAE0:
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
          goto L_089DDAFC;
      }
      goto L_089DDAF8;
    }
}
L_089DDAF8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DDAFC;
L_089DDAFC:
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
L_089DDB14:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x089DDB3Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDB3Cu) goto L_089DDB3C;
    return;
L_089DDB3C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8576), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8580), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8584), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8576));
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
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DDB90:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089DDBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDBA4u) goto L_089DDBA4;
    return;
L_089DDBA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (static_cast<std::int32_t>(g4) < 41 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DDC20;
      }
      goto L_089DDBB8;
    }
}
L_089DDBB8:
    hot_regs.g31 = (0x089DDBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDBC0u) goto L_089DDBC0;
    return;
L_089DDBC0:
    hot_regs.g31 = (0x089DDBC8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDBC8u) goto L_089DDBC8;
    return;
L_089DDBC8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089DDC18;
      }
      goto L_089DDBD0;
    }
L_089DDBD0:
    hot_regs.g31 = (0x089DDBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDBD8u) goto L_089DDBD8;
    return;
L_089DDBD8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 17u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DDC10;
      }
      goto L_089DDBEC;
    }
}
L_089DDBEC:
    hot_regs.g31 = (0x089DDBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDBF4u) goto L_089DDBF4;
    return;
L_089DDBF4:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (hot_regs.g2 | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(3262))))));
    g5 = (g5 & 8u);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DDC28;
      }
      goto L_089DDC08;
    }
}
L_089DDC08:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_089DDC4C;
      }
      goto L_089DDC10;
    }
L_089DDC10:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089DDC7C;
      }
      goto L_089DDC18;
    }
L_089DDC18:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089DDC7C;
      }
      goto L_089DDC20;
    }
L_089DDC20:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089DDC7C;
      }
      goto L_089DDC28;
    }
L_089DDC28:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1152)));
    if (hot_regs.g5 == 0u) {
    hot_regs.g4 = (ctx.gpr[16] & 255u);
        goto L_089DDC4C;
    }
    goto L_089DDC34;
L_089DDC34:
    hot_regs.g31 = (0x089DDC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDC3Cu) goto L_089DDC3C;
    return;
L_089DDC3C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_089DDC4C;
      }
      goto L_089DDC44;
    }
L_089DDC44:
    ctx.gpr[16] = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[16] & 255u);
    goto L_089DDC4C;
L_089DDC4C:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089DDC70;
      }
      goto L_089DDC54;
    }
L_089DDC54:
    hot_regs.g31 = (0x089DDC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDC5Cu) goto L_089DDC5C;
    return;
L_089DDC5C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDC78;
      }
      goto L_089DDC68;
    }
L_089DDC68:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089DDC7C;
      }
      goto L_089DDC70;
    }
L_089DDC70:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089DDC7C;
      }
      goto L_089DDC78;
    }
L_089DDC78:
    hot_regs.g2 = (0u | 1u);
    goto L_089DDC7C;
L_089DDC7C:
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
L_089DDC8C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[17] = (2238u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(29704));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6992));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x089DDCE4u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDCE4u) goto L_089DDCE4;
    return;
L_089DDCE4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17536));
    hot_regs.g31 = (0x089DDCF4u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDCF4u) goto L_089DDCF4;
    return;
L_089DDCF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 + g18);
    g7 = (g18 + g4);
    g6 = (g18 << 8u);
    g7 = (g7 << 5u);
    g6 = (g6 + g7);
    hot_regs.g5 = (0u | 0u);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (g6 + ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_089DDD14;
}
L_089DDD14:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (ctx.gpr[28] + g5);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(-17536))))));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(-17528), static_cast<std::uint8_t>(hot_regs.g7));
    g6 = (static_cast<std::int32_t>(g5) < 8 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089DDD14;
      }
      goto L_089DDD30;
    }
}
L_089DDD30:
    hot_regs.g31 = (0x089DDD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDD38u) goto L_089DDD38;
    return;
L_089DDD38:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089DDD58;
      }
      goto L_089DDD40;
    }
L_089DDD40:
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-11204));
    hot_regs.g31 = (0x089DDD4Cu);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDD4Cu) goto L_089DDD4C;
    return;
L_089DDD4C:
    hot_regs.g31 = (0x089DDD54u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDD54u) goto L_089DDD54;
    return;
L_089DDD54:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    goto L_089DDD58;
L_089DDD58:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x089DDD64u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 559u, 0x08946D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDD64u) goto L_089DDD64;
    return;
L_089DDD64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089DDD70u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDD70u) goto L_089DDD70;
    return;
L_089DDD70:
    hot_regs.g31 = (0x089DDD78u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 569u, 0x08946E58u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDD78u) goto L_089DDD78;
    return;
L_089DDD78:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g19 = ctx.gpr[19];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (49864u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f20) || std::isnan(f12)) && f20 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_089DDDB0;
      }
      goto L_089DDD98;
    }
}
}
L_089DDD98:
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDDC0;
      }
      goto L_089DDDB0;
    }
L_089DDDB0:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x089DDDBCu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDDBCu) goto L_089DDDBC;
    return;
L_089DDDBC:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DDDC0;
L_089DDDC0:
    hot_regs.g31 = (0x089DDDC8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDDC8u) goto L_089DDDC8;
    return;
L_089DDDC8:
    hot_regs.f12 = hot_regs.f20 + ctx.fpr[0];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089DDDF8u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDDF8u) goto L_089DDDF8;
    return;
L_089DDDF8:
    hot_regs.g31 = (0x089DDE00u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 571u, 0x08946EA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDE00u) goto L_089DDE00;
    return;
L_089DDE00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DDE0Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDE0Cu) goto L_089DDE0C;
    return;
L_089DDE0C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089DDE20u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDE20u) goto L_089DDE20;
    return;
L_089DDE20:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089DDE54:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DDE7Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDE7Cu) goto L_089DDE7C;
    return;
L_089DDE7C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DDE88u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDE88u) goto L_089DDE88;
    return;
L_089DDE88:
    hot_regs.g31 = (0x089DDE90u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDE90u) goto L_089DDE90;
    return;
L_089DDE90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g2 | 0u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(172)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g5 = (g5 + hot_regs.g6);
    { const bool branch_taken = static_cast<std::int32_t>(g5) >= 0;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(172), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DDEAC;
      }
      goto L_089DDEA8;
    }
}
L_089DDEA8:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(172), 0u);
    goto L_089DDEAC;
L_089DDEAC:
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
L_089DDEC4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x089DDEF8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDEF8u) goto L_089DDEF8;
    return;
L_089DDEF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DDF04u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDF04u) goto L_089DDF04;
    return;
L_089DDF04:
    hot_regs.g31 = (0x089DDF0Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDF0Cu) goto L_089DDF0C;
    return;
L_089DDF0C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(172)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DDF28;
      }
      goto L_089DDF20;
    }
}
L_089DDF20:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_089DDF2C;
      }
      goto L_089DDF28;
    }
L_089DDF28:
    hot_regs.g4 = (0u | 0u);
    goto L_089DDF2C;
L_089DDF2C:
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
          goto L_089DDF50;
      }
      goto L_089DDF48;
    }
}
L_089DDF48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089DDF98;
      }
      goto L_089DDF50;
    }
L_089DDF50:
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
          goto L_089DDF7C;
      }
      goto L_089DDF70;
    }
}
L_089DDF70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DDF98;
      }
      goto L_089DDF7C;
    }
}
L_089DDF7C:
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
          goto L_089DDF98;
      }
      goto L_089DDF94;
    }
}
L_089DDF94:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DDF98;
L_089DDF98:
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
L_089DDFB4:
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
    hot_regs.g31 = (0x089DDFE4u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDFE4u) goto L_089DDFE4;
    return;
L_089DDFE4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DDFF0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDFF0u) goto L_089DDFF0;
    return;
L_089DDFF0:
    hot_regs.g31 = (0x089DDFF8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DDFF8u) goto L_089DDFF8;
    return;
L_089DDFF8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089DE010u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE010u) goto L_089DE010;
    return;
L_089DE010:
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
L_089DE02C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (0u | 5u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x089DE06Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE06Cu) goto L_089DE06C;
    return;
L_089DE06C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DE078u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE078u) goto L_089DE078;
    return;
L_089DE078:
    hot_regs.g31 = (0x089DE080u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE080u) goto L_089DE080;
    return;
L_089DE080:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (49864u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089DE0B8;
      }
      goto L_089DE0A0;
    }
}
}
L_089DE0A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (50042u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (16457u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DE0CC;
      }
      goto L_089DE0B8;
    }
}
L_089DE0B8:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x089DE0C4u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE0C4u) goto L_089DE0C4;
    return;
L_089DE0C4:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (16457u << 16u);
    goto L_089DE0CC;
L_089DE0CC:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (17204u << 16u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f15 = hot_regs.f15 / hot_regs.f12;
    hot_regs.g4 = (0u | 64593u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089DE0FCu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 938u, 0x0897FAA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE0FCu) goto L_089DE0FC;
    return;
L_089DE0FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x089DE108u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE108u) goto L_089DE108;
    return;
L_089DE108:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089DE11Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE11Cu) goto L_089DE11C;
    return;
L_089DE11C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
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
L_089DE144:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DE16Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE16Cu) goto L_089DE16C;
    return;
L_089DE16C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DE178u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE178u) goto L_089DE178;
    return;
L_089DE178:
    hot_regs.g31 = (0x089DE180u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE180u) goto L_089DE180;
    return;
L_089DE180:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089DE18Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 655u, 0x08947470u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE18Cu) goto L_089DE18C;
    return;
L_089DE18C:
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
L_089DE1A4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DE1CCu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE1CCu) goto L_089DE1CC;
    return;
L_089DE1CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DE1D8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE1D8u) goto L_089DE1D8;
    return;
L_089DE1D8:
    hot_regs.g31 = (0x089DE1E0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE1E0u) goto L_089DE1E0;
    return;
L_089DE1E0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089DE1ECu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE1ECu) goto L_089DE1EC;
    return;
L_089DE1EC:
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
L_089DE204:
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
    hot_regs.g31 = (0x089DE234u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE234u) goto L_089DE234;
    return;
L_089DE234:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DE240u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE240u) goto L_089DE240;
    return;
L_089DE240:
    hot_regs.g31 = (0x089DE248u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE248u) goto L_089DE248;
    return;
L_089DE248:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2320)));
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DE268;
      }
      goto L_089DE260;
    }
}
L_089DE260:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_089DE26C;
      }
      goto L_089DE268;
    }
L_089DE268:
    hot_regs.g4 = (0u | 0u);
    goto L_089DE26C;
L_089DE26C:
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
          goto L_089DE290;
      }
      goto L_089DE288;
    }
}
L_089DE288:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089DE2D8;
      }
      goto L_089DE290;
    }
L_089DE290:
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
          goto L_089DE2BC;
      }
      goto L_089DE2B0;
    }
}
L_089DE2B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DE2D8;
      }
      goto L_089DE2BC;
    }
}
L_089DE2BC:
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
          goto L_089DE2D8;
      }
      goto L_089DE2D4;
    }
}
L_089DE2D4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DE2D8;
L_089DE2D8:
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
L_089DE2F4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089DE314u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE314u) goto L_089DE314;
    return;
L_089DE314:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DE320u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE320u) goto L_089DE320;
    return;
L_089DE320:
    hot_regs.g31 = (0x089DE328u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE328u) goto L_089DE328;
    return;
L_089DE328:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089DE334u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 655u, 0x08947470u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE334u) goto L_089DE334;
    return;
L_089DE334:
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
L_089DE348:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DE370u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE370u) goto L_089DE370;
    return;
L_089DE370:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE388;
      }
      goto L_089DE37C;
    }
L_089DE37C:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089DE38C;
      }
      goto L_089DE388;
    }
L_089DE388:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(0u));
    goto L_089DE38C;
L_089DE38C:
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
L_089DE3A4:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE3B8;
      }
      goto L_089DE3B0;
    }
L_089DE3B0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 1u);
      if (branch_taken) {
          goto L_089DE3BC;
      }
      goto L_089DE3B8;
    }
L_089DE3B8:
    hot_regs.g5 = (0u | 0u);
    goto L_089DE3BC;
L_089DE3BC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(524)));
    g5 = (g5 & 255u);
    g6 = (0u < g6 ? 1u : 0u);
    g5 = (g5 ^ g6);
    g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g6 != 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089DE3E0;
      }
      goto L_089DE3D8;
    }
}
L_089DE3D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_089DE428;
      }
      goto L_089DE3E0;
    }
L_089DE3E0:
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
          goto L_089DE40C;
      }
      goto L_089DE400;
    }
}
L_089DE400:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DE428;
      }
      goto L_089DE40C;
    }
}
L_089DE40C:
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
          goto L_089DE428;
      }
      goto L_089DE424;
    }
}
L_089DE424:
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DE428;
L_089DE428:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DE430:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x089DE45Cu);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE45Cu) goto L_089DE45C;
    return;
L_089DE45C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DE468u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE468u) goto L_089DE468;
    return;
L_089DE468:
    hot_regs.g31 = (0x089DE470u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE470u) goto L_089DE470;
    return;
L_089DE470:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(208)));
    hot_regs.g6 = (0u | 2u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_089DE484;
      }
      goto L_089DE480;
    }
L_089DE480:
    hot_regs.g4 = (0u | 1u);
    goto L_089DE484;
L_089DE484:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DE4B0;
      }
      goto L_089DE4A8;
    }
}
L_089DE4A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089DE4F8;
      }
      goto L_089DE4B0;
    }
L_089DE4B0:
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
          goto L_089DE4DC;
      }
      goto L_089DE4D0;
    }
}
L_089DE4D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DE4F8;
      }
      goto L_089DE4DC;
    }
}
L_089DE4DC:
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
          goto L_089DE4F8;
      }
      goto L_089DE4F4;
    }
}
L_089DE4F4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DE4F8;
L_089DE4F8:
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
L_089DE510:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x089DE538u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE538u) goto L_089DE538;
    return;
L_089DE538:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DE544u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE544u) goto L_089DE544;
    return;
L_089DE544:
    hot_regs.g31 = (0x089DE54Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE54Cu) goto L_089DE54C;
    return;
L_089DE54C:
    hot_regs.g31 = (0x089DE554u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE554u) goto L_089DE554;
    return;
L_089DE554:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE56C;
      }
      goto L_089DE55C;
    }
L_089DE55C:
    hot_regs.g31 = (0x089DE564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE564u) goto L_089DE564;
    return;
L_089DE564:
    hot_regs.g31 = (0x089DE56Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 362u, 0x0890D7C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE56Cu) goto L_089DE56C;
    return;
L_089DE56C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE62C;
      }
      goto L_089DE578;
    }
L_089DE578:
    hot_regs.g31 = (0x089DE580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE580u) goto L_089DE580;
    return;
L_089DE580:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (hot_regs.g2 | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(3262))))));
    g5 = (g5 & 8u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DE5B4;
      }
      goto L_089DE594;
    }
}
L_089DE594:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1152)));
    if (hot_regs.g5 == 0u) {
    hot_regs.g4 = (ctx.gpr[17] & 255u);
        goto L_089DE5B8;
    }
    goto L_089DE5A0;
L_089DE5A0:
    hot_regs.g31 = (0x089DE5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE5A8u) goto L_089DE5A8;
    return;
L_089DE5A8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_089DE5B8;
      }
      goto L_089DE5B0;
    }
L_089DE5B0:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DE5B4;
L_089DE5B4:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_089DE5B8;
L_089DE5B8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE5DC;
      }
      goto L_089DE5C0;
    }
L_089DE5C0:
    hot_regs.g31 = (0x089DE5C8u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE5C8u) goto L_089DE5C8;
    return;
L_089DE5C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(154)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-33));
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DE5E8;
      }
      goto L_089DE5DC;
    }
}
L_089DE5DC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089DE5E8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE5E8u) goto L_089DE5E8;
    return;
L_089DE5E8:
    hot_regs.g31 = (0x089DE5F0u);
    // nop
    goto L_089DDB90;
L_089DE5F0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE6B8;
      }
      goto L_089DE5F8;
    }
L_089DE5F8:
    hot_regs.g31 = (0x089DE600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE600u) goto L_089DE600;
    return;
L_089DE600:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 22u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DE6B8;
      }
      goto L_089DE614;
    }
}
L_089DE614:
    hot_regs.g31 = (0x089DE61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE61Cu) goto L_089DE61C;
    return;
L_089DE61C:
    hot_regs.g31 = (0x089DE624u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 301u, 0x08909180u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE624u) goto L_089DE624;
    return;
L_089DE624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE6B8;
      }
      goto L_089DE62C;
    }
L_089DE62C:
    hot_regs.g31 = (0x089DE634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE634u) goto L_089DE634;
    return;
L_089DE634:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (hot_regs.g2 | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(3262))))));
    g5 = (g5 & 8u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DE668;
      }
      goto L_089DE648;
    }
}
L_089DE648:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1152)));
    if (hot_regs.g5 == 0u) {
    hot_regs.g4 = (ctx.gpr[17] & 255u);
        goto L_089DE66C;
    }
    goto L_089DE654;
L_089DE654:
    hot_regs.g31 = (0x089DE65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE65Cu) goto L_089DE65C;
    return;
L_089DE65C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_089DE66C;
      }
      goto L_089DE664;
    }
L_089DE664:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DE668;
L_089DE668:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_089DE66C;
L_089DE66C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE68C;
      }
      goto L_089DE674;
    }
L_089DE674:
    hot_regs.g31 = (0x089DE67Cu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE67Cu) goto L_089DE67C;
    return;
L_089DE67C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(154)));
    g4 = (g4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DE698;
      }
      goto L_089DE68C;
    }
}
L_089DE68C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089DE698u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE698u) goto L_089DE698;
    return;
L_089DE698:
    hot_regs.g31 = (0x089DE6A0u);
    // nop
    goto L_089DDB90;
L_089DE6A0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE6B8;
      }
      goto L_089DE6A8;
    }
L_089DE6A8:
    hot_regs.g31 = (0x089DE6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE6B0u) goto L_089DE6B0;
    return;
L_089DE6B0:
    hot_regs.g31 = (0x089DE6B8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 301u, 0x08909180u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE6B8u) goto L_089DE6B8;
    return;
L_089DE6B8:
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
L_089DE6D0:
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
    hot_regs.g31 = (0x089DE700u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE700u) goto L_089DE700;
    return;
L_089DE700:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DE70Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE70Cu) goto L_089DE70C;
    return;
L_089DE70C:
    hot_regs.g31 = (0x089DE714u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE714u) goto L_089DE714;
    return;
L_089DE714:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2320)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g6);
    hot_regs.g31 = (0x089DE730u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE730u) goto L_089DE730;
    return;
L_089DE730:
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
L_089DE74C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089DE76Cu);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE76Cu) goto L_089DE76C;
    return;
L_089DE76C:
    hot_regs.g31 = (0x089DE774u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 997u, 0x08AB3E3Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE774u) goto L_089DE774;
    return;
L_089DE774:
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
L_089DE788:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DE7B0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE7B0u) goto L_089DE7B0;
    return;
L_089DE7B0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DE7BCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE7BCu) goto L_089DE7BC;
    return;
L_089DE7BC:
    hot_regs.g31 = (0x089DE7C4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE7C4u) goto L_089DE7C4;
    return;
L_089DE7C4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(2318))))));
      if (branch_taken) {
          goto L_089DE7E8;
      }
      goto L_089DE7D4;
    }
L_089DE7D4:
    hot_regs.g4 = (hot_regs.g4 | 1u);
    hot_regs.g31 = (0x089DE7E0u);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(2318), static_cast<std::uint8_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 249u, 0x08895340u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE7E0u) goto L_089DE7E0;
    return;
L_089DE7E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE7F4;
      }
      goto L_089DE7E8;
    }
L_089DE7E8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(2318), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_089DE7F4;
}
L_089DE7F4:
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
L_089DE80C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g6 + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089DE830u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE830u) goto L_089DE830;
    return;
L_089DE830:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE850;
      }
      goto L_089DE83C;
    }
L_089DE83C:
    ctx.gpr[16] = (0u | 1u);
    hot_regs.g31 = (0x089DE848u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE848u) goto L_089DE848;
    return;
L_089DE848:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g2 + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_089DE85C;
      }
      goto L_089DE850;
    }
L_089DE850:
    hot_regs.g31 = (0x089DE858u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE858u) goto L_089DE858;
    return;
L_089DE858:
    aot_mem.aot_store8(hot_regs.g2 + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    goto L_089DE85C;
L_089DE85C:
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
L_089DE870:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DE898u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE898u) goto L_089DE898;
    return;
L_089DE898:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DE8A4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE8A4u) goto L_089DE8A4;
    return;
L_089DE8A4:
    hot_regs.g31 = (0x089DE8ACu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE8ACu) goto L_089DE8AC;
    return;
L_089DE8AC:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x089DE8B8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 90u, 0x089607E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE8B8u) goto L_089DE8B8;
    return;
L_089DE8B8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE8C4;
      }
      goto L_089DE8C0;
    }
L_089DE8C0:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DE8C4;
L_089DE8C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089DE8F0;
      }
      goto L_089DE8E8;
    }
}
L_089DE8E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089DE938;
      }
      goto L_089DE8F0;
    }
L_089DE8F0:
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
          goto L_089DE91C;
      }
      goto L_089DE910;
    }
}
L_089DE910:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DE938;
      }
      goto L_089DE91C;
    }
}
L_089DE91C:
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
          goto L_089DE938;
      }
      goto L_089DE934;
    }
}
L_089DE934:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DE938;
L_089DE938:
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
L_089DE950:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x089DE980u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE980u) goto L_089DE980;
    return;
L_089DE980:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (49864u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089DE9B8;
      }
      goto L_089DE9A0;
    }
}
L_089DE9A0:
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DE9C8;
      }
      goto L_089DE9B8;
    }
L_089DE9B8:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x089DE9C4u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE9C4u) goto L_089DE9C4;
    return;
L_089DE9C4:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DE9C8;
L_089DE9C8:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089DE9E4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 99u, 0x08A94984u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE9E4u) goto L_089DE9E4;
    return;
L_089DE9E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DE9F0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE9F0u) goto L_089DE9F0;
    return;
L_089DE9F0:
    hot_regs.g31 = (0x089DE9F8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DE9F8u) goto L_089DE9F8;
    return;
L_089DE9F8:
    hot_regs.g31 = (0x089DEA00u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 261u, 0x089616B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEA00u) goto L_089DEA00;
    return;
L_089DEA00:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089DEA20:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089DEA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 566u, 0x08A36418u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEA30u) goto L_089DEA30;
    return;
L_089DEA30:
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
L_089DEA40:
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
    hot_regs.g31 = (0x089DEA70u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEA70u) goto L_089DEA70;
    return;
L_089DEA70:
    hot_regs.g31 = (0x089DEA78u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 569u, 0x08A36450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEA78u) goto L_089DEA78;
    return;
L_089DEA78:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089DEA8Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEA8Cu) goto L_089DEA8C;
    return;
L_089DEA8C:
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
L_089DEAA8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089DEAD4u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEAD4u) goto L_089DEAD4;
    return;
L_089DEAD4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DEAE0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEAE0u) goto L_089DEAE0;
    return;
L_089DEAE0:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089DEAECu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEAECu) goto L_089DEAEC;
    return;
L_089DEAEC:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x089DEAF8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEAF8u) goto L_089DEAF8;
    return;
L_089DEAF8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB38;
      }
      goto L_089DEB00;
    }
L_089DEB00:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g18 == 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089DEB38;
      }
      goto L_089DEB0C;
    }
}
L_089DEB0C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g18 + static_cast<std::uint32_t>(86))))));
    g4 = (0u | 226u);
    { const bool branch_taken = g18 == g4;
    g4 = (0u | 183u);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089DEB34;
      }
      goto L_089DEB1C;
    }
}
L_089DEB1C:
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g4;
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-959));
      if (branch_taken) {
          goto L_089DEB34;
      }
      goto L_089DEB24;
    }
L_089DEB24:
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g4;
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-937));
      if (branch_taken) {
          goto L_089DEB34;
      }
      goto L_089DEB2C;
    }
L_089DEB2C:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089DEB38;
      }
      goto L_089DEB34;
    }
L_089DEB34:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DEB38;
L_089DEB38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089DEB64;
      }
      goto L_089DEB5C;
    }
}
L_089DEB5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089DEBAC;
      }
      goto L_089DEB64;
    }
L_089DEB64:
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
          goto L_089DEB90;
      }
      goto L_089DEB84;
    }
}
L_089DEB84:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DEBAC;
      }
      goto L_089DEB90;
    }
}
L_089DEB90:
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
          goto L_089DEBAC;
      }
      goto L_089DEBA8;
    }
}
L_089DEBA8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DEBAC;
L_089DEBAC:
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
L_089DEBC8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x089DEBF8u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEBF8u) goto L_089DEBF8;
    return;
L_089DEBF8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x089DEC0Cu);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEC0Cu) goto L_089DEC0C;
    return;
L_089DEC0C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_089DEC20;
    }
    goto L_089DEC18;
L_089DEC18:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC24;
      }
      goto L_089DEC20;
    }
L_089DEC20:
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g5);
    goto L_089DEC24;
L_089DEC24:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g7 = (hot_regs.g4 | 0u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC6C;
      }
      goto L_089DEC38;
    }
L_089DEC38:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (static_cast<std::int32_t>(hot_regs.g6) < 65 ? 1u : 0u);
    { const bool branch_taken = g9 != 0u;
    g9 = (static_cast<std::int32_t>(hot_regs.g6) < 91 ? 1u : 0u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089DEC54;
      }
      goto L_089DEC44;
    }
}
L_089DEC44:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEC54;
      }
      goto L_089DEC4C;
    }
L_089DEC4C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g6));
    hot_regs.g6 = g6;
    goto L_089DEC54;
}
L_089DEC54:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    g8 = (g8 & 255u);
    hot_regs.g7 = (hot_regs.g5 + g8);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089DEC38;
      }
      goto L_089DEC6C;
    }
}
L_089DEC6C:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
      if (branch_taken) {
          goto L_089DEC90;
      }
      goto L_089DEC78;
    }
L_089DEC78:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089DEC88u);
    hot_regs.g6 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 552u, 0x08AD32D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEC88u) goto L_089DEC88;
    return;
L_089DEC88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DECA0;
      }
      goto L_089DEC90;
    }
L_089DEC90:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089DECA0u);
    hot_regs.g6 = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 552u, 0x08AD32D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DECA0u) goto L_089DECA0;
    return;
L_089DECA0:
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
L_089DECBC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x089DECE4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DECE4u) goto L_089DECE4;
    return;
L_089DECE4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DECF0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DECF0u) goto L_089DECF0;
    return;
L_089DECF0:
    hot_regs.g31 = (0x089DECF8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DECF8u) goto L_089DECF8;
    return;
L_089DECF8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089DED10;
      }
      goto L_089DED04;
    }
L_089DED04:
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_089DED14;
      }
      goto L_089DED10;
    }
L_089DED10:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(0u));
    goto L_089DED14;
L_089DED14:
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
L_089DED2C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DED54u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DED54u) goto L_089DED54;
    return;
L_089DED54:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DED60u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DED60u) goto L_089DED60;
    return;
L_089DED60:
    hot_regs.g31 = (0x089DED68u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DED68u) goto L_089DED68;
    return;
L_089DED68:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089DED80;
      }
      goto L_089DED74;
    }
L_089DED74:
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(334), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_089DED84;
      }
      goto L_089DED80;
    }
L_089DED80:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(334), static_cast<std::uint8_t>(0u));
    goto L_089DED84;
L_089DED84:
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
L_089DED9C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DEDC4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEDC4u) goto L_089DEDC4;
    return;
L_089DEDC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DEDD0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEDD0u) goto L_089DEDD0;
    return;
L_089DEDD0:
    hot_regs.g31 = (0x089DEDD8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEDD8u) goto L_089DEDD8;
    return;
L_089DEDD8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(2318))))));
      if (branch_taken) {
          goto L_089DEDFC;
      }
      goto L_089DEDE8;
    }
L_089DEDE8:
    hot_regs.g4 = (hot_regs.g4 | 2u);
    hot_regs.g31 = (0x089DEDF4u);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(2318), static_cast<std::uint8_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 249u, 0x08895340u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEDF4u) goto L_089DEDF4;
    return;
L_089DEDF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEE08;
      }
      goto L_089DEDFC;
    }
L_089DEDFC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(2318), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_089DEE08;
}
L_089DEE08:
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
L_089DEE20:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DEE44u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEE44u) goto L_089DEE44;
    return;
L_089DEE44:
    hot_regs.g31 = (0x089DEE4Cu);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEE4Cu) goto L_089DEE4C;
    return;
L_089DEE4C:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(2308), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
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
L_089DEE68:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x089DEE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEE7Cu) goto L_089DEE7C;
    return;
L_089DEE7C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEEF0;
      }
      goto L_089DEE84;
    }
L_089DEE84:
    hot_regs.g31 = (0x089DEE8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEE8Cu) goto L_089DEE8C;
    return;
L_089DEE8C:
    hot_regs.g31 = (0x089DEE94u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEE94u) goto L_089DEE94;
    return;
L_089DEE94:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089DEEF0;
      }
      goto L_089DEE9C;
    }
L_089DEE9C:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4214), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9340)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9340), hot_regs.g4);
    hot_regs.g31 = (0x089DEEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEEB8u) goto L_089DEEB8;
    return;
L_089DEEB8:
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089DEED0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEED0u) goto L_089DEED0;
    return;
L_089DEED0:
    hot_regs.g31 = (0x089DEED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEED8u) goto L_089DEED8;
    return;
L_089DEED8:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f20));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089DEEF0;
}
}
L_089DEEF0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089DEF04:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    g17 = (2237u << 16u);
    g17 = (g17 + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089DEF40;
      }
      goto L_089DEF28;
    }
}
L_089DEF28:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), hot_regs.g4);
    hot_regs.g31 = (0x089DEF38u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEF38u) goto L_089DEF38;
    return;
L_089DEF38:
    hot_regs.g31 = (0x089DEF40u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-11216));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEF40u) goto L_089DEF40;
    return;
L_089DEF40:
    hot_regs.g31 = (0x089DEF48u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DEF48u) goto L_089DEF48;
    return;
L_089DEF48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4214)));
    g4 = (hot_regs.g2 | g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DEF60;
      }
      goto L_089DEF58;
    }
}
L_089DEF58:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_089DEF64;
      }
      goto L_089DEF60;
    }
L_089DEF60:
    hot_regs.g4 = (0u | 1u);
    goto L_089DEF64;
L_089DEF64:
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
          goto L_089DEF88;
      }
      goto L_089DEF80;
    }
}
L_089DEF80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089DEFD0;
      }
      goto L_089DEF88;
    }
L_089DEF88:
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
          goto L_089DEFB4;
      }
      goto L_089DEFA8;
    }
}
L_089DEFA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DEFD0;
      }
      goto L_089DEFB4;
    }
}
L_089DEFB4:
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
          goto L_089DEFD0;
      }
      goto L_089DEFCC;
    }
}
L_089DEFCC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DEFD0;
L_089DEFD0:
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
L_089DEFE8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DF010u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF010u) goto L_089DF010;
    return;
L_089DF010:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DF01Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF01Cu) goto L_089DF01C;
    return;
L_089DF01C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (hot_regs.g2 | 0u);
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(2228)));
    g6 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g6 = (static_cast<std::int32_t>(g4) < 43 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089DF04C;
      }
      goto L_089DF030;
    }
}
L_089DF030:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < 40 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < 43 ? 1u : 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089DF04C;
      }
      goto L_089DF03C;
    }
}
L_089DF03C:
    hot_regs.g6 = (0u | 36u);
    if (hot_regs.g4 != hot_regs.g6) {
    hot_regs.g5 = (0u | 55u);
        goto L_089DF0A8;
    }
    goto L_089DF048;
L_089DF048:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 43 ? 1u : 0u);
    goto L_089DF04C;
L_089DF04C:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 52 ? 1u : 0u);
      if (branch_taken) {
          goto L_089DF064;
      }
      goto L_089DF054;
    }
L_089DF054:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 55u);
        goto L_089DF0A8;
    }
    goto L_089DF060;
L_089DF060:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 52 ? 1u : 0u);
    goto L_089DF064;
L_089DF064:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 66 ? 1u : 0u);
      if (branch_taken) {
          goto L_089DF074;
      }
      goto L_089DF06C;
    }
L_089DF06C:
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 55u);
        goto L_089DF0A8;
    }
    goto L_089DF074;
L_089DF074:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(456)));
    hot_regs.g7 = (g6 & 4096u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 & 8192u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089DF0A4;
      }
      goto L_089DF084;
    }
}
L_089DF084:
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 55u);
        goto L_089DF0A8;
    }
    goto L_089DF08C;
L_089DF08C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(1252)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DF0B0;
      }
      goto L_089DF0A4;
    }
L_089DF0A4:
    hot_regs.g5 = (0u | 55u);
    goto L_089DF0A8;
L_089DF0A8:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089DF0B8;
      }
      goto L_089DF0B0;
    }
L_089DF0B0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_089DF0BC;
      }
      goto L_089DF0B8;
    }
L_089DF0B8:
    hot_regs.g4 = (0u | 0u);
    goto L_089DF0BC;
L_089DF0BC:
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
          goto L_089DF0E0;
      }
      goto L_089DF0D8;
    }
}
L_089DF0D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089DF128;
      }
      goto L_089DF0E0;
    }
L_089DF0E0:
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
          goto L_089DF10C;
      }
      goto L_089DF100;
    }
}
L_089DF100:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DF128;
      }
      goto L_089DF10C;
    }
}
L_089DF10C:
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
          goto L_089DF128;
      }
      goto L_089DF124;
    }
}
L_089DF124:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DF128;
L_089DF128:
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
L_089DF140:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x089DF160u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF160u) goto L_089DF160;
    return;
L_089DF160:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DF16Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF16Cu) goto L_089DF16C;
    return;
L_089DF16C:
    hot_regs.g31 = (0x089DF174u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF174u) goto L_089DF174;
    return;
L_089DF174:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x089DF180u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF180u) goto L_089DF180;
    return;
L_089DF180:
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(154)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g5 | 128u);
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g31 = (0x089DF198u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF198u) goto L_089DF198;
    return;
L_089DF198:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF1AC;
      }
      goto L_089DF1A4;
    }
L_089DF1A4:
    hot_regs.g31 = (0x089DF1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF1ACu) goto L_089DF1AC;
    return;
L_089DF1AC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(hot_regs.g5));
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
L_089DF1CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DF1F4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF1F4u) goto L_089DF1F4;
    return;
L_089DF1F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DF200u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF200u) goto L_089DF200;
    return;
L_089DF200:
    hot_regs.g31 = (0x089DF208u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF208u) goto L_089DF208;
    return;
L_089DF208:
    hot_regs.g31 = (0x089DF210u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF210u) goto L_089DF210;
    return;
L_089DF210:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x089DF21Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 953u, 0x0898BB34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF21Cu) goto L_089DF21C;
    return;
L_089DF21C:
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
L_089DF234:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 << 8u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-6992));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089DF268u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 274u, 0x08961774u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF268u) goto L_089DF268;
    return;
L_089DF268:
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
L_089DF278:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DF2A0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF2A0u) goto L_089DF2A0;
    return;
L_089DF2A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DF2ACu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF2ACu) goto L_089DF2AC;
    return;
L_089DF2AC:
    hot_regs.g31 = (0x089DF2B4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF2B4u) goto L_089DF2B4;
    return;
L_089DF2B4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089DF2CC;
      }
      goto L_089DF2C0;
    }
L_089DF2C0:
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(338), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_089DF2D0;
      }
      goto L_089DF2CC;
    }
L_089DF2CC:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(338), static_cast<std::uint8_t>(0u));
    goto L_089DF2D0;
L_089DF2D0:
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
L_089DF2E8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DF310u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF310u) goto L_089DF310;
    return;
L_089DF310:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DF31Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF31Cu) goto L_089DF31C;
    return;
L_089DF31C:
    hot_regs.g31 = (0x089DF324u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF324u) goto L_089DF324;
    return;
L_089DF324:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089DF33C;
      }
      goto L_089DF330;
    }
L_089DF330:
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(339), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_089DF340;
      }
      goto L_089DF33C;
    }
L_089DF33C:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(339), static_cast<std::uint8_t>(0u));
    goto L_089DF340;
L_089DF340:
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
L_089DF358:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x089DF390u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF390u) goto L_089DF390;
    return;
L_089DF390:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DF39Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF39Cu) goto L_089DF39C;
    return;
L_089DF39C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g2 + static_cast<std::uint32_t>(1396));
    goto L_089DF3AC;
L_089DF3AC:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g7 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089DF3C0;
      }
      goto L_089DF3B8;
    }
L_089DF3B8:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g7);
    goto L_089DF3C0;
L_089DF3C0:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 10 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(28));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089DF3AC;
      }
      goto L_089DF3D0;
    }
}
L_089DF3D0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089DF3E0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF3E0u) goto L_089DF3E0;
    return;
L_089DF3E0:
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
L_089DF400:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089DF410u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF410u) goto L_089DF410;
    return;
L_089DF410:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(154)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(g4));
    g2 = (0u | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
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
L_089DF430:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 6u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x089DF460u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF460u) goto L_089DF460;
    return;
L_089DF460:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DF46Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF46Cu) goto L_089DF46C;
    return;
L_089DF46C:
    hot_regs.g31 = (0x089DF474u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF474u) goto L_089DF474;
    return;
L_089DF474:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (49864u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089DF4AC;
      }
      goto L_089DF494;
    }
}
}
L_089DF494:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (50042u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (16457u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DF4C0;
      }
      goto L_089DF4AC;
    }
}
L_089DF4AC:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x089DF4B8u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF4B8u) goto L_089DF4B8;
    return;
L_089DF4B8:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (16457u << 16u);
    goto L_089DF4C0;
L_089DF4C0:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (17204u << 16u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f15 = hot_regs.f15 / hot_regs.f12;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089DF4F4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 938u, 0x0897FAA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF4F4u) goto L_089DF4F4;
    return;
L_089DF4F4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
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
L_089DF514:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089DF544u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF544u) goto L_089DF544;
    return;
L_089DF544:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    g5 = (g4 + g4);
    hot_regs.g6 = (g4 << 8u);
    g4 = (g4 + g5);
    g4 = (g4 << 5u);
    g5 = (2238u << 16u);
    g4 = (hot_regs.g6 + g4);
    g5 = (g5 + static_cast<std::uint32_t>(-6992));
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DF588;
      }
      goto L_089DF574;
    }
}
L_089DF574:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x089DF580u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF580u) goto L_089DF580;
    return;
L_089DF580:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g2);
      if (branch_taken) {
          goto L_089DF590;
      }
      goto L_089DF588;
    }
L_089DF588:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    goto L_089DF590;
L_089DF590:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089DF5A0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF5A0u) goto L_089DF5A0;
    return;
L_089DF5A0:
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
L_089DF5BC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089DF5DCu);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF5DCu) goto L_089DF5DC;
    return;
L_089DF5DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF5F0;
      }
      goto L_089DF5E8;
    }
L_089DF5E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1786), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089DF5F8;
      }
      goto L_089DF5F0;
    }
L_089DF5F0:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1786), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089DF5F8;
L_089DF5F8:
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
L_089DF60C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089DF638u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF638u) goto L_089DF638;
    return;
L_089DF638:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DF644u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF644u) goto L_089DF644;
    return;
L_089DF644:
    hot_regs.g31 = (0x089DF64Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF64Cu) goto L_089DF64C;
    return;
L_089DF64C:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089DF65Cu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF65Cu) goto L_089DF65C;
    return;
L_089DF65C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF68C;
      }
      goto L_089DF664;
    }
L_089DF664:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089DF68C;
      }
      goto L_089DF674;
    }
}
L_089DF674:
    hot_regs.g31 = (0x089DF67Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF67Cu) goto L_089DF67C;
    return;
L_089DF67C:
    hot_regs.g4 = (0u | 4u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089DF68C;
      }
      goto L_089DF688;
    }
L_089DF688:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DF68C;
L_089DF68C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089DF6B8;
      }
      goto L_089DF6B0;
    }
}
L_089DF6B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089DF700;
      }
      goto L_089DF6B8;
    }
L_089DF6B8:
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
          goto L_089DF6E4;
      }
      goto L_089DF6D8;
    }
}
L_089DF6D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DF700;
      }
      goto L_089DF6E4;
    }
}
L_089DF6E4:
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
          goto L_089DF700;
      }
      goto L_089DF6FC;
    }
}
L_089DF6FC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DF700;
L_089DF700:
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
L_089DF71C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089DF748u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF748u) goto L_089DF748;
    return;
L_089DF748:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DF754u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF754u) goto L_089DF754;
    return;
L_089DF754:
    hot_regs.g31 = (0x089DF75Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF75Cu) goto L_089DF75C;
    return;
L_089DF75C:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089DF76Cu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF76Cu) goto L_089DF76C;
    return;
L_089DF76C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF79C;
      }
      goto L_089DF774;
    }
L_089DF774:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089DF79C;
      }
      goto L_089DF784;
    }
}
L_089DF784:
    hot_regs.g31 = (0x089DF78Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF78Cu) goto L_089DF78C;
    return;
L_089DF78C:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089DF79C;
      }
      goto L_089DF798;
    }
L_089DF798:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DF79C;
L_089DF79C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089DF7C8;
      }
      goto L_089DF7C0;
    }
}
L_089DF7C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089DF810;
      }
      goto L_089DF7C8;
    }
L_089DF7C8:
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
          goto L_089DF7F4;
      }
      goto L_089DF7E8;
    }
}
L_089DF7E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DF810;
      }
      goto L_089DF7F4;
    }
}
L_089DF7F4:
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
          goto L_089DF810;
      }
      goto L_089DF80C;
    }
}
L_089DF80C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DF810;
L_089DF810:
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
L_089DF82C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089DF858u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF858u) goto L_089DF858;
    return;
L_089DF858:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DF864u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF864u) goto L_089DF864;
    return;
L_089DF864:
    hot_regs.g31 = (0x089DF86Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF86Cu) goto L_089DF86C;
    return;
L_089DF86C:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089DF87Cu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF87Cu) goto L_089DF87C;
    return;
L_089DF87C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF8AC;
      }
      goto L_089DF884;
    }
L_089DF884:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089DF8AC;
      }
      goto L_089DF894;
    }
}
L_089DF894:
    hot_regs.g31 = (0x089DF89Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF89Cu) goto L_089DF89C;
    return;
L_089DF89C:
    hot_regs.g4 = (0u | 5u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089DF8AC;
      }
      goto L_089DF8A8;
    }
L_089DF8A8:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DF8AC;
L_089DF8AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089DF8D8;
      }
      goto L_089DF8D0;
    }
}
L_089DF8D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089DF920;
      }
      goto L_089DF8D8;
    }
L_089DF8D8:
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
          goto L_089DF904;
      }
      goto L_089DF8F8;
    }
}
L_089DF8F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DF920;
      }
      goto L_089DF904;
    }
}
L_089DF904:
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
          goto L_089DF920;
      }
      goto L_089DF91C;
    }
}
L_089DF91C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DF920;
L_089DF920:
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
L_089DF93C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089DF95Cu);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF95Cu) goto L_089DF95C;
    return;
L_089DF95C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DF968u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF968u) goto L_089DF968;
    return;
L_089DF968:
    hot_regs.g31 = (0x089DF970u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF970u) goto L_089DF970;
    return;
L_089DF970:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(316), 0u);
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
L_089DF988:
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
    hot_regs.g31 = (0x089DF9B8u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF9B8u) goto L_089DF9B8;
    return;
L_089DF9B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DF9C4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF9C4u) goto L_089DF9C4;
    return;
L_089DF9C4:
    hot_regs.g31 = (0x089DF9CCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF9CCu) goto L_089DF9CC;
    return;
L_089DF9CC:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(316)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089DF9E4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DF9E4u) goto L_089DF9E4;
    return;
L_089DF9E4:
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
L_089DFA00:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089DFA2Cu);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFA2Cu) goto L_089DFA2C;
    return;
L_089DFA2C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DFA38u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFA38u) goto L_089DFA38;
    return;
L_089DFA38:
    hot_regs.g31 = (0x089DFA40u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFA40u) goto L_089DFA40;
    return;
L_089DFA40:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089DFA50u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFA50u) goto L_089DFA50;
    return;
L_089DFA50:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFA98;
      }
      goto L_089DFA58;
    }
L_089DFA58:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFA98;
      }
      goto L_089DFA68;
    }
L_089DFA68:
    hot_regs.g31 = (0x089DFA70u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFA70u) goto L_089DFA70;
    return;
L_089DFA70:
    hot_regs.g4 = (0u | 5u);
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089DFA94;
      }
      goto L_089DFA7C;
    }
L_089DFA7C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089DFA88u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFA88u) goto L_089DFA88;
    return;
L_089DFA88:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089DFA98;
      }
      goto L_089DFA94;
    }
L_089DFA94:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DFA98;
L_089DFA98:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089DFAC4;
      }
      goto L_089DFABC;
    }
}
L_089DFABC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089DFB0C;
      }
      goto L_089DFAC4;
    }
L_089DFAC4:
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
          goto L_089DFAF0;
      }
      goto L_089DFAE4;
    }
}
L_089DFAE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DFB0C;
      }
      goto L_089DFAF0;
    }
}
L_089DFAF0:
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
          goto L_089DFB0C;
      }
      goto L_089DFB08;
    }
}
L_089DFB08:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DFB0C;
L_089DFB0C:
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
L_089DFB28:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089DFB48u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFB48u) goto L_089DFB48;
    return;
L_089DFB48:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFB5C;
      }
      goto L_089DFB54;
    }
L_089DFB54:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1787), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089DFB64;
      }
      goto L_089DFB5C;
    }
L_089DFB5C:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1787), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089DFB64;
L_089DFB64:
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
L_089DFB78:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 << 8u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-6992));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089DFBACu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 274u, 0x08961774u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFBACu) goto L_089DFBAC;
    return;
L_089DFBAC:
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
L_089DFBBC:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7592)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_089DFBD4;
      }
      goto L_089DFBC8;
    }
L_089DFBC8:
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7592), static_cast<std::uint8_t>(hot_regs.g6));
    goto L_089DFBD4;
L_089DFBD4:
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
          goto L_089DFC00;
      }
      goto L_089DFBF8;
    }
}
L_089DFBF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_089DFC48;
      }
      goto L_089DFC00;
    }
L_089DFC00:
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
          goto L_089DFC2C;
      }
      goto L_089DFC20;
    }
}
L_089DFC20:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DFC48;
      }
      goto L_089DFC2C;
    }
}
L_089DFC2C:
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
          goto L_089DFC48;
      }
      goto L_089DFC44;
    }
}
L_089DFC44:
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DFC48;
L_089DFC48:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DFC50:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DFC78u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFC78u) goto L_089DFC78;
    return;
L_089DFC78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DFC84u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFC84u) goto L_089DFC84;
    return;
L_089DFC84:
    hot_regs.g31 = (0x089DFC8Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFC8Cu) goto L_089DFC8C;
    return;
L_089DFC8C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x089DFCA0u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 633u, 0x08A06800u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFCA0u) goto L_089DFCA0;
    return;
L_089DFCA0:
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
L_089DFCB8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x089DFCECu);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFCECu) goto L_089DFCEC;
    return;
L_089DFCEC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x089DFD00u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFD00u) goto L_089DFD00;
    return;
L_089DFD00:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_089DFD14;
    }
    goto L_089DFD0C;
L_089DFD0C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_089DFD18;
      }
      goto L_089DFD14;
    }
L_089DFD14:
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_089DFD18;
L_089DFD18:
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g7 == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_089DFD60;
      }
      goto L_089DFD2C;
    }
L_089DFD2C:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (static_cast<std::int32_t>(hot_regs.g7) < 65 ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    g8 = (static_cast<std::int32_t>(hot_regs.g7) < 91 ? 1u : 0u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089DFD48;
      }
      goto L_089DFD38;
    }
}
L_089DFD38:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFD48;
      }
      goto L_089DFD40;
    }
L_089DFD40:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g7));
    hot_regs.g7 = g7;
    goto L_089DFD48;
}
L_089DFD48:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g5 = (g5 & 255u);
    hot_regs.g6 = (hot_regs.g4 + g5);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DFD2C;
      }
      goto L_089DFD60;
    }
}
L_089DFD60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DFD6Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFD6Cu) goto L_089DFD6C;
    return;
L_089DFD6C:
    hot_regs.g31 = (0x089DFD74u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFD74u) goto L_089DFD74;
    return;
L_089DFD74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DFD9C;
      }
      goto L_089DFD8C;
    }
}
L_089DFD8C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[17] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089DFD9C;
}
L_089DFD9C:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x089DFDACu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C7F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFDACu) goto L_089DFDAC;
    return;
L_089DFDAC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = hot_regs.g2 != hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
      if (branch_taken) {
          goto L_089DFDC0;
      }
      goto L_089DFDBC;
    }
L_089DFDBC:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DFDC0;
L_089DFDC0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (0u < g17 ? 1u : 0u);
    g5 = (g5 & 255u);
    g5 = (g5 & 255u);
    hot_regs.g6 = (0u < ctx.gpr[18] ? 1u : 0u);
    g17 = (g5 ^ hot_regs.g6);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089DFDE4;
      }
      goto L_089DFDDC;
    }
}
L_089DFDDC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089DFE2C;
      }
      goto L_089DFDE4;
    }
L_089DFDE4:
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
          goto L_089DFE10;
      }
      goto L_089DFE04;
    }
}
L_089DFE04:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089DFE2C;
      }
      goto L_089DFE10;
    }
}
L_089DFE10:
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
          goto L_089DFE2C;
      }
      goto L_089DFE28;
    }
}
L_089DFE28:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_089DFE2C;
L_089DFE2C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_089DFE4C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g6 + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089DFE70u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFE70u) goto L_089DFE70;
    return;
L_089DFE70:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DFE7Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFE7Cu) goto L_089DFE7C;
    return;
L_089DFE7C:
    hot_regs.g31 = (0x089DFE84u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFE84u) goto L_089DFE84;
    return;
L_089DFE84:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089DFE9C;
      }
      goto L_089DFE90;
    }
L_089DFE90:
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_089DFEA0;
      }
      goto L_089DFE9C;
    }
L_089DFE9C:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(0u));
    goto L_089DFEA0;
L_089DFEA0:
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
L_089DFEB4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089DFEDCu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFEDCu) goto L_089DFEDC;
    return;
L_089DFEDC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x089DFEE8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFEE8u) goto L_089DFEE8;
    return;
L_089DFEE8:
    hot_regs.g31 = (0x089DFEF0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFEF0u) goto L_089DFEF0;
    return;
L_089DFEF0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(3258), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3261))))));
    g5 = (0u + static_cast<std::uint32_t>(-2));
    g5 = (hot_regs.g6 & g5);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3258)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089DFF30;
      }
      goto L_089DFF20;
    }
}
L_089DFF20:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g31 = (0x089DFF30u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(2856));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 517u, 0x088BA728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFF30u) goto L_089DFF30;
    return;
L_089DFF30:
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
L_089DFF48:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    hot_regs.g31 = (0x089DFF70u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFF70u) goto L_089DFF70;
    return;
L_089DFF70:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089DFFB8u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 480u, 0x08966F40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFFB8u) goto L_089DFFB8;
    return;
L_089DFFB8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089DFFD0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089DFFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 484u, 0x08966FCCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFFE0u) goto L_089DFFE0;
    return;
L_089DFFE0:
    hot_regs.g31 = (0x089DFFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 525u, 0x089672CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089DFFE8u) goto L_089DFFE8;
    return;
L_089DFFE8:
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
L_089DFFF8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g29 = g29;
    ctx.pc = 0x089E0000u; return;}

}

void recomp_unit_0118(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0118_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_118(Runtime &runtime) {
    runtime.register_generated_unit(118u, 0x089DC000u, 16384u, &recomp_unit_0118, &recomp_unit_0118_entry);
    runtime.register_function(0x089DC004u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC00Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC034u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC05Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC070u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC078u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC080u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC088u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC090u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC100u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC108u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC110u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC118u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC120u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC128u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC130u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC13Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC14Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC168u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC180u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC190u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC19Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC1F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC208u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC218u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC224u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC234u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC250u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC260u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC280u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC288u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC298u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC324u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC330u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC388u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC390u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC404u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC408u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC414u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC420u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC42Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC438u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC440u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC448u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC454u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC460u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC470u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC474u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC484u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC4ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC4E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC518u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC52Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC534u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC53Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC54Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC558u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC560u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC568u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC570u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC580u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC588u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC590u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC5D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC5F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC608u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC644u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC670u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC67Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC690u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC708u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC71Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC72Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC738u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC750u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC75Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC764u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC804u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC814u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC830u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC840u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC85Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC868u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC890u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC898u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC914u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC934u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC94Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC974u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB04u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCBE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCCA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCCBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCCC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF04u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFCCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD018u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD024u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD034u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD044u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD068u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD074u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD084u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD21Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD23Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD244u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD264u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD26Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD278u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD280u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD288u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD29Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD31Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD3C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD3D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD424u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD458u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD460u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD49Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD50Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD524u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD598u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD608u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD61Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD624u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD62Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD684u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD688u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD734u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD754u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD764u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD76Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD774u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD780u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD794u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD804u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD818u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD820u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD828u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD838u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD850u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD858u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD860u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD868u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD870u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD874u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD890u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD898u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD908u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD910u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD918u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD928u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD948u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD954u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD968u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD990u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBC0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBD8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDC0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF04u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE010u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE02Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE06Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE078u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE080u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE108u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE11Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE144u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE16Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE178u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE180u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE18Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE204u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE234u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE240u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE248u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE260u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE268u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE26Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE288u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE290u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE314u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE320u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE328u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE334u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE348u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE370u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE37Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE388u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE38Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE400u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE40Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE424u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE428u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE430u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE45Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE468u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE470u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE480u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE484u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE510u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE538u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE544u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE54Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE554u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE55Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE564u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE56Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE578u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE580u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE594u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE600u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE614u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE61Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE624u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE62Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE634u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE648u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE654u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE65Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE664u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE668u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE66Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE674u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE67Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE68Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE698u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE700u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE70Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE714u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE730u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE74Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE76Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE774u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE788u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE80Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE830u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE83Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE848u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE850u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE858u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE85Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE870u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE898u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE910u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE91Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE934u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE938u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE950u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE980u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED04u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED74u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDD8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEEB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEED0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEED8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEEF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF04u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFCCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF010u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF01Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF030u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF03Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF048u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF04Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF054u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF060u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF064u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF06Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF074u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF084u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF08Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF100u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF10Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF124u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF128u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF140u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF160u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF16Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF174u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF180u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF198u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF200u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF208u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF210u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF21Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF234u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF268u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF278u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF310u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF31Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF324u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF330u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF33Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF340u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF358u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF390u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF39Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF400u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF410u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF430u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF460u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF46Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF474u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF494u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF514u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF544u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF574u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF580u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF588u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF590u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF60Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF638u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF644u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF64Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF65Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF664u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF674u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF67Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF688u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF68Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF700u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF71Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF748u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF754u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF75Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF76Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF774u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF784u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF78Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF798u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF79Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF80Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF810u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF82Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF858u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF864u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF86Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF87Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF884u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF894u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF89Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF904u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF91Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF920u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF93Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF95Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF968u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF970u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF988u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFABCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD74u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDC0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE04u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFF8u, &recomp_unit_0118, "recomp_unit_0118");
}
} // namespace psprecomp
