#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0121[4090] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0,
    9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18,
    0, 0, 0, 19, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 0, 0, 29, 30, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 72, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 77, 78, 0, 79,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 83, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 88, 89, 90, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 97, 98,
    0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 106, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110,
    0, 0, 111, 0, 0, 112, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0,
    0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0,
    148, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0,
    155, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163, 164, 0, 0, 0, 165, 0, 0, 166, 0, 167,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0,
    174, 0, 0, 0, 175, 0, 0, 176, 0, 177, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183,
    0, 0, 0, 184, 0, 185, 0, 186, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 192,
    0, 193, 0, 0, 0, 194, 0, 195, 0, 196, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0,
    0, 203, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 213,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 223, 0, 0, 224, 225, 0, 0, 0, 226, 0, 0, 227, 0,
    0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0,
    253, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 260, 261, 0, 262, 0, 0,
    0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 266, 0, 0, 0, 267, 0, 268, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 276, 277, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0,
    296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 300, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 303, 304, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311,
    0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 330, 0, 0, 331, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0,
    0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 346, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 367, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0,
    0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 378, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383,
    0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0,
    0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 401, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0,
    406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0,
    0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 426,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0,
    430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0,
    0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442,
    0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0,
    0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0,
    0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458,
    0, 0, 459, 0, 0, 0, 460, 0, 461, 0, 462, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0,
    0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0,
    0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0,
    486, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 489, 490, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 499, 0,
    500, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0,
    504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0,
    0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 513, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0,
    0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524,
    0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532,
    0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0,
    0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 547, 0, 548,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    559, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0,
    0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 588, 0, 589, 0, 0, 0, 590, 591, 0, 0, 0, 592,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 596,
    0, 0, 597, 0, 0, 598, 0, 599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0,
    604, 605, 0, 606, 0, 0, 607, 0, 608, 0, 0, 609, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 613, 0, 0, 614, 615, 0, 616, 0, 617, 0,
    0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0,
    0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0,
    0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 632, 0, 633, 0, 0, 634, 635, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 639, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 644, 645, 0, 646, 0, 0, 647, 0, 0, 648, 0, 649,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651,
};
void recomp_unit_0121_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089E8000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0121[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E8000;
    case 2u: goto L_089E800C;
    case 3u: goto L_089E8018;
    case 4u: goto L_089E8024;
    case 5u: goto L_089E802C;
    case 6u: goto L_089E805C;
    case 7u: goto L_089E806C;
    case 8u: goto L_089E8078;
    case 9u: goto L_089E8080;
    case 10u: goto L_089E8094;
    case 11u: goto L_089E80A4;
    case 12u: goto L_089E80B0;
    case 13u: goto L_089E80B8;
    case 14u: goto L_089E80C4;
    case 15u: goto L_089E80CC;
    case 16u: goto L_089E80E0;
    case 17u: goto L_089E80E8;
    case 18u: goto L_089E80FC;
    case 19u: goto L_089E810C;
    case 20u: goto L_089E8110;
    case 21u: goto L_089E811C;
    case 22u: goto L_089E8124;
    case 23u: goto L_089E8138;
    case 24u: goto L_089E815C;
    case 25u: goto L_089E817C;
    case 26u: goto L_089E81A0;
    case 27u: goto L_089E81AC;
    case 28u: goto L_089E81B4;
    case 29u: goto L_089E81C4;
    case 30u: goto L_089E81C8;
    case 31u: goto L_089E81D4;
    case 32u: goto L_089E81E4;
    case 33u: goto L_089E81EC;
    case 34u: goto L_089E81FC;
    case 35u: goto L_089E8214;
    case 36u: goto L_089E821C;
    case 37u: goto L_089E8230;
    case 38u: goto L_089E823C;
    case 39u: goto L_089E8244;
    case 40u: goto L_089E825C;
    case 41u: goto L_089E82B8;
    case 42u: goto L_089E82C4;
    case 43u: goto L_089E82D0;
    case 44u: goto L_089E8338;
    case 45u: goto L_089E8344;
    case 46u: goto L_089E83AC;
    case 47u: goto L_089E83B8;
    case 48u: goto L_089E83C4;
    case 49u: goto L_089E83D0;
    case 50u: goto L_089E8438;
    case 51u: goto L_089E8454;
    case 52u: goto L_089E8468;
    case 53u: goto L_089E8474;
    case 54u: goto L_089E8494;
    case 55u: goto L_089E84A4;
    case 56u: goto L_089E84B0;
    case 57u: goto L_089E84EC;
    case 58u: goto L_089E8504;
    case 59u: goto L_089E8514;
    case 60u: goto L_089E8520;
    case 61u: goto L_089E8538;
    case 62u: goto L_089E8558;
    case 63u: goto L_089E8568;
    case 64u: goto L_089E8574;
    case 65u: goto L_089E8590;
    case 66u: goto L_089E85A8;
    case 67u: goto L_089E85B8;
    case 68u: goto L_089E85C4;
    case 69u: goto L_089E85DC;
    case 70u: goto L_089E8608;
    case 71u: goto L_089E8624;
    case 72u: goto L_089E8628;
    case 73u: goto L_089E862C;
    case 74u: goto L_089E8634;
    case 75u: goto L_089E8650;
    case 76u: goto L_089E866C;
    case 77u: goto L_089E8670;
    case 78u: goto L_089E8674;
    case 79u: goto L_089E867C;
    case 80u: goto L_089E868C;
    case 81u: goto L_089E86A4;
    case 82u: goto L_089E86C0;
    case 83u: goto L_089E86C4;
    case 84u: goto L_089E86C8;
    case 85u: goto L_089E86D0;
    case 86u: goto L_089E86E0;
    case 87u: goto L_089E86FC;
    case 88u: goto L_089E8718;
    case 89u: goto L_089E871C;
    case 90u: goto L_089E8720;
    case 91u: goto L_089E8728;
    case 92u: goto L_089E8734;
    case 93u: goto L_089E8744;
    case 94u: goto L_089E8754;
    case 95u: goto L_089E8764;
    case 96u: goto L_089E8774;
    case 97u: goto L_089E8778;
    case 98u: goto L_089E877C;
    case 99u: goto L_089E878C;
    case 100u: goto L_089E8798;
    case 101u: goto L_089E87B0;
    case 102u: goto L_089E87BC;
    case 103u: goto L_089E87C4;
    case 104u: goto L_089E884C;
    case 105u: goto L_089E8858;
    case 106u: goto L_089E885C;
    case 107u: goto L_089E8868;
    case 108u: goto L_089E892C;
    case 109u: goto L_089E8938;
    case 110u: goto L_089E89FC;
    case 111u: goto L_089E8A08;
    case 112u: goto L_089E8A14;
    case 113u: goto L_089E8A18;
    case 114u: goto L_089E8A24;
    case 115u: goto L_089E8AE4;
    case 116u: goto L_089E8AF8;
    case 117u: goto L_089E8B1C;
    case 118u: goto L_089E8B28;
    case 119u: goto L_089E8B30;
    case 120u: goto L_089E8B4C;
    case 121u: goto L_089E8B50;
    case 122u: goto L_089E8B68;
    case 123u: goto L_089E8B80;
    case 124u: goto L_089E8BBC;
    case 125u: goto L_089E8BD0;
    case 126u: goto L_089E8BE4;
    case 127u: goto L_089E8BEC;
    case 128u: goto L_089E8BF4;
    case 129u: goto L_089E8C0C;
    case 130u: goto L_089E8C14;
    case 131u: goto L_089E8C20;
    case 132u: goto L_089E8C54;
    case 133u: goto L_089E8C70;
    case 134u: goto L_089E8C7C;
    case 135u: goto L_089E8CA0;
    case 136u: goto L_089E8CB4;
    case 137u: goto L_089E8CBC;
    case 138u: goto L_089E8CC8;
    case 139u: goto L_089E8CDC;
    case 140u: goto L_089E8CF0;
    case 141u: goto L_089E8D0C;
    case 142u: goto L_089E8D30;
    case 143u: goto L_089E8D3C;
    case 144u: goto L_089E8D44;
    case 145u: goto L_089E8D54;
    case 146u: goto L_089E8D60;
    case 147u: goto L_089E8D6C;
    case 148u: goto L_089E8D80;
    case 149u: goto L_089E8D8C;
    case 150u: goto L_089E8D94;
    case 151u: goto L_089E8DA4;
    case 152u: goto L_089E8DC0;
    case 153u: goto L_089E8DF0;
    case 154u: goto L_089E8DF8;
    case 155u: goto L_089E8E00;
    case 156u: goto L_089E8E0C;
    case 157u: goto L_089E8E14;
    case 158u: goto L_089E8E24;
    case 159u: goto L_089E8E2C;
    case 160u: goto L_089E8E34;
    case 161u: goto L_089E8E40;
    case 162u: goto L_089E8E4C;
    case 163u: goto L_089E8E54;
    case 164u: goto L_089E8E58;
    case 165u: goto L_089E8E68;
    case 166u: goto L_089E8E74;
    case 167u: goto L_089E8E7C;
    case 168u: goto L_089E8E8C;
    case 169u: goto L_089E8EAC;
    case 170u: goto L_089E8ECC;
    case 171u: goto L_089E8ED8;
    case 172u: goto L_089E8EE4;
    case 173u: goto L_089E8EF4;
    case 174u: goto L_089E8F00;
    case 175u: goto L_089E8F10;
    case 176u: goto L_089E8F1C;
    case 177u: goto L_089E8F24;
    case 178u: goto L_089E8F28;
    case 179u: goto L_089E8F3C;
    case 180u: goto L_089E8F54;
    case 181u: goto L_089E8F60;
    case 182u: goto L_089E8F74;
    case 183u: goto L_089E8F7C;
    case 184u: goto L_089E8F8C;
    case 185u: goto L_089E8F94;
    case 186u: goto L_089E8F9C;
    case 187u: goto L_089E8FA0;
    case 188u: goto L_089E8FA8;
    case 189u: goto L_089E8FDC;
    case 190u: goto L_089E8FE4;
    case 191u: goto L_089E8FEC;
    case 192u: goto L_089E8FFC;
    case 193u: goto L_089E9004;
    case 194u: goto L_089E9014;
    case 195u: goto L_089E901C;
    case 196u: goto L_089E9024;
    case 197u: goto L_089E9028;
    case 198u: goto L_089E903C;
    case 199u: goto L_089E9048;
    case 200u: goto L_089E905C;
    case 201u: goto L_089E9068;
    case 202u: goto L_089E9078;
    case 203u: goto L_089E9084;
    case 204u: goto L_089E9088;
    case 205u: goto L_089E9098;
    case 206u: goto L_089E90A8;
    case 207u: goto L_089E90B4;
    case 208u: goto L_089E90C0;
    case 209u: goto L_089E90C8;
    case 210u: goto L_089E90D4;
    case 211u: goto L_089E90E8;
    case 212u: goto L_089E90F8;
    case 213u: goto L_089E90FC;
    case 214u: goto L_089E910C;
    case 215u: goto L_089E9130;
    case 216u: goto L_089E9160;
    case 217u: goto L_089E9174;
    case 218u: goto L_089E918C;
    case 219u: goto L_089E9198;
    case 220u: goto L_089E91AC;
    case 221u: goto L_089E91B8;
    case 222u: goto L_089E91C4;
    case 223u: goto L_089E91CC;
    case 224u: goto L_089E91D8;
    case 225u: goto L_089E91DC;
    case 226u: goto L_089E91EC;
    case 227u: goto L_089E91F8;
    case 228u: goto L_089E9208;
    case 229u: goto L_089E9214;
    case 230u: goto L_089E9220;
    case 231u: goto L_089E9228;
    case 232u: goto L_089E9234;
    case 233u: goto L_089E9248;
    case 234u: goto L_089E9254;
    case 235u: goto L_089E9264;
    case 236u: goto L_089E9290;
    case 237u: goto L_089E92B8;
    case 238u: goto L_089E9300;
    case 239u: goto L_089E9348;
    case 240u: goto L_089E9358;
    case 241u: goto L_089E9364;
    case 242u: goto L_089E9374;
    case 243u: goto L_089E9384;
    case 244u: goto L_089E93A8;
    case 245u: goto L_089E93CC;
    case 246u: goto L_089E93F0;
    case 247u: goto L_089E9414;
    case 248u: goto L_089E9438;
    case 249u: goto L_089E9444;
    case 250u: goto L_089E9450;
    case 251u: goto L_089E945C;
    case 252u: goto L_089E9470;
    case 253u: goto L_089E9480;
    case 254u: goto L_089E9494;
    case 255u: goto L_089E94A4;
    case 256u: goto L_089E94B8;
    case 257u: goto L_089E94C8;
    case 258u: goto L_089E94D8;
    case 259u: goto L_089E94E0;
    case 260u: goto L_089E94E8;
    case 261u: goto L_089E94EC;
    case 262u: goto L_089E94F4;
    case 263u: goto L_089E9504;
    case 264u: goto L_089E9510;
    case 265u: goto L_089E9558;
    case 266u: goto L_089E955C;
    case 267u: goto L_089E956C;
    case 268u: goto L_089E9574;
    case 269u: goto L_089E95B0;
    case 270u: goto L_089E95F4;
    case 271u: goto L_089E9618;
    case 272u: goto L_089E9624;
    case 273u: goto L_089E9630;
    case 274u: goto L_089E9640;
    case 275u: goto L_089E9650;
    case 276u: goto L_089E9664;
    case 277u: goto L_089E9668;
    case 278u: goto L_089E9688;
    case 279u: goto L_089E96A4;
    case 280u: goto L_089E96B0;
    case 281u: goto L_089E96B4;
    case 282u: goto L_089E96CC;
    case 283u: goto L_089E96E8;
    case 284u: goto L_089E96F4;
    case 285u: goto L_089E96F8;
    case 286u: goto L_089E9720;
    case 287u: goto L_089E974C;
    case 288u: goto L_089E97E0;
    case 289u: goto L_089E97E8;
    case 290u: goto L_089E9878;
    case 291u: goto L_089E9888;
    case 292u: goto L_089E98A4;
    case 293u: goto L_089E98C0;
    case 294u: goto L_089E98C8;
    case 295u: goto L_089E98EC;
    case 296u: goto L_089E9900;
    case 297u: goto L_089E9908;
    case 298u: goto L_089E9918;
    case 299u: goto L_089E9928;
    case 300u: goto L_089E992C;
    case 301u: goto L_089E9934;
    case 302u: goto L_089E9940;
    case 303u: goto L_089E9958;
    case 304u: goto L_089E995C;
    case 305u: goto L_089E9960;
    case 306u: goto L_089E9994;
    case 307u: goto L_089E999C;
    case 308u: goto L_089E99A4;
    case 309u: goto L_089E99B4;
    case 310u: goto L_089E99C4;
    case 311u: goto L_089E99FC;
    case 312u: goto L_089E9A04;
    case 313u: goto L_089E9A48;
    case 314u: goto L_089E9AA4;
    case 315u: goto L_089E9AAC;
    case 316u: goto L_089E9AB4;
    case 317u: goto L_089E9ABC;
    case 318u: goto L_089E9ACC;
    case 319u: goto L_089E9AD8;
    case 320u: goto L_089E9B04;
    case 321u: goto L_089E9B0C;
    case 322u: goto L_089E9B14;
    case 323u: goto L_089E9B1C;
    case 324u: goto L_089E9B24;
    case 325u: goto L_089E9B30;
    case 326u: goto L_089E9B38;
    case 327u: goto L_089E9B40;
    case 328u: goto L_089E9B58;
    case 329u: goto L_089E9B68;
    case 330u: goto L_089E9B6C;
    case 331u: goto L_089E9B78;
    case 332u: goto L_089E9B94;
    case 333u: goto L_089E9BCC;
    case 334u: goto L_089E9BD8;
    case 335u: goto L_089E9C0C;
    case 336u: goto L_089E9C28;
    case 337u: goto L_089E9C6C;
    case 338u: goto L_089E9C74;
    case 339u: goto L_089E9C88;
    case 340u: goto L_089E9D2C;
    case 341u: goto L_089E9D34;
    case 342u: goto L_089E9D60;
    case 343u: goto L_089E9D6C;
    case 344u: goto L_089E9D9C;
    case 345u: goto L_089E9DAC;
    case 346u: goto L_089E9DB0;
    case 347u: goto L_089E9DC4;
    case 348u: goto L_089E9DCC;
    case 349u: goto L_089E9DE4;
    case 350u: goto L_089E9E00;
    case 351u: goto L_089E9E0C;
    case 352u: goto L_089E9E18;
    case 353u: goto L_089E9E44;
    case 354u: goto L_089E9E4C;
    case 355u: goto L_089E9E7C;
    case 356u: goto L_089E9E88;
    case 357u: goto L_089E9EA8;
    case 358u: goto L_089E9EEC;
    case 359u: goto L_089E9F28;
    case 360u: goto L_089E9F30;
    case 361u: goto L_089E9F60;
    case 362u: goto L_089E9F6C;
    case 363u: goto L_089E9F90;
    case 364u: goto L_089E9FB0;
    case 365u: goto L_089E9FC4;
    case 366u: goto L_089E9FD0;
    case 367u: goto L_089E9FD4;
    case 368u: goto L_089E9FDC;
    case 369u: goto L_089E9FF8;
    case 370u: goto L_089EA010;
    case 371u: goto L_089EA018;
    case 372u: goto L_089EA030;
    case 373u: goto L_089EA038;
    case 374u: goto L_089EA050;
    case 375u: goto L_089EA05C;
    case 376u: goto L_089EA068;
    case 377u: goto L_089EA070;
    case 378u: goto L_089EA090;
    case 379u: goto L_089EA094;
    case 380u: goto L_089EA0A0;
    case 381u: goto L_089EA0CC;
    case 382u: goto L_089EA0DC;
    case 383u: goto L_089EA0FC;
    case 384u: goto L_089EA104;
    case 385u: goto L_089EA120;
    case 386u: goto L_089EA128;
    case 387u: goto L_089EA144;
    case 388u: goto L_089EA14C;
    case 389u: goto L_089EA16C;
    case 390u: goto L_089EA18C;
    case 391u: goto L_089EA1D4;
    case 392u: goto L_089EA1F0;
    case 393u: goto L_089EA1F8;
    case 394u: goto L_089EA218;
    case 395u: goto L_089EA22C;
    case 396u: goto L_089EA234;
    case 397u: goto L_089EA250;
    case 398u: goto L_089EA260;
    case 399u: goto L_089EA268;
    case 400u: goto L_089EA28C;
    case 401u: goto L_089EA29C;
    case 402u: goto L_089EA2A4;
    case 403u: goto L_089EA2B4;
    case 404u: goto L_089EA2D0;
    case 405u: goto L_089EA2E8;
    case 406u: goto L_089EA300;
    case 407u: goto L_089EA30C;
    case 408u: goto L_089EA358;
    case 409u: goto L_089EA36C;
    case 410u: goto L_089EA388;
    case 411u: goto L_089EA3A4;
    case 412u: goto L_089EA3D4;
    case 413u: goto L_089EA40C;
    case 414u: goto L_089EA41C;
    case 415u: goto L_089EA438;
    case 416u: goto L_089EA454;
    case 417u: goto L_089EA484;
    case 418u: goto L_089EA4BC;
    case 419u: goto L_089EA4CC;
    case 420u: goto L_089EA4E8;
    case 421u: goto L_089EA504;
    case 422u: goto L_089EA534;
    case 423u: goto L_089EA54C;
    case 424u: goto L_089EA55C;
    case 425u: goto L_089EA574;
    case 426u: goto L_089EA57C;
    case 427u: goto L_089EA5A4;
    case 428u: goto L_089EA5B0;
    case 429u: goto L_089EA5E4;
    case 430u: goto L_089EA600;
    case 431u: goto L_089EA608;
    case 432u: goto L_089EA638;
    case 433u: goto L_089EA644;
    case 434u: goto L_089EA674;
    case 435u: goto L_089EA684;
    case 436u: goto L_089EA6A0;
    case 437u: goto L_089EA6BC;
    case 438u: goto L_089EA6EC;
    case 439u: goto L_089EA724;
    case 440u: goto L_089EA734;
    case 441u: goto L_089EA760;
    case 442u: goto L_089EA77C;
    case 443u: goto L_089EA784;
    case 444u: goto L_089EA7AC;
    case 445u: goto L_089EA7B8;
    case 446u: goto L_089EA7EC;
    case 447u: goto L_089EA808;
    case 448u: goto L_089EA810;
    case 449u: goto L_089EA838;
    case 450u: goto L_089EA844;
    case 451u: goto L_089EA878;
    case 452u: goto L_089EA894;
    case 453u: goto L_089EA89C;
    case 454u: goto L_089EA8A8;
    case 455u: goto L_089EA8B4;
    case 456u: goto L_089EA8D4;
    case 457u: goto L_089EA8E0;
    case 458u: goto L_089EA8FC;
    case 459u: goto L_089EA908;
    case 460u: goto L_089EA918;
    case 461u: goto L_089EA920;
    case 462u: goto L_089EA928;
    case 463u: goto L_089EA930;
    case 464u: goto L_089EA93C;
    case 465u: goto L_089EA948;
    case 466u: goto L_089EA954;
    case 467u: goto L_089EA960;
    case 468u: goto L_089EA968;
    case 469u: goto L_089EA9C8;
    case 470u: goto L_089EA9D0;
    case 471u: goto L_089EA9F0;
    case 472u: goto L_089EA9F8;
    case 473u: goto L_089EAA18;
    case 474u: goto L_089EAA20;
    case 475u: goto L_089EAA3C;
    case 476u: goto L_089EAA44;
    case 477u: goto L_089EAA4C;
    case 478u: goto L_089EAA94;
    case 479u: goto L_089EAAE4;
    case 480u: goto L_089EAB08;
    case 481u: goto L_089EAB14;
    case 482u: goto L_089EAB28;
    case 483u: goto L_089EAB44;
    case 484u: goto L_089EAB60;
    case 485u: goto L_089EAB70;
    case 486u: goto L_089EAB80;
    case 487u: goto L_089EAB90;
    case 488u: goto L_089EABA0;
    case 489u: goto L_089EABB0;
    case 490u: goto L_089EABB4;
    case 491u: goto L_089EABB8;
    case 492u: goto L_089EABD8;
    case 493u: goto L_089EABE0;
    case 494u: goto L_089EAC1C;
    case 495u: goto L_089EAC28;
    case 496u: goto L_089EAC44;
    case 497u: goto L_089EAC5C;
    case 498u: goto L_089EAC68;
    case 499u: goto L_089EAC78;
    case 500u: goto L_089EAC80;
    case 501u: goto L_089EAC8C;
    case 502u: goto L_089EACA4;
    case 503u: goto L_089EACEC;
    case 504u: goto L_089EAD00;
    case 505u: goto L_089EAD70;
    case 506u: goto L_089EAD78;
    case 507u: goto L_089EAD84;
    case 508u: goto L_089EAD8C;
    case 509u: goto L_089EAD9C;
    case 510u: goto L_089EADA8;
    case 511u: goto L_089EADC0;
    case 512u: goto L_089EADD0;
    case 513u: goto L_089EADD4;
    case 514u: goto L_089EADF0;
    case 515u: goto L_089EADF8;
    case 516u: goto L_089EAE1C;
    case 517u: goto L_089EAE30;
    case 518u: goto L_089EAE44;
    case 519u: goto L_089EAE50;
    case 520u: goto L_089EAE60;
    case 521u: goto L_089EAE68;
    case 522u: goto L_089EAEA0;
    case 523u: goto L_089EAEBC;
    case 524u: goto L_089EAEFC;
    case 525u: goto L_089EAF0C;
    case 526u: goto L_089EAF1C;
    case 527u: goto L_089EAF6C;
    case 528u: goto L_089EAFC0;
    case 529u: goto L_089EAFC8;
    case 530u: goto L_089EB020;
    case 531u: goto L_089EB074;
    case 532u: goto L_089EB07C;
    case 533u: goto L_089EB08C;
    case 534u: goto L_089EB0E0;
    case 535u: goto L_089EB134;
    case 536u: goto L_089EB13C;
    case 537u: goto L_089EB194;
    case 538u: goto L_089EB1E8;
    case 539u: goto L_089EB1F0;
    case 540u: goto L_089EB220;
    case 541u: goto L_089EB238;
    case 542u: goto L_089EB250;
    case 543u: goto L_089EB278;
    case 544u: goto L_089EB288;
    case 545u: goto L_089EB2E0;
    case 546u: goto L_089EB2E8;
    case 547u: goto L_089EB2F4;
    case 548u: goto L_089EB2FC;
    case 549u: goto L_089EB33C;
    case 550u: goto L_089EB344;
    case 551u: goto L_089EB3DC;
    case 552u: goto L_089EB3F0;
    case 553u: goto L_089EB428;
    case 554u: goto L_089EB43C;
    case 555u: goto L_089EB4B0;
    case 556u: goto L_089EB4C0;
    case 557u: goto L_089EB548;
    case 558u: goto L_089EB550;
    case 559u: goto L_089EB580;
    case 560u: goto L_089EB588;
    case 561u: goto L_089EB598;
    case 562u: goto L_089EB5CC;
    case 563u: goto L_089EB5DC;
    case 564u: goto L_089EB5EC;
    case 565u: goto L_089EB624;
    case 566u: goto L_089EB640;
    case 567u: goto L_089EB658;
    case 568u: goto L_089EB6E8;
    case 569u: goto L_089EB6F8;
    case 570u: goto L_089EB720;
    case 571u: goto L_089EB730;
    case 572u: goto L_089EB740;
    case 573u: goto L_089EB79C;
    case 574u: goto L_089EB83C;
    case 575u: goto L_089EB844;
    case 576u: goto L_089EB854;
    case 577u: goto L_089EB894;
    case 578u: goto L_089EB89C;
    case 579u: goto L_089EB8BC;
    case 580u: goto L_089EB8DC;
    case 581u: goto L_089EB958;
    case 582u: goto L_089EB974;
    case 583u: goto L_089EB988;
    case 584u: goto L_089EB9C0;
    case 585u: goto L_089EB9D4;
    case 586u: goto L_089EBA38;
    case 587u: goto L_089EBA48;
    case 588u: goto L_089EBA50;
    case 589u: goto L_089EBA58;
    case 590u: goto L_089EBA68;
    case 591u: goto L_089EBA6C;
    case 592u: goto L_089EBA7C;
    case 593u: goto L_089EBAB0;
    case 594u: goto L_089EBAD8;
    case 595u: goto L_089EBAE8;
    case 596u: goto L_089EBAFC;
    case 597u: goto L_089EBB08;
    case 598u: goto L_089EBB14;
    case 599u: goto L_089EBB1C;
    case 600u: goto L_089EBB28;
    case 601u: goto L_089EBB50;
    case 602u: goto L_089EBB64;
    case 603u: goto L_089EBB70;
    case 604u: goto L_089EBB80;
    case 605u: goto L_089EBB84;
    case 606u: goto L_089EBB8C;
    case 607u: goto L_089EBB98;
    case 608u: goto L_089EBBA0;
    case 609u: goto L_089EBBAC;
    case 610u: goto L_089EBBB4;
    case 611u: goto L_089EBBBC;
    case 612u: goto L_089EBBC4;
    case 613u: goto L_089EBBD8;
    case 614u: goto L_089EBBE4;
    case 615u: goto L_089EBBE8;
    case 616u: goto L_089EBBF0;
    case 617u: goto L_089EBBF8;
    case 618u: goto L_089EBC18;
    case 619u: goto L_089EBC70;
    case 620u: goto L_089EBC78;
    case 621u: goto L_089EBC8C;
    case 622u: goto L_089EBCA4;
    case 623u: goto L_089EBCBC;
    case 624u: goto L_089EBCD0;
    case 625u: goto L_089EBCE0;
    case 626u: goto L_089EBCF0;
    case 627u: goto L_089EBCFC;
    case 628u: goto L_089EBD70;
    case 629u: goto L_089EBD78;
    case 630u: goto L_089EBD88;
    case 631u: goto L_089EBD94;
    case 632u: goto L_089EBE04;
    case 633u: goto L_089EBE0C;
    case 634u: goto L_089EBE18;
    case 635u: goto L_089EBE1C;
    case 636u: goto L_089EBE28;
    case 637u: goto L_089EBE98;
    case 638u: goto L_089EBEA0;
    case 639u: goto L_089EBEA8;
    case 640u: goto L_089EBEB8;
    case 641u: goto L_089EBEC4;
    case 642u: goto L_089EBF38;
    case 643u: goto L_089EBF40;
    case 644u: goto L_089EBF50;
    case 645u: goto L_089EBF54;
    case 646u: goto L_089EBF5C;
    case 647u: goto L_089EBF68;
    case 648u: goto L_089EBF74;
    case 649u: goto L_089EBF7C;
    case 650u: goto L_089EBFB4;
    case 651u: goto L_089EBFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E8000:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9680)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089E802C;
      }
      goto L_089E800C;
    }
L_089E800C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E8024;
      }
      goto L_089E8018;
    }
}
L_089E8018:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9676)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    goto L_089E8024;
}
L_089E8024:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9676), hot_regs.g4);
      if (branch_taken) {
          goto L_089E8138;
      }
      goto L_089E802C;
    }
L_089E802C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9672)));
    g6 = (0u | 1u);
    g5 = (hot_regs.g4 - g5);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g7 = (g7 >> 30u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    g5 = (g5 + g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g6);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g6 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089E806C;
      }
      goto L_089E805C;
    }
}
L_089E805C:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    g18 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    g18 = (hot_regs.g5 + g18);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089E8078;
      }
      goto L_089E806C;
    }
}
L_089E806C:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    g18 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g18 = (hot_regs.g5 + g18);
    ctx.gpr[18] = g18;
    goto L_089E8078;
}
L_089E8078:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_089E80B8;
      }
      goto L_089E8080;
    }
L_089E8080:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g5);
    hot_regs.g31 = (0x089E8094u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8094u) goto L_089E8094;
    return;
L_089E8094:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E80B8;
      }
      goto L_089E80A4;
    }
L_089E80A4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    hot_regs.g31 = (0x089E80B0u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E80B0u) goto L_089E80B0;
    return;
L_089E80B0:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    goto L_089E80B8;
L_089E80B8:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9672)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    ctx.gpr[19] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_089E80CC;
      }
      goto L_089E80C4;
    }
L_089E80C4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E80E8;
      }
      goto L_089E80CC;
    }
L_089E80CC:
    hot_regs.g5 = (hot_regs.g6 | 0u);
    ctx.gpr[20] = (hot_regs.g4 - hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089E80E0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E80E0u) goto L_089E80E0;
    return;
L_089E80E0:
    hot_regs.g5 = (hot_regs.g2 + ctx.gpr[20]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    goto L_089E80E8;
L_089E80E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (g4 | 0u);
    g4 = (g5 | 0u);
    g5 = (hot_regs.g6 | 0u);
    if (g5 == 0u) {
    ctx.gpr[17] = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_089E8110;
    }
    goto L_089E80FC;
}
L_089E80FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g5 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089E80FC;
      }
      goto L_089E810C;
    }
}
L_089E810C:
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    goto L_089E8110;
L_089E8110:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9672)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089E8124;
      }
      goto L_089E811C;
    }
L_089E811C:
    hot_regs.g31 = (0x089E8124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8124u) goto L_089E8124;
    return;
L_089E8124:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9672), ctx.gpr[19]);
    g4 = (ctx.gpr[19] + g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9676), ctx.gpr[17]);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9680), g4);
    hot_regs.g4 = g4;
    goto L_089E8138;
}
L_089E8138:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E815C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089E8244;
      }
      goto L_089E817C;
    }
}
L_089E817C:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(26704));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), hot_regs.g4);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9676)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9672)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089E81A0u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 281u, 0x08B6D670u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E81A0u) goto L_089E81A0;
    return;
L_089E81A0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089E81B4;
      }
      goto L_089E81AC;
    }
L_089E81AC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_089E81EC;
      }
      goto L_089E81B4;
    }
L_089E81B4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 | 0u);
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = g4 == ctx.gpr[18];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E81EC;
      }
      goto L_089E81C4;
    }
}
L_089E81C4:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    goto L_089E81C8;
L_089E81C8:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g6 == hot_regs.g7) {
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
        goto L_089E81E4;
    }
    goto L_089E81D4;
L_089E81D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089E81E4;
}
L_089E81E4:
    if (hot_regs.g4 != ctx.gpr[18]) {
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
        goto L_089E81C8;
    }
    goto L_089E81EC;
L_089E81EC:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9676)));
    g6 = (hot_regs.g4 | 0u);
    { const bool branch_taken = g6 == g6;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089E821C;
      }
      goto L_089E81FC;
    }
}
L_089E81FC:
    hot_regs.g7 = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (hot_regs.g6 - hot_regs.g7);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    hot_regs.g31 = (0x089E8214u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8214u) goto L_089E8214;
    return;
L_089E8214:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (hot_regs.g2 + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089E821C;
      }
      goto L_089E821C;
    }
L_089E821C:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9676), hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089E8230u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 309u, 0x08A9A87Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8230u) goto L_089E8230;
    return;
L_089E8230:
    hot_regs.g4 = (ctx.gpr[17] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8244;
      }
      goto L_089E823C;
    }
L_089E823C:
    hot_regs.g31 = (0x089E8244u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8244u) goto L_089E8244;
    return;
L_089E8244:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E825C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (g5 + static_cast<std::uint32_t>(4));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g7 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g7);
    g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (g6 | 0u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g6 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (g5 | 0u);
    g5 = (g6 << 8u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (g4 | g5);
    g17 = (g17 & 65535u);
    g4 = (g17 & 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089E82C4;
      }
      goto L_089E82B8;
    }
}
L_089E82B8:
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x089E82C4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 80u, 0x08964E08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E82C4u) goto L_089E82C4;
    return;
L_089E82C4:
    hot_regs.g4 = (ctx.gpr[17] & 2u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8338;
      }
      goto L_089E82D0;
    }
L_089E82D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g7);
    g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(1));
    g4 = (g4 | g5);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g5 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 65535u);
    g5 = (g5 << 8u);
    g5 = (g6 | g5);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_089E8338;
}
L_089E8338:
    hot_regs.g4 = (ctx.gpr[17] & 4u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E83AC;
      }
      goto L_089E8344;
    }
L_089E8344:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g7);
    g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(1));
    g4 = (g4 | g5);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g5 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 65535u);
    g5 = (g5 << 8u);
    g5 = (g6 | g5);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_089E83AC;
}
L_089E83AC:
    hot_regs.g4 = (ctx.gpr[17] & 8u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E83C4;
      }
      goto L_089E83B8;
    }
L_089E83B8:
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    hot_regs.g31 = (0x089E83C4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 85u, 0x08964F68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E83C4u) goto L_089E83C4;
    return;
L_089E83C4:
    hot_regs.g4 = (ctx.gpr[17] & 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8438;
      }
      goto L_089E83D0;
    }
L_089E83D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g7 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), g7);
    g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(1));
    g4 = (g4 | g5);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g5 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 65535u);
    g5 = (g5 << 8u);
    g5 = (g6 | g5);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_089E8438;
}
L_089E8438:
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
L_089E8454:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x089E8468u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(32))))));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 338u, 0x08A9AC30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8468u) goto L_089E8468;
    return;
L_089E8468:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E8474:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089E84B0;
      }
      goto L_089E8494;
    }
}
L_089E8494:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089E84A4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E84A4u) goto L_089E84A4;
    return;
L_089E84A4:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089E84B0;
L_089E84B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g5));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E84EC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089E8520;
      }
      goto L_089E8504;
    }
}
L_089E8504:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089E8514u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8514u) goto L_089E8514;
    return;
L_089E8514:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089E8520;
L_089E8520:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    g2 = (g2 + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E8538:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089E8574;
      }
      goto L_089E8558;
    }
}
L_089E8558:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089E8568u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8568u) goto L_089E8568;
    return;
L_089E8568:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089E8574;
L_089E8574:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
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
L_089E8590:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089E85C4;
      }
      goto L_089E85A8;
    }
}
L_089E85A8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089E85B8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E85B8u) goto L_089E85B8;
    return;
L_089E85B8:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089E85C4;
L_089E85C4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E85DC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g7 = hot_regs.g7;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(12)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (g7 | 0u);
    f13 = f13 - f12;
    g7 = (46470u << 16u);
    ctx.gpr[8] = (g7 | 14269u);
    f12 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((f13 <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g7 = (0u | 0u);
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089E8628;
      }
      goto L_089E8608;
    }
}
}
L_089E8608:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (13702u << 16u);
    g8 = (g8 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g8);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089E862C;
      }
      goto L_089E8624;
    }
}
L_089E8624:
    hot_regs.g7 = (0u | 1u);
    goto L_089E8628;
L_089E8628:
    hot_regs.g7 = (hot_regs.g7 & 255u);
    goto L_089E862C;
L_089E862C:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E867C;
      }
      goto L_089E8634;
    }
L_089E8634:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    f13 = f13 - hot_regs.f14;
    ctx.set_fpu_condition((f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g7 = (0u | 0u);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089E8670;
      }
      goto L_089E8650;
    }
}
L_089E8650:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (13702u << 16u);
    g8 = (g8 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g8);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089E8674;
      }
      goto L_089E866C;
    }
}
L_089E866C:
    hot_regs.g7 = (0u | 1u);
    goto L_089E8670;
L_089E8670:
    hot_regs.g7 = (hot_regs.g7 & 255u);
    goto L_089E8674;
L_089E8674:
    if (hot_regs.g7 != 0u) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
        goto L_089E868C;
    }
    goto L_089E867C;
L_089E867C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g7 = (g7 | 1u);
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g7));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    hot_regs.g7 = g7;
    goto L_089E868C;
}
L_089E868C:
{
    float f13 = hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    f13 = f13 - hot_regs.f14;
    ctx.set_fpu_condition((f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g7 = (0u | 0u);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089E86C4;
      }
      goto L_089E86A4;
    }
}
L_089E86A4:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (13702u << 16u);
    g8 = (g8 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g8);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089E86C8;
      }
      goto L_089E86C0;
    }
}
L_089E86C0:
    hot_regs.g7 = (0u | 1u);
    goto L_089E86C4;
L_089E86C4:
    hot_regs.g7 = (hot_regs.g7 & 255u);
    goto L_089E86C8;
L_089E86C8:
    if (hot_regs.g7 != 0u) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_089E86E0;
    }
    goto L_089E86D0;
L_089E86D0:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g7 = (g7 | 2u);
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g7));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    goto L_089E86E0;
}
L_089E86E0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(24)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(24)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089E871C;
      }
      goto L_089E86FC;
    }
}
L_089E86FC:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (13702u << 16u);
    g8 = (g8 | 14269u);
    hot_regs.f13 = std::bit_cast<float>(g8);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089E8720;
      }
      goto L_089E8718;
    }
}
L_089E8718:
    hot_regs.g7 = (0u | 1u);
    goto L_089E871C;
L_089E871C:
    hot_regs.g7 = (hot_regs.g7 & 255u);
    goto L_089E8720;
L_089E8720:
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_089E8734;
      }
      goto L_089E8728;
    }
L_089E8728:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g7 = (g7 | 4u);
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g7));
    hot_regs.g7 = g7;
    goto L_089E8734;
}
L_089E8734:
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    hot_regs.g7 = (0u | 0u);
      if (branch_taken) {
          goto L_089E8778;
      }
      goto L_089E8744;
    }
L_089E8744:
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(9)));
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(9)));
    if (ctx.gpr[8] != ctx.gpr[9]) {
    hot_regs.g7 = (hot_regs.g7 & 255u);
        goto L_089E877C;
    }
    goto L_089E8754;
L_089E8754:
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(10)));
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(10)));
    if (ctx.gpr[8] != ctx.gpr[9]) {
    hot_regs.g7 = (hot_regs.g7 & 255u);
        goto L_089E877C;
    }
    goto L_089E8764;
L_089E8764:
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(11)));
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    hot_regs.g7 = (hot_regs.g7 & 255u);
      if (branch_taken) {
          goto L_089E877C;
      }
      goto L_089E8774;
    }
L_089E8774:
    hot_regs.g7 = (0u | 1u);
    goto L_089E8778;
L_089E8778:
    hot_regs.g7 = (hot_regs.g7 & 255u);
    goto L_089E877C;
L_089E877C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g7 = (g7 & 255u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089E8798;
      }
      goto L_089E878C;
    }
}
L_089E878C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g7 = (g7 | 8u);
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g7));
    hot_regs.g7 = g7;
    goto L_089E8798;
}
L_089E8798:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(28)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089E87BC;
      }
      goto L_089E87B0;
    }
}
L_089E87B0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 | 16u);
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    hot_regs.g5 = g5;
    goto L_089E87BC;
}
L_089E87BC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E87C4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g7);
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g7 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g5 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (hot_regs.g4 & 1u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E885C;
      }
      goto L_089E884C;
    }
L_089E884C:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x089E8858u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 74u, 0x08964A14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8858u) goto L_089E8858;
    return;
L_089E8858:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    goto L_089E885C;
L_089E885C:
    hot_regs.g5 = (hot_regs.g4 & 2u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E892C;
      }
      goto L_089E8868;
    }
L_089E8868:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    goto L_089E892C;
L_089E892C:
    hot_regs.g5 = (hot_regs.g4 & 4u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E89FC;
      }
      goto L_089E8938;
    }
L_089E8938:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    goto L_089E89FC;
L_089E89FC:
    hot_regs.g5 = (hot_regs.g4 & 8u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8A18;
      }
      goto L_089E8A08;
    }
L_089E8A08:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    hot_regs.g31 = (0x089E8A14u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 78u, 0x08964C24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8A14u) goto L_089E8A14;
    return;
L_089E8A14:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    goto L_089E8A18;
L_089E8A18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E8AE4;
      }
      goto L_089E8A24;
    }
}
L_089E8A24:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g5 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (ctx.gpr[17] + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = (ctx.gpr[17] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 8u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089E8AE4;
L_089E8AE4:
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
L_089E8AF8:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9672)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9676)));
    g6 = (hot_regs.g5 ^ hot_regs.g4);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089E8B68;
      }
      goto L_089E8B1C;
    }
}
L_089E8B1C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8B50;
      }
      goto L_089E8B28;
    }
L_089E8B28:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8B50;
      }
      goto L_089E8B30;
    }
L_089E8B30:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(108)));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089E8B4Cu);
    hot_regs.g5 = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8B4Cu) goto L_089E8B4C;
    return;
L_089E8B4C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9676)));
    goto L_089E8B50;
L_089E8B50:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9672)));
    g6 = (hot_regs.g5 ^ hot_regs.g4);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089E8B1C;
      }
      goto L_089E8B68;
    }
}
L_089E8B68:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9676), hot_regs.g5);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E8B80:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g31);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9672)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9676)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    hot_regs.g31 = (0x089E8BBCu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10808));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 306u, 0x08B6D780u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8BBCu) goto L_089E8BBC;
    return;
L_089E8BBC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089E8C20;
      }
      goto L_089E8BD0;
    }
}
L_089E8BD0:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(16))))));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(18))))));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[23] = (ctx.gpr[21] << 3u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089E8BE4;
}
L_089E8BE4:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089E8BF4;
      }
      goto L_089E8BEC;
    }
L_089E8BEC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089E8C0C;
      }
      goto L_089E8BF4;
    }
L_089E8BF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 + ctx.gpr[22]);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + ctx.gpr[23]);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g4 = (g4 + hot_regs.g6);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089E8C0C;
}
L_089E8C0C:
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089E8C14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8C14u) goto L_089E8C14;
    return;
L_089E8C14:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(4));
    if (g16 != ctx.gpr[17]) {
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = g16;
        goto L_089E8BE4;
    }
    goto L_089E8C20;
}
L_089E8C20:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E8C54:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9672), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9676), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9680), 0u);
    hot_regs.g31 = (0x089E8C70u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10792));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8C70u) goto L_089E8C70;
    return;
L_089E8C70:
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
L_089E8C7C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089E8CB4;
      }
      goto L_089E8CA0;
    }
}
L_089E8CA0:
{
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (g17 | 0u);
      if (branch_taken) {
          goto L_089E8CF0;
      }
      goto L_089E8CB4;
    }
}
L_089E8CB4:
    hot_regs.g31 = (0x089E8CBCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8CBCu) goto L_089E8CBC;
    return;
L_089E8CBC:
    ctx.gpr[18] = (hot_regs.g2 + static_cast<std::uint32_t>(1));
    hot_regs.g31 = (0x089E8CC8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8CC8u) goto L_089E8CC8;
    return;
L_089E8CC8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089E8CDCu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8CDCu) goto L_089E8CDC;
    return;
L_089E8CDC:
{
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g2 = (g17 | 0u);
    goto L_089E8CF0;
}
L_089E8CF0:
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
L_089E8D0C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089E8D54;
      }
      goto L_089E8D30;
    }
}
L_089E8D30:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8D44;
      }
      goto L_089E8D3C;
    }
L_089E8D3C:
    hot_regs.g31 = (0x089E8D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8D44u) goto L_089E8D44;
    return;
L_089E8D44:
{
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_089E8DA4;
      }
      goto L_089E8D54;
    }
}
L_089E8D54:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089E8D60u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8D60u) goto L_089E8D60;
    return;
L_089E8D60:
    ctx.gpr[18] = (hot_regs.g2 + static_cast<std::uint32_t>(1));
    hot_regs.g31 = (0x089E8D6Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8D6Cu) goto L_089E8D6C;
    return;
L_089E8D6C:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089E8D80u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8D80u) goto L_089E8D80;
    return;
L_089E8D80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8D94;
      }
      goto L_089E8D8C;
    }
L_089E8D8C:
    hot_regs.g31 = (0x089E8D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8D94u) goto L_089E8D94;
    return;
L_089E8D94:
{
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), hot_regs.g4);
    goto L_089E8DA4;
}
L_089E8DA4:
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
L_089E8DC0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089E8DF8;
      }
      goto L_089E8DF0;
    }
}
L_089E8DF0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g5 = g5;
    goto L_089E8DF8;
}
L_089E8DF8:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8E24;
      }
      goto L_089E8E00;
    }
L_089E8E00:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8E14;
      }
      goto L_089E8E0C;
    }
L_089E8E0C:
    hot_regs.g31 = (0x089E8E14u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8E14u) goto L_089E8E14;
    return;
L_089E8E14:
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_089E8E8C;
      }
      goto L_089E8E24;
    }
}
L_089E8E24:
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089E8E34;
      }
      goto L_089E8E2C;
    }
L_089E8E2C:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = g18;
    goto L_089E8E34;
}
L_089E8E34:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089E8E40u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8E40u) goto L_089E8E40;
    return;
L_089E8E40:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089E8E54;
      }
      goto L_089E8E4C;
    }
L_089E8E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E8E58;
      }
      goto L_089E8E54;
    }
L_089E8E54:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-10776));
    goto L_089E8E58;
L_089E8E58:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089E8E68u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8E68u) goto L_089E8E68;
    return;
L_089E8E68:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8E7C;
      }
      goto L_089E8E74;
    }
L_089E8E74:
    hot_regs.g31 = (0x089E8E7Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8E7Cu) goto L_089E8E7C;
    return;
L_089E8E7C:
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), hot_regs.g4);
    goto L_089E8E8C;
}
L_089E8E8C:
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
L_089E8EAC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089E8F24;
      }
      goto L_089E8ECC;
    }
}
L_089E8ECC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8F24;
      }
      goto L_089E8ED8;
    }
L_089E8ED8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E8EF4;
      }
      goto L_089E8EE4;
    }
}
L_089E8EE4:
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10772));
    hot_regs.g5 = (0u | 267u);
    hot_regs.g31 = (0x089E8EF4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1976));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8EF4u) goto L_089E8EF4;
    return;
L_089E8EF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E8F10;
      }
      goto L_089E8F00;
    }
}
L_089E8F00:
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-10764));
    hot_regs.g5 = (0u | 268u);
    hot_regs.g31 = (0x089E8F10u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1976));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8F10u) goto L_089E8F10;
    return;
L_089E8F10:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089E8F1Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E8F1Cu) goto L_089E8F1C;
    return;
L_089E8F1C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E8F28;
      }
      goto L_089E8F24;
    }
L_089E8F24:
    hot_regs.g2 = (0u | 0u);
    goto L_089E8F28;
L_089E8F28:
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
L_089E8F3C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 << 24u);
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 24u));
    hot_regs.g7 = (0u | 0u);
    if (ctx.gpr[8] != 0u) {
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = g5;
        goto L_089E8F54;
    }
    goto L_089E8F54;
}
L_089E8F54:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (hot_regs.g6 < g7 ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089E8F9C;
      }
      goto L_089E8F60;
    }
}
L_089E8F60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (hot_regs.g7 + g6);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089E8F8C;
      }
      goto L_089E8F74;
    }
}
L_089E8F74:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089E8F94;
      }
      goto L_089E8F7C;
    }
L_089E8F7C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089E8F74;
      }
      goto L_089E8F8C;
    }
}
L_089E8F8C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E8FA0;
      }
      goto L_089E8F94;
    }
L_089E8F94:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g6 - hot_regs.g7);
      if (branch_taken) {
          goto L_089E8FA0;
      }
      goto L_089E8F9C;
    }
L_089E8F9C:
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
    goto L_089E8FA0;
L_089E8FA0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8FA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (g17 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_089E8FDC;
}
L_089E8FDC:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (ctx.gpr[18] < hot_regs.g6 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E8FFC;
      }
      goto L_089E8FE4;
    }
L_089E8FE4:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8FFC;
      }
      goto L_089E8FEC;
    }
L_089E8FEC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E8FDC;
      }
      goto L_089E8FFC;
    }
}
L_089E8FFC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E901C;
      }
      goto L_089E9004;
    }
L_089E9004:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E9024;
      }
      goto L_089E9014;
    }
L_089E9014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9028;
      }
      goto L_089E901C;
    }
L_089E901C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E910C;
      }
      goto L_089E9024;
    }
L_089E9024:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089E9028;
L_089E9028:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (ctx.gpr[18] + g19);
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g5 = (g5 < g19 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089E90D4;
      }
      goto L_089E903C;
    }
}
L_089E903C:
    ctx.gpr[20] = (ctx.gpr[19] + ctx.gpr[19]);
    hot_regs.g31 = (0x089E9048u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9048u) goto L_089E9048;
    return;
L_089E9048:
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E9088;
      }
      goto L_089E905C;
    }
L_089E905C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9088;
      }
      goto L_089E9068;
    }
L_089E9068:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (g4 | 0u);
    g4 = (0u | 0u);
    if (hot_regs.g6 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
        goto L_089E9078;
    }
    goto L_089E9078;
}
L_089E9078:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x089E9084u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9084u) goto L_089E9084;
    return;
L_089E9084:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089E9088;
L_089E9088:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 | 0u);
    g4 = (0u | 0u);
    if (hot_regs.g5 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
        goto L_089E9098;
    }
    goto L_089E9098;
}
L_089E9098:
    hot_regs.g4 = (ctx.gpr[21] + hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089E90A8u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E90A8u) goto L_089E90A8;
    return;
L_089E90A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E90C8;
      }
      goto L_089E90B4;
    }
L_089E90B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E90C8;
      }
      goto L_089E90C0;
    }
L_089E90C0:
    hot_regs.g31 = (0x089E90C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E90C8u) goto L_089E90C8;
    return;
L_089E90C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
      if (branch_taken) {
          goto L_089E90FC;
      }
      goto L_089E90D4;
    }
L_089E90D4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g4 = (0u | 0u);
    if (hot_regs.g5 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
        goto L_089E90E8;
    }
    goto L_089E90E8;
}
L_089E90E8:
    hot_regs.g4 = (ctx.gpr[21] + hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089E90F8u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E90F8u) goto L_089E90F8;
    return;
L_089E90F8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089E90FC;
L_089E90FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), g4);
    g4 = (ctx.gpr[21] + g4);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
    goto L_089E910C;
}
L_089E910C:
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
L_089E9130:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x089E9160u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9160u) goto L_089E9160;
    return;
L_089E9160:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089E9174;
    }
    goto L_089E9174;
L_089E9174:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (g4 < g18 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089E9234;
      }
      goto L_089E918C;
    }
}
L_089E918C:
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[18]);
    hot_regs.g31 = (0x089E9198u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9198u) goto L_089E9198;
    return;
L_089E9198:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E91DC;
      }
      goto L_089E91AC;
    }
L_089E91AC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E91DC;
      }
      goto L_089E91B8;
    }
L_089E91B8:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_089E91CC;
      }
      goto L_089E91C4;
    }
L_089E91C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    goto L_089E91CC;
}
L_089E91CC:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x089E91D8u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E91D8u) goto L_089E91D8;
    return;
L_089E91D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089E91DC;
L_089E91DC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 | 0u);
    g4 = (0u | 0u);
    if (hot_regs.g5 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
        goto L_089E91EC;
    }
    goto L_089E91EC;
}
L_089E91EC:
    ctx.gpr[21] = (ctx.gpr[20] + hot_regs.g4);
    hot_regs.g31 = (0x089E91F8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E91F8u) goto L_089E91F8;
    return;
L_089E91F8:
    hot_regs.g6 = (hot_regs.g2 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089E9208u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9208u) goto L_089E9208;
    return;
L_089E9208:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9228;
      }
      goto L_089E9214;
    }
L_089E9214:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9228;
      }
      goto L_089E9220;
    }
L_089E9220:
    hot_regs.g31 = (0x089E9228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9228u) goto L_089E9228;
    return;
L_089E9228:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089E9264;
      }
      goto L_089E9234;
    }
L_089E9234:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (0u | 0u);
    if (hot_regs.g6 != 0u) {
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = g5;
        goto L_089E9248;
    }
    goto L_089E9248;
}
L_089E9248:
    ctx.gpr[19] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g31 = (0x089E9254u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9254u) goto L_089E9254;
    return;
L_089E9254:
    hot_regs.g6 = (hot_regs.g2 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089E9264u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9264u) goto L_089E9264;
    return;
L_089E9264:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), hot_regs.g4);
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
L_089E9290:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E92B8:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    g5 = (2236u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    hot_regs.g4 = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    g5 = (g5 + static_cast<std::uint32_t>(-17072));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g6 = (g5 | 0u);
    f13 = std::bit_cast<float>(0u);
    g8 = (0u | 0u);
    g5 = (g5 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g5 = (g8 + g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g8 = (16256u << 16u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(g8);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    hot_regs.g29 = g29;
    hot_regs.f13 = f13;
    goto L_089E9300;
}
}
L_089E9300:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), 0u);
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(hot_regs.g4));
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g6 = (g6 + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (static_cast<std::int32_t>(g7) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(80));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089E9300;
      }
      goto L_089E9348;
    }
}
}
L_089E9348:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x089E9358u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 497u, 0x08A05F1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9358u) goto L_089E9358;
    return;
L_089E9358:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-10744), hot_regs.g2);
      if (branch_taken) {
          goto L_089E9374;
      }
      goto L_089E9364;
    }
L_089E9364:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089E9374u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 501u, 0x08A05F5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9374u) goto L_089E9374;
    return;
L_089E9374:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E9384:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 & 255u);
    g5 = (g4 << 6u);
    g4 = (g4 << 4u);
    g4 = (g5 + g4);
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-17072));
    g4 = (g4 + g5);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(53)));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E93A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 & 255u);
    g5 = (g4 << 6u);
    g4 = (g4 << 4u);
    g4 = (g5 + g4);
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-17072));
    g4 = (g4 + g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E93CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 & 255u);
    g5 = (g4 << 6u);
    g4 = (g4 << 4u);
    g4 = (g5 + g4);
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-17072));
    g4 = (g4 + g5);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(55)));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E93F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 & 255u);
    g5 = (g4 << 6u);
    g4 = (g4 << 4u);
    g4 = (g5 + g4);
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-17072));
    g4 = (g4 + g5);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E9414:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 255u);
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 4u);
    g2 = (hot_regs.g5 + g4);
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-17072));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    jump_target = hot_regs.g31;
    g2 = (g2 + g4);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E9438:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-17072));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = g5;
    goto L_089E9444;
}
L_089E9444:
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E94C8;
      }
      goto L_089E9450;
    }
L_089E9450:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g7 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089E94C8;
      }
      goto L_089E945C;
    }
L_089E945C:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[18] < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E94C8;
      }
      goto L_089E9470;
    }
L_089E9470:
    ctx.set_fpu_condition((ctx.fpr[18] <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E94C8;
      }
      goto L_089E9480;
    }
L_089E9480:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[18] < hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E94C8;
      }
      goto L_089E9494;
    }
L_089E9494:
    ctx.set_fpu_condition((ctx.fpr[18] <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E94C8;
      }
      goto L_089E94A4;
    }
L_089E94A4:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E94C8;
      }
      goto L_089E94B8;
    }
L_089E94B8:
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E94E0;
      }
      goto L_089E94C8;
    }
L_089E94C8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 48 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(80));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089E9444;
      }
      goto L_089E94D8;
    }
}
L_089E94D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E94E8;
      }
      goto L_089E94E0;
    }
L_089E94E0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089E94EC;
      }
      goto L_089E94E8;
    }
L_089E94E8:
    hot_regs.g2 = (0u | 0u);
    goto L_089E94EC;
L_089E94EC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E94F4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2236u << 16u);
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g6 = (0u | 0u);
    g5 = (g5 + static_cast<std::uint32_t>(-17072));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_089E9504;
}
}
L_089E9504:
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E955C;
      }
      goto L_089E9510;
    }
L_089E9510:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(16)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    f13 = f13 - f14;
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    f15 = f15 - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(24)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f17 = f17 - ctx.fpr[18];
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f17; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f13 = f13 + f14;
    f13 = f13 + f17;
    ctx.set_fpu_condition((f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_089E955C;
      }
      goto L_089E9558;
    }
}
}
L_089E9558:
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    goto L_089E955C;
L_089E955C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 48 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(80));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089E9504;
      }
      goto L_089E956C;
    }
}
L_089E956C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9574:
    hot_regs.g6 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g6 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g6 = (rt.memory().aot_load_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E95B0:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), hot_regs.g6);
    g17 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (g17 + static_cast<std::uint32_t>(3));
    g18 = (g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089E95F4u);
    hot_regs.g5 = (g18 | 0u);
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    goto L_089E9574;
}
L_089E95F4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (2237u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089E9618u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9618u) goto L_089E9618;
    return;
L_089E9618:
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E9668;
      }
      goto L_089E9624;
    }
L_089E9624:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_089E9650;
    }
    goto L_089E9630;
}
L_089E9630:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x089E9640u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9640u) goto L_089E9640;
    return;
L_089E9640:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(g21 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_089E9650;
}
L_089E9650:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(102)));
    g4 = (g4 & 1u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E9668;
      }
      goto L_089E9664;
    }
}
L_089E9664:
    ctx.gpr[19] = (0u | 1u);
    goto L_089E9668;
L_089E9668:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    hot_regs.g4 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(21), hot_regs.g4));
    hot_regs.g4 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(24), hot_regs.g4));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089E96B4;
      }
      goto L_089E9688;
    }
L_089E9688:
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(21), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(24), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 << 16u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 16u));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089E96A4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E96A4u) goto L_089E96A4;
    return;
L_089E96A4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E96B4;
      }
      goto L_089E96B0;
    }
L_089E96B0:
    ctx.gpr[21] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(112)));
    goto L_089E96B4;
L_089E96B4:
    hot_regs.g4 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(23), hot_regs.g4));
    hot_regs.g4 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(26), hot_regs.g4));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089E96F8;
      }
      goto L_089E96CC;
    }
L_089E96CC:
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(23), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(26), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 << 16u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 16u));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089E96E8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E96E8u) goto L_089E96E8;
    return;
L_089E96E8:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E96F8;
      }
      goto L_089E96F4;
    }
L_089E96F4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_089E96F8;
L_089E96F8:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(19)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(15), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(18), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x089E9720u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    goto L_089E974C;
L_089E9720:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E974C:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-720));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(652), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(668), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(672), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(676), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(680), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(684), g20);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(688), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(692), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(696), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(700), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(704), hot_regs.g31);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    ctx.gpr[30] = (g9 & 255u);
    hot_regs.g4 = (g10 & 255u);
    g9 = (ctx.gpr[11] & 255u);
    g10 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(633), static_cast<std::uint8_t>(g9));
    g9 = (16544u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g9);
    g9 = (16640u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g9);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    g9 = (16672u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g9);
    g20 = (2236u << 16u);
    g20 = (g20 + static_cast<std::uint32_t>(-17072));
    ctx.gpr[22] = (hot_regs.g5 | 0u);
    ctx.gpr[23] = (hot_regs.g6 | 0u);
    ctx.gpr[21] = (hot_regs.g7 | 0u);
    { const bool branch_taken = g10 == 0u;
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089E99C4;
      }
      goto L_089E97E0;
    }
}
L_089E97E0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E99C4;
      }
      goto L_089E97E8;
    }
L_089E97E8:
    hot_regs.g4 = (0u | 25u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9684)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(51));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[23]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    rt.memory().aot_store_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7);
    rt.memory().aot_store_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    rt.memory().aot_store_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    rt.memory().aot_store_word_left(hot_regs.g6 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g29 + static_cast<std::uint32_t>(63), ctx.gpr[18]);
    rt.memory().aot_store_word_left(hot_regs.g29 + static_cast<std::uint32_t>(66), ctx.gpr[18]);
    hot_regs.g4 = (0u < ctx.gpr[30] ? 1u : 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E99B4;
      }
      goto L_089E9878;
    }
L_089E9878:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    g4 = (static_cast<std::int32_t>(g4) < 300 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E99B4;
      }
      goto L_089E9888;
    }
}
L_089E9888:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E98EC;
      }
      goto L_089E98A4;
    }
}
L_089E98A4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089E98C0u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E98C0u) goto L_089E98C0;
    return;
L_089E98C0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089E99B4;
      }
      goto L_089E98C8;
    }
L_089E98C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(352)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3))))));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(g4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 8u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[1]));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E99B4;
      }
      goto L_089E98EC;
    }
}
L_089E98EC:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    g6 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089E9934;
      }
      goto L_089E9900;
    }
}
L_089E9900:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(604), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    goto L_089E9908;
L_089E9908:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 < hot_regs.g4 ? 1u : 0u);
    g7 = (g7 & 255u);
    if (g7 != 0u) {
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(12));
    hot_regs.g7 = g7;
        goto L_089E9928;
    }
    goto L_089E9918;
}
L_089E9918:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (g6 | 0u);
    g6 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089E992C;
      }
      goto L_089E9928;
    }
}
L_089E9928:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    goto L_089E992C;
L_089E992C:
    if (hot_regs.g6 != 0u) {
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
        goto L_089E9908;
    }
    goto L_089E9934;
L_089E9934:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    if (hot_regs.g5 == hot_regs.g6) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
        goto L_089E995C;
    }
    goto L_089E9940;
L_089E9940:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(605), static_cast<std::uint8_t>(0u));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    g4 = (g4 < hot_regs.g6 ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(600), hot_regs.g5);
    hot_regs.g4 = g4;
        goto L_089E9960;
    }
    goto L_089E9958;
}
L_089E9958:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    goto L_089E995C;
L_089E995C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(600), hot_regs.g5);
    goto L_089E9960;
L_089E9960:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(596), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(616), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(616)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(592), g4);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(596)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(592)));
    g4 = (g5 ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_089E999C;
    }
    goto L_089E9994;
}
L_089E9994:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_089E999C;
      }
      goto L_089E999C;
    }
L_089E999C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E99B4;
      }
      goto L_089E99A4;
    }
L_089E99A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(g4));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 8u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[1]));
    hot_regs.g4 = g4;
    goto L_089E99B4;
}
L_089E99B4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089E99C4u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E99C4u) goto L_089E99C4;
    return;
L_089E99C4:
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(632), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (0u | 160u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g5 = (0u | 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g31 = (0x089E99FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E99FCu) goto L_089E99FC;
    return;
L_089E99FC:
    { const bool branch_taken = ctx.gpr[22] != hot_regs.g2;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089E9A48;
      }
      goto L_089E9A04;
    }
L_089E9A04:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    g5 = (g4 << 8u);
    hot_regs.g6 = (g4 + g4);
    g4 = (g4 + hot_regs.g6);
    g4 = (g4 << 5u);
    g4 = (g5 + g4);
    g5 = (2238u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-6992));
    g4 = (g4 + g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(316)));
    g5 = (g5 + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(316), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(320)));
    g5 = (16608u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_089E9A48;
}
}
L_089E9A48:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[30];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5060)));
    hot_regs.g4 = (49408u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (18154u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 24576u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 1u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g7 = (0u | 200u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x089E9AA4u);
    ctx.gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9AA4u) goto L_089E9AA4;
    return;
L_089E9AA4:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    goto L_089E9AAC;
L_089E9AAC:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 48 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E9ACC;
      }
      goto L_089E9AB4;
    }
L_089E9AB4:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9ACC;
      }
      goto L_089E9ABC;
    }
L_089E9ABC:
{
    std::uint32_t g20 = ctx.gpr[20];
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    g20 = (g20 + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load8(g20 + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089E9AAC;
      }
      goto L_089E9ACC;
    }
}
L_089E9ACC:
    hot_regs.g5 = (0u | 48u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089E9B0C;
      }
      goto L_089E9AD8;
    }
L_089E9AD8:
{
    std::uint32_t g20 = ctx.gpr[20];
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (g20 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E9B14;
      }
      goto L_089E9B04;
    }
}
L_089E9B04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9B24;
      }
      goto L_089E9B0C;
    }
L_089E9B0C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089EAA4C;
      }
      goto L_089E9B14;
    }
L_089E9B14:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    hot_regs.g5 = (ctx.gpr[20] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089E9B24;
      }
      goto L_089E9B1C;
    }
L_089E9B1C:
    hot_regs.g31 = (0x089E9B24u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9B24u) goto L_089E9B24;
    return;
L_089E9B24:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9B40;
      }
      goto L_089E9B30;
    }
L_089E9B30:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    hot_regs.g5 = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089E9B40;
      }
      goto L_089E9B38;
    }
L_089E9B38:
    hot_regs.g31 = (0x089E9B40u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9B40u) goto L_089E9B40;
    return;
L_089E9B40:
{
    std::uint32_t g20 = ctx.gpr[20];
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[30]));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9B68;
      }
      goto L_089E9B58;
    }
}
L_089E9B58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (ctx.gpr[18] + g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E9B6C;
      }
      goto L_089E9B68;
    }
}
L_089E9B68:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), 0u);
    goto L_089E9B6C;
L_089E9B6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[23] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (16128u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EA89C;
      }
      goto L_089E9B78;
    }
}
L_089E9B78:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (g23 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g23);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-1896)));
    g23 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g23) >> 2u));
    jump_target = g1;
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    ctx.gpr[23] = g23;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089E9B94:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (16656u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    g4 = (17302u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (ctx.gpr[18] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(750));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g16 = (2236u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    g16 = (g16 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089E9BD8;
      }
      goto L_089E9BCC;
    }
}
}
L_089E9BCC:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_089E9BD8;
L_089E9BD8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (16448u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.g31 = (0x089E9C0Cu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9C0Cu) goto L_089E9C0C;
    return;
L_089E9C0C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 13u);
    hot_regs.g31 = (0x089E9C28u);
    hot_regs.g6 = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 981u, 0x0897FF40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9C28u) goto L_089E9C28;
    return;
L_089E9C28:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16928u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E9D2C;
      }
      goto L_089E9C6C;
    }
L_089E9C6C:
    hot_regs.g31 = (0x089E9C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9C74u) goto L_089E9C74;
    return;
L_089E9C74:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10724)));
    hot_regs.g31 = (0x089E9C88u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10728)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9C88u) goto L_089E9C88;
    return;
L_089E9C88:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10716)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10720)));
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g6);
    ctx.gpr[9] = (ctx.gpr[8] < hot_regs.g6 ? 1u : 0u);
    hot_regs.g4 = (ctx.gpr[9] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    hot_regs.g5 = (0u | 96u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g6 = (0u | 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(145)));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(146)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g4 = (16528u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (0u | 43u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089E9D2Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9D2Cu) goto L_089E9D2C;
    return;
L_089E9D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA8A8;
      }
      goto L_089E9D34;
    }
L_089E9D34:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16576u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (ctx.gpr[18] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(3000));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089E9D6C;
      }
      goto L_089E9D60;
    }
}
}
L_089E9D60:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_089E9D6C;
L_089E9D6C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.g31 = (0x089E9D9Cu);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9D9Cu) goto L_089E9D9C;
    return;
L_089E9D9C:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9DB0;
      }
      goto L_089E9DAC;
    }
L_089E9DAC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_089E9DB0;
L_089E9DB0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g31 = (0x089E9DC4u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 138u, 0x08AF8918u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9DC4u) goto L_089E9DC4;
    return;
L_089E9DC4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9E0C;
      }
      goto L_089E9DCC;
    }
L_089E9DCC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E9E0C;
      }
      goto L_089E9DE4;
    }
L_089E9DE4:
{
    float f13 = hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    f13 = f13 - hot_regs.f22;
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089E9E0C;
      }
      goto L_089E9E00;
    }
}
L_089E9E00:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(632), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089E9E44;
      }
      goto L_089E9E0C;
    }
L_089E9E0C:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9E44;
      }
      goto L_089E9E18;
    }
L_089E9E18:
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(14864));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (16179u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 13107u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x089E9E44u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 710u, 0x089CFED4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9E44u) goto L_089E9E44;
    return;
L_089E9E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA8A8;
      }
      goto L_089E9E4C;
    }
L_089E9E4C:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f24));
    g4 = (17302u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (ctx.gpr[18] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(750));
    f24 = std::bit_cast<float>(g4);
    f24 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f24)));
    g16 = (2236u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    g16 = (g16 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_089E9E88;
      }
      goto L_089E9E7C;
    }
}
}
L_089E9E7C:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[24] = ctx.fpr[24] + hot_regs.f12;
    goto L_089E9E88;
L_089E9E88:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 13u);
    hot_regs.g31 = (0x089E9EA8u);
    hot_regs.g6 = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 981u, 0x0897FF40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9EA8u) goto L_089E9EA8;
    return;
L_089E9EA8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17224u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E9F28;
      }
      goto L_089E9EEC;
    }
L_089E9EEC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g4 = (16560u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(28));
    hot_regs.g4 = (0u | 43u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089E9F28u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089E9F28u) goto L_089E9F28;
    return;
L_089E9F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA8A8;
      }
      goto L_089E9F30;
    }
L_089E9F30:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16656u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    g4 = (17302u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (ctx.gpr[18] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(4250));
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089E9F6C;
      }
      goto L_089E9F60;
    }
}
}
L_089E9F60:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_089E9F6C;
L_089E9F6C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EA038;
      }
      goto L_089E9F90;
    }
}
}
L_089E9F90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    hot_regs.g5 = (0u | 2u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E9FD4;
      }
      goto L_089E9FB0;
    }
}
L_089E9FB0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(852)));
    hot_regs.g7 = (0u | 1u);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_089E9FD0;
      }
      goto L_089E9FC4;
    }
L_089E9FC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089E9FD4;
      }
      goto L_089E9FD0;
    }
}
L_089E9FD0:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_089E9FD4;
L_089E9FD4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA018;
      }
      goto L_089E9FDC;
    }
L_089E9FDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EA018;
      }
      goto L_089E9FF8;
    }
}
L_089E9FF8:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = (0u | 13u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x089EA010u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA010u) goto L_089EA010;
    return;
L_089EA010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA050;
      }
      goto L_089EA018;
    }
L_089EA018:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = (0u | 13u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089EA030u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA030u) goto L_089EA030;
    return;
L_089EA030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA050;
      }
      goto L_089EA038;
    }
L_089EA038:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 13u);
    hot_regs.g31 = (0x089EA050u);
    hot_regs.g6 = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 981u, 0x0897FF40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA050u) goto L_089EA050;
    return;
L_089EA050:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA29C;
      }
      goto L_089EA05C;
    }
L_089EA05C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EA29C;
      }
      goto L_089EA068;
    }
L_089EA068:
    hot_regs.g31 = (0x089EA070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA070u) goto L_089EA070;
    return;
L_089EA070:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 1u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EA0A0;
      }
      goto L_089EA090;
    }
}
L_089EA090:
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    goto L_089EA094;
L_089EA094:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EA094;
      }
      goto L_089EA0A0;
    }
}
L_089EA0A0:
{
    float f28 = ctx.fpr[28];
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(f28));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(f28));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(f28));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(f28));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(f28));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(f28));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EA218;
      }
      goto L_089EA0CC;
    }
}
}
L_089EA0CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EA104;
      }
      goto L_089EA0DC;
    }
L_089EA0DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(248));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 3u);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089EA0FCu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA0FCu) goto L_089EA0FC;
    return;
L_089EA0FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA218;
      }
      goto L_089EA104;
    }
L_089EA104:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(256));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089EA120u);
    hot_regs.g5 = (0u | 13u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA120u) goto L_089EA120;
    return;
L_089EA120:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA1D4;
      }
      goto L_089EA128;
    }
L_089EA128:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(256));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089EA144u);
    hot_regs.g5 = (0u | 7u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA144u) goto L_089EA144;
    return;
L_089EA144:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA1D4;
      }
      goto L_089EA14C;
    }
L_089EA14C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(248));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (0u | 13u);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089EA16Cu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA16Cu) goto L_089EA16C;
    return;
L_089EA16C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(248));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 7u);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089EA18Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA18Cu) goto L_089EA18C;
    return;
L_089EA18C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA218;
      }
      goto L_089EA1D4;
    }
L_089EA1D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(256));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089EA1F0u);
    hot_regs.g5 = (0u | 19u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA1F0u) goto L_089EA1F0;
    return;
L_089EA1F0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA218;
      }
      goto L_089EA1F8;
    }
L_089EA1F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(248));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 19u);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089EA218u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA218u) goto L_089EA218;
    return;
L_089EA218:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(ctx.fpr[28])) && f12 == ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EA29C;
      }
      goto L_089EA22C;
    }
}
L_089EA22C:
    hot_regs.g31 = (0x089EA234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA234u) goto L_089EA234;
    return;
L_089EA234:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (hot_regs.g2 & 65535u);
    g17 = (g4 & 2u);
    g17 = (g17 + static_cast<std::uint32_t>(2));
    ctx.gpr[16] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g17) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (16480u << 16u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089EA29C;
      }
      goto L_089EA250;
    }
}
L_089EA250:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f22 = std::bit_cast<float>(g4);
    g4 = (16025u << 16u);
    g4 = (g4 | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_089EA260;
}
L_089EA260:
    hot_regs.g31 = (0x089EA268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA268u) goto L_089EA268;
    return;
L_089EA268:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 7u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f22;
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089EA28Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 733u, 0x088FF204u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA28Cu) goto L_089EA28C;
    return;
L_089EA28C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089EA260;
      }
      goto L_089EA29C;
    }
}
L_089EA29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA8A8;
      }
      goto L_089EA2A4;
    }
L_089EA2A4:
    hot_regs.g4 = (0u | 7u);
    hot_regs.g5 = (16448u << 16u);
    { const bool branch_taken = ctx.gpr[23] != hot_regs.g4;
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g5);
      if (branch_taken) {
          goto L_089EA2D0;
      }
      goto L_089EA2B4;
    }
L_089EA2B4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16704u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    g4 = (17402u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EA2E8;
      }
      goto L_089EA2D0;
    }
}
}
L_089EA2D0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16576u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    g4 = (17302u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089EA2E8;
}
}
L_089EA2E8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (ctx.gpr[18] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(750));
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EA30C;
      }
      goto L_089EA300;
    }
}
}
L_089EA300:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_089EA30C;
L_089EA30C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(352));
    g4 = (15692u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(336));
    g4 = (16416u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(28));
    g4 = (16307u << 16u);
    g4 = (g4 | 13107u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089EA358;
}
}
L_089EA358:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x089EA36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA36Cu) goto L_089EA36C;
    return;
L_089EA36C:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x089EA388u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA388u) goto L_089EA388;
    return;
L_089EA388:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g31 = (0x089EA3A4u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA3A4u) goto L_089EA3A4;
    return;
L_089EA3A4:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089EA3D4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA3D4u) goto L_089EA3D4;
    return;
L_089EA3D4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (0u | 42u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089EA40Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA40Cu) goto L_089EA40C;
    return;
L_089EA40C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x089EA41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA41Cu) goto L_089EA41C;
    return;
L_089EA41C:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x089EA438u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA438u) goto L_089EA438;
    return;
L_089EA438:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g31 = (0x089EA454u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA454u) goto L_089EA454;
    return;
L_089EA454:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089EA484u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA484u) goto L_089EA484;
    return;
L_089EA484:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (0u | 43u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089EA4BCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA4BCu) goto L_089EA4BC;
    return;
L_089EA4BC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x089EA4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA4CCu) goto L_089EA4CC;
    return;
L_089EA4CC:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x089EA4E8u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA4E8u) goto L_089EA4E8;
    return;
L_089EA4E8:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g31 = (0x089EA504u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA504u) goto L_089EA504;
    return;
L_089EA504:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089EA534u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA534u) goto L_089EA534;
    return;
L_089EA534:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(640)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(636)));
    hot_regs.g31 = (0x089EA54Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 733u, 0x088FF204u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA54Cu) goto L_089EA54C;
    return;
L_089EA54C:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 10 ? 1u : 0u);
    if (hot_regs.g4 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[18] = g18;
        goto L_089EA358;
    }
    goto L_089EA55C;
}
L_089EA55C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 13u);
    hot_regs.g31 = (0x089EA574u);
    hot_regs.g6 = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 981u, 0x0897FF40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA574u) goto L_089EA574;
    return;
L_089EA574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA8A8;
      }
      goto L_089EA57C;
    }
L_089EA57C:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f24));
    g4 = (17174u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (ctx.gpr[18] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(750));
    f24 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f24 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f24)));
    hot_regs.g4 = g4;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_089EA5B0;
      }
      goto L_089EA5A4;
    }
}
}
L_089EA5A4:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[24] = ctx.fpr[24] + hot_regs.f12;
    goto L_089EA5B0;
L_089EA5B0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(384)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(388)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(392)));
    hot_regs.g4 = (16512u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.g31 = (0x089EA5E4u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA5E4u) goto L_089EA5E4;
    return;
L_089EA5E4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 13u);
    hot_regs.g31 = (0x089EA600u);
    hot_regs.g6 = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 981u, 0x0897FF40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA600u) goto L_089EA600;
    return;
L_089EA600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA8A8;
      }
      goto L_089EA608;
    }
L_089EA608:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16608u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    g4 = (17174u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (ctx.gpr[18] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(750));
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EA644;
      }
      goto L_089EA638;
    }
}
}
L_089EA638:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_089EA644;
L_089EA644:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(448));
    g4 = (15523u << 16u);
    g4 = (g4 | 55050u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g4 = (15651u << 16u);
    g4 = (g4 | 55050u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(432));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(24));
    hot_regs.g4 = g4;
    goto L_089EA674;
}
L_089EA674:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x089EA684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA684u) goto L_089EA684;
    return;
L_089EA684:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x089EA6A0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA6A0u) goto L_089EA6A0;
    return;
L_089EA6A0:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g31 = (0x089EA6BCu);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA6BCu) goto L_089EA6BC;
    return;
L_089EA6BC:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089EA6ECu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA6ECu) goto L_089EA6EC;
    return;
L_089EA6EC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (0u | 40u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089EA724u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA724u) goto L_089EA724;
    return;
L_089EA724:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 6 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089EA674;
      }
      goto L_089EA734;
    }
}
L_089EA734:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(416)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(420)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(424)));
    hot_regs.g4 = (16512u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.g31 = (0x089EA760u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA760u) goto L_089EA760;
    return;
L_089EA760:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 13u);
    hot_regs.g31 = (0x089EA77Cu);
    hot_regs.g6 = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 981u, 0x0897FF40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA77Cu) goto L_089EA77C;
    return;
L_089EA77C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA8A8;
      }
      goto L_089EA784;
    }
L_089EA784:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f24));
    g4 = (17174u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (ctx.gpr[18] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(750));
    f24 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f24 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f24)));
    hot_regs.g4 = g4;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_089EA7B8;
      }
      goto L_089EA7AC;
    }
}
}
L_089EA7AC:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[24] = ctx.fpr[24] + hot_regs.f12;
    goto L_089EA7B8;
L_089EA7B8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(480)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(484)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(488)));
    hot_regs.g4 = (16512u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.g31 = (0x089EA7ECu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA7ECu) goto L_089EA7EC;
    return;
L_089EA7EC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 13u);
    hot_regs.g31 = (0x089EA808u);
    hot_regs.g6 = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 981u, 0x0897FF40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA808u) goto L_089EA808;
    return;
L_089EA808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA8A8;
      }
      goto L_089EA810;
    }
L_089EA810:
{
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f22));
    g4 = (16968u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (ctx.gpr[18] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(750));
    f22 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f22 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f22)));
    hot_regs.g4 = g4;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_089EA844;
      }
      goto L_089EA838;
    }
}
}
L_089EA838:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = hot_regs.f22 + hot_regs.f12;
    goto L_089EA844;
L_089EA844:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(512)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(516)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(520)));
    hot_regs.g4 = (16512u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.g31 = (0x089EA878u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA878u) goto L_089EA878;
    return;
L_089EA878:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 13u);
    hot_regs.g31 = (0x089EA894u);
    hot_regs.g6 = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 981u, 0x0897FF40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA894u) goto L_089EA894;
    return;
L_089EA894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA8A8;
      }
      goto L_089EA89C;
    }
L_089EA89C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2232u << 16u);
    hot_regs.g31 = (0x089EA8A8u);
    g4 = (g4 + static_cast<std::uint32_t>(-1952));
    hot_regs.g4 = g4;
    goto L_089E9290;
}
L_089EA8A8:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(633)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA8D4;
      }
      goto L_089EA8B4;
    }
L_089EA8B4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g20 = ctx.gpr[20];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (16384u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(64)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_089EA8D4;
}
}
L_089EA8D4:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(632)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EAA44;
      }
      goto L_089EA8E0;
    }
L_089EA8E0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    g16 = (2236u << 16u);
    g16 = (g16 + static_cast<std::uint32_t>(32304));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(ctx.fpr[28])) && f12 == ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EA9C8;
      }
      goto L_089EA8FC;
    }
}
}
L_089EA8FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EA9C8;
      }
      goto L_089EA908;
    }
L_089EA908:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    g6 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 == g6;
    g6 = (0u | 2u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089EA954;
      }
      goto L_089EA918;
    }
}
L_089EA918:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_089EA93C;
      }
      goto L_089EA920;
    }
L_089EA920:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089EA948;
      }
      goto L_089EA928;
    }
L_089EA928:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EA960;
      }
      goto L_089EA930;
    }
L_089EA930:
    hot_regs.g4 = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_089EA968;
      }
      goto L_089EA93C;
    }
L_089EA93C:
    hot_regs.g4 = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_089EA968;
      }
      goto L_089EA948;
    }
L_089EA948:
    hot_regs.g4 = (0u | 17u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_089EA968;
      }
      goto L_089EA954;
    }
L_089EA954:
    hot_regs.g4 = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_089EA968;
      }
      goto L_089EA960;
    }
L_089EA960:
    hot_regs.g4 = (0u | 44u);
    hot_regs.g7 = (hot_regs.g5 | 0u);
    goto L_089EA968;
L_089EA968:
    ctx.gpr[8] = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (ctx.gpr[23] ^ 2u);
    hot_regs.g4 = (hot_regs.g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g5 = (ctx.gpr[23] ^ 4u);
    hot_regs.g5 = (hot_regs.g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[23] ^ 8u);
    hot_regs.g5 = (hot_regs.g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[23] ^ 9u);
    hot_regs.g5 = (hot_regs.g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[23] ^ 10u);
    hot_regs.g5 = (hot_regs.g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[23] ^ 11u);
    hot_regs.g5 = (hot_regs.g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g6 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089EA9C8u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 340u, 0x08892400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA9C8u) goto L_089EA9C8;
    return;
L_089EA9C8:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089EA9F8;
      }
      goto L_089EA9D0;
    }
L_089EA9D0:
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x089EA9F0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 572u, 0x08A1BC64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EA9F0u) goto L_089EA9F0;
    return;
L_089EA9F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EAA3C;
      }
      goto L_089EA9F8;
    }
L_089EA9F8:
    hot_regs.g4 = (16076u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x089EAA18u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 572u, 0x08A1BC64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAA18u) goto L_089EAA18;
    return;
L_089EAA18:
    hot_regs.g31 = (0x089EAA20u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAA20u) goto L_089EAA20;
    return;
L_089EAA20:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 300u);
    hot_regs.g31 = (0x089EAA3Cu);
    hot_regs.g6 = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 955u, 0x0898BB44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAA3Cu) goto L_089EAA3C;
    return;
L_089EAA3C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089EAA4C;
      }
      goto L_089EAA44;
    }
L_089EAA44:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    hot_regs.g2 = (0u | 0u);
    goto L_089EAA4C;
L_089EAA4C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(644)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(648)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(652)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(656)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(660)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(664)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(668)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(672)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(676)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(680)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(684)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(688)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(692)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(696)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(700)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(704)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EAA94:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-576));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(540), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(544), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(548), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(552), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(556), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(560), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(564), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(568), hot_regs.g31);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    g16 = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 48 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EBA7C;
      }
      goto L_089EAAE4;
    }
}
L_089EAAE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (ctx.gpr[16] << 6u);
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    g17 = (g4 + hot_regs.g5);
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-17072));
    g17 = (g17 + g4);
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089EBA6C;
      }
      goto L_089EAB08;
    }
}
L_089EAB08:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EABE0;
      }
      goto L_089EAB14;
    }
L_089EAB14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EBA6C;
      }
      goto L_089EAB28;
    }
}
L_089EAB28:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089EBA6C;
      }
      goto L_089EAB44;
    }
}
L_089EAB44:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 2u);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_089EABB0;
      }
      goto L_089EAB60;
    }
}
L_089EAB60:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 4u);
    if (hot_regs.g6 == hot_regs.g7) {
    hot_regs.g5 = (0u | 1u);
        goto L_089EABB4;
    }
    goto L_089EAB70;
L_089EAB70:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 8u);
    if (hot_regs.g6 == hot_regs.g7) {
    hot_regs.g5 = (0u | 1u);
        goto L_089EABB4;
    }
    goto L_089EAB80;
L_089EAB80:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 9u);
    if (hot_regs.g6 == hot_regs.g7) {
    hot_regs.g5 = (0u | 1u);
        goto L_089EABB4;
    }
    goto L_089EAB90;
L_089EAB90:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 10u);
    if (hot_regs.g6 == hot_regs.g7) {
    hot_regs.g5 = (0u | 1u);
        goto L_089EABB4;
    }
    goto L_089EABA0;
L_089EABA0:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 11u);
    if (hot_regs.g6 != hot_regs.g7) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_089EABB8;
    }
    goto L_089EABB0;
L_089EABB0:
    hot_regs.g5 = (0u | 1u);
    goto L_089EABB4;
L_089EABB4:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089EABB8;
L_089EABB8:
    hot_regs.g6 = (hot_regs.g5 & 255u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089EABD8u);
    ctx.gpr[8] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 340u, 0x08892400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EABD8u) goto L_089EABD8;
    return;
L_089EABD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBA6C;
      }
      goto L_089EABE0;
    }
L_089EABE0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(32)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    g4 = (g17 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(48)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    f13 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089EAC28;
      }
      goto L_089EAC1C;
    }
}
}
L_089EAC1C:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    goto L_089EAC28;
L_089EAC28:
{
    float f12 = hot_regs.f12;
    f12 = f12 - hot_regs.f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EBA50;
      }
      goto L_089EAC44;
    }
}
L_089EAC44:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-1848)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EAC5C:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 3500 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EAD78;
      }
      goto L_089EAC68;
    }
L_089EAC68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EAC80;
      }
      goto L_089EAC78;
    }
}
L_089EAC78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBA50;
      }
      goto L_089EAC80;
    }
L_089EAC80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EACEC;
      }
      goto L_089EAC8C;
    }
L_089EAC8C:
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x089EACA4u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EACA4u) goto L_089EACA4;
    return;
L_089EACA4:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (0u | 56u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089EACECu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EACECu) goto L_089EACEC;
    return;
L_089EACEC:
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16384u << 16u);
    hot_regs.g31 = (0x089EAD00u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAD00u) goto L_089EAD00;
    return;
L_089EAD00:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (15841u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 18350u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (0u | 56u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089EAD70u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAD70u) goto L_089EAD70;
    return;
L_089EAD70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBA50;
      }
      goto L_089EAD78;
    }
L_089EAD78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EAF0C;
      }
      goto L_089EAD84;
    }
L_089EAD84:
    hot_regs.g31 = (0x089EAD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAD8Cu) goto L_089EAD8C;
    return;
L_089EAD8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 15u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EAE30;
      }
      goto L_089EAD9C;
    }
}
L_089EAD9C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EAE30;
      }
      goto L_089EADA8;
    }
L_089EADA8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (0u | 17u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EADD0;
      }
      goto L_089EADC0;
    }
L_089EADC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EADD4;
      }
      goto L_089EADD0;
    }
L_089EADD0:
    ctx.gpr[20] = (0u | 3u);
    goto L_089EADD4;
L_089EADD4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(256));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[19] + hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089EADF0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EADF0u) goto L_089EADF0;
    return;
L_089EADF0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EAE30;
      }
      goto L_089EADF8;
    }
L_089EADF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(248));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[19] + hot_regs.g4);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089EAE1Cu);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAE1Cu) goto L_089EAE1C;
    return;
L_089EAE1C:
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g31 = (0x089EAE30u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 733u, 0x088FF204u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAE30u) goto L_089EAE30;
    return;
L_089EAE30:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    f13 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089EAE50;
      }
      goto L_089EAE44;
    }
}
}
L_089EAE44:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    goto L_089EAE50;
L_089EAE50:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EAF0C;
      }
      goto L_089EAE60;
    }
L_089EAE60:
    hot_regs.g31 = (0x089EAE68u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAE68u) goto L_089EAE68;
    return;
L_089EAE68:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 127u);
    hot_regs.g4 = (ctx.gpr[19] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(125));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089EAEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAEA0u) goto L_089EAEA0;
    return;
L_089EAEA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (hot_regs.g2 & 65535u);
    g19 = (g4 & 1u);
    g19 = (g19 + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089EAF0C;
      }
      goto L_089EAEBC;
    }
}
L_089EAEBC:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g4 = (16480u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (0u | 40u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089EAEFCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAEFCu) goto L_089EAEFC;
    return;
L_089EAEFC:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089EAEBC;
      }
      goto L_089EAF0C;
    }
}
L_089EAF0C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EAFC8;
      }
      goto L_089EAF1C;
    }
}
L_089EAF1C:
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g4 = (16752u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[20] = (0u | 1u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089EAF6Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAF6Cu) goto L_089EAF6C;
    return;
L_089EAF6C:
    hot_regs.g4 = (16576u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (2234u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4264)));
    hot_regs.g4 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 200u);
    hot_regs.g6 = (0u | 100u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089EAFC0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 634u, 0x08983B9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EAFC0u) goto L_089EAFC0;
    return;
L_089EAFC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB020;
      }
      goto L_089EAFC8;
    }
L_089EAFC8:
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (16640u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (2234u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4264)));
    hot_regs.g2 = (0u | 1u);
    hot_regs.f14 = std::bit_cast<float>(0u);
    hot_regs.g4 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 128u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g31 = (0x089EB020u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 634u, 0x08983B9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB020u) goto L_089EB020;
    return;
L_089EB020:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (2234u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4264));
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(28)));
    hot_regs.f14 = std::bit_cast<float>(0u);
    hot_regs.g5 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (0u | 30u);
    hot_regs.g6 = (0u | 15u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g31 = (0x089EB074u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 634u, 0x08983B9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB074u) goto L_089EB074;
    return;
L_089EB074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBA50;
      }
      goto L_089EB07C;
    }
L_089EB07C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EB13C;
      }
      goto L_089EB08C;
    }
}
L_089EB08C:
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (16800u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[20] = (0u | 1u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089EB0E0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB0E0u) goto L_089EB0E0;
    return;
L_089EB0E0:
    hot_regs.g4 = (16640u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17136u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (2234u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4264)));
    hot_regs.g4 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g7 = (0u | 200u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089EB134u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 634u, 0x08983B9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB134u) goto L_089EB134;
    return;
L_089EB134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB194;
      }
      goto L_089EB13C;
    }
L_089EB13C:
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (16640u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17136u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (2234u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4264)));
    hot_regs.g2 = (0u | 1u);
    hot_regs.f14 = std::bit_cast<float>(0u);
    hot_regs.g4 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 128u);
    hot_regs.g6 = (0u | 128u);
    hot_regs.g7 = (0u | 100u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g31 = (0x089EB194u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 634u, 0x08983B9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB194u) goto L_089EB194;
    return;
L_089EB194:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (17136u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (2234u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4264));
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(28)));
    hot_regs.f14 = std::bit_cast<float>(0u);
    hot_regs.g5 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (0u | 30u);
    hot_regs.g6 = (0u | 30u);
    hot_regs.g7 = (0u | 25u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g31 = (0x089EB1E8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 634u, 0x08983B9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB1E8u) goto L_089EB1E8;
    return;
L_089EB1E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBA50;
      }
      goto L_089EB1F0;
    }
L_089EB1F0:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    hot_regs.g4 = (16576u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (0x089EB220u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 577u, 0x088937CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB220u) goto L_089EB220;
    return;
L_089EB220:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (0x089EB238u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 626u, 0x08893C18u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB238u) goto L_089EB238;
    return;
L_089EB238:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (0x089EB250u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 647u, 0x08893E14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB250u) goto L_089EB250;
    return;
L_089EB250:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(0u));
    g4 = (0u | 30u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    g4 = (static_cast<std::int32_t>(g4) < 10 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EB550;
      }
      goto L_089EB278;
    }
}
L_089EB278:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EB2FC;
      }
      goto L_089EB288;
    }
L_089EB288:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(312)));
    hot_regs.g5 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x089EB2E0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB2E0u) goto L_089EB2E0;
    return;
L_089EB2E0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB2F4;
      }
      goto L_089EB2E8;
    }
L_089EB2E8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_089EB2FC;
      }
      goto L_089EB2F4;
    }
L_089EB2F4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089EB2FC;
L_089EB2FC:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    hot_regs.f12 = std::bit_cast<float>(g4);
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    g4 = (16140u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f20));
    g19 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    g4 = (g19 << 5u);
    g4 = (g4 - g19);
    g19 = (g4 - g19);
    ctx.gpr[20] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_089EB4C0;
      }
      goto L_089EB33C;
    }
}
}
L_089EB33C:
    hot_regs.g31 = (0x089EB344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB344u) goto L_089EB344;
    return;
L_089EB344:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (15560u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 62915u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(336)));
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
    { const float fs = hot_regs.f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = hot_regs.f14 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(340)));
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
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089EB3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB3DCu) goto L_089EB3DC;
    return;
L_089EB3DC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10708)));
    hot_regs.g31 = (0x089EB3F0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10712)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB3F0u) goto L_089EB3F0;
    return;
L_089EB3F0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10700)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10704)));
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g6);
    ctx.gpr[9] = (ctx.gpr[8] < hot_regs.g6 ? 1u : 0u);
    hot_regs.g4 = (ctx.gpr[9] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    ctx.gpr[22] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x089EB428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB428u) goto L_089EB428;
    return;
L_089EB428:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10692)));
    hot_regs.g31 = (0x089EB43Cu);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10696)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB43Cu) goto L_089EB43C;
    return;
L_089EB43C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10684)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10688)));
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g6);
    ctx.gpr[9] = (ctx.gpr[8] < hot_regs.g6 ? 1u : 0u);
    hot_regs.g4 = (ctx.gpr[9] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    hot_regs.g4 = (16076u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g2 = (0u | 200u);
    hot_regs.g4 = (0u | 13u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089EB4B0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB4B0u) goto L_089EB4B0;
    return;
L_089EB4B0:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089EB33C;
      }
      goto L_089EB4C0;
    }
}
L_089EB4C0:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (15395u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5048)));
    hot_regs.g4 = (16608u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g4 = (49376u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16928u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[8] = (0u | 100u);
    ctx.gpr[9] = (0u | 60u);
    ctx.gpr[10] = (0u | 60u);
    ctx.gpr[11] = (0u | 255u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x089EB548u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB548u) goto L_089EB548;
    return;
L_089EB548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB5DC;
      }
      goto L_089EB550;
    }
L_089EB550:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (15395u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089EB580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB580u) goto L_089EB580;
    return;
L_089EB580:
    hot_regs.g31 = (0x089EB588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB588u) goto L_089EB588;
    return;
L_089EB588:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB5DC;
      }
      goto L_089EB598;
    }
L_089EB598:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    hot_regs.g4 = (0u | 57u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x089EB5CCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB5CCu) goto L_089EB5CC;
    return;
L_089EB5CC:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089EB598;
      }
      goto L_089EB5DC;
    }
}
L_089EB5DC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    hot_regs.g5 = (0u | 7u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089EB720;
      }
      goto L_089EB5EC;
    }
L_089EB5EC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    g4 = (16345u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[19] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089EB6F8;
      }
      goto L_089EB624;
    }
}
}
L_089EB624:
    hot_regs.g4 = (48373u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15605u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.g31 = (0x089EB640u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB640u) goto L_089EB640;
    return;
L_089EB640:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[24] = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x089EB658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB658u) goto L_089EB658;
    return;
L_089EB658:
    hot_regs.f13 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = hot_regs.f20 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    hot_regs.f12 = std::sqrt(hot_regs.f14);
    hot_regs.f12 = hot_regs.f22 - hot_regs.f12;
    ctx.fpr[16] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(432));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(448));
    hot_regs.g4 = (16358u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g2 = (0u | 4000u);
    hot_regs.g4 = (0u | 13u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089EB6E8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB6E8u) goto L_089EB6E8;
    return;
L_089EB6E8:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 10 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089EB624;
      }
      goto L_089EB6F8;
    }
}
L_089EB6F8:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
    hot_regs.g5 = (16576u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089EB720u);
    ctx.gpr[8] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 340u, 0x08892400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB720u) goto L_089EB720;
    return;
L_089EB720:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    g4 = (static_cast<std::int32_t>(g4) < 7 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EB83C;
      }
      goto L_089EB730;
    }
}
L_089EB730:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    g4 = (static_cast<std::int32_t>(g4) < 33 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EB83C;
      }
      goto L_089EB740;
    }
}
L_089EB740:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (15395u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (0u | 256u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    hot_regs.g4 = (48793u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16025u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.g31 = (0x089EB79Cu);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB79Cu) goto L_089EB79C;
    return;
L_089EB79C:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g4 = (15779u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f15 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5048)));
    hot_regs.g5 = (16358u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 26214u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f15 + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g5 = (49126u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 26214u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f15 = hot_regs.f14 - hot_regs.f15;
    ctx.gpr[9] = (ctx.gpr[20] & 255u);
    hot_regs.g5 = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16928u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x089EB83Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB83Cu) goto L_089EB83C;
    return;
L_089EB83C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBA50;
      }
      goto L_089EB844;
    }
L_089EB844:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    g4 = (static_cast<std::int32_t>(g4) < 5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EBA48;
      }
      goto L_089EB854;
    }
}
L_089EB854:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    hot_regs.f12 = std::bit_cast<float>(g4);
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    g4 = (16166u << 16u);
    g4 = (g4 | 26214u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f20));
    g19 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    g4 = (g19 << 3u);
    g4 = (g19 + g4);
    g19 = (g19 + g4);
    ctx.gpr[20] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_089EBA48;
      }
      goto L_089EB894;
    }
}
}
L_089EB894:
    hot_regs.g31 = (0x089EB89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB89Cu) goto L_089EB89C;
    return;
L_089EB89C:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089EB8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB8BCu) goto L_089EB8BC;
    return;
L_089EB8BC:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089EB8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB8DCu) goto L_089EB8DC;
    return;
L_089EB8DC:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 127u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(496));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089EB958u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB958u) goto L_089EB958;
    return;
L_089EB958:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(504)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089EB974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB974u) goto L_089EB974;
    return;
L_089EB974:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10708)));
    hot_regs.g31 = (0x089EB988u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10712)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB988u) goto L_089EB988;
    return;
L_089EB988:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10700)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10704)));
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g6);
    ctx.gpr[9] = (ctx.gpr[8] < hot_regs.g6 ? 1u : 0u);
    hot_regs.g4 = (ctx.gpr[9] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    ctx.gpr[22] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x089EB9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB9C0u) goto L_089EB9C0;
    return;
L_089EB9C0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10692)));
    hot_regs.g31 = (0x089EB9D4u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10696)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EB9D4u) goto L_089EB9D4;
    return;
L_089EB9D4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10684)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-10688)));
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g6);
    ctx.gpr[9] = (ctx.gpr[8] < hot_regs.g6 ? 1u : 0u);
    hot_regs.g4 = (ctx.gpr[9] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(480));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (0u | 41u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089EBA38u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EBA38u) goto L_089EBA38;
    return;
L_089EBA38:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089EB894;
      }
      goto L_089EBA48;
    }
}
L_089EBA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBA50;
      }
      goto L_089EBA50;
    }
L_089EBA50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089EBA68;
      }
      goto L_089EBA58;
    }
L_089EBA58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EBA6C;
      }
      goto L_089EBA68;
    }
}
L_089EBA68:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    goto L_089EBA6C;
L_089EBA6C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 48 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089EAAE4;
      }
      goto L_089EBA7C;
    }
}
L_089EBA7C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(528)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(532)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(536)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(540)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(548)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(552)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(556)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(560)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(564)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(568)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EBAB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (0u | 50u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(9684), static_cast<std::uint8_t>(g4));
    g4 = (g28 + static_cast<std::uint32_t>(-10680));
    g5 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(9684)));
    g5 = (g5 << 2u);
    g6 = (2237u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-30144));
    g5 = (g5 + g6);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EBAD8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EBB1C;
      }
      goto L_089EBAE8;
    }
}
L_089EBAE8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2235u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-26580));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), g6);
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5844), 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089EBB08;
      }
      goto L_089EBAFC;
    }
}
L_089EBAFC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2235u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), g6);
    hot_regs.g6 = g6;
    goto L_089EBB08;
}
L_089EBB08:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EBB1C;
      }
      goto L_089EBB14;
    }
}
L_089EBB14:
    hot_regs.g31 = (0x089EBB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EBB1Cu) goto L_089EBB1C;
    return;
L_089EBB1C:
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
L_089EBB28:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EBBF8;
      }
      goto L_089EBB50;
    }
}
L_089EBB50:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(26880));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g31 = (0x089EBB64u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 47u, 0x089EC3FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EBB64u) goto L_089EBB64;
    return;
L_089EBB64:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBBBC;
      }
      goto L_089EBB70;
    }
L_089EBB70:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089EBB98;
      }
      goto L_089EBB80;
    }
L_089EBB80:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_089EBB84;
L_089EBB84:
    hot_regs.g31 = (0x089EBB8Cu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 52u, 0x089EC4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EBB8Cu) goto L_089EBB8C;
    return;
L_089EBB8C:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(64));
    { const bool branch_taken = g18 != ctx.gpr[19];
    hot_regs.g4 = (g18 | 0u);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089EBB84;
      }
      goto L_089EBB98;
    }
}
L_089EBB98:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBBBC;
      }
      goto L_089EBBA0;
    }
L_089EBBA0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBBBC;
      }
      goto L_089EBBAC;
    }
L_089EBBAC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBBBC;
      }
      goto L_089EBBB4;
    }
L_089EBBB4:
    hot_regs.g31 = (0x089EBBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EBBBCu) goto L_089EBBBC;
    return;
L_089EBBBC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_089EBBE8;
      }
      goto L_089EBBC4;
    }
L_089EBBC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-26580));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), g4);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5844), 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089EBBE4;
      }
      goto L_089EBBD8;
    }
}
L_089EBBD8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), g4);
    hot_regs.g4 = g4;
    goto L_089EBBE4;
}
L_089EBBE4:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    goto L_089EBBE8;
L_089EBBE8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBBF8;
      }
      goto L_089EBBF0;
    }
L_089EBBF0:
    hot_regs.g31 = (0x089EBBF8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EBBF8u) goto L_089EBBF8;
    return;
L_089EBBF8:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EBC18:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g16);
    g16 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (g9 & 255u);
    g7 = (g7 - ctx.gpr[10]);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 6u));
    g9 = (g9 >> 26u);
    g7 = (g7 + g9);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 6u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g7);
    g7 = (g7 < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    { const bool branch_taken = g7 == 0u;
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089EBC78;
      }
      goto L_089EBC70;
    }
}
L_089EBC70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (hot_regs.g29 | 0u);
      if (branch_taken) {
          goto L_089EBC78;
      }
      goto L_089EBC78;
    }
L_089EBC78:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    g17 = (hot_regs.g7 + g17);
    { const bool branch_taken = g17 == 0u;
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089EBCE0;
      }
      goto L_089EBC8C;
    }
}
L_089EBC8C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[17] << 6u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x089EBCA4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EBCA4u) goto L_089EBCA4;
    return;
L_089EBCA4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089EBCE0;
      }
      goto L_089EBCBC;
    }
}
L_089EBCBC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x089EBCD0u);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EBCD0u) goto L_089EBCD0;
    return;
L_089EBCD0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    goto L_089EBCE0;
}
L_089EBCE0:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g7 == hot_regs.g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089EBD78;
      }
      goto L_089EBCF0;
    }
L_089EBCF0:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(64));
        goto L_089EBD70;
    }
    goto L_089EBCFC;
L_089EBCFC:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g9);
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(4), g9);
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(8), g9);
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(12), g9);
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(16), g9);
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(20), g9);
    g9 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(g9));
    g9 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(g9));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g9 = (g7 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g9 = (g8 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g9 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(g9));
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(52), g9);
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(56), g9);
    g7 = (g7 + static_cast<std::uint32_t>(64));
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    goto L_089EBD70;
}
L_089EBD70:
    { const bool branch_taken = hot_regs.g7 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089EBCF0;
      }
      goto L_089EBD78;
    }
L_089EBD78:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089EBE0C;
      }
      goto L_089EBD88;
    }
L_089EBD88:
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBE04;
      }
      goto L_089EBD94;
    }
L_089EBD94:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g8);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), g8);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(8), g8);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(12), g8);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(16), g8);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(20), g8);
    g8 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(g7 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(g8));
    g8 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store8(g7 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(g8));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g8 = (g6 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g8 = (g7 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g8 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(g7 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(g8));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(52), g8);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(56), g6);
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    goto L_089EBE04;
}
L_089EBE04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089EBEA0;
      }
      goto L_089EBE0C;
    }
L_089EBE0C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089EBEA0;
      }
      goto L_089EBE18;
    }
L_089EBE18:
    ctx.gpr[8] = (hot_regs.g6 + static_cast<std::uint32_t>(32));
    goto L_089EBE1C;
L_089EBE1C:
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[9] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
        goto L_089EBE98;
    }
    goto L_089EBE28;
L_089EBE28:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), g10);
    g10 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(4), g10);
    g10 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(8), g10);
    g10 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(12), g10);
    g10 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(16), g10);
    g10 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(20), g10);
    g10 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(g10));
    g10 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(g10));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g10 = (g9 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g10 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g10 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(g10));
    g10 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(52), g10);
    g10 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(56), g10);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = g10;
    goto L_089EBE98;
}
L_089EBE98:
    { const bool branch_taken = hot_regs.g7 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089EBE1C;
      }
      goto L_089EBEA0;
    }
L_089EBEA0:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089EBF40;
      }
      goto L_089EBEA8;
    }
L_089EBEA8:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (g5 | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089EBF40;
      }
      goto L_089EBEB8;
    }
}
L_089EBEB8:
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (hot_regs.g6 == 0u) {
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
        goto L_089EBF38;
    }
    goto L_089EBEC4;
L_089EBEC4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(8), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(12), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(16), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), g7);
    g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(g7));
    g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(g7));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g7 = (g4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g7 = (g6 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(g7));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(52), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(56), g7);
    g4 = (g4 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    goto L_089EBF38;
}
L_089EBF38:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089EBEB8;
      }
      goto L_089EBF40;
    }
L_089EBF40:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089EBF68;
      }
      goto L_089EBF50;
    }
L_089EBF50:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    goto L_089EBF54;
L_089EBF54:
    hot_regs.g31 = (0x089EBF5Cu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 52u, 0x089EC4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EBF5Cu) goto L_089EBF5C;
    return;
L_089EBF5C:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 + static_cast<std::uint32_t>(64));
    { const bool branch_taken = g21 != ctx.gpr[20];
    hot_regs.g4 = (g21 | 0u);
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_089EBF54;
      }
      goto L_089EBF68;
    }
}
L_089EBF68:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBF7C;
      }
      goto L_089EBF74;
    }
L_089EBF74:
    hot_regs.g31 = (0x089EBF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EBF7Cu) goto L_089EBF7C;
    return;
L_089EBF7C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[17] << 6u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g18);
    g4 = (g18 + g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089EBFB4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), hot_regs.g31);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089EBFE4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 51u, 0x089EC460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089EBFE4u) goto L_089EBFE4;
    return;
L_089EBFE4:
{
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x089EC000u; return;}

}

void recomp_unit_0121(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0121_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_121(Runtime &runtime) {
    runtime.register_generated_unit(121u, 0x089E8000u, 16384u, &recomp_unit_0121, &recomp_unit_0121_entry);
    runtime.register_function(0x089E8000u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E800Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8018u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8024u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E802Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E805Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E806Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8078u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8080u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8094u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E810Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8110u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E811Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8124u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8138u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E815Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E817Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E81FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8214u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E821Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8230u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E823Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8244u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E825Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E82B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E82C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E82D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8338u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8344u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8438u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8454u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8468u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8474u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8494u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E84A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E84B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E84ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8504u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8514u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8520u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8538u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8558u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8568u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8574u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8590u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E85A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E85B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E85C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E85DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8608u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8624u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8628u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E862Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8634u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8650u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E866Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8670u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8674u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E867Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E868Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8718u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E871Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8720u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8728u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8734u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8744u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8754u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8764u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8774u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8778u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E877Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E878Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8798u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E87B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E87BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E87C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E884Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8858u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E885Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8868u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E892Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8938u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A08u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A24u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8AE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8AF8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B4Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B50u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8BBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8BD0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8BE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8BECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8BF4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C20u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C54u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C70u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C7Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CA0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CB4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CC8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CDCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D3Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D54u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D60u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D94u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8DA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8DC0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8DF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8DF8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E00u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E24u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E2Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E34u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E40u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E4Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E54u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E58u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E74u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E7Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8EACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8ECCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8ED8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8EE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8EF4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F00u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F10u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F24u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F3Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F54u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F60u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F74u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F7Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F94u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F9Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8FA0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8FA8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8FDCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8FE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8FECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8FFCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9004u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9014u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E901Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9024u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9028u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E903Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9048u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E905Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9068u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9078u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9084u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9088u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9098u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E90A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E90B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E90C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E90C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E90D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E90E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E90F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E90FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E910Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9130u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9160u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9174u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E918Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9198u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9208u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9214u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9220u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9228u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9234u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9248u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9254u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9264u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9290u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E92B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9300u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9348u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9358u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9364u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9374u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9384u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E93A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E93CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E93F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9414u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9438u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9444u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9450u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E945Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9470u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9480u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9494u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9504u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9510u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9558u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E955Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E956Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9574u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E95B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E95F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9618u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9624u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9630u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9640u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9650u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9664u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9668u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9688u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E96A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E96B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E96B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E96CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E96E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E96F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E96F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9720u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E974Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E97E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E97E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9878u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9888u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E98A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E98C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E98C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E98ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9900u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9908u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9918u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9928u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E992Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9934u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9940u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9958u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E995Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9960u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9994u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E999Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E99A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E99B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E99C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E99FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9A04u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9A48u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9AA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9AACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9AB4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9ABCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9ACCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9AD8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B04u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B24u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B38u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B40u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B58u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B78u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B94u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9BCCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9BD8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9C0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9C28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9C6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9C74u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9C88u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D2Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D34u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D60u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D9Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9DACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9DB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9DC4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9DCCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9DE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9E00u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9E0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9E18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9E44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9E4Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9E7Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9E88u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9EA8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9EECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9F28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9F30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9F60u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9F6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9F90u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9FB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9FC4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9FD0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9FD4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9FDCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9FF8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA010u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA018u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA030u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA038u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA050u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA05Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA068u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA070u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA090u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA094u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA104u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA120u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA128u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA144u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA14Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA16Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA18Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA1D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA1F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA1F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA218u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA22Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA234u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA250u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA260u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA268u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA28Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA29Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA300u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA30Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA358u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA36Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA388u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA3A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA3D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA40Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA41Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA438u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA454u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA484u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA4BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA4CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA4E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA504u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA534u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA54Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA55Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA574u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA57Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA5A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA5B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA5E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA600u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA608u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA638u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA644u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA674u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA684u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA6A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA6BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA6ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA724u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA734u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA760u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA77Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA784u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA7ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA7B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA7ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA808u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA810u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA838u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA844u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA878u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA894u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA89Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA8A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA8B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA8D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA8E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA8FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA908u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA918u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA920u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA928u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA930u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA93Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA948u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA954u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA960u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA968u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA9C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA9D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA9F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA9F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA20u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA3Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA4Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA94u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAAE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB08u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB60u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB70u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB90u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EABA0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EABB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EABB4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EABB8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EABD8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EABE0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC5Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC78u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EACA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EACECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD00u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD70u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD78u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD84u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD9Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EADA8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EADC0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EADD0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EADD4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EADF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EADF8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAE1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAE30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAE44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAE50u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAE60u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAE68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAEA0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAEBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAEFCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAF0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAF1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAF6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAFC0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAFC8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB020u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB074u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB07Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB08Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB0E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB134u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB13Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB194u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB1E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB1F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB220u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB238u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB250u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB278u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB288u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB33Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB344u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB3DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB3F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB428u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB43Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB548u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB550u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB580u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB588u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB598u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB5CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB5DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB5ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB624u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB640u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB658u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB6E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB6F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB720u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB730u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB740u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB79Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB83Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB844u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB854u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB894u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB89Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB958u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB974u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB988u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB9C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB9D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA38u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA48u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA50u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA58u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA7Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBAB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBAD8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBAE8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBAFCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB08u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB50u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB64u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB70u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB84u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB98u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBA0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBB4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBC4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBD8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBE8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBBF8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC70u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC78u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCD0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCE0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCFCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD70u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD78u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD88u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD94u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE04u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE98u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEA0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEA8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEB8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEC4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF38u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF40u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF50u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF54u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF5Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF74u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF7Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBFB4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBFE4u, &recomp_unit_0121, "recomp_unit_0121");
}
} // namespace psprecomp
