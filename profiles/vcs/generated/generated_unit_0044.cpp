#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0044[4094] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 9, 0, 0,
    0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 18, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0,
    0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 54, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0,
    64, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0,
    0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 95, 0, 0, 0, 0, 96, 0, 0, 0, 97, 98, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 99, 0, 100, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 122, 0, 0, 0, 0, 123, 0, 0,
    0, 124, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 128, 0, 0, 0, 129, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0,
    153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 156, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 168,
    0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0,
    0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0,
    0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199,
    0, 0, 200, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 207, 208, 0, 0, 0, 0,
    0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0,
    244, 0, 245, 0, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 249, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 255, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259,
    0, 260, 0, 261, 0, 0, 262, 0, 263, 0, 0, 264, 265, 0, 266, 0, 267, 0, 0, 0, 268, 0, 269, 0, 270, 0, 271, 0, 0, 0, 272, 0,
    273, 0, 274, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 283, 0, 0,
    0, 284, 0, 0, 285, 0, 286, 0, 287, 0, 0, 288, 0, 289, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 293, 294, 0, 0, 0, 295, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    306, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311,
    0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0,
    0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 326, 0, 0, 0, 0, 327, 0, 328, 329,
    0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 333, 0, 334, 335, 0, 0, 0, 336, 337, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 346, 0, 0, 347, 0, 348, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0,
    0, 0, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 360, 0, 0, 361, 0, 0, 0,
    362, 0, 0, 0, 0, 363, 0, 364, 365, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 371, 372, 0, 0, 0,
    0, 373, 0, 0, 374, 0, 375, 0, 376, 0, 0, 377, 0, 378, 379, 0, 380, 381, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386,
    0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 391,
    392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 399,
    0, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 406, 0, 0, 0, 407, 0,
    408, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418,
    0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 425, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0,
    0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 454, 0,
    455, 0, 456, 0, 457, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 464,
    0, 0, 465, 0, 0, 466, 0, 467, 468, 0, 469, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 473, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 478, 0, 479, 480, 0, 481, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0,
    487, 0, 488, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 498, 0, 499, 0, 500, 0, 0, 501, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0,
    0, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515,
    0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 518, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 524,
    525, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530,
    0, 0, 0, 531, 0, 0, 532, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 536, 0, 537, 0, 0, 538, 0, 539, 0, 0, 0, 0,
    0, 540, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 544, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547,
    0, 548, 0, 549, 0, 550, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 553, 0,
    0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0,
    0, 558, 0, 0, 559, 560, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0,
    0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 572, 0, 0, 0, 573, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575,
    0, 0, 576, 0, 0, 577, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0,
    582, 0, 583, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 587, 0, 588, 0, 0, 589, 0, 590, 0, 0, 0, 0, 591, 0, 592, 0,
    593, 0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0,
    0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 606, 0,
    0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0, 611, 0,
    0, 0, 612, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 628,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 631, 632, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0,
    648, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 657,
    0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0,
    670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0,
    0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685,
    0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0,
    0, 691, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0,
    697, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 0, 705, 0, 0,
    0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0,
    0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713,
    0, 0, 0, 0, 714, 0, 715, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 722,
};
void recomp_unit_0044_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B4004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0044[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B4004;
    case 2u: goto L_088B4018;
    case 3u: goto L_088B4020;
    case 4u: goto L_088B4074;
    case 5u: goto L_088B407C;
    case 6u: goto L_088B40C4;
    case 7u: goto L_088B40E0;
    case 8u: goto L_088B40F4;
    case 9u: goto L_088B40F8;
    case 10u: goto L_088B4110;
    case 11u: goto L_088B4118;
    case 12u: goto L_088B412C;
    case 13u: goto L_088B4134;
    case 14u: goto L_088B4188;
    case 15u: goto L_088B4190;
    case 16u: goto L_088B41D8;
    case 17u: goto L_088B41F4;
    case 18u: goto L_088B4208;
    case 19u: goto L_088B420C;
    case 20u: goto L_088B4224;
    case 21u: goto L_088B4234;
    case 22u: goto L_088B4238;
    case 23u: goto L_088B426C;
    case 24u: goto L_088B42CC;
    case 25u: goto L_088B42D4;
    case 26u: goto L_088B42F0;
    case 27u: goto L_088B430C;
    case 28u: goto L_088B4328;
    case 29u: goto L_088B433C;
    case 30u: goto L_088B4350;
    case 31u: goto L_088B4358;
    case 32u: goto L_088B437C;
    case 33u: goto L_088B43A0;
    case 34u: goto L_088B43C4;
    case 35u: goto L_088B43D8;
    case 36u: goto L_088B43F0;
    case 37u: goto L_088B4400;
    case 38u: goto L_088B4414;
    case 39u: goto L_088B4448;
    case 40u: goto L_088B4450;
    case 41u: goto L_088B4464;
    case 42u: goto L_088B4470;
    case 43u: goto L_088B448C;
    case 44u: goto L_088B44A8;
    case 45u: goto L_088B44D0;
    case 46u: goto L_088B44E4;
    case 47u: goto L_088B44F4;
    case 48u: goto L_088B44FC;
    case 49u: goto L_088B4510;
    case 50u: goto L_088B4518;
    case 51u: goto L_088B4534;
    case 52u: goto L_088B4550;
    case 53u: goto L_088B4578;
    case 54u: goto L_088B458C;
    case 55u: goto L_088B4590;
    case 56u: goto L_088B45A8;
    case 57u: goto L_088B45D8;
    case 58u: goto L_088B4668;
    case 59u: goto L_088B4670;
    case 60u: goto L_088B46BC;
    case 61u: goto L_088B46D4;
    case 62u: goto L_088B46EC;
    case 63u: goto L_088B46F4;
    case 64u: goto L_088B4704;
    case 65u: goto L_088B4708;
    case 66u: goto L_088B4738;
    case 67u: goto L_088B47E4;
    case 68u: goto L_088B47F0;
    case 69u: goto L_088B4810;
    case 70u: goto L_088B4830;
    case 71u: goto L_088B483C;
    case 72u: goto L_088B4850;
    case 73u: goto L_088B485C;
    case 74u: goto L_088B486C;
    case 75u: goto L_088B4878;
    case 76u: goto L_088B4890;
    case 77u: goto L_088B4898;
    case 78u: goto L_088B48A0;
    case 79u: goto L_088B48A8;
    case 80u: goto L_088B48C0;
    case 81u: goto L_088B48D4;
    case 82u: goto L_088B48F0;
    case 83u: goto L_088B48F4;
    case 84u: goto L_088B4948;
    case 85u: goto L_088B4958;
    case 86u: goto L_088B4960;
    case 87u: goto L_088B497C;
    case 88u: goto L_088B49EC;
    case 89u: goto L_088B4A08;
    case 90u: goto L_088B4AC8;
    case 91u: goto L_088B4B18;
    case 92u: goto L_088B4B1C;
    case 93u: goto L_088B4B3C;
    case 94u: goto L_088B4B44;
    case 95u: goto L_088B4B48;
    case 96u: goto L_088B4B5C;
    case 97u: goto L_088B4B6C;
    case 98u: goto L_088B4B70;
    case 99u: goto L_088B4B98;
    case 100u: goto L_088B4BA0;
    case 101u: goto L_088B4BA4;
    case 102u: goto L_088B4BB4;
    case 103u: goto L_088B4BBC;
    case 104u: goto L_088B4BD4;
    case 105u: goto L_088B4BDC;
    case 106u: goto L_088B4BE0;
    case 107u: goto L_088B4C28;
    case 108u: goto L_088B4C3C;
    case 109u: goto L_088B4C54;
    case 110u: goto L_088B4C7C;
    case 111u: goto L_088B4D08;
    case 112u: goto L_088B4D14;
    case 113u: goto L_088B4D1C;
    case 114u: goto L_088B4D30;
    case 115u: goto L_088B4D6C;
    case 116u: goto L_088B4D94;
    case 117u: goto L_088B4DA0;
    case 118u: goto L_088B4DB4;
    case 119u: goto L_088B4DB8;
    case 120u: goto L_088B4DD8;
    case 121u: goto L_088B4DE0;
    case 122u: goto L_088B4DE4;
    case 123u: goto L_088B4DF8;
    case 124u: goto L_088B4E08;
    case 125u: goto L_088B4E0C;
    case 126u: goto L_088B4E34;
    case 127u: goto L_088B4E3C;
    case 128u: goto L_088B4E40;
    case 129u: goto L_088B4E50;
    case 130u: goto L_088B4E54;
    case 131u: goto L_088B4E80;
    case 132u: goto L_088B4E94;
    case 133u: goto L_088B4EAC;
    case 134u: goto L_088B4EBC;
    case 135u: goto L_088B4EE4;
    case 136u: goto L_088B4F60;
    case 137u: goto L_088B4F70;
    case 138u: goto L_088B4F74;
    case 139u: goto L_088B4FA8;
    case 140u: goto L_088B4FBC;
    case 141u: goto L_088B4FD0;
    case 142u: goto L_088B4FE0;
    case 143u: goto L_088B5018;
    case 144u: goto L_088B5024;
    case 145u: goto L_088B5038;
    case 146u: goto L_088B5040;
    case 147u: goto L_088B504C;
    case 148u: goto L_088B5054;
    case 149u: goto L_088B5064;
    case 150u: goto L_088B506C;
    case 151u: goto L_088B5074;
    case 152u: goto L_088B507C;
    case 153u: goto L_088B5084;
    case 154u: goto L_088B5098;
    case 155u: goto L_088B50A4;
    case 156u: goto L_088B50AC;
    case 157u: goto L_088B50B0;
    case 158u: goto L_088B50B8;
    case 159u: goto L_088B50E4;
    case 160u: goto L_088B5120;
    case 161u: goto L_088B512C;
    case 162u: goto L_088B5144;
    case 163u: goto L_088B514C;
    case 164u: goto L_088B5158;
    case 165u: goto L_088B5160;
    case 166u: goto L_088B5170;
    case 167u: goto L_088B5178;
    case 168u: goto L_088B5180;
    case 169u: goto L_088B5188;
    case 170u: goto L_088B5190;
    case 171u: goto L_088B51A4;
    case 172u: goto L_088B51B4;
    case 173u: goto L_088B51BC;
    case 174u: goto L_088B51D0;
    case 175u: goto L_088B51DC;
    case 176u: goto L_088B51FC;
    case 177u: goto L_088B5204;
    case 178u: goto L_088B5234;
    case 179u: goto L_088B524C;
    case 180u: goto L_088B5260;
    case 181u: goto L_088B5268;
    case 182u: goto L_088B5288;
    case 183u: goto L_088B52E4;
    case 184u: goto L_088B52F8;
    case 185u: goto L_088B5308;
    case 186u: goto L_088B5310;
    case 187u: goto L_088B5334;
    case 188u: goto L_088B5344;
    case 189u: goto L_088B5368;
    case 190u: goto L_088B5374;
    case 191u: goto L_088B537C;
    case 192u: goto L_088B538C;
    case 193u: goto L_088B53A0;
    case 194u: goto L_088B53A8;
    case 195u: goto L_088B53AC;
    case 196u: goto L_088B53C4;
    case 197u: goto L_088B53E4;
    case 198u: goto L_088B53F0;
    case 199u: goto L_088B5400;
    case 200u: goto L_088B540C;
    case 201u: goto L_088B5410;
    case 202u: goto L_088B543C;
    case 203u: goto L_088B5448;
    case 204u: goto L_088B5454;
    case 205u: goto L_088B545C;
    case 206u: goto L_088B5464;
    case 207u: goto L_088B546C;
    case 208u: goto L_088B5470;
    case 209u: goto L_088B5488;
    case 210u: goto L_088B5490;
    case 211u: goto L_088B54A8;
    case 212u: goto L_088B54B4;
    case 213u: goto L_088B54CC;
    case 214u: goto L_088B54E4;
    case 215u: goto L_088B5518;
    case 216u: goto L_088B5520;
    case 217u: goto L_088B5530;
    case 218u: goto L_088B5538;
    case 219u: goto L_088B5548;
    case 220u: goto L_088B5564;
    case 221u: goto L_088B5598;
    case 222u: goto L_088B55A0;
    case 223u: goto L_088B55B0;
    case 224u: goto L_088B55B8;
    case 225u: goto L_088B55C8;
    case 226u: goto L_088B55E4;
    case 227u: goto L_088B55FC;
    case 228u: goto L_088B5720;
    case 229u: goto L_088B5734;
    case 230u: goto L_088B574C;
    case 231u: goto L_088B57B4;
    case 232u: goto L_088B580C;
    case 233u: goto L_088B5814;
    case 234u: goto L_088B5864;
    case 235u: goto L_088B586C;
    case 236u: goto L_088B58B0;
    case 237u: goto L_088B58B8;
    case 238u: goto L_088B58F4;
    case 239u: goto L_088B58FC;
    case 240u: goto L_088B5930;
    case 241u: goto L_088B5938;
    case 242u: goto L_088B5960;
    case 243u: goto L_088B5968;
    case 244u: goto L_088B5984;
    case 245u: goto L_088B598C;
    case 246u: goto L_088B59A0;
    case 247u: goto L_088B59A8;
    case 248u: goto L_088B59B4;
    case 249u: goto L_088B59BC;
    case 250u: goto L_088B59C0;
    case 251u: goto L_088B5A54;
    case 252u: goto L_088B5A64;
    case 253u: goto L_088B5A8C;
    case 254u: goto L_088B5AA4;
    case 255u: goto L_088B5AB0;
    case 256u: goto L_088B5AB4;
    case 257u: goto L_088B5AF0;
    case 258u: goto L_088B5AF8;
    case 259u: goto L_088B5B00;
    case 260u: goto L_088B5B08;
    case 261u: goto L_088B5B10;
    case 262u: goto L_088B5B1C;
    case 263u: goto L_088B5B24;
    case 264u: goto L_088B5B30;
    case 265u: goto L_088B5B34;
    case 266u: goto L_088B5B3C;
    case 267u: goto L_088B5B44;
    case 268u: goto L_088B5B54;
    case 269u: goto L_088B5B5C;
    case 270u: goto L_088B5B64;
    case 271u: goto L_088B5B6C;
    case 272u: goto L_088B5B7C;
    case 273u: goto L_088B5B84;
    case 274u: goto L_088B5B8C;
    case 275u: goto L_088B5B9C;
    case 276u: goto L_088B5BA4;
    case 277u: goto L_088B5BCC;
    case 278u: goto L_088B5BEC;
    case 279u: goto L_088B5BF8;
    case 280u: goto L_088B5C44;
    case 281u: goto L_088B5C54;
    case 282u: goto L_088B5C74;
    case 283u: goto L_088B5C78;
    case 284u: goto L_088B5C88;
    case 285u: goto L_088B5C94;
    case 286u: goto L_088B5C9C;
    case 287u: goto L_088B5CA4;
    case 288u: goto L_088B5CB0;
    case 289u: goto L_088B5CB8;
    case 290u: goto L_088B5CBC;
    case 291u: goto L_088B5CC4;
    case 292u: goto L_088B5CF4;
    case 293u: goto L_088B5D14;
    case 294u: goto L_088B5D18;
    case 295u: goto L_088B5D28;
    case 296u: goto L_088B5D2C;
    case 297u: goto L_088B5D34;
    case 298u: goto L_088B5D90;
    case 299u: goto L_088B5DB0;
    case 300u: goto L_088B5DB8;
    case 301u: goto L_088B5DC0;
    case 302u: goto L_088B5DC8;
    case 303u: goto L_088B5DD0;
    case 304u: goto L_088B5DD8;
    case 305u: goto L_088B5DF4;
    case 306u: goto L_088B5E04;
    case 307u: goto L_088B5E0C;
    case 308u: goto L_088B5E1C;
    case 309u: goto L_088B5E68;
    case 310u: goto L_088B5E74;
    case 311u: goto L_088B5E80;
    case 312u: goto L_088B5E88;
    case 313u: goto L_088B5EA0;
    case 314u: goto L_088B5EB8;
    case 315u: goto L_088B5ECC;
    case 316u: goto L_088B5EDC;
    case 317u: goto L_088B5EEC;
    case 318u: goto L_088B5EF8;
    case 319u: goto L_088B5F0C;
    case 320u: goto L_088B5F14;
    case 321u: goto L_088B5F24;
    case 322u: goto L_088B5F30;
    case 323u: goto L_088B5F40;
    case 324u: goto L_088B5F4C;
    case 325u: goto L_088B5F54;
    case 326u: goto L_088B5F60;
    case 327u: goto L_088B5F74;
    case 328u: goto L_088B5F7C;
    case 329u: goto L_088B5F80;
    case 330u: goto L_088B5F88;
    case 331u: goto L_088B5F98;
    case 332u: goto L_088B5FA4;
    case 333u: goto L_088B5FB8;
    case 334u: goto L_088B5FC0;
    case 335u: goto L_088B5FC4;
    case 336u: goto L_088B5FD4;
    case 337u: goto L_088B5FD8;
    case 338u: goto L_088B5FE0;
    case 339u: goto L_088B5FE8;
    case 340u: goto L_088B5FF0;
    case 341u: goto L_088B6020;
    case 342u: goto L_088B6084;
    case 343u: goto L_088B6090;
    case 344u: goto L_088B609C;
    case 345u: goto L_088B60A4;
    case 346u: goto L_088B60B8;
    case 347u: goto L_088B60C4;
    case 348u: goto L_088B60CC;
    case 349u: goto L_088B60D0;
    case 350u: goto L_088B60E0;
    case 351u: goto L_088B60EC;
    case 352u: goto L_088B60FC;
    case 353u: goto L_088B6110;
    case 354u: goto L_088B6118;
    case 355u: goto L_088B6128;
    case 356u: goto L_088B6134;
    case 357u: goto L_088B6144;
    case 358u: goto L_088B6154;
    case 359u: goto L_088B6160;
    case 360u: goto L_088B6168;
    case 361u: goto L_088B6174;
    case 362u: goto L_088B6184;
    case 363u: goto L_088B6198;
    case 364u: goto L_088B61A0;
    case 365u: goto L_088B61A4;
    case 366u: goto L_088B61AC;
    case 367u: goto L_088B61B8;
    case 368u: goto L_088B61C4;
    case 369u: goto L_088B61D4;
    case 370u: goto L_088B61E8;
    case 371u: goto L_088B61F0;
    case 372u: goto L_088B61F4;
    case 373u: goto L_088B6208;
    case 374u: goto L_088B6214;
    case 375u: goto L_088B621C;
    case 376u: goto L_088B6224;
    case 377u: goto L_088B6230;
    case 378u: goto L_088B6238;
    case 379u: goto L_088B623C;
    case 380u: goto L_088B6244;
    case 381u: goto L_088B6248;
    case 382u: goto L_088B6250;
    case 383u: goto L_088B6258;
    case 384u: goto L_088B62A4;
    case 385u: goto L_088B62F4;
    case 386u: goto L_088B6300;
    case 387u: goto L_088B6308;
    case 388u: goto L_088B633C;
    case 389u: goto L_088B6370;
    case 390u: goto L_088B6378;
    case 391u: goto L_088B6380;
    case 392u: goto L_088B6384;
    case 393u: goto L_088B6390;
    case 394u: goto L_088B639C;
    case 395u: goto L_088B63B0;
    case 396u: goto L_088B63E0;
    case 397u: goto L_088B63E8;
    case 398u: goto L_088B63F8;
    case 399u: goto L_088B6400;
    case 400u: goto L_088B640C;
    case 401u: goto L_088B6420;
    case 402u: goto L_088B6428;
    case 403u: goto L_088B6438;
    case 404u: goto L_088B6458;
    case 405u: goto L_088B6464;
    case 406u: goto L_088B646C;
    case 407u: goto L_088B647C;
    case 408u: goto L_088B6484;
    case 409u: goto L_088B6490;
    case 410u: goto L_088B64A8;
    case 411u: goto L_088B64B4;
    case 412u: goto L_088B64D4;
    case 413u: goto L_088B64D8;
    case 414u: goto L_088B64E0;
    case 415u: goto L_088B64E8;
    case 416u: goto L_088B64F0;
    case 417u: goto L_088B64F8;
    case 418u: goto L_088B6500;
    case 419u: goto L_088B6508;
    case 420u: goto L_088B6524;
    case 421u: goto L_088B6530;
    case 422u: goto L_088B6548;
    case 423u: goto L_088B6550;
    case 424u: goto L_088B6570;
    case 425u: goto L_088B6574;
    case 426u: goto L_088B65A4;
    case 427u: goto L_088B65C4;
    case 428u: goto L_088B65CC;
    case 429u: goto L_088B65D4;
    case 430u: goto L_088B65DC;
    case 431u: goto L_088B65E4;
    case 432u: goto L_088B6600;
    case 433u: goto L_088B6610;
    case 434u: goto L_088B6620;
    case 435u: goto L_088B6634;
    case 436u: goto L_088B6644;
    case 437u: goto L_088B6650;
    case 438u: goto L_088B6658;
    case 439u: goto L_088B666C;
    case 440u: goto L_088B6698;
    case 441u: goto L_088B66C4;
    case 442u: goto L_088B66CC;
    case 443u: goto L_088B66D4;
    case 444u: goto L_088B66D8;
    case 445u: goto L_088B66E4;
    case 446u: goto L_088B66F0;
    case 447u: goto L_088B66FC;
    case 448u: goto L_088B6710;
    case 449u: goto L_088B673C;
    case 450u: goto L_088B6744;
    case 451u: goto L_088B6750;
    case 452u: goto L_088B675C;
    case 453u: goto L_088B6774;
    case 454u: goto L_088B677C;
    case 455u: goto L_088B6784;
    case 456u: goto L_088B678C;
    case 457u: goto L_088B6794;
    case 458u: goto L_088B67A8;
    case 459u: goto L_088B67B0;
    case 460u: goto L_088B67C0;
    case 461u: goto L_088B67D4;
    case 462u: goto L_088B67DC;
    case 463u: goto L_088B67F4;
    case 464u: goto L_088B6800;
    case 465u: goto L_088B680C;
    case 466u: goto L_088B6818;
    case 467u: goto L_088B6820;
    case 468u: goto L_088B6824;
    case 469u: goto L_088B682C;
    case 470u: goto L_088B6834;
    case 471u: goto L_088B6840;
    case 472u: goto L_088B6860;
    case 473u: goto L_088B688C;
    case 474u: goto L_088B6890;
    case 475u: goto L_088B68B0;
    case 476u: goto L_088B68C8;
    case 477u: goto L_088B68D8;
    case 478u: goto L_088B68E0;
    case 479u: goto L_088B68E8;
    case 480u: goto L_088B68EC;
    case 481u: goto L_088B68F4;
    case 482u: goto L_088B6930;
    case 483u: goto L_088B693C;
    case 484u: goto L_088B6944;
    case 485u: goto L_088B6960;
    case 486u: goto L_088B697C;
    case 487u: goto L_088B6984;
    case 488u: goto L_088B698C;
    case 489u: goto L_088B6990;
    case 490u: goto L_088B6998;
    case 491u: goto L_088B69CC;
    case 492u: goto L_088B69D4;
    case 493u: goto L_088B69E8;
    case 494u: goto L_088B69F0;
    case 495u: goto L_088B6A18;
    case 496u: goto L_088B6A3C;
    case 497u: goto L_088B6A4C;
    case 498u: goto L_088B6A54;
    case 499u: goto L_088B6A5C;
    case 500u: goto L_088B6A64;
    case 501u: goto L_088B6A70;
    case 502u: goto L_088B6AA4;
    case 503u: goto L_088B6AAC;
    case 504u: goto L_088B6AB4;
    case 505u: goto L_088B6AC0;
    case 506u: goto L_088B6AEC;
    case 507u: goto L_088B6B10;
    case 508u: goto L_088B6B20;
    case 509u: goto L_088B6B28;
    case 510u: goto L_088B6B30;
    case 511u: goto L_088B6B38;
    case 512u: goto L_088B6B44;
    case 513u: goto L_088B6BA8;
    case 514u: goto L_088B6BEC;
    case 515u: goto L_088B6C00;
    case 516u: goto L_088B6C20;
    case 517u: goto L_088B6C28;
    case 518u: goto L_088B6C30;
    case 519u: goto L_088B6C34;
    case 520u: goto L_088B6C4C;
    case 521u: goto L_088B6C54;
    case 522u: goto L_088B6C70;
    case 523u: goto L_088B6C78;
    case 524u: goto L_088B6C80;
    case 525u: goto L_088B6C84;
    case 526u: goto L_088B6C94;
    case 527u: goto L_088B6CA0;
    case 528u: goto L_088B6CB0;
    case 529u: goto L_088B6CD0;
    case 530u: goto L_088B6D00;
    case 531u: goto L_088B6D10;
    case 532u: goto L_088B6D1C;
    case 533u: goto L_088B6D24;
    case 534u: goto L_088B6D38;
    case 535u: goto L_088B6D48;
    case 536u: goto L_088B6D54;
    case 537u: goto L_088B6D5C;
    case 538u: goto L_088B6D68;
    case 539u: goto L_088B6D70;
    case 540u: goto L_088B6D88;
    case 541u: goto L_088B6D94;
    case 542u: goto L_088B6DA8;
    case 543u: goto L_088B6DBC;
    case 544u: goto L_088B6DC0;
    case 545u: goto L_088B6DCC;
    case 546u: goto L_088B6DD4;
    case 547u: goto L_088B6E00;
    case 548u: goto L_088B6E08;
    case 549u: goto L_088B6E10;
    case 550u: goto L_088B6E18;
    case 551u: goto L_088B6E1C;
    case 552u: goto L_088B6E78;
    case 553u: goto L_088B6E7C;
    case 554u: goto L_088B6E94;
    case 555u: goto L_088B6EA4;
    case 556u: goto L_088B6ED4;
    case 557u: goto L_088B6EFC;
    case 558u: goto L_088B6F08;
    case 559u: goto L_088B6F14;
    case 560u: goto L_088B6F18;
    case 561u: goto L_088B6F28;
    case 562u: goto L_088B6F30;
    case 563u: goto L_088B6F58;
    case 564u: goto L_088B6F64;
    case 565u: goto L_088B6F74;
    case 566u: goto L_088B6F88;
    case 567u: goto L_088B7004;
    case 568u: goto L_088B7034;
    case 569u: goto L_088B7048;
    case 570u: goto L_088B7054;
    case 571u: goto L_088B705C;
    case 572u: goto L_088B706C;
    case 573u: goto L_088B707C;
    case 574u: goto L_088B70DC;
    case 575u: goto L_088B7100;
    case 576u: goto L_088B710C;
    case 577u: goto L_088B7118;
    case 578u: goto L_088B7120;
    case 579u: goto L_088B7134;
    case 580u: goto L_088B7148;
    case 581u: goto L_088B7178;
    case 582u: goto L_088B7184;
    case 583u: goto L_088B718C;
    case 584u: goto L_088B7194;
    case 585u: goto L_088B71A8;
    case 586u: goto L_088B71B8;
    case 587u: goto L_088B71C4;
    case 588u: goto L_088B71CC;
    case 589u: goto L_088B71D8;
    case 590u: goto L_088B71E0;
    case 591u: goto L_088B71F4;
    case 592u: goto L_088B71FC;
    case 593u: goto L_088B7204;
    case 594u: goto L_088B7214;
    case 595u: goto L_088B7220;
    case 596u: goto L_088B7228;
    case 597u: goto L_088B7250;
    case 598u: goto L_088B7260;
    case 599u: goto L_088B7278;
    case 600u: goto L_088B7288;
    case 601u: goto L_088B72B8;
    case 602u: goto L_088B72C8;
    case 603u: goto L_088B72DC;
    case 604u: goto L_088B72E8;
    case 605u: goto L_088B72F4;
    case 606u: goto L_088B72FC;
    case 607u: goto L_088B7308;
    case 608u: goto L_088B731C;
    case 609u: goto L_088B735C;
    case 610u: goto L_088B7368;
    case 611u: goto L_088B737C;
    case 612u: goto L_088B738C;
    case 613u: goto L_088B7398;
    case 614u: goto L_088B73A8;
    case 615u: goto L_088B73B8;
    case 616u: goto L_088B73C4;
    case 617u: goto L_088B73D4;
    case 618u: goto L_088B73EC;
    case 619u: goto L_088B7420;
    case 620u: goto L_088B742C;
    case 621u: goto L_088B7460;
    case 622u: goto L_088B746C;
    case 623u: goto L_088B74A0;
    case 624u: goto L_088B74AC;
    case 625u: goto L_088B74E0;
    case 626u: goto L_088B74F0;
    case 627u: goto L_088B74FC;
    case 628u: goto L_088B7500;
    case 629u: goto L_088B755C;
    case 630u: goto L_088B7568;
    case 631u: goto L_088B7570;
    case 632u: goto L_088B7574;
    case 633u: goto L_088B75DC;
    case 634u: goto L_088B75E4;
    case 635u: goto L_088B7614;
    case 636u: goto L_088B7628;
    case 637u: goto L_088B7634;
    case 638u: goto L_088B7640;
    case 639u: goto L_088B764C;
    case 640u: goto L_088B7654;
    case 641u: goto L_088B7694;
    case 642u: goto L_088B769C;
    case 643u: goto L_088B76BC;
    case 644u: goto L_088B76E8;
    case 645u: goto L_088B7728;
    case 646u: goto L_088B7758;
    case 647u: goto L_088B776C;
    case 648u: goto L_088B7784;
    case 649u: goto L_088B778C;
    case 650u: goto L_088B7798;
    case 651u: goto L_088B77A8;
    case 652u: goto L_088B77B0;
    case 653u: goto L_088B77C0;
    case 654u: goto L_088B77C8;
    case 655u: goto L_088B7854;
    case 656u: goto L_088B787C;
    case 657u: goto L_088B7880;
    case 658u: goto L_088B7894;
    case 659u: goto L_088B78A8;
    case 660u: goto L_088B78C4;
    case 661u: goto L_088B78CC;
    case 662u: goto L_088B797C;
    case 663u: goto L_088B7A4C;
    case 664u: goto L_088B7A94;
    case 665u: goto L_088B7AD8;
    case 666u: goto L_088B7AE4;
    case 667u: goto L_088B7AF4;
    case 668u: goto L_088B7B30;
    case 669u: goto L_088B7B78;
    case 670u: goto L_088B7B84;
    case 671u: goto L_088B7BC0;
    case 672u: goto L_088B7C30;
    case 673u: goto L_088B7C38;
    case 674u: goto L_088B7C60;
    case 675u: goto L_088B7C68;
    case 676u: goto L_088B7C70;
    case 677u: goto L_088B7C78;
    case 678u: goto L_088B7C88;
    case 679u: goto L_088B7CA0;
    case 680u: goto L_088B7CAC;
    case 681u: goto L_088B7CBC;
    case 682u: goto L_088B7CD4;
    case 683u: goto L_088B7CE0;
    case 684u: goto L_088B7CF0;
    case 685u: goto L_088B7D00;
    case 686u: goto L_088B7D0C;
    case 687u: goto L_088B7D18;
    case 688u: goto L_088B7D4C;
    case 689u: goto L_088B7D54;
    case 690u: goto L_088B7D7C;
    case 691u: goto L_088B7D88;
    case 692u: goto L_088B7D94;
    case 693u: goto L_088B7DC4;
    case 694u: goto L_088B7DD0;
    case 695u: goto L_088B7DD8;
    case 696u: goto L_088B7DEC;
    case 697u: goto L_088B7E04;
    case 698u: goto L_088B7E10;
    case 699u: goto L_088B7E20;
    case 700u: goto L_088B7E38;
    case 701u: goto L_088B7E44;
    case 702u: goto L_088B7E54;
    case 703u: goto L_088B7E60;
    case 704u: goto L_088B7E6C;
    case 705u: goto L_088B7E78;
    case 706u: goto L_088B7E9C;
    case 707u: goto L_088B7EB8;
    case 708u: goto L_088B7ED4;
    case 709u: goto L_088B7EF4;
    case 710u: goto L_088B7F0C;
    case 711u: goto L_088B7F30;
    case 712u: goto L_088B7F50;
    case 713u: goto L_088B7F80;
    case 714u: goto L_088B7F94;
    case 715u: goto L_088B7F9C;
    case 716u: goto L_088B7FA8;
    case 717u: goto L_088B7FBC;
    case 718u: goto L_088B7FCC;
    case 719u: goto L_088B7FE0;
    case 720u: goto L_088B7FE8;
    case 721u: goto L_088B7FF0;
    case 722u: goto L_088B7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B4004:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g17) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (g17 << 3u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088B40F4;
      }
      goto L_088B4018;
    }
}
L_088B4018:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4074;
      }
      goto L_088B4020;
    }
L_088B4020:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(6)));
    g4 = (g4 & 255u);
    g5 = (g4 ^ 7u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g4 ^ 8u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 | g6);
    g6 = (g4 ^ 16u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 | g6);
    g6 = (g4 ^ 31u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 | g6);
    g4 = (g4 ^ 12u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g5 | g4);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B40E0;
      }
      goto L_088B4074;
    }
}
L_088B4074:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B40C4;
      }
      goto L_088B407C;
    }
L_088B407C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(6)));
    g4 = (g4 & 255u);
    g5 = (g4 ^ 8u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g4 ^ 16u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 | g6);
    g6 = (g4 ^ 31u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 | g6);
    g4 = (g4 ^ 12u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g5 | g4);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B40E0;
      }
      goto L_088B40C4;
    }
}
L_088B40C4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (hot_regs.g6 + ctx.gpr[16]);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088B40E0u);
    ctx.gpr[8] = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 210u, 0x088B18ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B40E0u) goto L_088B40E0;
    return;
L_088B40E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g17) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088B4018;
      }
      goto L_088B40F4;
    }
}
L_088B40F4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    goto L_088B40F8;
L_088B40F8:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g4);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 509u, 0x088B3FCCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088B4110;
    }
L_088B4110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4208;
      }
      goto L_088B4118;
    }
L_088B4118:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (0u | 0u);
    g4 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(50)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B4208;
      }
      goto L_088B412C;
    }
}
L_088B412C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4188;
      }
      goto L_088B4134;
    }
L_088B4134:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(6)));
    g4 = (g4 & 255u);
    g5 = (g4 ^ 7u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g4 ^ 8u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 | g6);
    g6 = (g4 ^ 16u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 | g6);
    g6 = (g4 ^ 31u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 | g6);
    g4 = (g4 ^ 12u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g5 | g4);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B41F4;
      }
      goto L_088B4188;
    }
}
L_088B4188:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B41D8;
      }
      goto L_088B4190;
    }
L_088B4190:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(6)));
    g4 = (g4 & 255u);
    g5 = (g4 ^ 8u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g4 ^ 16u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 | g6);
    g6 = (g4 ^ 31u);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 | g6);
    g4 = (g4 ^ 12u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g5 | g4);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B41F4;
      }
      goto L_088B41D8;
    }
}
L_088B41D8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    hot_regs.g6 = (hot_regs.g6 + ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088B41F4u);
    ctx.gpr[8] = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 210u, 0x088B18ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B41F4u) goto L_088B41F4;
    return;
L_088B41F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(50)));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088B412C;
      }
      goto L_088B4208;
    }
}
L_088B4208:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    goto L_088B420C;
L_088B420C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B4234;
      }
      goto L_088B4224;
    }
L_088B4224:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088B4238;
      }
      goto L_088B4234;
    }
L_088B4234:
    hot_regs.g2 = (0u | 0u);
    goto L_088B4238;
L_088B4238:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B426C:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), hot_regs.g31);
    ctx.gpr[18] = (g9 & 255u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g16 = (0u | 0u);
    g9 = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(52)));
    g9 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g9) ? 1u : 0u);
    ctx.gpr[30] = (hot_regs.g4 | 0u);
    ctx.gpr[23] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[21] = (hot_regs.g7 | 0u);
    ctx.gpr[22] = (ctx.gpr[11] | 0u);
    { const bool branch_taken = g9 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[8]);
    ctx.gpr[9] = g9;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B433C;
      }
      goto L_088B42CC;
    }
}
L_088B42CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B430C;
      }
      goto L_088B42D4;
    }
L_088B42D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    g5 = (ctx.gpr[16] << 5u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(16)));
    g5 = (0u | 7u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B4328;
      }
      goto L_088B42F0;
    }
}
L_088B42F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    g5 = (ctx.gpr[16] << 5u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(16)));
    g5 = (0u | 8u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B4328;
      }
      goto L_088B430C;
    }
}
L_088B430C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (ctx.gpr[16] << 5u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088B4328u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    ctx.pc = 0x088B1554u;
    rt.invoke_native_fast_path(0x088B1554u, ctx, &hot_regs);
    if (ctx.pc == 0x088B4328u) goto L_088B4328;
    return;
L_088B4328:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088B42CC;
      }
      goto L_088B433C;
    }
}
L_088B433C:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (0u | 0u);
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B43D8;
      }
      goto L_088B4350;
    }
}
L_088B4350:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B43A0;
      }
      goto L_088B4358;
    }
L_088B4358:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (g5 + g5);
    g5 = (g5 + hot_regs.g6);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(32)));
    g5 = (0u | 7u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B43C4;
      }
      goto L_088B437C;
    }
}
L_088B437C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (g5 + g5);
    g5 = (g5 + hot_regs.g6);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(32)));
    g5 = (0u | 8u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B43C4;
      }
      goto L_088B43A0;
    }
}
L_088B43A0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088B43C4u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 382u, 0x088B3060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B43C4u) goto L_088B43C4;
    return;
L_088B43C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088B4350;
      }
      goto L_088B43D8;
    }
}
L_088B43D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-27712));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    if (g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.g4 = g4;
        goto L_088B4590;
    }
    goto L_088B43F0;
}
L_088B43F0:
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B44FC;
      }
      goto L_088B4400;
    }
L_088B4400:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B44F4;
      }
      goto L_088B4414;
    }
L_088B4414:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (ctx.gpr[19] << 4u);
    ctx.gpr[18] = (ctx.gpr[18] + hot_regs.g4);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vx2i(0u, 2u, 2u, 3u);
    ctx.execute_vfpu_vx2i(1u, 66u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<0u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(23u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088B4448u);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    ctx.pc = 0x088B1780u;
    rt.invoke_native_fast_path(0x088B1780u, ctx, &hot_regs);
    if (ctx.pc == 0x088B4448u) goto L_088B4448;
    return;
L_088B4448:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B44E4;
      }
      goto L_088B4450;
    }
L_088B4450:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B44E4;
      }
      goto L_088B4464;
    }
}
L_088B4464:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B44A8;
      }
      goto L_088B4470;
    }
L_088B4470:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g5 = (ctx.gpr[16] << 3u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(6)));
    g5 = (0u | 7u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B44D0;
      }
      goto L_088B448C;
    }
}
L_088B448C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g5 = (ctx.gpr[16] << 3u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(6)));
    g5 = (0u | 8u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B44D0;
      }
      goto L_088B44A8;
    }
}
L_088B44A8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (ctx.gpr[16] << 3u);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g4);
    ctx.gpr[9] = (2236u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-27712));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088B44D0u);
    ctx.gpr[8] = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 217u, 0x088B1A34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B44D0u) goto L_088B44D0;
    return;
L_088B44D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g16) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088B4464;
      }
      goto L_088B44E4;
    }
}
L_088B44E4:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_088B4414;
      }
      goto L_088B44F4;
    }
}
L_088B44F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B458C;
      }
      goto L_088B44FC;
    }
L_088B44FC:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (0u | 0u);
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B458C;
      }
      goto L_088B4510;
    }
}
L_088B4510:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4550;
      }
      goto L_088B4518;
    }
L_088B4518:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g5 = (ctx.gpr[16] << 3u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(6)));
    g5 = (0u | 7u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B4578;
      }
      goto L_088B4534;
    }
}
L_088B4534:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g5 = (ctx.gpr[16] << 3u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(6)));
    g5 = (0u | 8u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B4578;
      }
      goto L_088B4550;
    }
}
L_088B4550:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (ctx.gpr[16] << 3u);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g4);
    ctx.gpr[9] = (2236u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-27712));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088B4578u);
    ctx.gpr[8] = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 217u, 0x088B1A34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B4578u) goto L_088B4578;
    return;
L_088B4578:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088B4510;
      }
      goto L_088B458C;
    }
}
L_088B458C:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    goto L_088B4590;
L_088B4590:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B4704;
      }
      goto L_088B45A8;
    }
L_088B45A8:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088B45D8u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B086Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B45D8u) goto L_088B45D8;
    return;
L_088B45D8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g6 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(8), g6);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f15));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g21 + static_cast<std::uint32_t>(16));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g6 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-27712));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_088B46F4;
      }
      goto L_088B4668;
    }
}
}
L_088B4668:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B46F4;
      }
      goto L_088B4670;
    }
L_088B4670:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-27712));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088B46BCu);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B086Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B46BCu) goto L_088B46BC;
    return;
L_088B46BC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088B46D4u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B086Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B46D4u) goto L_088B46D4;
    return;
L_088B46D4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088B46ECu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B086Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B46ECu) goto L_088B46EC;
    return;
L_088B46EC:
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
    goto L_088B46F4;
L_088B46F4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088B4708;
      }
      goto L_088B4704;
    }
L_088B4704:
    hot_regs.g2 = (0u | 0u);
    goto L_088B4708;
L_088B4708:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B4738:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(300), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(332), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), hot_regs.g31);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<19u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 3u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 3u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<19u, 3u>(vfpu_target_raw);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 7u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 3u>(vfpu_d); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 1u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 0u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 36u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 44u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g7 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<28u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<29u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<118u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<104u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<116u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 44u, 3u);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 20u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<55u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<29u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<55u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<17u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.execute_vfpu_vcmp_ct<20u, 16u, 3u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 4u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4810;
      }
      goto L_088B47E4;
    }
L_088B47E4:
    ctx.execute_vfpu_vcmp_ct<20u, 17u, 3u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 4u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4810;
      }
      goto L_088B47F0;
    }
L_088B47F0:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (0u + static_cast<std::uint32_t>(1));
    g2 = (g2 & 255u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 0u, 3u);
      ctx.read_vfpu_vector_ct<3u, 3u>(vfpu_target_raw);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 35u, vfpu_side); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<35u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<19u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 3u>(vfpu_d); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 3u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 36u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 0u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 48u, 4u);
      ctx.eat_vfpu_prefixes(); }
    hot_regs.g2 = g2;
    goto L_088B4810;
}
L_088B4810:
    ctx.gpr[30] = (hot_regs.g5 | 0u);
    ctx.gpr[23] = (hot_regs.g7 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), hot_regs.g6);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), ctx.gpr[8]);
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B48A0;
      }
      goto L_088B4830;
    }
L_088B4830:
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x088B483Cu);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 138u, 0x088B0E34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B483Cu) goto L_088B483C;
    return;
L_088B483C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), hot_regs.g2);
    hot_regs.g5 = (g4 | hot_regs.g2);
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B4898;
      }
      goto L_088B4850;
    }
}
L_088B4850:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    hot_regs.g31 = (0x088B485Cu);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 135u, 0x088B0DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B485Cu) goto L_088B485C;
    return;
L_088B485C:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088B486Cu);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 145u, 0x088B0EE0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B486Cu) goto L_088B486C;
    return;
L_088B486C:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x088B4878u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 152u, 0x088B0FA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B4878u) goto L_088B4878;
    return;
L_088B4878:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[30] = (hot_regs.g2 | 0u);
    g16 = (2235u << 16u);
    g16 = (g16 + static_cast<std::uint32_t>(28480));
    g8 = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    g8 = (g8 + static_cast<std::uint32_t>(-28864));
    ctx.gpr[8] = g8;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088B48A8;
      }
      goto L_088B4890;
    }
}
L_088B4890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_088B48F4;
      }
      goto L_088B4898;
    }
L_088B4898:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088B4F74;
      }
      goto L_088B48A0;
    }
L_088B48A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4F74;
      }
      goto L_088B48A8;
    }
L_088B48A8:
{
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B48F0;
      }
      goto L_088B48C0;
    }
}
L_088B48C0:
{
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    g5 = (0u | 0u);
    g5 = (ctx.gpr[17] + g5);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    hot_regs.g5 = g5;
    goto L_088B48D4;
}
L_088B48D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B48D4;
      }
      goto L_088B48F0;
    }
}
L_088B48F0:
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    goto L_088B48F4;
L_088B48F4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), ctx.gpr[11]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(54)));
    hot_regs.g5 = (hot_regs.g5 << 4u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(76)));
    hot_regs.g7 = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(50)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[10] = (ctx.gpr[8] << 6u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[16]);
    ctx.gpr[8] = (hot_regs.g2 << 5u);
    hot_regs.g2 = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g31 = (0x088B4948u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 75u, 0x088B08ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B4948u) goto L_088B4948;
    return;
L_088B4948:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[30] | ctx.gpr[19]);
    g4 = (g4 | hot_regs.g2);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B4960;
      }
      goto L_088B4958;
    }
}
L_088B4958:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088B4F74;
      }
      goto L_088B4960;
    }
L_088B4960:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    g5 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B4C28;
      }
      goto L_088B497C;
    }
}
L_088B497C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(80));
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-27840));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(64));
    g5 = (2236u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), g4);
    g4 = (g5 + static_cast<std::uint32_t>(-28352));
    g5 = (19224u << 16u);
    g5 = (g5 | 38528u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    g5 = (g16 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), g4);
    g4 = (g16 + static_cast<std::uint32_t>(32));
    g6 = (g16 + static_cast<std::uint32_t>(44));
    hot_regs.g7 = (g16 + static_cast<std::uint32_t>(46));
    g8 = (0u | 0u);
    g19 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.gpr[22] = (g16 | 0u);
    ctx.gpr[9] = (0u | 0u);
    g19 = (g19 + ctx.gpr[9]);
    g5 = (g8 + g5);
    g4 = (g8 + g4);
    g6 = (g8 + g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), g5);
    g5 = (g8 + hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[19] = g19;
    goto L_088B49EC;
}
L_088B49EC:
{
    float f12 = hot_regs.f12;
    ctx.gpr[18] = (0u | 0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f12));
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(236)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088B4AC8;
      }
      goto L_088B4A08;
    }
}
L_088B4A08:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    g5 = (g29 + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g7 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    g8 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(0), g6);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(4), g7);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(8), g8);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f15));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f12));
    g6 = (g19 + static_cast<std::uint32_t>(16));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g8 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    g5 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(8), g5);
    g5 = (g19 + static_cast<std::uint32_t>(28));
    g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(g7));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    g6 = (g19 + static_cast<std::uint32_t>(30));
    g7 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(g5));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[18] = (0u | 1u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_088B4AC8;
}
}
L_088B4AC8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(0)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), hot_regs.g7);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(hot_regs.f15));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B4B5C;
      }
      goto L_088B4B18;
    }
}
L_088B4B18:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(268)));
    goto L_088B4B1C;
L_088B4B1C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088B4B3Cu);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 159u, 0x088B1028u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B4B3Cu) goto L_088B4B3C;
    return;
L_088B4B3C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4B48;
      }
      goto L_088B4B44;
    }
L_088B4B44:
    ctx.gpr[18] = (0u | 1u);
    goto L_088B4B48;
L_088B4B48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088B4B1C;
      }
      goto L_088B4B5C;
    }
}
L_088B4B5C:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4BB4;
      }
      goto L_088B4B6C;
    }
L_088B4B6C:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(264)));
    goto L_088B4B70;
L_088B4B70:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 << 4u);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088B4B98u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 239u, 0x088B1C50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B4B98u) goto L_088B4B98;
    return;
L_088B4B98:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4BA4;
      }
      goto L_088B4BA0;
    }
L_088B4BA0:
    ctx.gpr[18] = (0u | 1u);
    goto L_088B4BA4;
L_088B4BA4:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088B4B70;
      }
      goto L_088B4BB4;
    }
}
L_088B4BB4:
    if (ctx.gpr[18] == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(252)));
        goto L_088B4BE0;
    }
    goto L_088B4BBC;
L_088B4BBC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 32 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B4BDC;
      }
      goto L_088B4BD4;
    }
}
L_088B4BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4C28;
      }
      goto L_088B4BDC;
    }
L_088B4BDC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(252)));
    goto L_088B4BE0;
L_088B4BE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(64));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), g4);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    g5 = (g5 + static_cast<std::uint32_t>(64));
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    g7 = (g7 + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), g5);
    g5 = (g6 + static_cast<std::uint32_t>(64));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    g8 = (g8 + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), g7);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), g5);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), g8);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088B49EC;
      }
      goto L_088B4C28;
    }
}
L_088B4C28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B4D08;
      }
      goto L_088B4C3C;
    }
}
L_088B4C3C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (0u | 0u);
    g16 = (g16 + hot_regs.g4);
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[16] = g16;
    goto L_088B4C54;
}
L_088B4C54:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x088B4C7Cu);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B086Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B4C7Cu) goto L_088B4C7C;
    return;
L_088B4C7C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g6 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g6);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f15));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g16 + static_cast<std::uint32_t>(16));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g6 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_088B4C54;
      }
      goto L_088B4D08;
    }
}
}
L_088B4D08:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4D1C;
      }
      goto L_088B4D14;
    }
L_088B4D14:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
      if (branch_taken) {
          goto L_088B4F74;
      }
      goto L_088B4D1C;
    }
L_088B4D1C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    g6 = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B4E80;
      }
      goto L_088B4D30;
    }
}
L_088B4D30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-27840));
    ctx.gpr[22] = (0u | 1u);
    hot_regs.g6 = (2236u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), g5);
    g5 = (hot_regs.g6 + static_cast<std::uint32_t>(-28352));
    g21 = (0u | 0u);
    ctx.gpr[19] = (g4 + g21);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    g20 = (0u | 0u);
    g21 = (g21 + g5);
    g20 = (g4 + g20);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
    ctx.gpr[21] = g21;
    goto L_088B4D6C;
}
L_088B4D6C:
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    g18 = (g29 + g18);
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088B4DA0;
      }
      goto L_088B4D94;
    }
}
L_088B4D94:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088B4DA0;
L_088B4DA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B4DF8;
      }
      goto L_088B4DB4;
    }
}
L_088B4DB4:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(268)));
    goto L_088B4DB8;
L_088B4DB8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088B4DD8u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.pc = 0x088B1554u;
    rt.invoke_native_fast_path(0x088B1554u, ctx, &hot_regs);
    if (ctx.pc == 0x088B4DD8u) goto L_088B4DD8;
    return;
L_088B4DD8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4DE4;
      }
      goto L_088B4DE0;
    }
L_088B4DE0:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_088B4DE4;
L_088B4DE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088B4DB8;
      }
      goto L_088B4DF8;
    }
}
L_088B4DF8:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
    hot_regs.g4 = g4;
        goto L_088B4E54;
    }
    goto L_088B4E08;
}
L_088B4E08:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(264)));
    goto L_088B4E0C;
L_088B4E0C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 << 4u);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088B4E34u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 382u, 0x088B3060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B4E34u) goto L_088B4E34;
    return;
L_088B4E34:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4E40;
      }
      goto L_088B4E3C;
    }
L_088B4E3C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_088B4E40;
L_088B4E40:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088B4E0C;
      }
      goto L_088B4E50;
    }
}
L_088B4E50:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
    goto L_088B4E54;
L_088B4E54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), g4);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B4D6C;
      }
      goto L_088B4E80;
    }
}
L_088B4E80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[16] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B4F70;
      }
      goto L_088B4E94;
    }
}
L_088B4E94:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(176));
    hot_regs.g4 = (0u | 0u);
    g17 = (g17 + hot_regs.g4);
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = g17;
    goto L_088B4EAC;
}
L_088B4EAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g29 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B4F60;
      }
      goto L_088B4EBC;
    }
}
L_088B4EBC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x088B4EE4u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 73u, 0x088B086Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B4EE4u) goto L_088B4EE4;
    return;
L_088B4EE4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    g6 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g6);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f15));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g17 + static_cast<std::uint32_t>(16));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    g6 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    goto L_088B4F60;
}
}
L_088B4F60:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088B4EAC;
      }
      goto L_088B4F70;
    }
}
L_088B4F70:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
    goto L_088B4F74;
L_088B4F74:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(312)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(316)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(320)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(324)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(328)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(332)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B4FA8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x088B4FBCu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B4FBCu) goto L_088B4FBC;
    return;
L_088B4FBC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (1217u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x088B4FD0u);
    g6 = (g6 + static_cast<std::uint32_t>(7607));
    hot_regs.g6 = g6;
    goto L_088B55E4;
}
L_088B4FD0:
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
L_088B4FE0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-656));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(628), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(632), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(636), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(640), hot_regs.g31);
    hot_regs.g31 = (0x088B5018u);
    ctx.gpr[23] = (0u | 0u);
    ctx.pc = 0x08B7366Cu;
    hot_regs.g29 = g29;
    return;
}
L_088B5018:
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B5038;
      }
      goto L_088B5024;
    }
L_088B5024:
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    ctx.gpr[20] = (0u | 4096u);
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24752));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(344));
      if (branch_taken) {
          goto L_088B5040;
      }
      goto L_088B5038;
    }
L_088B5038:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088B50B8;
      }
      goto L_088B5040;
    }
L_088B5040:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x088B504Cu);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B7367Cu;
    return;
L_088B504C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B506C;
      }
      goto L_088B5054;
    }
L_088B5054:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    g4 = (g4 & 61440u);
    { const bool branch_taken = g4 == ctx.gpr[20];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B507C;
      }
      goto L_088B5064;
    }
}
L_088B5064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B50AC;
      }
      goto L_088B506C;
    }
L_088B506C:
    hot_regs.g31 = (0x088B5074u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08B73684u;
    return;
L_088B5074:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_088B50B8;
      }
      goto L_088B507C;
    }
L_088B507C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B50B0;
      }
      goto L_088B5084;
    }
L_088B5084:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B5098u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B5098u) goto L_088B5098;
    return;
L_088B5098:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088B50A4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_088B4FE0;
L_088B50A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + hot_regs.g2);
      if (branch_taken) {
          goto L_088B50B0;
      }
      goto L_088B50AC;
    }
L_088B50AC:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_088B50B0;
L_088B50B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5040;
      }
      goto L_088B50B8;
    }
L_088B50B8:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(608)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(612)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(616)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(620)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(624)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(628)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(632)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(636)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(640)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B50E4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-656));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(628), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(632), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(636), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(640), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(644), hot_regs.g31);
    hot_regs.g31 = (0x088B5120u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.pc = 0x08B7366Cu;
    hot_regs.g29 = g29;
    return;
}
L_088B5120:
    ctx.gpr[30] = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B5144;
      }
      goto L_088B512C;
    }
L_088B512C:
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    ctx.gpr[22] = (0u | 4096u);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24752));
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(344));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24744));
      if (branch_taken) {
          goto L_088B514C;
      }
      goto L_088B5144;
    }
L_088B5144:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088B5204;
      }
      goto L_088B514C;
    }
L_088B514C:
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x088B5158u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B7367Cu;
    return;
L_088B5158:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B5178;
      }
      goto L_088B5160;
    }
L_088B5160:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    g4 = (g4 & 61440u);
    { const bool branch_taken = g4 == ctx.gpr[22];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B5188;
      }
      goto L_088B5170;
    }
}
L_088B5170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B51BC;
      }
      goto L_088B5178;
    }
L_088B5178:
    hot_regs.g31 = (0x088B5180u);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    ctx.pc = 0x08B73684u;
    return;
L_088B5180:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088B5204;
      }
      goto L_088B5188;
    }
L_088B5188:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B51FC;
      }
      goto L_088B5190;
    }
L_088B5190:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088B51A4u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B51A4u) goto L_088B51A4;
    return;
L_088B51A4:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B51B4u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_088B50E4;
L_088B51B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_088B51FC;
      }
      goto L_088B51BC;
    }
L_088B51BC:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088B51D0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B51D0u) goto L_088B51D0;
    return;
L_088B51D0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24764)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x088B51DCu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B51DCu) goto L_088B51DC;
    return;
L_088B51DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(320)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g4);
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    g4 = (g4 | 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g4);
    g17 = (g17 + static_cast<std::uint32_t>(12));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    goto L_088B51FC;
}
L_088B51FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B514C;
      }
      goto L_088B5204;
    }
L_088B5204:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(608)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(612)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(616)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(620)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(624)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(628)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(632)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(636)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(640)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(644)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B5234:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 0u);
    g5 = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    g5 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B5308;
      }
      goto L_088B524C;
    }
}
L_088B524C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (g7 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (g7 | 0u);
    g8 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = g8 == 0u;
    g8 = (g7 + g7);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088B52F8;
      }
      goto L_088B5260;
    }
}
L_088B5260:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g7 + g8);
    g8 = (g8 << 2u);
    ctx.gpr[8] = g8;
    goto L_088B5268;
}
L_088B5268:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (g9 + ctx.gpr[8]);
    g9 = (g9 + hot_regs.g5);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    g2 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    g2 = (ctx.gpr[10] < g2 ? 1u : 0u);
    { const bool branch_taken = g2 == 0u;
    // nop
    hot_regs.g2 = g2;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088B52E4;
      }
      goto L_088B5288;
    }
}
L_088B5288:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g11 = ctx.gpr[11];
    hot_regs.g2 = (aot_mem.aot_load32(g11 + static_cast<std::uint32_t>(4)));
    g9 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(g11 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g11 + static_cast<std::uint32_t>(4), g9);
    g9 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g11 = (g9 + g5);
    g11 = (aot_mem.aot_load32(g11 + static_cast<std::uint32_t>(0)));
    g9 = (g9 + ctx.gpr[8]);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), g11);
    g9 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g11 = (g9 + g5);
    g11 = (aot_mem.aot_load32(g11 + static_cast<std::uint32_t>(8)));
    g9 = (g9 + ctx.gpr[8]);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(8), g11);
    g9 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g9 = (g9 + g5);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(4), hot_regs.g2);
    g9 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g9 = (g9 + g5);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g9 = (g9 + g5);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[9] = g9;
    ctx.gpr[11] = g11;
    goto L_088B52E4;
}
L_088B52E4:
{
    std::uint32_t g6 = hot_regs.g6;
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B5268;
      }
      goto L_088B52F8;
    }
}
L_088B52F8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    g6 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(12));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B524C;
      }
      goto L_088B5308;
    }
}
L_088B5308:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5310:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B538C;
      }
      goto L_088B5334;
    }
}
L_088B5334:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(6040));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088B5344u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_088B4FE0;
L_088B5344:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g5 = (2236u << 16u);
    hot_regs.g6 = (g4 + g4);
    g5 = (g5 + static_cast<std::uint32_t>(-27648));
    g4 = (g4 + hot_regs.g6);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g5);
    { const bool branch_taken = g5 != 0u;
    g4 = (g4 << 2u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B537C;
      }
      goto L_088B5368;
    }
}
L_088B5368:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24756)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x088B5374u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B5374u) goto L_088B5374;
    return;
L_088B5374:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088B53AC;
      }
      goto L_088B537C;
    }
L_088B537C:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x088B538Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B538Cu) goto L_088B538C;
    return;
L_088B538C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24768), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088B53A0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_088B50E4;
L_088B53A0:
    hot_regs.g31 = (0x088B53A8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_088B5234;
L_088B53A8:
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    goto L_088B53AC;
L_088B53AC:
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
L_088B53C4:
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24768)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g18 == 0u;
    // nop
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B546C;
      }
      goto L_088B53E4;
    }
}
L_088B53E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B546C;
      }
      goto L_088B53F0;
    }
L_088B53F0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24764)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x088B5400u);
    ctx.gpr[17] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B5400u) goto L_088B5400;
    return;
L_088B5400:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_088B546C;
      }
      goto L_088B540C;
    }
L_088B540C:
    hot_regs.g5 = (ctx.gpr[17] + ctx.gpr[18]);
    goto L_088B5410;
L_088B5410:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 1u));
    g6 = (g6 >> 31u);
    g5 = (g5 + g6);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 1u));
    g6 = (g5 + g5);
    g6 = (g5 + g6);
    g6 = (g6 << 2u);
    g7 = (ctx.gpr[16] + g6);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g7 == hot_regs.g4;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088B5454;
      }
      goto L_088B543C;
    }
}
L_088B543C:
    hot_regs.g6 = (hot_regs.g4 < hot_regs.g7 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B545C;
      }
      goto L_088B5448;
    }
L_088B5448:
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088B5464;
      }
      goto L_088B5454;
    }
L_088B5454:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[16] + hot_regs.g6);
      if (branch_taken) {
          goto L_088B5470;
      }
      goto L_088B545C;
    }
L_088B545C:
    ctx.gpr[17] = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_088B5464;
L_088B5464:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g5 = (ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088B5410;
      }
      goto L_088B546C;
    }
L_088B546C:
    hot_regs.g2 = (0u | 0u);
    goto L_088B5470;
L_088B5470:
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
L_088B5488:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24768)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5490:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x088B54A8u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
    goto L_088B53C4;
}
L_088B54A8:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B54CC;
      }
      goto L_088B54B4;
    }
L_088B54B4:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (2232u << 16u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088B54CCu);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-22440));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B54CCu) goto L_088B54CC;
    return;
L_088B54CC:
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
L_088B54E4:
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (2236u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    g19 = (g19 + static_cast<std::uint32_t>(-22248));
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x088B5518u);
    hot_regs.g5 = (g19 | 0u);
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    goto L_088B5490;
}
L_088B5518:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5538;
      }
      goto L_088B5520;
    }
L_088B5520:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B5530u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B73694u;
    return;
L_088B5530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5548;
      }
      goto L_088B5538;
    }
L_088B5538:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B5548u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B73694u;
    return;
L_088B5548:
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
L_088B5564:
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (2236u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    g19 = (g19 + static_cast<std::uint32_t>(-22184));
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x088B5598u);
    hot_regs.g5 = (g19 | 0u);
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    goto L_088B5490;
}
L_088B5598:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B55B8;
      }
      goto L_088B55A0;
    }
L_088B55A0:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B55B0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B7364Cu;
    return;
L_088B55B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B55C8;
      }
      goto L_088B55B8;
    }
L_088B55B8:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B55C8u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B7364Cu;
    return;
L_088B55C8:
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
L_088B55E4:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (40503u << 16u);
    ctx.gpr[9] = (hot_regs.g5 | 0u);
    g8 = (g8 + static_cast<std::uint32_t>(31161));
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    hot_regs.g7 = (g8 | 0u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088B5720;
      }
      goto L_088B55FC;
    }
}
L_088B55FC:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g10 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1)));
    g11 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g10 = (g10 << 8u);
    g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2)));
    g10 = (g11 + g10);
    g11 = (g2 << 16u);
    g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3)));
    g10 = (g10 + g11);
    g11 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(5)));
    g2 = (g2 << 24u);
    g3 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4)));
    g10 = (g10 + g2);
    g11 = (g11 << 8u);
    g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(6)));
    g7 = (g10 + g7);
    g10 = (g3 + g11);
    g11 = (g2 << 16u);
    g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(7)));
    g10 = (g10 + g11);
    g11 = (g2 << 24u);
    g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(9)));
    g10 = (g10 + g11);
    g3 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(8)));
    g8 = (g10 + g8);
    g10 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(10)));
    g11 = (g2 << 8u);
    g11 = (g3 + g11);
    g10 = (g10 << 16u);
    g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(11)));
    g10 = (g11 + g10);
    g11 = (g2 << 24u);
    g10 = (g10 + g11);
    g6 = (g10 + g6);
    g7 = (g7 - g8);
    g7 = (g7 - g6);
    g10 = (g6 >> 13u);
    g7 = (g7 ^ g10);
    g8 = (g8 - g6);
    g8 = (g8 - g7);
    g10 = (g7 << 8u);
    g8 = (g8 ^ g10);
    g6 = (g6 - g7);
    g6 = (g6 - g8);
    g10 = (g8 >> 13u);
    g6 = (g6 ^ g10);
    g7 = (g7 - g8);
    g7 = (g7 - g6);
    g10 = (g6 >> 12u);
    g7 = (g7 ^ g10);
    g8 = (g8 - g6);
    g8 = (g8 - g7);
    g10 = (g7 << 16u);
    g8 = (g8 ^ g10);
    g6 = (g6 - g7);
    g6 = (g6 - g8);
    g10 = (g8 >> 5u);
    g6 = (g6 ^ g10);
    g7 = (g7 - g8);
    g7 = (g7 - g6);
    g10 = (g6 >> 3u);
    g7 = (g7 ^ g10);
    g8 = (g8 - g6);
    g8 = (g8 - g7);
    g10 = (g7 << 10u);
    g8 = (g8 ^ g10);
    g6 = (g6 - g7);
    g6 = (g6 - g8);
    g10 = (g8 >> 15u);
    g6 = (g6 ^ g10);
    g9 = (g9 + static_cast<std::uint32_t>(-12));
    g10 = (g9 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = g10 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(12));
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_088B55FC;
      }
      goto L_088B5720;
    }
}
L_088B5720:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    hot_regs.g6 = (hot_regs.g6 + g5);
    g5 = (g9 + static_cast<std::uint32_t>(-1));
    g9 = (g5 < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = g9 == 0u;
    g9 = (g5 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088B59C0;
      }
      goto L_088B5734;
    }
}
L_088B5734:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g9);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-22408)));
    jump_target = g1;
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    ctx.gpr[9] = g9;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B574C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (g4 | 0u);
    g4 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(10)));
    ctx.gpr[12] = (ctx.gpr[8] | 0u);
    g4 = (g4 << 24u);
    g3 = (g6 + g4);
    g4 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(1)));
    g9 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(2)));
    g6 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(3)));
    g10 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(5)));
    ctx.gpr[8] = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(4)));
    ctx.gpr[13] = (g6 << 24u);
    g2 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(6)));
    g6 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(7)));
    ctx.gpr[14] = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(9)));
    ctx.gpr[15] = (g6 << 24u);
    g11 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(8)));
    g6 = (ctx.gpr[14] << 16u);
    g3 = (g3 + g6);
    g6 = (g11 << 8u);
    g4 = (g4 << 8u);
    g9 = (g9 << 16u);
    g10 = (g10 << 8u);
    g2 = (g2 << 16u);
    g11 = (ctx.gpr[12] + ctx.gpr[15]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[13]);
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_088B580C;
      }
      goto L_088B57B4;
    }
}
L_088B57B4:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (g4 | 0u);
    g4 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(1)));
    ctx.gpr[12] = (g8 | 0u);
    g9 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(2)));
    g8 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(3)));
    g10 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(5)));
    ctx.gpr[13] = (g8 << 24u);
    g8 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(4)));
    g2 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(6)));
    g3 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(7)));
    ctx.gpr[14] = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(9)));
    ctx.gpr[15] = (g3 << 24u);
    g11 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(8)));
    g3 = (ctx.gpr[14] << 16u);
    g3 = (hot_regs.g6 + g3);
    hot_regs.g6 = (g11 << 8u);
    g4 = (g4 << 8u);
    g9 = (g9 << 16u);
    g10 = (g10 << 8u);
    g2 = (g2 << 16u);
    g11 = (ctx.gpr[12] + ctx.gpr[15]);
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[13]);
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    goto L_088B580C;
}
L_088B580C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (ctx.gpr[3] + hot_regs.g6);
      if (branch_taken) {
          goto L_088B5864;
      }
      goto L_088B5814;
    }
L_088B5814:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g13 = ctx.gpr[13];
    g11 = (g4 | 0u);
    g4 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(1)));
    ctx.gpr[3] = (g8 | 0u);
    g9 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(2)));
    g8 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(3)));
    g10 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(5)));
    ctx.gpr[12] = (g8 << 24u);
    g8 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(4)));
    g2 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(6)));
    g13 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(7)));
    g11 = (aot_mem.aot_load8(g11 + static_cast<std::uint32_t>(8)));
    g13 = (g13 << 24u);
    g11 = (g11 << 8u);
    hot_regs.g6 = (hot_regs.g6 + g11);
    g4 = (g4 << 8u);
    g9 = (g9 << 16u);
    g10 = (g10 << 8u);
    g2 = (g2 << 16u);
    g11 = (ctx.gpr[3] + g13);
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[12]);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    ctx.gpr[13] = g13;
    goto L_088B5864;
}
L_088B5864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B58B0;
      }
      goto L_088B586C;
    }
L_088B586C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g12 = ctx.gpr[12];
    g10 = (g4 | 0u);
    g4 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(1)));
    g11 = (g8 | 0u);
    g9 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(2)));
    g8 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(3)));
    g2 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(5)));
    ctx.gpr[3] = (g8 << 24u);
    g8 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(4)));
    g12 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(6)));
    ctx.gpr[13] = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(7)));
    g10 = (g2 << 8u);
    g2 = (g12 << 16u);
    g12 = (ctx.gpr[13] << 24u);
    g4 = (g4 << 8u);
    g9 = (g9 << 16u);
    g11 = (g11 + g12);
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[3]);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    ctx.gpr[12] = g12;
    goto L_088B58B0;
}
L_088B58B0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[11] + hot_regs.g2);
      if (branch_taken) {
          goto L_088B58F4;
      }
      goto L_088B58B8;
    }
L_088B58B8:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (g4 | 0u);
    g4 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(1)));
    g2 = (g8 | 0u);
    g9 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(2)));
    g8 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(3)));
    g3 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(5)));
    ctx.gpr[11] = (g8 << 24u);
    ctx.gpr[12] = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(6)));
    g8 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(4)));
    g10 = (g3 << 8u);
    g3 = (ctx.gpr[12] << 16u);
    g4 = (g4 << 8u);
    g9 = (g9 << 16u);
    g2 = (g2 + g3);
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[11]);
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_088B58F4;
}
L_088B58F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (hot_regs.g2 + ctx.gpr[10]);
      if (branch_taken) {
          goto L_088B5930;
      }
      goto L_088B58FC;
    }
L_088B58FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (g4 | 0u);
    g4 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (g8 | 0u);
    g9 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(2)));
    g8 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(3)));
    hot_regs.g2 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(5)));
    ctx.gpr[3] = (g8 << 24u);
    g8 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(4)));
    g10 = (hot_regs.g2 << 8u);
    g4 = (g4 << 8u);
    g9 = (g9 << 16u);
    g10 = (ctx.gpr[11] + g10);
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[3]);
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_088B5930;
}
L_088B5930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_088B5960;
      }
      goto L_088B5938;
    }
L_088B5938:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g10 = (g4 | 0u);
    g4 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(1)));
    g9 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(2)));
    g11 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(3)));
    g10 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(4)));
    g11 = (g11 << 24u);
    g4 = (g4 << 8u);
    g9 = (g9 << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + g10);
    hot_regs.g7 = (hot_regs.g7 + g11);
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    goto L_088B5960;
}
L_088B5960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5984;
      }
      goto L_088B5968;
    }
L_088B5968:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g9 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1)));
    g10 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2)));
    ctx.gpr[11] = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3)));
    g4 = (g9 << 8u);
    g9 = (g10 << 16u);
    g10 = (ctx.gpr[11] << 24u);
    hot_regs.g7 = (hot_regs.g7 + g10);
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_088B5984;
}
L_088B5984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (hot_regs.g7 + ctx.gpr[9]);
      if (branch_taken) {
          goto L_088B59A0;
      }
      goto L_088B598C;
    }
L_088B598C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2)));
    g4 = (g9 << 8u);
    g9 = (ctx.gpr[10] << 16u);
    g9 = (hot_regs.g7 + g9);
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    goto L_088B59A0;
}
L_088B59A0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[9] + hot_regs.g4);
      if (branch_taken) {
          goto L_088B59B4;
      }
      goto L_088B59A8;
    }
L_088B59A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1)));
    g4 = (g4 << 8u);
    g4 = (hot_regs.g7 + g4);
    hot_regs.g4 = g4;
    goto L_088B59B4;
}
L_088B59B4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (hot_regs.g4 + hot_regs.g5);
      if (branch_taken) {
          goto L_088B59C0;
      }
      goto L_088B59BC;
    }
L_088B59BC:
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g5);
    goto L_088B59C0;
L_088B59C0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (g7 - ctx.gpr[8]);
    g4 = (g4 - g6);
    g5 = (g6 >> 13u);
    g4 = (g4 ^ g5);
    g5 = (ctx.gpr[8] - g6);
    g5 = (g5 - g4);
    g7 = (g4 << 8u);
    g5 = (g5 ^ g7);
    g6 = (g6 - g4);
    g6 = (g6 - g5);
    g7 = (g5 >> 13u);
    g6 = (g6 ^ g7);
    g4 = (g4 - g5);
    g4 = (g4 - g6);
    g7 = (g6 >> 12u);
    g4 = (g4 ^ g7);
    g5 = (g5 - g6);
    g5 = (g5 - g4);
    g7 = (g4 << 16u);
    g5 = (g5 ^ g7);
    g6 = (g6 - g4);
    g6 = (g6 - g5);
    g7 = (g5 >> 5u);
    g6 = (g6 ^ g7);
    g4 = (g4 - g5);
    g4 = (g4 - g6);
    g7 = (g6 >> 3u);
    g4 = (g4 ^ g7);
    g5 = (g5 - g6);
    g5 = (g5 - g4);
    g7 = (g4 << 10u);
    g5 = (g5 ^ g7);
    g4 = (g6 - g4);
    g2 = (g4 - g5);
    g4 = (g5 >> 15u);
    jump_target = hot_regs.g31;
    g2 = (g2 ^ g4);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B5A54:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(8))))));
    g5 = (g5 | 8u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g5));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B5A64:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x088B5A8Cu);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_088B6F30;
}
L_088B5A8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 2u);
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    g4 = (g4 >> 1u);
    if (ctx.gpr[17] != g4) {
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24736), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
        goto L_088B5AB4;
    }
    goto L_088B5AA4;
}
L_088B5AA4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24736)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5B44;
      }
      goto L_088B5AB0;
    }
L_088B5AB0:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24736), static_cast<std::uint8_t>(0u));
    goto L_088B5AB4;
L_088B5AB4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    hot_regs.g6 = (ctx.gpr[17] & 1u);
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g5 = (hot_regs.g6 << 1u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[19] = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 & 2u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1008));
    hot_regs.g5 = (0u < hot_regs.g4 ? 1u : 0u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g31 = (0x088B5AF0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 195u, 0x08888928u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B5AF0u) goto L_088B5AF0;
    return;
L_088B5AF0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5B08;
      }
      goto L_088B5AF8;
    }
L_088B5AF8:
    hot_regs.g31 = (0x088B5B00u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088B5D90;
L_088B5B00:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5576)));
      if (branch_taken) {
          goto L_088B5B34;
      }
      goto L_088B5B08;
    }
L_088B5B08:
    hot_regs.g31 = (0x088B5B10u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088B5BEC;
L_088B5B10:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x088B5B1Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088B5BF8;
L_088B5B1C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5B30;
      }
      goto L_088B5B24;
    }
L_088B5B24:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088B5B30u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 196u, 0x08888934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B5B30u) goto L_088B5B30;
    return;
L_088B5B30:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5576)));
    goto L_088B5B34;
L_088B5B34:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5B44;
      }
      goto L_088B5B3C;
    }
L_088B5B3C:
    hot_regs.g31 = (0x088B5B44u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 158u, 0x08B50A54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B5B44u) goto L_088B5B44;
    return;
L_088B5B44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B5B7C;
      }
      goto L_088B5B54;
    }
}
L_088B5B54:
    hot_regs.g31 = (0x088B5B5Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088B65A4;
L_088B5B5C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5B6C;
      }
      goto L_088B5B64;
    }
L_088B5B64:
    hot_regs.g31 = (0x088B5B6Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088B5BF8;
L_088B5B6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-5));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_088B5B7C;
}
L_088B5B7C:
    hot_regs.g31 = (0x088B5B84u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088B5BEC;
L_088B5B84:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5BA4;
      }
      goto L_088B5B8C;
    }
L_088B5B8C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088B5BA4;
      }
      goto L_088B5B9C;
    }
L_088B5B9C:
    hot_regs.g31 = (0x088B5BA4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088B68F4;
L_088B5BA4:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    hot_regs.g2 = (ctx.gpr[18] | 0u);
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
L_088B5BCC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(8))))));
    g5 = (g5 & 255u);
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-2));
    g6 = (g6 & hot_regs.g7);
    g5 = (g5 & 1u);
    g5 = (g6 | g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g5));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B5BEC:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(8))))));
    jump_target = hot_regs.g31;
    g2 = (g2 & 1u);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B5BF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    g17 = (g4 | 0u);
    hot_regs.g5 = (g17 - g17);
    hot_regs.g6 = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g5); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    g18 = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(g18) <= 0;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B5C78;
      }
      goto L_088B5C44;
    }
}
L_088B5C44:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x088B5C54u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B5C54u) goto L_088B5C54;
    return;
L_088B5C54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(8)));
    g18 = (g18 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(9)));
    g17 = (g17 + static_cast<std::uint32_t>(12));
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g4));
    { const bool branch_taken = static_cast<std::int32_t>(g18) > 0;
    g19 = (g19 + static_cast<std::uint32_t>(12));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_088B5C44;
      }
      goto L_088B5C74;
    }
}
L_088B5C74:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_088B5C78;
L_088B5C78:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B5CC4;
      }
      goto L_088B5C88;
    }
L_088B5C88:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    g21 = (g21 + static_cast<std::uint32_t>(25856));
    ctx.gpr[21] = g21;
    goto L_088B5C94;
}
L_088B5C94:
{
    std::uint32_t g19 = ctx.gpr[19];
    if (g19 == 0u) {
    g19 = (g19 + static_cast<std::uint32_t>(12));
    ctx.gpr[19] = g19;
        goto L_088B5CBC;
    }
    goto L_088B5C9C;
}
L_088B5C9C:
{
    std::uint32_t g19 = ctx.gpr[19];
    if (g19 == 0u) {
    g19 = (g19 + static_cast<std::uint32_t>(12));
    ctx.gpr[19] = g19;
        goto L_088B5CBC;
    }
    goto L_088B5CA4;
}
L_088B5CA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == ctx.gpr[20];
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B5CB8;
      }
      goto L_088B5CB0;
    }
}
L_088B5CB0:
    hot_regs.g31 = (0x088B5CB8u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B5CB8u) goto L_088B5CB8;
    return;
L_088B5CB8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_088B5CBC;
L_088B5CBC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088B5C94;
      }
      goto L_088B5CC4;
    }
L_088B5CC4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), g17);
    g17 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    g4 = (g17 | 0u);
    g6 = (g4 - g4);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g7 = (g7 >> 29u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    g6 = (g6 + g7);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(g6) <= 0;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088B5D18;
      }
      goto L_088B5CF4;
    }
}
L_088B5CF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), hot_regs.g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    g4 = (g4 + static_cast<std::uint32_t>(8));
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g6) > 0;
    g5 = (g5 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B5CF4;
      }
      goto L_088B5D14;
    }
}
L_088B5D14:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_088B5D18;
L_088B5D18:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088B5D34;
      }
      goto L_088B5D28;
    }
L_088B5D28:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    goto L_088B5D2C;
L_088B5D2C:
{
    std::uint32_t g4 = hot_regs.g4;
    { const bool branch_taken = g4 != ctx.gpr[17];
    g4 = (g4 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B5D2C;
      }
      goto L_088B5D34;
    }
}
L_088B5D34:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(28), g5);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    g4 = (g4 & hot_regs.g7);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(40), hot_regs.g6);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(48), 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(8))))));
    g5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), 0u);
    g4 = (g4 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B5D90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-272));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (hot_regs.g5 & 8u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B5DD0;
      }
      goto L_088B5DB0;
    }
}
L_088B5DB0:
    hot_regs.g31 = (0x088B5DB8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088B5BF8;
L_088B5DB8:
    hot_regs.g31 = (0x088B5DC0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088B6F30;
L_088B5DC0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5DD8;
      }
      goto L_088B5DC8;
    }
L_088B5DC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5E0C;
      }
      goto L_088B5DD0;
    }
L_088B5DD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5E0C;
      }
      goto L_088B5DD8;
    }
L_088B5DD8:
    hot_regs.g6 = (2232u << 16u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24716));
    hot_regs.g7 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24708));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24696));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088B5DF4u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-22360));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B5DF4u) goto L_088B5DF4;
    return;
L_088B5DF4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088B5E04u);
    hot_regs.g6 = (0u | 1u);
    goto L_088B62A4;
L_088B5E04:
    hot_regs.g31 = (0x088B5E0Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088B707C;
L_088B5E0C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B5E1C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g16);
    g16 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (g9 & 255u);
    g7 = (g7 - ctx.gpr[10]);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 3u));
    g9 = (g9 >> 29u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g17);
    g17 = (g7 + g9);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 3u));
    g7 = (g17 < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    { const bool branch_taken = g7 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B5E74;
      }
      goto L_088B5E68;
    }
}
L_088B5E68:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + hot_regs.g7);
      if (branch_taken) {
          goto L_088B5E80;
      }
      goto L_088B5E74;
    }
L_088B5E74:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + g7);
    hot_regs.g7 = g7;
    goto L_088B5E80;
}
L_088B5E80:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5EDC;
      }
      goto L_088B5E88;
    }
L_088B5E88:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[17] << 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x088B5EA0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B5EA0u) goto L_088B5EA0;
    return;
L_088B5EA0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088B5EDC;
      }
      goto L_088B5EB8;
    }
}
L_088B5EB8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x088B5ECCu);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B5ECCu) goto L_088B5ECC;
    return;
L_088B5ECC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    goto L_088B5EDC;
}
L_088B5EDC:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g7 == hot_regs.g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B5F14;
      }
      goto L_088B5EEC;
    }
L_088B5EEC:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(8));
        goto L_088B5F0C;
    }
    goto L_088B5EF8;
L_088B5EF8:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), g9);
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), g9);
    g7 = (g7 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    goto L_088B5F0C;
}
L_088B5F0C:
    { const bool branch_taken = hot_regs.g7 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B5EEC;
      }
      goto L_088B5F14;
    }
L_088B5F14:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088B5F4C;
      }
      goto L_088B5F24;
    }
L_088B5F24:
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5F40;
      }
      goto L_088B5F30;
    }
L_088B5F30:
{
    std::uint32_t g6 = hot_regs.g6;
    ctx.gpr[8] = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(4), g6);
    hot_regs.g6 = g6;
    goto L_088B5F40;
}
L_088B5F40:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088B5F80;
      }
      goto L_088B5F4C;
    }
L_088B5F4C:
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B5F7C;
      }
      goto L_088B5F54;
    }
L_088B5F54:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
        goto L_088B5F74;
    }
    goto L_088B5F60;
L_088B5F60:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), g9);
    g9 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), g9);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = g9;
    goto L_088B5F74;
}
L_088B5F74:
    { const bool branch_taken = hot_regs.g7 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B5F54;
      }
      goto L_088B5F7C;
    }
L_088B5F7C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088B5F80;
L_088B5F80:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5FC4;
      }
      goto L_088B5F88;
    }
L_088B5F88:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (g5 | 0u);
    g5 = (hot_regs.g6 | 0u);
    { const bool branch_taken = hot_regs.g4 == g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B5FC4;
      }
      goto L_088B5F98;
    }
}
L_088B5F98:
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (hot_regs.g6 == 0u) {
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
        goto L_088B5FB8;
    }
    goto L_088B5FA4;
L_088B5FA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(4), g7);
    g4 = (g4 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    goto L_088B5FB8;
}
L_088B5FB8:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B5F98;
      }
      goto L_088B5FC0;
    }
L_088B5FC0:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088B5FC4;
L_088B5FC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B5FE0;
      }
      goto L_088B5FD4;
    }
L_088B5FD4:
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    goto L_088B5FD8;
L_088B5FD8:
{
    std::uint32_t g5 = hot_regs.g5;
    { const bool branch_taken = g5 != hot_regs.g6;
    g5 = (g5 + static_cast<std::uint32_t>(8));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B5FD8;
      }
      goto L_088B5FE0;
    }
}
L_088B5FE0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5FF0;
      }
      goto L_088B5FE8;
    }
L_088B5FE8:
    hot_regs.g31 = (0x088B5FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B5FF0u) goto L_088B5FF0;
    return;
L_088B5FF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[17] << 3u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g18);
    g4 = (g18 + g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B6020:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (0u | 12u);
    g7 = (g7 - ctx.gpr[10]);
    { const std::int32_t dividend = static_cast<std::int32_t>(g7); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g20);
    ctx.gpr[16] = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[9] & 255u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    g20 = (ctx.lo);
    g4 = (g20 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g20);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B6090;
      }
      goto L_088B6084;
    }
}
L_088B6084:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + hot_regs.g4);
      if (branch_taken) {
          goto L_088B609C;
      }
      goto L_088B6090;
    }
L_088B6090:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + g4);
    hot_regs.g4 = g4;
    goto L_088B609C;
}
L_088B609C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_088B60D0;
      }
      goto L_088B60A4;
    }
L_088B60A4:
    hot_regs.g4 = (ctx.gpr[20] + ctx.gpr[20]);
    hot_regs.g4 = (ctx.gpr[20] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g31 = (0x088B60B8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B60B8u) goto L_088B60B8;
    return;
L_088B60B8:
    ctx.gpr[23] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088B60D0;
      }
      goto L_088B60C4;
    }
L_088B60C4:
    hot_regs.g31 = (0x088B60CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B60CCu) goto L_088B60CC;
    return;
L_088B60CC:
    ctx.gpr[23] = (hot_regs.g2 | 0u);
    goto L_088B60D0;
L_088B60D0:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[17];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B6118;
      }
      goto L_088B60E0;
    }
L_088B60E0:
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
        goto L_088B6110;
    }
    goto L_088B60EC;
L_088B60EC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x088B60FCu);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B60FCu) goto L_088B60FC;
    return;
L_088B60FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load8(g22 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g22 + static_cast<std::uint32_t>(9)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g4));
    g22 = (g22 + static_cast<std::uint32_t>(12));
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    goto L_088B6110;
}
L_088B6110:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[17];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B60E0;
      }
      goto L_088B6118;
    }
L_088B6118:
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088B6160;
      }
      goto L_088B6128;
    }
L_088B6128:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6154;
      }
      goto L_088B6134;
    }
L_088B6134:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x088B6144u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6144u) goto L_088B6144;
    return;
L_088B6144:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_088B6154;
}
L_088B6154:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088B61A4;
      }
      goto L_088B6160;
    }
L_088B6160:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B61A0;
      }
      goto L_088B6168;
    }
L_088B6168:
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
        goto L_088B6198;
    }
    goto L_088B6174;
L_088B6174:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x088B6184u);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6184u) goto L_088B6184;
    return;
L_088B6184:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g4));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    goto L_088B6198;
}
L_088B6198:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B6168;
      }
      goto L_088B61A0;
    }
L_088B61A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088B61A4;
L_088B61A4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B61F4;
      }
      goto L_088B61AC;
    }
L_088B61AC:
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B61F4;
      }
      goto L_088B61B8;
    }
L_088B61B8:
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
        goto L_088B61E8;
    }
    goto L_088B61C4;
L_088B61C4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x088B61D4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B61D4u) goto L_088B61D4;
    return;
L_088B61D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(9)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g4));
    g17 = (g17 + static_cast<std::uint32_t>(12));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    goto L_088B61E8;
}
L_088B61E8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B61B8;
      }
      goto L_088B61F0;
    }
L_088B61F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088B61F4;
L_088B61F4:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (g4 | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (g4 | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B6248;
      }
      goto L_088B6208;
    }
}
L_088B6208:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    g22 = (g22 + static_cast<std::uint32_t>(25856));
    ctx.gpr[22] = g22;
    goto L_088B6214;
}
L_088B6214:
{
    std::uint32_t g18 = ctx.gpr[18];
    if (g18 == 0u) {
    g18 = (g18 + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = g18;
        goto L_088B623C;
    }
    goto L_088B621C;
}
L_088B621C:
{
    std::uint32_t g18 = ctx.gpr[18];
    if (g18 == 0u) {
    g18 = (g18 + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = g18;
        goto L_088B623C;
    }
    goto L_088B6224;
}
L_088B6224:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == ctx.gpr[19];
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B6238;
      }
      goto L_088B6230;
    }
}
L_088B6230:
    hot_regs.g31 = (0x088B6238u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6238u) goto L_088B6238;
    return;
L_088B6238:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_088B623C;
L_088B623C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088B6214;
      }
      goto L_088B6244;
    }
L_088B6244:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088B6248;
L_088B6248:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6258;
      }
      goto L_088B6250;
    }
L_088B6250:
    hot_regs.g31 = (0x088B6258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6258u) goto L_088B6258;
    return;
L_088B6258:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g20 + g20);
    g4 = (g20 + g4);
    g4 = (g4 << 2u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g21);
    g4 = (g21 + g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g20 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g21 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[20] = g20;
    ctx.gpr[21] = g21;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B62A4:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-720));
    g6 = (g6 & 255u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(8))))));
    g7 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(664), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(680), ctx.gpr[17]);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(g7));
    g6 = (ctx.gpr[8] & 8u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(676), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(684), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(688), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(692), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(696), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(700), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(704), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(708), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(712), hot_regs.g31);
    { const bool branch_taken = g6 == 0u;
    g7 = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B6378;
      }
      goto L_088B62F4;
    }
}
L_088B62F4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(668), hot_regs.g7);
    hot_regs.g31 = (0x088B6300u);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    ctx.pc = 0x08B7366Cu;
    return;
L_088B6300:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) < 0;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(648), hot_regs.g2);
      if (branch_taken) {
          goto L_088B6370;
      }
      goto L_088B6308;
    }
L_088B6308:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (0u | 12u);
    hot_regs.g4 = (hot_regs.g4 - hot_regs.g5);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(264));
    ctx.gpr[23] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 352u);
    hot_regs.g7 = (ctx.lo);
    hot_regs.g31 = (0x088B633Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), hot_regs.g7);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B633Cu) goto L_088B633C;
    return;
L_088B633C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g28 + static_cast<std::uint32_t>(-24680));
    hot_regs.g5 = (g28 + static_cast<std::uint32_t>(-24672));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(660), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(656), hot_regs.g5);
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    g19 = (2236u << 16u);
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(352));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(616));
    ctx.gpr[18] = (g28 + static_cast<std::uint32_t>(5824));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(624));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(652), g4);
    { const bool branch_taken = 0u == 0u;
    g19 = (g19 + static_cast<std::uint32_t>(25856));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_088B6380;
      }
      goto L_088B6370;
    }
}
L_088B6370:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088B6574;
      }
      goto L_088B6378;
    }
L_088B6378:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088B6574;
      }
      goto L_088B6380;
    }
L_088B6380:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(648)));
    goto L_088B6384;
L_088B6384:
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x088B6390u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B7367Cu;
    return;
L_088B6390:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) <= 0;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(664)));
      if (branch_taken) {
          goto L_088B64F0;
      }
      goto L_088B639C;
    }
L_088B639C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(264)));
    hot_regs.g5 = (0u | 4096u);
    g4 = (g4 & 61440u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B64E8;
      }
      goto L_088B63B0;
    }
}
L_088B63B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24660)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24664)));
    g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    g8 = (g7 ^ g5);
    g8 = (g8 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (hot_regs.g6 < g4 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    g4 = (g8 & g4);
    g4 = (g4 | ctx.gpr[9]);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088B64E8;
      }
      goto L_088B63E0;
    }
}
L_088B63E0:
    hot_regs.g31 = (0x088B63E8u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B63E8u) goto L_088B63E8;
    return;
L_088B63E8:
    hot_regs.g4 = (hot_regs.g29 + hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(660)));
    hot_regs.g31 = (0x088B63F8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(348));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B63F8u) goto L_088B63F8;
    return;
L_088B63F8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B64E8;
      }
      goto L_088B6400;
    }
L_088B6400:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_088B64E8;
      }
      goto L_088B640C;
    }
L_088B640C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(656)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(668)));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088B6420u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6420u) goto L_088B6420;
    return;
L_088B6420:
    hot_regs.g31 = (0x088B6428u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6428u) goto L_088B6428;
    return;
L_088B6428:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088B6438u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6438u) goto L_088B6438;
    return;
L_088B6438:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(624), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(628), ctx.gpr[18]);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(632), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(633), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x088B6458u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6458u) goto L_088B6458;
    return;
L_088B6458:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(620)));
    { const bool branch_taken = g4 == ctx.gpr[18];
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B646C;
      }
      goto L_088B6464;
    }
}
L_088B6464:
    hot_regs.g31 = (0x088B646Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B646Cu) goto L_088B646C;
    return;
L_088B646C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = g4 == hot_regs.g5;
    ctx.gpr[16] = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B64B4;
      }
      goto L_088B647C;
    }
}
L_088B647C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(628)));
      if (branch_taken) {
          goto L_088B64A8;
      }
      goto L_088B6484;
    }
L_088B6484:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(624)));
    hot_regs.g31 = (0x088B6490u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6490u) goto L_088B6490;
    return;
L_088B6490:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(632)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(633)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(628)));
    hot_regs.g4 = g4;
    goto L_088B64A8;
}
L_088B64A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B64D8;
      }
      goto L_088B64B4;
    }
}
L_088B64B4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(652)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(644), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(644));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g31 = (0x088B64D4u);
    ctx.gpr[9] = (0u | 1u);
    goto L_088B6020;
}
L_088B64D4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(628)));
    goto L_088B64D8;
L_088B64D8:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B64E8;
      }
      goto L_088B64E0;
    }
L_088B64E0:
    hot_regs.g31 = (0x088B64E8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B64E8u) goto L_088B64E8;
    return;
L_088B64E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(648)));
      if (branch_taken) {
          goto L_088B6384;
      }
      goto L_088B64F0;
    }
L_088B64F0:
    hot_regs.g31 = (0x088B64F8u);
    // nop
    ctx.pc = 0x08B73684u;
    return;
L_088B64F8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6570;
      }
      goto L_088B6500;
    }
L_088B6500:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6570;
      }
      goto L_088B6508;
    }
L_088B6508:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(640), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(636), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = g4 == hot_regs.g5;
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(636));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B6550;
      }
      goto L_088B6524;
    }
}
L_088B6524:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B6548;
      }
      goto L_088B6530;
    }
}
L_088B6530:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(636)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    g4 = (g4 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    goto L_088B6548;
}
L_088B6548:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), hot_regs.g4);
      if (branch_taken) {
          goto L_088B6570;
      }
      goto L_088B6550;
    }
L_088B6550:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(645), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(645));
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g31 = (0x088B6570u);
    ctx.gpr[9] = (0u | 1u);
    goto L_088B5E1C;
L_088B6570:
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(672)));
    goto L_088B6574;
L_088B6574:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(676)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(680)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(684)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(688)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(692)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(696)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(700)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(704)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(708)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(712)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B65A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-272));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (hot_regs.g5 & 8u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B65DC;
      }
      goto L_088B65C4;
    }
}
L_088B65C4:
    hot_regs.g31 = (0x088B65CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088B6F30;
L_088B65CC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B65E4;
      }
      goto L_088B65D4;
    }
L_088B65D4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088B6610;
      }
      goto L_088B65DC;
    }
L_088B65DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088B6610;
      }
      goto L_088B65E4;
    }
L_088B65E4:
    hot_regs.g6 = (2232u << 16u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24716));
    hot_regs.g7 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24708));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24696));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088B6600u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-22360));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6600u) goto L_088B6600;
    return;
L_088B6600:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088B6610u);
    hot_regs.g6 = (0u | 1u);
    goto L_088B62A4;
L_088B6610:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B6620:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x088B6634u);
    // nop
    hot_regs.g29 = g29;
    goto L_088B666C;
}
L_088B6634:
    hot_regs.g4 = (2232u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x088B6644u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-22360));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6644u) goto L_088B6644;
    return;
L_088B6644:
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g2);
    hot_regs.g31 = (0x088B6650u);
    hot_regs.g5 = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6650u) goto L_088B6650;
    return;
L_088B6650:
    hot_regs.g31 = (0x088B6658u);
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6658u) goto L_088B6658;
    return;
L_088B6658:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(-3));
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
L_088B666C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    g5 = (g5 << 2u);
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g4 = (g5 + g5);
    g4 = (g5 + g4);
    g4 = (g4 << 2u);
    jump_target = hot_regs.g31;
    g2 = (g2 + g4);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B6698:
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (2244u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[17] = (0u | 47u);
    ctx.gpr[19] = (g18 + static_cast<std::uint32_t>(27840));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B66CC;
      }
      goto L_088B66C4;
    }
}
L_088B66C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_088B66D8;
      }
      goto L_088B66CC;
    }
L_088B66CC:
    hot_regs.g31 = (0x088B66D4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088B666C;
L_088B66D4:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    goto L_088B66D8;
L_088B66D8:
    hot_regs.g4 = (2232u << 16u);
    hot_regs.g31 = (0x088B66E4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-22360));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B66E4u) goto L_088B66E4;
    return;
L_088B66E4:
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g2);
    hot_regs.g31 = (0x088B66F0u);
    hot_regs.g5 = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B66F0u) goto L_088B66F0;
    return;
L_088B66F0:
    ctx.gpr[16] = (hot_regs.g2 + static_cast<std::uint32_t>(1));
    hot_regs.g31 = (0x088B66FCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B66FCu) goto L_088B66FC;
    return;
L_088B66FC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g2 + static_cast<std::uint32_t>(-3));
    hot_regs.g4 = (0u | 64u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 64 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g4 = (g5 | 0u);
    hot_regs.g5 = g5;
        goto L_088B6710;
    }
    goto L_088B6710;
}
L_088B6710:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (0u | 0u);
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 92u);
    ctx.gpr[11] = (0u | 126u);
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-127));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-95));
    ctx.gpr[12] = (0u | 128u);
    hot_regs.g6 = (0u | 1u);
    ctx.gpr[8] = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    hot_regs.g7 = g7;
    goto L_088B673C;
}
L_088B673C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    hot_regs.g5 = (hot_regs.g6 | 0u);
      if (branch_taken) {
          goto L_088B67DC;
      }
      goto L_088B6744;
    }
L_088B6744:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 63 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B67DC;
      }
      goto L_088B6750;
    }
L_088B6750:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B67DC;
      }
      goto L_088B675C;
    }
L_088B675C:
{
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(0))))));
    g16 = (g16 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[10];
    ctx.gpr[13] = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088B6794;
      }
      goto L_088B6774;
    }
}
L_088B6774:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088B6794;
      }
      goto L_088B677C;
    }
L_088B677C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_088B6794;
      }
      goto L_088B6784;
    }
L_088B6784:
    { const bool branch_taken = ctx.gpr[8] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_088B67C0;
      }
      goto L_088B678C;
    }
L_088B678C:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088B67C0;
      }
      goto L_088B6794;
    }
L_088B6794:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + g4);
    ctx.gpr[14] = (g4 + ctx.gpr[19]);
    g4 = (ctx.gpr[13] | 0u);
    { const bool branch_taken = ctx.gpr[8] != hot_regs.g2;
    aot_mem.aot_store16(ctx.gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B67D4;
      }
      goto L_088B67A8;
    }
}
L_088B67A8:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088B67D4;
      }
      goto L_088B67B0;
    }
L_088B67B0:
    hot_regs.g5 = (hot_regs.g6 | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B67D4;
      }
      goto L_088B67C0;
    }
L_088B67C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (g4 + g4);
    g8 = (g8 & 255u);
    ctx.gpr[9] = (g4 + ctx.gpr[19]);
    g4 = (ctx.gpr[13] | 0u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g8));
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    goto L_088B67D4;
}
L_088B67D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(hot_regs.g7) ? 1u : 0u);
      if (branch_taken) {
          goto L_088B673C;
      }
      goto L_088B67DC;
    }
L_088B67DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + g4);
    g4 = (g4 + ctx.gpr[19]);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(27840)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B6840;
      }
      goto L_088B67F4;
    }
}
L_088B67F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24656));
      if (branch_taken) {
          goto L_088B682C;
      }
      goto L_088B6800;
    }
L_088B6800:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x088B680Cu);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B680Cu) goto L_088B680C;
    return;
L_088B680C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6824;
      }
      goto L_088B6818;
    }
L_088B6818:
    hot_regs.g31 = (0x088B6820u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6820u) goto L_088B6820;
    return;
L_088B6820:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_088B6824;
L_088B6824:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24656));
    goto L_088B682C;
L_088B682C:
    hot_regs.g31 = (0x088B6834u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6834u) goto L_088B6834;
    return;
L_088B6834:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088B6840u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6840u) goto L_088B6840;
    return;
L_088B6840:
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
L_088B6860:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    g6 = (g6 - hot_regs.g5);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 2u));
    g7 = (g7 >> 30u);
    g6 = (g6 + g7);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 2u));
    g7 = (0u | 0u);
    ctx.gpr[8] = (g7 < g6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088B68E8;
      }
      goto L_088B688C;
    }
}
L_088B688C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    goto L_088B6890;
L_088B6890:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g8 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + g8);
    g9 = (g8 + g9);
    g9 = (g9 << 2u);
    g9 = (hot_regs.g4 + g9);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g9 != 0u;
    g9 = (g8 + g8);
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088B68C8;
      }
      goto L_088B68B0;
    }
}
L_088B68B0:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + ctx.gpr[9]);
    g8 = (g8 << 2u);
    g8 = (hot_regs.g4 + g8);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = g8 == 0u;
    // nop
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088B68E0;
      }
      goto L_088B68C8;
    }
}
L_088B68C8:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (g7 < hot_regs.g6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088B6890;
      }
      goto L_088B68D8;
    }
}
L_088B68D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B68E8;
      }
      goto L_088B68E0;
    }
L_088B68E0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088B68EC;
      }
      goto L_088B68E8;
    }
L_088B68E8:
    hot_regs.g2 = (0u | 0u);
    goto L_088B68EC;
L_088B68EC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B68F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g5 + g5);
    ctx.gpr[8] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g5 = (g5 + hot_regs.g7);
    g5 = (g5 << 2u);
    g6 = (0u | 1u);
    g5 = (ctx.gpr[8] + g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088B6930u);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g6));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    goto L_088B6998;
}
L_088B6930:
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
L_088B693C:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6944:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(40)));
    g5 = (g5 ^ hot_regs.g6);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B6984;
      }
      goto L_088B6960;
    }
}
L_088B6960:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    g4 = (hot_regs.g5 ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B698C;
      }
      goto L_088B697C;
    }
}
L_088B697C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088B6990;
      }
      goto L_088B6984;
    }
L_088B6984:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088B6990;
      }
      goto L_088B698C;
    }
L_088B698C:
    hot_regs.g2 = (0u | 0u);
    goto L_088B6990;
L_088B6990:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6998:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    g5 = (g5 - hot_regs.g6);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g7 = (g7 >> 30u);
    g5 = (g5 + g7);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    ctx.gpr[9] = (0u | 0u);
    g7 = (ctx.gpr[9] < g5 ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B6A5C;
      }
      goto L_088B69CC;
    }
}
L_088B69CC:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    goto L_088B69D4;
L_088B69D4:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), g8);
    g8 = (g8 < hot_regs.g5 ? 1u : 0u);
    if (g8 != 0u) {
    g8 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = g8;
        goto L_088B69F0;
    }
    goto L_088B69E8;
}
L_088B69E8:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    goto L_088B69F0;
L_088B69F0:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (ctx.gpr[8] << 2u);
    g10 = (hot_regs.g6 + g10);
    g10 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (g10 + g10);
    g10 = (g10 + ctx.gpr[11]);
    g10 = (g10 << 2u);
    g10 = (hot_regs.g7 + g10);
    g10 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g10 == 0u;
    g10 = (ctx.gpr[8] << 2u);
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_088B6A54;
      }
      goto L_088B6A18;
    }
}
L_088B6A18:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (hot_regs.g6 + g10);
    g10 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (g10 + g10);
    g10 = (g10 + ctx.gpr[11]);
    g10 = (g10 << 2u);
    g10 = (hot_regs.g7 + g10);
    g10 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = g10 != 0u;
    // nop
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_088B6A54;
      }
      goto L_088B6A3C;
    }
}
L_088B6A3C:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (g9 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088B69D4;
      }
      goto L_088B6A4C;
    }
}
L_088B6A4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6A5C;
      }
      goto L_088B6A54;
    }
L_088B6A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6A64;
      }
      goto L_088B6A5C;
    }
L_088B6A5C:
    hot_regs.g31 = (0x088B6A64u);
    // nop
    goto L_088B7034;
L_088B6A64:
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
L_088B6A70:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    g5 = (g5 - hot_regs.g6);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g7 = (g7 >> 30u);
    g5 = (g5 + g7);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    ctx.gpr[9] = (0u | 0u);
    g7 = (ctx.gpr[9] < g5 ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B6B30;
      }
      goto L_088B6AA4;
    }
}
L_088B6AA4:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    goto L_088B6AAC;
L_088B6AAC:
{
    std::uint32_t g8 = ctx.gpr[8];
    { const bool branch_taken = static_cast<std::int32_t>(g8) > 0;
    g8 = (g8 + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088B6AC0;
      }
      goto L_088B6AB4;
    }
}
L_088B6AB4:
{
    std::uint32_t g8 = ctx.gpr[8];
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), hot_regs.g5);
    g8 = (hot_regs.g5 | 0u);
    g8 = (g8 + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = g8;
    goto L_088B6AC0;
}
L_088B6AC0:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (g8 << 2u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), g8);
    g10 = (hot_regs.g6 + g10);
    g10 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (g10 + g10);
    g10 = (g10 + ctx.gpr[11]);
    g10 = (g10 << 2u);
    g10 = (hot_regs.g7 + g10);
    g10 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g10 == 0u;
    g10 = (g8 << 2u);
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_088B6B28;
      }
      goto L_088B6AEC;
    }
}
L_088B6AEC:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (hot_regs.g6 + g10);
    g10 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (g10 + g10);
    g10 = (g10 + ctx.gpr[11]);
    g10 = (g10 << 2u);
    g10 = (hot_regs.g7 + g10);
    g10 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = g10 != 0u;
    // nop
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_088B6B28;
      }
      goto L_088B6B10;
    }
}
L_088B6B10:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (g9 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088B6AAC;
      }
      goto L_088B6B20;
    }
}
L_088B6B20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6B30;
      }
      goto L_088B6B28;
    }
L_088B6B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6B38;
      }
      goto L_088B6B30;
    }
L_088B6B30:
    hot_regs.g31 = (0x088B6B38u);
    // nop
    goto L_088B7034;
L_088B6B38:
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
L_088B6B44:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    hot_regs.g6 = (0u | 12u);
    hot_regs.g4 = (hot_regs.g4 - hot_regs.g7);
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g31);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    hot_regs.g5 = (ctx.lo);
    hot_regs.g31 = (0x088B6BA8u);
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 96u, 0x08B685A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6BA8u) goto L_088B6BA8;
    return;
L_088B6BA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(16)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (0u | 12u);
    g4 = (g4 - g5);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(48)));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(36)));
    g5 = (g5 << 2u);
    g5 = (g4 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), g5);
    ctx.gpr[21] = (0u | 0u);
    g5 = (ctx.lo);
    g5 = (ctx.gpr[21] < g5 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B6E7C;
      }
      goto L_088B6BEC;
    }
}
L_088B6BEC:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24724));
    ctx.gpr[23] = (0u | 20u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g4);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    goto L_088B6C00;
L_088B6C00:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 - g5);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g5 = (ctx.lo);
    g5 = (ctx.gpr[21] < g5 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B6C34;
      }
      goto L_088B6C20;
    }
}
L_088B6C20:
    hot_regs.g31 = (0x088B6C28u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6C28u) goto L_088B6C28;
    return;
L_088B6C28:
    hot_regs.g31 = (0x088B6C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6C30u) goto L_088B6C30;
    return;
L_088B6C30:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    goto L_088B6C34;
L_088B6C34:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    g5 = (g5 + ctx.gpr[22]);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g6 != g5) {
    g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = g5;
        goto L_088B6C54;
    }
    goto L_088B6C4C;
}
L_088B6C4C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_088B6C54;
L_088B6C54:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g5 = (g5 - hot_regs.g6);
    { const std::int32_t dividend = static_cast<std::int32_t>(g5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g5 = (ctx.lo);
    g5 = (ctx.gpr[21] < g5 ? 1u : 0u);
    if (g5 != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
        goto L_088B6C84;
    }
    goto L_088B6C70;
}
L_088B6C70:
    hot_regs.g31 = (0x088B6C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6C78u) goto L_088B6C78;
    return;
L_088B6C78:
    hot_regs.g31 = (0x088B6C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6C80u) goto L_088B6C80;
    return;
L_088B6C80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_088B6C84;
L_088B6C84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088B6CD0;
      }
      goto L_088B6C94;
    }
L_088B6C94:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B6CB0;
      }
      goto L_088B6CA0;
    }
}
L_088B6CA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    goto L_088B6CB0;
}
L_088B6CB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 - hot_regs.g5);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g19 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    g19 = (ctx.gpr[21] < g19 ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_088B6E00;
      }
      goto L_088B6CD0;
    }
}
L_088B6CD0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    g6 = (0u | 1u);
    g5 = (hot_regs.g4 - g5);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g7 = (g7 >> 30u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    g5 = (g5 + g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g6);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g6 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088B6D10;
      }
      goto L_088B6D00;
    }
}
L_088B6D00:
{
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    g19 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    g19 = (hot_regs.g5 + g19);
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_088B6D1C;
      }
      goto L_088B6D10;
    }
}
L_088B6D10:
{
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    g19 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g19 = (hot_regs.g5 + g19);
    ctx.gpr[19] = g19;
    goto L_088B6D1C;
}
L_088B6D1C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_088B6D5C;
      }
      goto L_088B6D24;
    }
L_088B6D24:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g5);
    hot_regs.g31 = (0x088B6D38u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6D38u) goto L_088B6D38;
    return;
L_088B6D38:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088B6D5C;
      }
      goto L_088B6D48;
    }
L_088B6D48:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g4);
    hot_regs.g31 = (0x088B6D54u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6D54u) goto L_088B6D54;
    return;
L_088B6D54:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    goto L_088B6D5C;
L_088B6D5C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_088B6D70;
      }
      goto L_088B6D68;
    }
L_088B6D68:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088B6D94;
      }
      goto L_088B6D70;
    }
L_088B6D70:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    ctx.gpr[30] = (hot_regs.g4 - hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B6D88u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6D88u) goto L_088B6D88;
    return;
L_088B6D88:
    hot_regs.g5 = (hot_regs.g2 + ctx.gpr[30]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    goto L_088B6D94;
L_088B6D94:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (g4 | 0u);
    g4 = (g5 | 0u);
    g5 = (hot_regs.g6 | 0u);
    if (g5 == 0u) {
    ctx.gpr[16] = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_088B6DC0;
    }
    goto L_088B6DA8;
}
L_088B6DA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    { const bool branch_taken = g5 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B6DA8;
      }
      goto L_088B6DBC;
    }
}
L_088B6DBC:
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    goto L_088B6DC0;
L_088B6DC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B6DD4;
      }
      goto L_088B6DCC;
    }
L_088B6DCC:
    hot_regs.g31 = (0x088B6DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6DD4u) goto L_088B6DD4;
    return;
L_088B6DD4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (g19 << 2u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    g4 = (ctx.gpr[17] + g4);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(44), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 - hot_regs.g5);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g19 = (ctx.lo);
    g19 = (ctx.gpr[21] < g19 ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    goto L_088B6E00;
}
L_088B6E00:
    if (ctx.gpr[19] != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
        goto L_088B6E1C;
    }
    goto L_088B6E08;
L_088B6E08:
    hot_regs.g31 = (0x088B6E10u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6E10u) goto L_088B6E10;
    return;
L_088B6E10:
    hot_regs.g31 = (0x088B6E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B6E18u) goto L_088B6E18;
    return;
L_088B6E18:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    goto L_088B6E1C;
L_088B6E1C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g30 = ctx.gpr[30];
    g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + g30);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + g22);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(16)));
    g6 = (g4 + g4);
    hot_regs.g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(12)));
    g4 = (g4 + g6);
    g4 = (g4 << 2u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (hot_regs.g7 + g4);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(16)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(12)));
    g6 = (0u | 12u);
    g4 = (g4 - g5);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g21 = (g21 + static_cast<std::uint32_t>(1));
    g22 = (g22 + static_cast<std::uint32_t>(20));
    g4 = (ctx.lo);
    g4 = (g21 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g30 = (g30 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[21] = g21;
    ctx.gpr[22] = g22;
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_088B6C00;
      }
      goto L_088B6E78;
    }
}
L_088B6E78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    goto L_088B6E7C;
L_088B6E7C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    g4 = (g4 ^ hot_regs.g5);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B6EA4;
      }
      goto L_088B6E94;
    }
}
L_088B6E94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_088B6EA4;
}
L_088B6EA4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B6ED4:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g8 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g7 = (0u | 12u);
    g6 = (g6 - g8);
    { const std::int32_t dividend = static_cast<std::int32_t>(g6); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g8 = (0u | 0u);
    g9 = (ctx.lo);
    g9 = (g8 < g9 ? 1u : 0u);
    { const bool branch_taken = g9 == 0u;
    // nop
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088B6F28;
      }
      goto L_088B6EFC;
    }
}
L_088B6EFC:
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g6); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g7 = (ctx.lo);
    goto L_088B6F08;
L_088B6F08:
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_088B6F18;
      }
      goto L_088B6F14;
    }
L_088B6F14:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    goto L_088B6F18;
L_088B6F18:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (g8 < hot_regs.g7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088B6F08;
      }
      goto L_088B6F28;
    }
}
L_088B6F28:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6F30:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (578u << 16u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24732));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (g29 | 0u);
    ctx.gpr[9] = (0u | 4u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x088B6F58u);
    g5 = (g5 + static_cast<std::uint32_t>(22563));
    ctx.pc = 0x08B7361Cu;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    return;
}
L_088B6F58:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_088B6F74;
      }
      goto L_088B6F64;
    }
L_088B6F64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g4 = (g4 ^ 1u);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B6F74;
      }
      goto L_088B6F74;
    }
}
L_088B6F74:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    g2 = (hot_regs.g4 ^ 1u);
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B6F88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g16);
    g16 = (g4 | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(8))))));
    g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(8))))));
    g5 = (2235u << 16u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-5));
    g5 = (g5 + static_cast<std::uint32_t>(-27524));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(8))))));
    g5 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x088B7004u);
    g4 = (g16 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_088B6F30;
}
L_088B7004:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(8))))));
    g5 = (hot_regs.g2 & 1u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & hot_regs.g6);
    g5 = (g5 << 1u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B7034:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x088B7048u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_088B5BEC;
}
L_088B7048:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088B7054u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    goto L_088B5BF8;
L_088B7054:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B706C;
      }
      goto L_088B705C;
    }
L_088B705C:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x088B706Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 196u, 0x08888934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B706Cu) goto L_088B706C;
    return;
L_088B706C:
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
L_088B707C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 12u);
    ctx.gpr[22] = (ctx.gpr[22] - hot_regs.g5);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g31);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    hot_regs.g5 = (ctx.lo);
    hot_regs.g31 = (0x088B70DCu);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 96u, 0x08B685A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B70DCu) goto L_088B70DC;
    return;
L_088B70DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    g22 = (g22 - g4);
    { const std::int32_t dividend = static_cast<std::int32_t>(g22); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (0u | 0u);
    g4 = (ctx.lo);
    g4 = (ctx.gpr[18] < g4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_088B7260;
      }
      goto L_088B7100;
    }
}
L_088B7100:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    goto L_088B710C;
L_088B710C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[30] == g4;
    g4 = (ctx.gpr[30] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B7148;
      }
      goto L_088B7118;
    }
}
L_088B7118:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7134;
      }
      goto L_088B7120;
    }
L_088B7120:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g22 = ctx.gpr[22];
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    g22 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    ctx.gpr[30] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    g22 = (g22 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    goto L_088B7134;
}
L_088B7134:
{
    std::uint32_t g30 = ctx.gpr[30];
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g30 = (g30 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), g30);
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_088B7250;
      }
      goto L_088B7148;
    }
}
L_088B7148:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (g30 | 0u);
    g5 = (hot_regs.g4 - g5);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g6 = (g6 >> 30u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    g30 = (g5 + g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    g30 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g30) >> 2u));
    g5 = (g30 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g30);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_088B7184;
      }
      goto L_088B7178;
    }
}
L_088B7178:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    g22 = (ctx.gpr[30] + g22);
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_088B718C;
      }
      goto L_088B7184;
    }
}
L_088B7184:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g22 = (ctx.gpr[30] + g22);
    ctx.gpr[22] = g22;
    goto L_088B718C;
}
L_088B718C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_088B71CC;
      }
      goto L_088B7194;
    }
L_088B7194:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[22] << 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g5);
    hot_regs.g31 = (0x088B71A8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B71A8u) goto L_088B71A8;
    return;
L_088B71A8:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088B71CC;
      }
      goto L_088B71B8;
    }
L_088B71B8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    hot_regs.g31 = (0x088B71C4u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B71C4u) goto L_088B71C4;
    return;
L_088B71C4:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    goto L_088B71CC;
L_088B71CC:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    ctx.gpr[23] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_088B71E0;
      }
      goto L_088B71D8;
    }
L_088B71D8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088B71FC;
      }
      goto L_088B71E0;
    }
L_088B71E0:
    hot_regs.g5 = (hot_regs.g6 | 0u);
    ctx.gpr[30] = (hot_regs.g4 - hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088B71F4u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B71F4u) goto L_088B71F4;
    return;
L_088B71F4:
    hot_regs.g5 = (hot_regs.g2 + ctx.gpr[30]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    goto L_088B71FC;
L_088B71FC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[30] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_088B7214;
      }
      goto L_088B7204;
    }
L_088B7204:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g30 = ctx.gpr[30];
    aot_mem.aot_store32(g30 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g4 != 0u;
    g30 = (g30 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_088B7204;
      }
      goto L_088B7214;
    }
}
L_088B7214:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B7228;
      }
      goto L_088B7220;
    }
L_088B7220:
    hot_regs.g31 = (0x088B7228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B7228u) goto L_088B7228;
    return;
L_088B7228:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (g22 << 2u);
    g22 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    g22 = (g22 - hot_regs.g5);
    { const std::int32_t dividend = static_cast<std::int32_t>(g22); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    g4 = (ctx.gpr[23] + g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(44), g4);
    g4 = (ctx.lo);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    goto L_088B7250;
}
L_088B7250:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (g18 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088B710C;
      }
      goto L_088B7260;
    }
}
L_088B7260:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    g4 = (g4 ^ ctx.gpr[30]);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B7288;
      }
      goto L_088B7278;
    }
}
L_088B7278:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_088B7288;
}
L_088B7288:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_088B72B8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B72FC;
      }
      goto L_088B72C8;
    }
}
L_088B72C8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2235u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-27540));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), g6);
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5896), 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B72E8;
      }
      goto L_088B72DC;
    }
}
L_088B72DC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2235u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), g6);
    hot_regs.g6 = g6;
    goto L_088B72E8;
}
L_088B72E8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B72FC;
      }
      goto L_088B72F4;
    }
}
L_088B72F4:
    hot_regs.g31 = (0x088B72FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B72FCu) goto L_088B72FC;
    return;
L_088B72FC:
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
L_088B7308:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(0))))));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B731C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (17279u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g5);
    f16 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24588)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    g4 = (20224u << 16u);
    { const float fs = f15; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f15 < f14));
    { const float fs = f18; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = f12; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_088B7368;
      }
      goto L_088B735C;
    }
}
}
L_088B735C:
{
    float f15 = hot_regs.f15;
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f15));
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_088B737C;
      }
      goto L_088B7368;
    }
}
L_088B7368:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g6 = hot_regs.g6;
    f15 = f15 - hot_regs.f14;
    g6 = (32768u << 16u);
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f15));
    g6 = (hot_regs.g4 + g6);
    hot_regs.g6 = g6;
    hot_regs.f15 = f15;
    goto L_088B737C;
}
}
L_088B737C:
{
    float f13 = hot_regs.f13;
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = f13 - hot_regs.f14;
    hot_regs.f13 = f13;
        goto L_088B7398;
    }
    goto L_088B738C;
}
L_088B738C:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088B73A8;
      }
      goto L_088B7398;
    }
}
L_088B7398:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (32768u << 16u);
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f13));
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
    goto L_088B73A8;
}
}
L_088B73A8:
{
    float f12 = hot_regs.f12;
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f12 - hot_regs.f14;
    hot_regs.f12 = f12;
        goto L_088B73C4;
    }
    goto L_088B73B8;
}
L_088B73B8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088B73D4;
      }
      goto L_088B73C4;
    }
}
L_088B73C4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (hot_regs.g7 + g4);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088B73D4;
}
}
L_088B73D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 << 16u);
    g5 = (g5 << 8u);
    g4 = (g4 + g5);
    g4 = (g4 + hot_regs.g6);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8544), g4);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B73EC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8488), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8484), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8480), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8472), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8468), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8464), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8504), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8500), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8496), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088B7420u);
    hot_regs.g4 = (g28 + static_cast<std::uint32_t>(8464));
    hot_regs.g29 = g29;
    goto L_088B731C;
}
}
L_088B7420:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7460;
      }
      goto L_088B742C;
    }
L_088B742C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8464)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8468)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8472)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8476)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088B7460;
}
L_088B7460:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B74A0;
      }
      goto L_088B746C;
    }
L_088B746C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8496)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8500)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8504)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8508)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088B74A0;
}
L_088B74A0:
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
L_088B74AC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), hot_regs.g31);
    hot_regs.g31 = (0x088B74E0u);
    hot_regs.g4 = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B74E0u) goto L_088B74E0;
    return;
L_088B74E0:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088B7500;
      }
      goto L_088B74F0;
    }
L_088B74F0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088B74FCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 95u, 0x08944D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B74FCu) goto L_088B74FC;
    return;
L_088B74FC:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_088B7500;
L_088B7500:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628), ctx.gpr[16]);
    hot_regs.g4 = (16000u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x088B755Cu);
    hot_regs.g4 = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B755Cu) goto L_088B755C;
    return;
L_088B755C:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (hot_regs.g2 | 0u);
    { const bool branch_taken = g18 == 0u;
    hot_regs.g4 = (g18 | 0u);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088B7574;
      }
      goto L_088B7568;
    }
}
L_088B7568:
    hot_regs.g31 = (0x088B7570u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 95u, 0x08944D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B7570u) goto L_088B7570;
    return;
L_088B7570:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_088B7574;
L_088B7574:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624), ctx.gpr[16]);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.g7 = (16217u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g7 = (hot_regs.g7 | 39322u);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g7 = (16102u << 16u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g7 = (hot_regs.g7 | 26214u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), hot_regs.g5);
    hot_regs.g5 = (16384u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), hot_regs.g6);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    hot_regs.g31 = (0x088B75DCu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 96u, 0x08944D50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B75DCu) goto L_088B75DC;
    return;
L_088B75DC:
    hot_regs.g31 = (0x088B75E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B75E4u) goto L_088B75E4;
    return;
L_088B75E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    hot_regs.g7 = (17184u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x088B7614u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 645u, 0x08972FD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B7614u) goto L_088B7614;
    return;
L_088B7614:
    hot_regs.g4 = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088B7628;
L_088B7628:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x088B7634u);
    hot_regs.g4 = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B7634u) goto L_088B7634;
    return;
L_088B7634:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (ctx.gpr[16] << 2u);
      if (branch_taken) {
          goto L_088B7654;
      }
      goto L_088B7640;
    }
L_088B7640:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B764Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 95u, 0x08944D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B764Cu) goto L_088B764C;
    return;
L_088B764C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (ctx.gpr[16] << 2u);
    goto L_088B7654;
L_088B7654:
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[17] = (ctx.gpr[28] + hot_regs.g4);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620), ctx.gpr[18]);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(4), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    hot_regs.g31 = (0x088B7694u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 96u, 0x08944D50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B7694u) goto L_088B7694;
    return;
L_088B7694:
    hot_regs.g31 = (0x088B769Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B769Cu) goto L_088B769C;
    return;
L_088B769C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620)));
    hot_regs.g5 = (g16 + static_cast<std::uint32_t>(1));
    g16 = (hot_regs.g5 << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g2);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 16u));
    g4 = (static_cast<std::int32_t>(g16) < 3 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088B7628;
      }
      goto L_088B76BC;
    }
}
L_088B76BC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B76E8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_088B7728:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.set_fpu_condition((f12 < f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), hot_regs.g31);
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15));
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
        goto L_088B7758;
    }
    goto L_088B7758;
}
}
L_088B7758:
{
    float f16 = ctx.fpr[16];
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((f16 < hot_regs.f12));
    // nop
    if (ctx.fpu_condition()) {
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[16] = f16;
        goto L_088B776C;
    }
    goto L_088B776C;
}
L_088B776C:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    g6 = (static_cast<std::int32_t>(g6) < 3 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B778C;
      }
      goto L_088B7784;
    }
}
L_088B7784:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
      if (branch_taken) {
          goto L_088B77C0;
      }
      goto L_088B778C;
    }
L_088B778C:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g6 = (ctx.gpr[28] | 0u);
    goto L_088B7798;
L_088B7798:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8552)));
    g9 = (static_cast<std::int32_t>(g9) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = g9 == 0u;
    // nop
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088B77B0;
      }
      goto L_088B77A8;
    }
}
L_088B77A8:
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8552)));
    hot_regs.g5 = (hot_regs.g7 | 0u);
    goto L_088B77B0;
L_088B77B0:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(g7) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088B7798;
      }
      goto L_088B77C0;
    }
}
L_088B77C0:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    // nop
      if (branch_taken) {
          goto L_088B7880;
      }
      goto L_088B77C8;
    }
L_088B77C8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    ctx.gpr[17] = (ctx.gpr[28] + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), hot_regs.g6);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(8), hot_regs.g6);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(12), hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g31 = (0x088B7854u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B7854u) goto L_088B7854;
    return;
L_088B7854:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24620)));
    g5 = (0u | 1u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8552), ctx.gpr[16]);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g4 = (0u | 3u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 3 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g4 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_088B787C;
    }
    goto L_088B787C;
}
L_088B787C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608), hot_regs.g4);
    goto L_088B7880;
L_088B7880:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B7894:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
    hot_regs.g5 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[28] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B78C4;
      }
      goto L_088B78A8;
    }
}
L_088B78A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-24620)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B78A8;
      }
      goto L_088B78C4;
    }
}
L_088B78C4:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B78CC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g28 = ctx.gpr[28];
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8464)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8468)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8472)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8496)));
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8500)));
    { const float fs = f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f16; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8504)));
    { const float fs = f17; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8512), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8516), std::bit_cast<std::uint32_t>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8520), std::bit_cast<std::uint32_t>(f15));
    g5 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8528), std::bit_cast<std::uint32_t>(f16));
    { const float fs = ctx.fpr[18]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8532), std::bit_cast<std::uint32_t>(f17));
    g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24628)));
    g7 = (std::bit_cast<std::uint32_t>(f15));
    g6 = (g6 + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8536), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8524)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(8), g7);
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(12), g4);
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24624)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8528)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8532)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8536)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    g6 = (std::bit_cast<std::uint32_t>(f14));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8540)));
    g7 = (std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g6);
    g5 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g7);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_088B797C:
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
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8496)));
    g4 = (16153u << 16u);
    g4 = (g4 | 39322u);
    f14 = f13 - f12;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8500)));
    f16 = std::bit_cast<float>(g4);
    g4 = (16076u << 16u);
    f17 = f13 - f15;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8512), std::bit_cast<std::uint32_t>(f16));
    g4 = (g4 | 52429u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8516), std::bit_cast<std::uint32_t>(f16));
    f18 = std::bit_cast<float>(g4);
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8504)));
    { const float fs = f14; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f17; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8520), std::bit_cast<std::uint32_t>(f16));
    f13 = f13 - f19;
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24628)));
    f12 = f12 + f14;
    g4 = (g4 + static_cast<std::uint32_t>(24));
    f15 = f15 + f17;
    { const float fs = f13; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g5 = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8528), std::bit_cast<std::uint32_t>(f12));
    g6 = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8532), std::bit_cast<std::uint32_t>(f15));
    f12 = f19 + f13;
    g7 = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8536), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g6);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8524)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g7);
    g5 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24624)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8528)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8532)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8536)));
    g5 = (std::bit_cast<std::uint32_t>(f14));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    g6 = (std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8540)));
    g7 = (std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g6);
    g5 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g7);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_088B7A4C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24628)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8464)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8468)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8472)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8476)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088B7A94u);
    g4 = (g28 + static_cast<std::uint32_t>(8464));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    goto L_088B731C;
}
L_088B7A94:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24624)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8496)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8500)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8504)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8508)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B7AD8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7AE4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    hot_regs.g5 = (0u | 1u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7AF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24628)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24604)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24600)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24596)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24592)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B7B30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24628)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8464)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8468)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8472)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8476)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088B7B78u);
    g4 = (g28 + static_cast<std::uint32_t>(8464));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    goto L_088B731C;
}
L_088B7B78:
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
L_088B7B84:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24628)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8480)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8484)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8488)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8492)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B7BC0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (2236u << 16u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (6144u << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (6400u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (6656u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (6912u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (21504u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B7C30:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7C68;
      }
      goto L_088B7C38;
    }
L_088B7C38:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    g5 = (17279u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    { const float fs = f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g5 = (20224u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((f14 < hot_regs.f12));
    // nop
    if (ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
        goto L_088B7C70;
    }
    goto L_088B7C60;
}
}
L_088B7C60:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = hot_regs.f14 - hot_regs.f12;
      if (branch_taken) {
          goto L_088B7C78;
      }
      goto L_088B7C68;
    }
L_088B7C68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7D4C;
      }
      goto L_088B7C70;
    }
L_088B7C70:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
      if (branch_taken) {
          goto L_088B7C88;
      }
      goto L_088B7C78;
    }
L_088B7C78:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (32768u << 16u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f14));
    g7 = (hot_regs.g5 + g7);
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
    goto L_088B7C88;
}
}
L_088B7C88:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(28)));
    { const float fs = f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.set_fpu_condition((f14 < hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = f14 - hot_regs.f12;
    hot_regs.f14 = f14;
        goto L_088B7CAC;
    }
    goto L_088B7CA0;
}
L_088B7CA0:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088B7CBC;
      }
      goto L_088B7CAC;
    }
}
L_088B7CAC:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (32768u << 16u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f14));
    g6 = (hot_regs.g5 + g6);
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
    goto L_088B7CBC;
}
}
L_088B7CBC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(24)));
    { const float fs = hot_regs.f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f13 < f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f13 - f12;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_088B7CE0;
    }
    goto L_088B7CD4;
}
L_088B7CD4:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_088B7CF0;
      }
      goto L_088B7CE0;
    }
L_088B7CE0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_088B7CF0;
}
}
L_088B7CF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (g7 | 0u);
    g7 = (g4 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (g7 == 0u) {
    g4 = (0u | 255u);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
        goto L_088B7D00;
    }
    goto L_088B7D00;
}
L_088B7D00:
    hot_regs.g7 = (hot_regs.g6 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (hot_regs.g7 == 0u) {
    hot_regs.g6 = (0u | 255u);
        goto L_088B7D0C;
    }
    goto L_088B7D0C;
L_088B7D0C:
    hot_regs.g7 = (hot_regs.g5 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (hot_regs.g7 == 0u) {
    hot_regs.g5 = (0u | 255u);
        goto L_088B7D18;
    }
    goto L_088B7D18;
L_088B7D18:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (g4 << 16u);
    g6 = (g6 << 8u);
    g4 = (g4 + g6);
    g4 = (g4 + g5);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8564), g4);
    g5 = (23552u << 16u);
    g4 = (g4 | g5);
    g5 = (2236u << 16u);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_088B7D4C;
}
L_088B7D4C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7D54:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B7DD0;
      }
      goto L_088B7D7C;
    }
}
L_088B7D7C:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7DD0;
      }
      goto L_088B7D88;
    }
L_088B7D88:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x088B7D94u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B7D94u) goto L_088B7D94;
    return;
L_088B7D94:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g4 = (17279u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.gpr[19] = (2236u << 16u);
    { const float fs = f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (20224u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29552));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088B7DD8;
      }
      goto L_088B7DC4;
    }
}
}
L_088B7DC4:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088B7DEC;
      }
      goto L_088B7DD0;
    }
}
L_088B7DD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7F30;
      }
      goto L_088B7DD8;
    }
L_088B7DD8:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f13 = f13 - hot_regs.f14;
    g4 = (32768u << 16u);
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f13));
    g4 = (hot_regs.g5 + g4);
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    goto L_088B7DEC;
}
}
L_088B7DEC:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const float fs = f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = f13 - hot_regs.f14;
    hot_regs.f13 = f13;
        goto L_088B7E10;
    }
    goto L_088B7E04;
}
L_088B7E04:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088B7E20;
      }
      goto L_088B7E10;
    }
}
L_088B7E10:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (32768u << 16u);
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f13));
    g5 = (hot_regs.g6 + g5);
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
    goto L_088B7E20;
}
}
L_088B7E20:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const float fs = hot_regs.f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f12 - hot_regs.f14;
    hot_regs.f12 = f12;
        goto L_088B7E44;
    }
    goto L_088B7E38;
}
L_088B7E38:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088B7E54;
      }
      goto L_088B7E44;
    }
}
L_088B7E44:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (hot_regs.g7 + g6);
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_088B7E54;
}
}
L_088B7E54:
    hot_regs.g7 = (hot_regs.g4 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (hot_regs.g7 == 0u) {
    hot_regs.g4 = (0u | 255u);
        goto L_088B7E60;
    }
    goto L_088B7E60;
L_088B7E60:
    hot_regs.g7 = (hot_regs.g5 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (hot_regs.g7 == 0u) {
    hot_regs.g5 = (0u | 255u);
        goto L_088B7E6C;
    }
    goto L_088B7E6C;
L_088B7E6C:
    hot_regs.g7 = (hot_regs.g6 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    if (hot_regs.g7 == 0u) {
    hot_regs.g6 = (0u | 255u);
        goto L_088B7E78;
    }
    goto L_088B7E78;
L_088B7E78:
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g7 = (65280u << 16u);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 << 8u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x088B7E9Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 516u, 0x088DFDD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B7E9Cu) goto L_088B7E9C;
    return;
L_088B7E9C:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    f12 = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((hot_regs.f13 <= f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = f12;
        goto L_088B7ED4;
    }
    goto L_088B7EB8;
}
L_088B7EB8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8576)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8580)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8584)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088B7EF4;
      }
      goto L_088B7ED4;
    }
}
}
L_088B7ED4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_088B7EF4;
}
}
L_088B7EF4:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x088B7F0Cu);
    ctx.gpr[8] = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 506u, 0x088DFB74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B7F0Cu) goto L_088B7F0C;
    return;
L_088B7F0C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (ctx.gpr[17] & 3u);
    g4 = (g4 + static_cast<std::uint32_t>(24));
    g4 = (g4 << 24u);
    hot_regs.g5 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 | 1u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    goto L_088B7F30;
}
L_088B7F30:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B7F50:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(32));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (g4 & 96u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B7FF8;
      }
      goto L_088B7F80;
    }
}
L_088B7F80:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(2)));
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B7FE8;
      }
      goto L_088B7F94;
    }
}
L_088B7F94:
    hot_regs.g31 = (0x088B7F9Cu);
    // nop
    goto L_088B7C30;
L_088B7F9C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    hot_regs.g31 = (0x088B7FA8u);
    hot_regs.g5 = (0u | 0u);
    goto L_088B7D54;
L_088B7FA8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (ctx.gpr[28] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 16u, 0x088B81B8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088B7FBC;
    }
L_088B7FBC:
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24620)));
    hot_regs.g31 = (0x088B7FCCu);
    hot_regs.g5 = (ctx.gpr[17] & 255u);
    goto L_088B7D54;
L_088B7FCC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24608)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B7FBC;
      }
      goto L_088B7FE0;
    }
}
L_088B7FE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 16u, 0x088B81B8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088B7FE8;
    }
L_088B7FE8:
    hot_regs.g31 = (0x088B7FF0u);
    // nop
    goto L_088B7C30;
L_088B7FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 16u, 0x088B81B8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088B7FF8;
    }
L_088B7FF8:
    hot_regs.g4 = (hot_regs.g4 & 28u);
    hot_regs.g5 = (0u | 20u);
    ctx.pc = 0x088B8000u; return;
}

void recomp_unit_0044(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0044_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_44(Runtime &runtime) {
    runtime.register_generated_unit(44u, 0x088B4000u, 16384u, &recomp_unit_0044, &recomp_unit_0044_entry);
    runtime.register_function(0x088B4004u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4018u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4020u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4074u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B407Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B40C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B40E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B40F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B40F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4110u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4118u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B412Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4134u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4188u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4190u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B41D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B41F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4208u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B420Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4224u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4234u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4238u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B426Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B430Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4328u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B433Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4350u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4358u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B437Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4400u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4414u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4448u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4450u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4464u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4470u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B448Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44D0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4510u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4518u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4534u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4550u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4578u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B458Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4590u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4668u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4670u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4704u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4708u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4738u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B47E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B47F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4810u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4830u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B483Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4850u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B485Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B486Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4878u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4890u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4898u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4948u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4958u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4960u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B497Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B49ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4AC8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B48u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B5Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B6Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B70u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B98u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BA0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BD4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BDCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4C28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4C3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4C54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4C7Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4D08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4D14u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4D1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4D30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4D6Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4D94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4DA0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4DB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4DB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4DD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4DE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4DE4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4DF8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4E08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4E0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4E34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4E3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4E40u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4E50u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4E54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4E80u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4E94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4EACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4EBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4EE4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4F60u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4F70u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4F74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4FA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4FBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4FD0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4FE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5018u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5024u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5038u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5040u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B504Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5054u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5064u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B506Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5074u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B507Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5084u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5098u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B50A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B50ACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B50B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B50B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B50E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5120u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B512Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5144u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B514Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5158u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5160u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5170u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5178u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5180u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5188u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5190u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B51A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B51B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B51BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B51D0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B51DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B51FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5204u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5234u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B524Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5260u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5268u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5288u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B52E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B52F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5308u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5310u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5334u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5344u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5368u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5374u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B537Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B538Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B53A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B53A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B53ACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B53C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B53E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B53F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5400u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B540Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5410u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B543Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5448u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5454u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B545Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5464u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B546Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5470u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5488u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5490u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B54A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B54B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B54CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B54E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5518u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5520u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5530u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5538u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5548u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5564u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5598u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B55A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B55B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B55B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B55C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B55E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B55FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5720u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5734u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B574Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B57B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B580Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5814u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5864u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B586Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5930u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5938u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5960u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5968u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5984u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B598Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A64u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A8Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AF0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AF8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B00u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B5Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B64u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B6Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B7Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B84u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B8Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BCCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BF8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C78u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CF4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D14u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D2Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D90u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DC8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DD0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DF4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E04u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E68u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E80u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EA0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5ECCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EDCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EF8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F14u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F40u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F60u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F7Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F80u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F98u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FD4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FE8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FF0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6020u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6084u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6090u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B609Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60D0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6110u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6118u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6128u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6134u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6144u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6154u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6160u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6168u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6174u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6184u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6198u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61ACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6208u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6214u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B621Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6224u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6230u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6238u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B623Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6244u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6248u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6250u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6258u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B62A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B62F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6300u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6308u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B633Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6370u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6378u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6380u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6384u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6390u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B639Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6400u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B640Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6420u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6428u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6438u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6458u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6464u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B646Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B647Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6484u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6490u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6500u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6508u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6524u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6530u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6548u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6550u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6570u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6574u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6600u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6610u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6620u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6634u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6644u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6650u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6658u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B666Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6698u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6710u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B673Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6744u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6750u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B675Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6774u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B677Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6784u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B678Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6794u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6800u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B680Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6818u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6820u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6824u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B682Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6834u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6840u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6860u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B688Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6890u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B68B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B68C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B68D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B68E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B68E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B68ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B68F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6930u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B693Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6944u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6960u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B697Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6984u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B698Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6990u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6998u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B69CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B69D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B69E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B69F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A5Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A64u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A70u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6AA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6AACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6AB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6AC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6AECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B20u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6BA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6BECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C00u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C20u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C70u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C78u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C80u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C84u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CA0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CD0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D00u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D48u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D5Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D68u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D70u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DCCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DD4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E00u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E78u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E7Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6EA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6ED4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6EFCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F14u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F58u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F64u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7004u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7034u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7048u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7054u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B705Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B706Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B707Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B70DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7100u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B710Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7118u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7120u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7134u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7148u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7178u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7184u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B718Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7194u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B71A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B71B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B71C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B71CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B71D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B71E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B71F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B71FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7204u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7214u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7220u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7228u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7250u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7260u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7278u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7288u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B72B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B72C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B72DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B72E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B72F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B72FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7308u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B731Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B735Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7368u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B737Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B738Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7398u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B73A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B73B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B73C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B73D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B73ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7420u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B742Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7460u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B746Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B74A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B74ACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B74E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B74F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B74FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7500u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B755Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7568u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7570u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7574u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B75DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B75E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7614u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7628u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7634u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7640u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B764Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7654u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7694u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B769Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B76BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B76E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7728u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7758u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B776Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7784u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B778Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7798u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B77A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B77B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B77C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B77C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7854u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B787Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7880u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7894u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B797Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7AD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7AE4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7AF4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B78u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B84u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7BC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C60u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C68u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C70u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C78u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CA0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CD4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CF0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D00u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D7Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DD0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E04u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E20u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E60u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E6Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E78u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7EB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7ED4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7EF4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F50u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F80u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FCCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FE8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FF0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FF8u, &recomp_unit_0044, "recomp_unit_0044");
}
} // namespace psprecomp
