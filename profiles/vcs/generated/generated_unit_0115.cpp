#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0115[4095] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 10, 0,
    0, 11, 0, 0, 12, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    63, 64, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0,
    0, 0, 77, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 89,
    0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 0, 120,
    0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0,
    126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0,
    0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 201,
    0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 209,
    0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0,
    229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238,
    0, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0,
    246, 0, 247, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 0, 0, 253, 0,
    0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0,
    268, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 0, 286, 287, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 297, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 302, 303, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 331, 0, 332, 0, 333, 334, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 342, 0, 343, 0, 344, 0, 0, 0, 0, 0, 345, 346, 347, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 349, 350, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361,
    0, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 369, 0, 370, 0, 371, 0, 0, 0,
    0, 0, 372, 373, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 389, 0, 390, 0, 391, 0, 392, 393, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0,
    0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404,
    0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 411,
    0, 0, 0, 412, 0, 0, 0, 413, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0,
    0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 428, 429, 430, 0, 431, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0,
    0, 434, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0,
    0, 442, 0, 443, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 450, 0, 0, 451, 452, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0,
    0, 467, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 471, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 0, 475, 0, 476, 0, 0,
    0, 0, 477, 0, 0, 0, 478, 479, 0, 0, 480, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0,
    0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0,
    489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 492,
    0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 495, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0,
    0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 503, 0, 0, 0,
    504, 505, 0, 0, 506, 0, 0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 512, 0, 513, 0, 514, 0,
    515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0,
    0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 528, 0, 0, 0, 0, 0, 0, 0, 0, 529, 530, 0, 0, 0, 0, 0, 0, 531,
    0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 535, 0, 0, 536, 537, 0, 538, 0, 539, 0, 0, 0, 0, 0, 540, 0,
    0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 544, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550,
    0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555,
    0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 561,
    0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 569,
    0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 572, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0,
    0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579,
    0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 586, 0, 0, 0, 0, 0,
    0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0,
    0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 601, 0, 602, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 605, 0, 0, 0, 0, 0, 0, 606, 607, 608, 0, 609, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 614,
    615, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 621,
    0, 0, 0, 0, 0, 0, 622, 623, 624, 0, 625, 0, 0, 626, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 630, 631,
    0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 636, 0, 0, 637, 0, 638, 0, 0, 639, 640, 0, 0, 641,
    642, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645,
    0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 668, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672,
    0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 682,
    0, 683, 0, 0, 0, 684, 685, 0, 686, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 691, 0, 0, 0, 692,
};
void recomp_unit_0115_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089D0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0115[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D0000;
    case 2u: goto L_089D000C;
    case 3u: goto L_089D001C;
    case 4u: goto L_089D0024;
    case 5u: goto L_089D002C;
    case 6u: goto L_089D0048;
    case 7u: goto L_089D0058;
    case 8u: goto L_089D0060;
    case 9u: goto L_089D006C;
    case 10u: goto L_089D0078;
    case 11u: goto L_089D0084;
    case 12u: goto L_089D0090;
    case 13u: goto L_089D0094;
    case 14u: goto L_089D009C;
    case 15u: goto L_089D00E4;
    case 16u: goto L_089D00F0;
    case 17u: goto L_089D0110;
    case 18u: goto L_089D012C;
    case 19u: goto L_089D013C;
    case 20u: goto L_089D0144;
    case 21u: goto L_089D0190;
    case 22u: goto L_089D01AC;
    case 23u: goto L_089D01B8;
    case 24u: goto L_089D01C0;
    case 25u: goto L_089D01DC;
    case 26u: goto L_089D01E0;
    case 27u: goto L_089D0224;
    case 28u: goto L_089D0244;
    case 29u: goto L_089D0250;
    case 30u: goto L_089D0258;
    case 31u: goto L_089D026C;
    case 32u: goto L_089D0284;
    case 33u: goto L_089D02B4;
    case 34u: goto L_089D02C0;
    case 35u: goto L_089D0308;
    case 36u: goto L_089D0310;
    case 37u: goto L_089D0324;
    case 38u: goto L_089D0344;
    case 39u: goto L_089D0360;
    case 40u: goto L_089D0384;
    case 41u: goto L_089D0398;
    case 42u: goto L_089D03B8;
    case 43u: goto L_089D03C4;
    case 44u: goto L_089D03CC;
    case 45u: goto L_089D03D0;
    case 46u: goto L_089D03E4;
    case 47u: goto L_089D03FC;
    case 48u: goto L_089D041C;
    case 49u: goto L_089D0428;
    case 50u: goto L_089D0430;
    case 51u: goto L_089D0444;
    case 52u: goto L_089D045C;
    case 53u: goto L_089D0498;
    case 54u: goto L_089D04D8;
    case 55u: goto L_089D04F0;
    case 56u: goto L_089D0508;
    case 57u: goto L_089D0528;
    case 58u: goto L_089D052C;
    case 59u: goto L_089D0538;
    case 60u: goto L_089D0550;
    case 61u: goto L_089D0558;
    case 62u: goto L_089D0560;
    case 63u: goto L_089D0580;
    case 64u: goto L_089D0584;
    case 65u: goto L_089D0598;
    case 66u: goto L_089D05A4;
    case 67u: goto L_089D05C8;
    case 68u: goto L_089D05D0;
    case 69u: goto L_089D05DC;
    case 70u: goto L_089D0614;
    case 71u: goto L_089D0634;
    case 72u: goto L_089D0690;
    case 73u: goto L_089D06A0;
    case 74u: goto L_089D06D0;
    case 75u: goto L_089D06EC;
    case 76u: goto L_089D06F8;
    case 77u: goto L_089D0708;
    case 78u: goto L_089D0710;
    case 79u: goto L_089D0718;
    case 80u: goto L_089D0720;
    case 81u: goto L_089D0738;
    case 82u: goto L_089D0740;
    case 83u: goto L_089D0774;
    case 84u: goto L_089D079C;
    case 85u: goto L_089D0810;
    case 86u: goto L_089D0858;
    case 87u: goto L_089D0860;
    case 88u: goto L_089D0874;
    case 89u: goto L_089D087C;
    case 90u: goto L_089D0884;
    case 91u: goto L_089D0890;
    case 92u: goto L_089D08A0;
    case 93u: goto L_089D08B4;
    case 94u: goto L_089D08BC;
    case 95u: goto L_089D08C4;
    case 96u: goto L_089D08F4;
    case 97u: goto L_089D08FC;
    case 98u: goto L_089D092C;
    case 99u: goto L_089D0934;
    case 100u: goto L_089D0944;
    case 101u: goto L_089D094C;
    case 102u: goto L_089D0968;
    case 103u: goto L_089D0978;
    case 104u: goto L_089D0984;
    case 105u: goto L_089D09BC;
    case 106u: goto L_089D09C4;
    case 107u: goto L_089D09CC;
    case 108u: goto L_089D09D4;
    case 109u: goto L_089D09F4;
    case 110u: goto L_089D0A04;
    case 111u: goto L_089D0A10;
    case 112u: goto L_089D0A18;
    case 113u: goto L_089D0A20;
    case 114u: goto L_089D0A28;
    case 115u: goto L_089D0A3C;
    case 116u: goto L_089D0A58;
    case 117u: goto L_089D0A60;
    case 118u: goto L_089D0A68;
    case 119u: goto L_089D0A70;
    case 120u: goto L_089D0A7C;
    case 121u: goto L_089D0A84;
    case 122u: goto L_089D0A98;
    case 123u: goto L_089D0AA0;
    case 124u: goto L_089D0AF0;
    case 125u: goto L_089D0AF8;
    case 126u: goto L_089D0B00;
    case 127u: goto L_089D0B0C;
    case 128u: goto L_089D0B30;
    case 129u: goto L_089D0B44;
    case 130u: goto L_089D0B64;
    case 131u: goto L_089D0B74;
    case 132u: goto L_089D0B94;
    case 133u: goto L_089D0BA4;
    case 134u: goto L_089D0BB0;
    case 135u: goto L_089D0BD0;
    case 136u: goto L_089D0BF0;
    case 137u: goto L_089D0C04;
    case 138u: goto L_089D0C30;
    case 139u: goto L_089D0C5C;
    case 140u: goto L_089D0C70;
    case 141u: goto L_089D0CA8;
    case 142u: goto L_089D0CD4;
    case 143u: goto L_089D0CE4;
    case 144u: goto L_089D0CFC;
    case 145u: goto L_089D0D0C;
    case 146u: goto L_089D0D30;
    case 147u: goto L_089D0D58;
    case 148u: goto L_089D0D6C;
    case 149u: goto L_089D0DA0;
    case 150u: goto L_089D0DC4;
    case 151u: goto L_089D0DF4;
    case 152u: goto L_089D0E30;
    case 153u: goto L_089D0E58;
    case 154u: goto L_089D0E78;
    case 155u: goto L_089D0EA0;
    case 156u: goto L_089D0EF4;
    case 157u: goto L_089D0F08;
    case 158u: goto L_089D0F14;
    case 159u: goto L_089D0F28;
    case 160u: goto L_089D0F34;
    case 161u: goto L_089D0F3C;
    case 162u: goto L_089D0F74;
    case 163u: goto L_089D0FE8;
    case 164u: goto L_089D103C;
    case 165u: goto L_089D1044;
    case 166u: goto L_089D104C;
    case 167u: goto L_089D1074;
    case 168u: goto L_089D10D4;
    case 169u: goto L_089D10E0;
    case 170u: goto L_089D10E8;
    case 171u: goto L_089D10F0;
    case 172u: goto L_089D10F8;
    case 173u: goto L_089D1108;
    case 174u: goto L_089D1110;
    case 175u: goto L_089D1118;
    case 176u: goto L_089D1120;
    case 177u: goto L_089D113C;
    case 178u: goto L_089D114C;
    case 179u: goto L_089D1158;
    case 180u: goto L_089D1160;
    case 181u: goto L_089D1168;
    case 182u: goto L_089D1170;
    case 183u: goto L_089D118C;
    case 184u: goto L_089D119C;
    case 185u: goto L_089D11A8;
    case 186u: goto L_089D11B0;
    case 187u: goto L_089D11B8;
    case 188u: goto L_089D11C0;
    case 189u: goto L_089D11CC;
    case 190u: goto L_089D11D4;
    case 191u: goto L_089D11F0;
    case 192u: goto L_089D120C;
    case 193u: goto L_089D121C;
    case 194u: goto L_089D1234;
    case 195u: goto L_089D1240;
    case 196u: goto L_089D1248;
    case 197u: goto L_089D1250;
    case 198u: goto L_089D125C;
    case 199u: goto L_089D126C;
    case 200u: goto L_089D1274;
    case 201u: goto L_089D127C;
    case 202u: goto L_089D128C;
    case 203u: goto L_089D129C;
    case 204u: goto L_089D12B8;
    case 205u: goto L_089D12C8;
    case 206u: goto L_089D12D8;
    case 207u: goto L_089D12E4;
    case 208u: goto L_089D12F4;
    case 209u: goto L_089D12FC;
    case 210u: goto L_089D1304;
    case 211u: goto L_089D130C;
    case 212u: goto L_089D1334;
    case 213u: goto L_089D1344;
    case 214u: goto L_089D134C;
    case 215u: goto L_089D1354;
    case 216u: goto L_089D1364;
    case 217u: goto L_089D136C;
    case 218u: goto L_089D13B8;
    case 219u: goto L_089D13C4;
    case 220u: goto L_089D13D0;
    case 221u: goto L_089D13DC;
    case 222u: goto L_089D1408;
    case 223u: goto L_089D1424;
    case 224u: goto L_089D1430;
    case 225u: goto L_089D1438;
    case 226u: goto L_089D1448;
    case 227u: goto L_089D1460;
    case 228u: goto L_089D1468;
    case 229u: goto L_089D1480;
    case 230u: goto L_089D1488;
    case 231u: goto L_089D14A4;
    case 232u: goto L_089D14B0;
    case 233u: goto L_089D14CC;
    case 234u: goto L_089D14DC;
    case 235u: goto L_089D14E4;
    case 236u: goto L_089D14EC;
    case 237u: goto L_089D14F4;
    case 238u: goto L_089D14FC;
    case 239u: goto L_089D1504;
    case 240u: goto L_089D151C;
    case 241u: goto L_089D1524;
    case 242u: goto L_089D1540;
    case 243u: goto L_089D155C;
    case 244u: goto L_089D156C;
    case 245u: goto L_089D1574;
    case 246u: goto L_089D1580;
    case 247u: goto L_089D1588;
    case 248u: goto L_089D158C;
    case 249u: goto L_089D15BC;
    case 250u: goto L_089D15D8;
    case 251u: goto L_089D15E0;
    case 252u: goto L_089D15E8;
    case 253u: goto L_089D15F8;
    case 254u: goto L_089D1610;
    case 255u: goto L_089D1618;
    case 256u: goto L_089D162C;
    case 257u: goto L_089D1654;
    case 258u: goto L_089D165C;
    case 259u: goto L_089D1670;
    case 260u: goto L_089D1694;
    case 261u: goto L_089D16B0;
    case 262u: goto L_089D16BC;
    case 263u: goto L_089D16C4;
    case 264u: goto L_089D16CC;
    case 265u: goto L_089D16D4;
    case 266u: goto L_089D16F0;
    case 267u: goto L_089D16F8;
    case 268u: goto L_089D1700;
    case 269u: goto L_089D1704;
    case 270u: goto L_089D1734;
    case 271u: goto L_089D177C;
    case 272u: goto L_089D1790;
    case 273u: goto L_089D17E4;
    case 274u: goto L_089D1840;
    case 275u: goto L_089D1874;
    case 276u: goto L_089D189C;
    case 277u: goto L_089D191C;
    case 278u: goto L_089D1968;
    case 279u: goto L_089D1970;
    case 280u: goto L_089D1998;
    case 281u: goto L_089D19C0;
    case 282u: goto L_089D1A24;
    case 283u: goto L_089D1A40;
    case 284u: goto L_089D1A50;
    case 285u: goto L_089D1A58;
    case 286u: goto L_089D1A68;
    case 287u: goto L_089D1A6C;
    case 288u: goto L_089D1AA4;
    case 289u: goto L_089D1AB8;
    case 290u: goto L_089D1AC0;
    case 291u: goto L_089D1AEC;
    case 292u: goto L_089D1B1C;
    case 293u: goto L_089D1B34;
    case 294u: goto L_089D1B54;
    case 295u: goto L_089D1B60;
    case 296u: goto L_089D1B80;
    case 297u: goto L_089D1B9C;
    case 298u: goto L_089D1BA0;
    case 299u: goto L_089D1BB4;
    case 300u: goto L_089D1BC8;
    case 301u: goto L_089D1BD0;
    case 302u: goto L_089D1BE0;
    case 303u: goto L_089D1BE4;
    case 304u: goto L_089D1C0C;
    case 305u: goto L_089D1C14;
    case 306u: goto L_089D1C24;
    case 307u: goto L_089D1C44;
    case 308u: goto L_089D1C64;
    case 309u: goto L_089D1CA0;
    case 310u: goto L_089D1CD0;
    case 311u: goto L_089D1D28;
    case 312u: goto L_089D1D38;
    case 313u: goto L_089D1D40;
    case 314u: goto L_089D1D64;
    case 315u: goto L_089D1DAC;
    case 316u: goto L_089D1DB4;
    case 317u: goto L_089D1DE0;
    case 318u: goto L_089D1DFC;
    case 319u: goto L_089D1E0C;
    case 320u: goto L_089D1E18;
    case 321u: goto L_089D1E20;
    case 322u: goto L_089D1E28;
    case 323u: goto L_089D1E34;
    case 324u: goto L_089D1E48;
    case 325u: goto L_089D1E68;
    case 326u: goto L_089D1E90;
    case 327u: goto L_089D1ED8;
    case 328u: goto L_089D1F04;
    case 329u: goto L_089D1F20;
    case 330u: goto L_089D1F2C;
    case 331u: goto L_089D1F34;
    case 332u: goto L_089D1F3C;
    case 333u: goto L_089D1F44;
    case 334u: goto L_089D1F48;
    case 335u: goto L_089D1F50;
    case 336u: goto L_089D1F58;
    case 337u: goto L_089D1F6C;
    case 338u: goto L_089D1F8C;
    case 339u: goto L_089D1F94;
    case 340u: goto L_089D1FA4;
    case 341u: goto L_089D1FB4;
    case 342u: goto L_089D1FB8;
    case 343u: goto L_089D1FC0;
    case 344u: goto L_089D1FC8;
    case 345u: goto L_089D1FE0;
    case 346u: goto L_089D1FE4;
    case 347u: goto L_089D1FE8;
    case 348u: goto L_089D2018;
    case 349u: goto L_089D2020;
    case 350u: goto L_089D2024;
    case 351u: goto L_089D202C;
    case 352u: goto L_089D2040;
    case 353u: goto L_089D20A0;
    case 354u: goto L_089D20BC;
    case 355u: goto L_089D212C;
    case 356u: goto L_089D21C0;
    case 357u: goto L_089D21CC;
    case 358u: goto L_089D21D8;
    case 359u: goto L_089D21E4;
    case 360u: goto L_089D21F0;
    case 361u: goto L_089D21FC;
    case 362u: goto L_089D2208;
    case 363u: goto L_089D2210;
    case 364u: goto L_089D2218;
    case 365u: goto L_089D2234;
    case 366u: goto L_089D223C;
    case 367u: goto L_089D224C;
    case 368u: goto L_089D225C;
    case 369u: goto L_089D2260;
    case 370u: goto L_089D2268;
    case 371u: goto L_089D2270;
    case 372u: goto L_089D2288;
    case 373u: goto L_089D228C;
    case 374u: goto L_089D2290;
    case 375u: goto L_089D22C0;
    case 376u: goto L_089D22C8;
    case 377u: goto L_089D22D0;
    case 378u: goto L_089D22D8;
    case 379u: goto L_089D22E4;
    case 380u: goto L_089D22EC;
    case 381u: goto L_089D2304;
    case 382u: goto L_089D2324;
    case 383u: goto L_089D232C;
    case 384u: goto L_089D2334;
    case 385u: goto L_089D2344;
    case 386u: goto L_089D2350;
    case 387u: goto L_089D2390;
    case 388u: goto L_089D2398;
    case 389u: goto L_089D23A8;
    case 390u: goto L_089D23B0;
    case 391u: goto L_089D23B8;
    case 392u: goto L_089D23C0;
    case 393u: goto L_089D23C4;
    case 394u: goto L_089D23CC;
    case 395u: goto L_089D23E0;
    case 396u: goto L_089D2404;
    case 397u: goto L_089D240C;
    case 398u: goto L_089D241C;
    case 399u: goto L_089D242C;
    case 400u: goto L_089D243C;
    case 401u: goto L_089D244C;
    case 402u: goto L_089D245C;
    case 403u: goto L_089D246C;
    case 404u: goto L_089D247C;
    case 405u: goto L_089D248C;
    case 406u: goto L_089D24A4;
    case 407u: goto L_089D24BC;
    case 408u: goto L_089D24CC;
    case 409u: goto L_089D24E4;
    case 410u: goto L_089D24EC;
    case 411u: goto L_089D24FC;
    case 412u: goto L_089D250C;
    case 413u: goto L_089D251C;
    case 414u: goto L_089D2520;
    case 415u: goto L_089D253C;
    case 416u: goto L_089D2580;
    case 417u: goto L_089D2688;
    case 418u: goto L_089D26DC;
    case 419u: goto L_089D273C;
    case 420u: goto L_089D2748;
    case 421u: goto L_089D2758;
    case 422u: goto L_089D2764;
    case 423u: goto L_089D2784;
    case 424u: goto L_089D278C;
    case 425u: goto L_089D2794;
    case 426u: goto L_089D279C;
    case 427u: goto L_089D27A4;
    case 428u: goto L_089D27B8;
    case 429u: goto L_089D27BC;
    case 430u: goto L_089D27C0;
    case 431u: goto L_089D27C8;
    case 432u: goto L_089D27CC;
    case 433u: goto L_089D27E8;
    case 434u: goto L_089D2804;
    case 435u: goto L_089D2818;
    case 436u: goto L_089D2824;
    case 437u: goto L_089D2830;
    case 438u: goto L_089D2838;
    case 439u: goto L_089D284C;
    case 440u: goto L_089D2854;
    case 441u: goto L_089D2878;
    case 442u: goto L_089D2884;
    case 443u: goto L_089D288C;
    case 444u: goto L_089D2890;
    case 445u: goto L_089D28A0;
    case 446u: goto L_089D28B0;
    case 447u: goto L_089D28CC;
    case 448u: goto L_089D28D8;
    case 449u: goto L_089D2900;
    case 450u: goto L_089D2910;
    case 451u: goto L_089D291C;
    case 452u: goto L_089D2920;
    case 453u: goto L_089D2930;
    case 454u: goto L_089D2944;
    case 455u: goto L_089D2950;
    case 456u: goto L_089D2974;
    case 457u: goto L_089D29B0;
    case 458u: goto L_089D29BC;
    case 459u: goto L_089D29C8;
    case 460u: goto L_089D29D0;
    case 461u: goto L_089D2A1C;
    case 462u: goto L_089D2A24;
    case 463u: goto L_089D2A30;
    case 464u: goto L_089D2A38;
    case 465u: goto L_089D2A68;
    case 466u: goto L_089D2A78;
    case 467u: goto L_089D2A84;
    case 468u: goto L_089D2A8C;
    case 469u: goto L_089D2AA0;
    case 470u: goto L_089D2AB0;
    case 471u: goto L_089D2ABC;
    case 472u: goto L_089D2AC4;
    case 473u: goto L_089D2AD0;
    case 474u: goto L_089D2AD8;
    case 475u: goto L_089D2AEC;
    case 476u: goto L_089D2AF4;
    case 477u: goto L_089D2B08;
    case 478u: goto L_089D2B18;
    case 479u: goto L_089D2B1C;
    case 480u: goto L_089D2B28;
    case 481u: goto L_089D2B30;
    case 482u: goto L_089D2B44;
    case 483u: goto L_089D2B68;
    case 484u: goto L_089D2B8C;
    case 485u: goto L_089D2BD0;
    case 486u: goto L_089D2BE0;
    case 487u: goto L_089D2BEC;
    case 488u: goto L_089D2BF8;
    case 489u: goto L_089D2C00;
    case 490u: goto L_089D2C58;
    case 491u: goto L_089D2C70;
    case 492u: goto L_089D2C7C;
    case 493u: goto L_089D2C98;
    case 494u: goto L_089D2CA4;
    case 495u: goto L_089D2CB0;
    case 496u: goto L_089D2CB4;
    case 497u: goto L_089D2CC4;
    case 498u: goto L_089D2CE4;
    case 499u: goto L_089D2D04;
    case 500u: goto L_089D2D44;
    case 501u: goto L_089D2D5C;
    case 502u: goto L_089D2D68;
    case 503u: goto L_089D2D70;
    case 504u: goto L_089D2D80;
    case 505u: goto L_089D2D84;
    case 506u: goto L_089D2D90;
    case 507u: goto L_089D2DA0;
    case 508u: goto L_089D2DA8;
    case 509u: goto L_089D2DB8;
    case 510u: goto L_089D2DC8;
    case 511u: goto L_089D2DDC;
    case 512u: goto L_089D2DE8;
    case 513u: goto L_089D2DF0;
    case 514u: goto L_089D2DF8;
    case 515u: goto L_089D2E00;
    case 516u: goto L_089D2E08;
    case 517u: goto L_089D2E20;
    case 518u: goto L_089D2E28;
    case 519u: goto L_089D2E38;
    case 520u: goto L_089D2E40;
    case 521u: goto L_089D2E54;
    case 522u: goto L_089D2E5C;
    case 523u: goto L_089D2E6C;
    case 524u: goto L_089D2E74;
    case 525u: goto L_089D2E88;
    case 526u: goto L_089D2E9C;
    case 527u: goto L_089D2EB4;
    case 528u: goto L_089D2EB8;
    case 529u: goto L_089D2EDC;
    case 530u: goto L_089D2EE0;
    case 531u: goto L_089D2EFC;
    case 532u: goto L_089D2F10;
    case 533u: goto L_089D2F24;
    case 534u: goto L_089D2F2C;
    case 535u: goto L_089D2F40;
    case 536u: goto L_089D2F4C;
    case 537u: goto L_089D2F50;
    case 538u: goto L_089D2F58;
    case 539u: goto L_089D2F60;
    case 540u: goto L_089D2F78;
    case 541u: goto L_089D2F9C;
    case 542u: goto L_089D2FB8;
    case 543u: goto L_089D2FC4;
    case 544u: goto L_089D2FD0;
    case 545u: goto L_089D2FD4;
    case 546u: goto L_089D2FE4;
    case 547u: goto L_089D2FFC;
    case 548u: goto L_089D3050;
    case 549u: goto L_089D3064;
    case 550u: goto L_089D307C;
    case 551u: goto L_089D3090;
    case 552u: goto L_089D3098;
    case 553u: goto L_089D30AC;
    case 554u: goto L_089D30C4;
    case 555u: goto L_089D30FC;
    case 556u: goto L_089D3118;
    case 557u: goto L_089D3120;
    case 558u: goto L_089D314C;
    case 559u: goto L_089D3164;
    case 560u: goto L_089D316C;
    case 561u: goto L_089D317C;
    case 562u: goto L_089D318C;
    case 563u: goto L_089D31AC;
    case 564u: goto L_089D31BC;
    case 565u: goto L_089D31C8;
    case 566u: goto L_089D31D0;
    case 567u: goto L_089D31D8;
    case 568u: goto L_089D31E8;
    case 569u: goto L_089D31FC;
    case 570u: goto L_089D3220;
    case 571u: goto L_089D3248;
    case 572u: goto L_089D324C;
    case 573u: goto L_089D325C;
    case 574u: goto L_089D3270;
    case 575u: goto L_089D3284;
    case 576u: goto L_089D3298;
    case 577u: goto L_089D32DC;
    case 578u: goto L_089D32F0;
    case 579u: goto L_089D32FC;
    case 580u: goto L_089D3314;
    case 581u: goto L_089D3320;
    case 582u: goto L_089D3330;
    case 583u: goto L_089D333C;
    case 584u: goto L_089D335C;
    case 585u: goto L_089D3364;
    case 586u: goto L_089D3368;
    case 587u: goto L_089D3388;
    case 588u: goto L_089D33C0;
    case 589u: goto L_089D33CC;
    case 590u: goto L_089D33DC;
    case 591u: goto L_089D33E8;
    case 592u: goto L_089D3404;
    case 593u: goto L_089D3410;
    case 594u: goto L_089D3428;
    case 595u: goto L_089D3434;
    case 596u: goto L_089D3450;
    case 597u: goto L_089D3458;
    case 598u: goto L_089D3460;
    case 599u: goto L_089D348C;
    case 600u: goto L_089D3498;
    case 601u: goto L_089D34AC;
    case 602u: goto L_089D34B4;
    case 603u: goto L_089D34B8;
    case 604u: goto L_089D34D0;
    case 605u: goto L_089D3504;
    case 606u: goto L_089D3520;
    case 607u: goto L_089D3524;
    case 608u: goto L_089D3528;
    case 609u: goto L_089D3530;
    case 610u: goto L_089D353C;
    case 611u: goto L_089D3544;
    case 612u: goto L_089D355C;
    case 613u: goto L_089D3578;
    case 614u: goto L_089D357C;
    case 615u: goto L_089D3580;
    case 616u: goto L_089D3588;
    case 617u: goto L_089D359C;
    case 618u: goto L_089D35AC;
    case 619u: goto L_089D35B4;
    case 620u: goto L_089D35D8;
    case 621u: goto L_089D35FC;
    case 622u: goto L_089D3618;
    case 623u: goto L_089D361C;
    case 624u: goto L_089D3620;
    case 625u: goto L_089D3628;
    case 626u: goto L_089D3634;
    case 627u: goto L_089D363C;
    case 628u: goto L_089D3658;
    case 629u: goto L_089D3674;
    case 630u: goto L_089D3678;
    case 631u: goto L_089D367C;
    case 632u: goto L_089D3684;
    case 633u: goto L_089D36A0;
    case 634u: goto L_089D36B8;
    case 635u: goto L_089D36C4;
    case 636u: goto L_089D36CC;
    case 637u: goto L_089D36D8;
    case 638u: goto L_089D36E0;
    case 639u: goto L_089D36EC;
    case 640u: goto L_089D36F0;
    case 641u: goto L_089D36FC;
    case 642u: goto L_089D3700;
    case 643u: goto L_089D3708;
    case 644u: goto L_089D373C;
    case 645u: goto L_089D37FC;
    case 646u: goto L_089D3808;
    case 647u: goto L_089D38C8;
    case 648u: goto L_089D38D4;
    case 649u: goto L_089D3994;
    case 650u: goto L_089D39A0;
    case 651u: goto L_089D3A60;
    case 652u: goto L_089D3A6C;
    case 653u: goto L_089D3AD4;
    case 654u: goto L_089D3AE0;
    case 655u: goto L_089D3B48;
    case 656u: goto L_089D3B54;
    case 657u: goto L_089D3BB4;
    case 658u: goto L_089D3BC0;
    case 659u: goto L_089D3C20;
    case 660u: goto L_089D3C28;
    case 661u: goto L_089D3C48;
    case 662u: goto L_089D3CB0;
    case 663u: goto L_089D3CBC;
    case 664u: goto L_089D3D24;
    case 665u: goto L_089D3D30;
    case 666u: goto L_089D3D98;
    case 667u: goto L_089D3DA4;
    case 668u: goto L_089D3E0C;
    case 669u: goto L_089D3E18;
    case 670u: goto L_089D3E44;
    case 671u: goto L_089D3E50;
    case 672u: goto L_089D3E7C;
    case 673u: goto L_089D3E88;
    case 674u: goto L_089D3EC8;
    case 675u: goto L_089D3ED4;
    case 676u: goto L_089D3F14;
    case 677u: goto L_089D3F1C;
    case 678u: goto L_089D3F44;
    case 679u: goto L_089D3F50;
    case 680u: goto L_089D3F60;
    case 681u: goto L_089D3F70;
    case 682u: goto L_089D3F7C;
    case 683u: goto L_089D3F84;
    case 684u: goto L_089D3F94;
    case 685u: goto L_089D3F98;
    case 686u: goto L_089D3FA0;
    case 687u: goto L_089D3FAC;
    case 688u: goto L_089D3FBC;
    case 689u: goto L_089D3FD0;
    case 690u: goto L_089D3FD8;
    case 691u: goto L_089D3FE8;
    case 692u: goto L_089D3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D0000:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D002C;
      }
      goto L_089D000C;
    }
}
L_089D000C:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(1712)));
    if (hot_regs.g4 == 0u) {
    g20 = (ctx.gpr[17] | 0u);
    ctx.gpr[20] = g20;
        goto L_089D0094;
    }
    goto L_089D001C;
}
L_089D001C:
    hot_regs.g31 = (0x089D0024u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1712)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0024u) goto L_089D0024;
    return;
L_089D0024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089D0094;
      }
      goto L_089D002C;
    }
L_089D002C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0094;
      }
      goto L_089D0048;
    }
}
L_089D0048:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0060;
      }
      goto L_089D0058;
    }
L_089D0058:
    hot_regs.g31 = (0x089D0060u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(596)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0060u) goto L_089D0060;
    return;
L_089D0060:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    if (hot_regs.g4 != 0u) {
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
        goto L_089D0094;
    }
    goto L_089D006C;
L_089D006C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(944));
    hot_regs.g31 = (0x089D0078u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 387u, 0x08B0D970u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0078u) goto L_089D0078;
    return;
L_089D0078:
    hot_regs.g4 = (hot_regs.g2 < static_cast<std::uint32_t>(225) ? 1u : 0u);
    if (hot_regs.g4 != 0u) {
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
        goto L_089D0094;
    }
    goto L_089D0084;
L_089D0084:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089D0090u);
    hot_regs.g5 = (0u | 215u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 383u, 0x08B0D94Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0090u) goto L_089D0090;
    return;
L_089D0090:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_089D0094;
L_089D0094:
    hot_regs.g31 = (0x089D009Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 680u, 0x089CFB28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D009Cu) goto L_089D009C;
    return;
L_089D009C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (hot_regs.g2 << 6u);
    g17 = (ctx.gpr[18] + g4);
    g17 = (g17 + static_cast<std::uint32_t>(16));
    g4 = (0u | 1u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g4));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g17 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(44), g4);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089D00F0;
      }
      goto L_089D00E4;
    }
}
L_089D00E4:
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x089D00F0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D00F0u) goto L_089D00F0;
    return;
L_089D00F0:
{
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D01E0;
      }
      goto L_089D0110;
    }
}
L_089D0110:
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
          goto L_089D01C0;
      }
      goto L_089D012C;
    }
}
L_089D012C:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1712), ctx.gpr[17]);
    hot_regs.g31 = (0x089D013Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D013Cu) goto L_089D013C;
    return;
L_089D013C:
    { const bool branch_taken = ctx.gpr[20] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_089D01E0;
      }
      goto L_089D0144;
    }
L_089D0144:
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x089D0190u);
    hot_regs.g6 = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0190u) goto L_089D0190;
    return;
L_089D0190:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(248));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[20] + hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089D01ACu);
    hot_regs.g5 = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D01ACu) goto L_089D01AC;
    return;
L_089D01AC:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089D01B8u);
    hot_regs.g5 = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D01B8u) goto L_089D01B8;
    return;
L_089D01B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D01E0;
      }
      goto L_089D01C0;
    }
L_089D01C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D01E0;
      }
      goto L_089D01DC;
    }
}
L_089D01DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), ctx.gpr[17]);
    goto L_089D01E0;
L_089D01E0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    g4 = (ctx.gpr[17] - g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 6u));
    g5 = (g5 >> 26u);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 6u));
    g2 = (g4 << 16u);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 16u));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D0224:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    ctx.gpr[18] = (0u | 0u);
    g17 = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (g17 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_089D0244;
}
L_089D0244:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0258;
      }
      goto L_089D0250;
    }
L_089D0250:
    hot_regs.g31 = (0x089D0258u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089D0634;
L_089D0258:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 40 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089D0244;
      }
      goto L_089D026C;
    }
}
L_089D026C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D0284:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[19] = (0u | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g18 = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (g18 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    hot_regs.f20 = f20;
    goto L_089D02B4;
}
}
L_089D02B4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0310;
      }
      goto L_089D02C0;
    }
L_089D02C0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(32)));
    f12 = f12 - f13;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(36)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(40)));
    f13 = f13 - ctx.fpr[16];
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089D0310;
      }
      goto L_089D0308;
    }
}
}
L_089D0308:
    hot_regs.g31 = (0x089D0310u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0310u) goto L_089D0310;
    return;
L_089D0310:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 40 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089D02B4;
      }
      goto L_089D0324;
    }
}
L_089D0324:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
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
L_089D0344:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g5 = (g5 << 6u);
    g4 = (g4 + g5);
    g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D0360:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g5 << 16u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    hot_regs.g5 = (hot_regs.g5 << 6u);
    ctx.gpr[16] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g31 = (0x089D0384u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0384u) goto L_089D0384;
    return;
L_089D0384:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
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
L_089D0398:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[18] = (0u | 0u);
    g17 = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (g17 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_089D03B8;
}
L_089D03B8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03D0;
      }
      goto L_089D03C4;
    }
L_089D03C4:
    hot_regs.g31 = (0x089D03CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D03CCu) goto L_089D03CC;
    return;
L_089D03CC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    goto L_089D03D0;
L_089D03D0:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 40 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089D03B8;
      }
      goto L_089D03E4;
    }
}
L_089D03E4:
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
L_089D03FC:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[18] = (0u | 0u);
    g17 = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (g17 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_089D041C;
}
L_089D041C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0430;
      }
      goto L_089D0428;
    }
L_089D0428:
    hot_regs.g31 = (0x089D0430u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0430u) goto L_089D0430;
    return;
L_089D0430:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 40 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089D041C;
      }
      goto L_089D0444;
    }
}
L_089D0444:
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
L_089D045C:
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
L_089D0498:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g6);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(22), hot_regs.g4));
    hot_regs.g4 = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(25), hot_regs.g4));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[20];
    ctx.gpr[19] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_089D04F0;
      }
      goto L_089D04D8;
    }
L_089D04D8:
    hot_regs.g4 = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(20), hot_regs.g4));
    hot_regs.g4 = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(23), hot_regs.g4));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089D05D0;
      }
      goto L_089D04F0;
    }
L_089D04F0:
    hot_regs.g4 = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(22), hot_regs.g4));
    hot_regs.g4 = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(25), hot_regs.g4));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089D052C;
      }
      goto L_089D0508;
    }
L_089D0508:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(22), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(25), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 << 16u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 16u));
    hot_regs.g31 = (0x089D0528u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0528u) goto L_089D0528;
    return;
L_089D0528:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    goto L_089D052C;
L_089D052C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0558;
      }
      goto L_089D0538;
    }
L_089D0538:
    hot_regs.g5 = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(20), hot_regs.g5));
    hot_regs.g5 = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(23), hot_regs.g5));
    hot_regs.g5 = (hot_regs.g5 << 16u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[20];
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_089D0560;
      }
      goto L_089D0550;
    }
L_089D0550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0584;
      }
      goto L_089D0558;
    }
L_089D0558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0614;
      }
      goto L_089D0560;
    }
L_089D0560:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g6 = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(20), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(23), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 << 16u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 16u));
    hot_regs.g31 = (0x089D0580u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0580u) goto L_089D0580;
    return;
L_089D0580:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_089D0584;
L_089D0584:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2238u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(14864));
    hot_regs.g5 = (0u | 0u);
    if (ctx.gpr[18] != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    hot_regs.g6 = g6;
        goto L_089D0598;
    }
    goto L_089D0598;
}
L_089D0598:
    hot_regs.g7 = (0u | 0u);
    if (hot_regs.g4 != 0u) {
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(112)));
        goto L_089D05A4;
    }
    goto L_089D05A4;
L_089D05A4:
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(15), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(18), ctx.gpr[1]));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[1]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19)));
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g6 = (hot_regs.g7 | 0u);
    hot_regs.g7 = (ctx.gpr[8] | 0u);
    hot_regs.g31 = (0x089D05C8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089D1074;
L_089D05C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0614;
      }
      goto L_089D05D0;
    }
L_089D05D0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(3));
    hot_regs.g31 = (0x089D05DCu);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    goto L_089D045C;
L_089D05DC:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(14864));
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
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(15), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(18), ctx.gpr[1]));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[1]);
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19)));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x089D0614u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 710u, 0x089CFED4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0614u) goto L_089D0614;
    return;
L_089D0614:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_089D0634:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(372), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(376), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(380), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(384), hot_regs.g31);
    g5 = (16256u << 16u);
    f13 = std::bit_cast<float>(g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(56)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g5 = (15107u << 16u);
    g5 = (g5 | 4719u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.set_fpu_condition((f13 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_089D0690;
    }
    goto L_089D0690;
}
}
L_089D0690:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0A58;
      }
      goto L_089D06A0;
    }
L_089D06A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D094C;
      }
      goto L_089D06D0;
    }
}
L_089D06D0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0720;
      }
      goto L_089D06EC;
    }
}
L_089D06EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089D0710;
      }
      goto L_089D06F8;
    }
L_089D06F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D0860;
      }
      goto L_089D0708;
    }
L_089D0708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0874;
      }
      goto L_089D0710;
    }
L_089D0710:
    hot_regs.g31 = (0x089D0718u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0718u) goto L_089D0718;
    return;
L_089D0718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D104C;
      }
      goto L_089D0720;
    }
L_089D0720:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089D0738u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0738u) goto L_089D0738;
    return;
L_089D0738:
    hot_regs.g31 = (0x089D0740u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0740u) goto L_089D0740;
    return;
L_089D0740:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (15477u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089D0774u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0774u) goto L_089D0774;
    return;
L_089D0774:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089D079Cu);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D079Cu) goto L_089D079C;
    return;
L_089D079C:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (15267u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f22 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 31u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x089D0810u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0810u) goto L_089D0810;
    return;
L_089D0810:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 31u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x089D0858u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0858u) goto L_089D0858;
    return;
L_089D0858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D104C;
      }
      goto L_089D0860;
    }
L_089D0860:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    f12 = f12 - hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_089D0874;
}
L_089D0874:
    hot_regs.g31 = (0x089D087Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D087Cu) goto L_089D087C;
    return;
L_089D087C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D08B4;
      }
      goto L_089D0884;
    }
L_089D0884:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D08B4;
      }
      goto L_089D0890;
    }
L_089D0890:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0944;
      }
      goto L_089D08A0;
    }
}
L_089D08A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17046u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0944;
      }
      goto L_089D08B4;
    }
}
L_089D08B4:
    hot_regs.g31 = (0x089D08BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D08BCu) goto L_089D08BC;
    return;
L_089D08BC:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_089D08FC;
      }
      goto L_089D08C4;
    }
L_089D08C4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (16281u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 33u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x089D08F4u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D08F4u) goto L_089D08F4;
    return;
L_089D08F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0944;
      }
      goto L_089D08FC;
    }
L_089D08FC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (16281u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 33u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x089D092Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D092Cu) goto L_089D092C;
    return;
L_089D092C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0944;
      }
      goto L_089D0934;
    }
L_089D0934:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (32u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    goto L_089D0944;
}
L_089D0944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0A58;
      }
      goto L_089D094C;
    }
L_089D094C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D09D4;
      }
      goto L_089D0968;
    }
}
L_089D0968:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = g4 != ctx.gpr[16];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D09C4;
      }
      goto L_089D0978;
    }
}
L_089D0978:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D0A58;
      }
      goto L_089D0984;
    }
L_089D0984:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g6 = (16281u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x089D09BCu);
    hot_regs.g6 = (0u | 33u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 71u, 0x08B0452Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D09BCu) goto L_089D09BC;
    return;
L_089D09BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0A58;
      }
      goto L_089D09C4;
    }
L_089D09C4:
    hot_regs.g31 = (0x089D09CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D09CCu) goto L_089D09CC;
    return;
L_089D09CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D104C;
      }
      goto L_089D09D4;
    }
L_089D09D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0A58;
      }
      goto L_089D09F4;
    }
}
L_089D09F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(452)));
    { const bool branch_taken = g4 != ctx.gpr[16];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0A18;
      }
      goto L_089D0A04;
    }
}
L_089D0A04:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = g4;
        goto L_089D0A28;
    }
    goto L_089D0A10;
}
L_089D0A10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0A58;
      }
      goto L_089D0A18;
    }
L_089D0A18:
    hot_regs.g31 = (0x089D0A20u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0A20u) goto L_089D0A20;
    return;
L_089D0A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D104C;
      }
      goto L_089D0A28;
    }
L_089D0A28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (2048u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0A58;
      }
      goto L_089D0A3C;
    }
}
L_089D0A3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g5 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x089D0A58u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 108u, 0x0882C728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0A58u) goto L_089D0A58;
    return;
L_089D0A58:
    hot_regs.g31 = (0x089D0A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0A60u) goto L_089D0A60;
    return;
L_089D0A60:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D0B30;
      }
      goto L_089D0A68;
    }
L_089D0A68:
    hot_regs.g31 = (0x089D0A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0A70u) goto L_089D0A70;
    return;
L_089D0A70:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D0B30;
      }
      goto L_089D0A7C;
    }
L_089D0A7C:
    hot_regs.g31 = (0x089D0A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0A84u) goto L_089D0A84;
    return;
L_089D0A84:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (2048u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0B30;
      }
      goto L_089D0A98;
    }
}
L_089D0A98:
    hot_regs.g31 = (0x089D0AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0AA0u) goto L_089D0AA0;
    return;
L_089D0AA0:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D0B30;
      }
      goto L_089D0AF0;
    }
L_089D0AF0:
    hot_regs.g31 = (0x089D0AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0AF8u) goto L_089D0AF8;
    return;
L_089D0AF8:
    hot_regs.g31 = (0x089D0B00u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 665u, 0x089474ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0B00u) goto L_089D0B00;
    return;
L_089D0B00:
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g31 = (0x089D0B0Cu);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(14864));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0B0Cu) goto L_089D0B0C;
    return;
L_089D0B0C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    g4 = (16204u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x089D0B30u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g4 = g4;
    goto L_089D1074;
}
L_089D0B30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0EF4;
      }
      goto L_089D0B44;
    }
}
L_089D0B44:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    g4 = (16025u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0B74;
      }
      goto L_089D0B64;
    }
}
L_089D0B64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(400));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0BB0;
      }
      goto L_089D0B74;
    }
}
L_089D0B74:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    g4 = (16179u << 16u);
    g4 = (g4 | 13107u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0BA4;
      }
      goto L_089D0B94;
    }
}
L_089D0B94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(200));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0BB0;
      }
      goto L_089D0BA4;
    }
}
L_089D0BA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), g4);
    hot_regs.g4 = g4;
    goto L_089D0BB0;
}
L_089D0BB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g16 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0DC4;
      }
      goto L_089D0BD0;
    }
}
L_089D0BD0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0DC4;
      }
      goto L_089D0BF0;
    }
}
L_089D0BF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 198u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0C5C;
      }
      goto L_089D0C04;
    }
}
L_089D0C04:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (49024u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g31 = (0x089D0C30u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 601u, 0x089CF564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0C30u) goto L_089D0C30;
    return;
L_089D0C30:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    g4 = (15897u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089D0DC4;
      }
      goto L_089D0C5C;
    }
}
}
L_089D0C5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 222u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0CD4;
      }
      goto L_089D0C70;
    }
}
L_089D0C70:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16428u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    hot_regs.g31 = (0x089D0CA8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 601u, 0x089CF564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0CA8u) goto L_089D0CA8;
    return;
L_089D0CA8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    g4 = (15897u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089D0DC4;
      }
      goto L_089D0CD4;
    }
}
}
L_089D0CD4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0D58;
      }
      goto L_089D0CE4;
    }
}
L_089D0CE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089D0D0C;
      }
      goto L_089D0CFC;
    }
}
L_089D0CFC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089D0D0C;
}
L_089D0D0C:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089D0D30u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 601u, 0x089CF564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0D30u) goto L_089D0D30;
    return;
L_089D0D30:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    g4 = (15897u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089D0DC4;
      }
      goto L_089D0D58;
    }
}
}
L_089D0D58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0DC4;
      }
      goto L_089D0D6C;
    }
}
L_089D0D6C:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (48896u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    hot_regs.g31 = (0x089D0DA0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 601u, 0x089CF564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0DA0u) goto L_089D0DA0;
    return;
L_089D0DA0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    g4 = (15897u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089D0DC4;
}
}
L_089D0DC4:
    hot_regs.f22 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (15436u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x089D0DF4u);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0DF4u) goto L_089D0DF4;
    return;
L_089D0DF4:
    hot_regs.f14 = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g4 = (0u | 27u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x089D0E30u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0E30u) goto L_089D0E30;
    return;
L_089D0E30:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (48928u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    hot_regs.g4 = (16160u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x089D0E58u);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0E58u) goto L_089D0E58;
    return;
L_089D0E58:
    hot_regs.f14 = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(176)));
    hot_regs.f12 = hot_regs.f15 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089D0E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0E78u) goto L_089D0E78;
    return;
L_089D0E78:
    hot_regs.f12 = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(180)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16416u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x089D0EA0u);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0EA0u) goto L_089D0EA0;
    return;
L_089D0EA0:
    hot_regs.f14 = hot_regs.f20 - ctx.fpr[26];
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f14 = ctx.fpr[26] + hot_regs.f14;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g4 = (16025u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 57u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x089D0EF4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0EF4u) goto L_089D0EF4;
    return;
L_089D0EF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (hot_regs.g5 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0F14;
      }
      goto L_089D0F08;
    }
}
L_089D0F08:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1044;
      }
      goto L_089D0F14;
    }
L_089D0F14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D0F34;
      }
      goto L_089D0F28;
    }
}
L_089D0F28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), g4);
    hot_regs.g4 = g4;
    goto L_089D0F34;
}
L_089D0F34:
    hot_regs.g31 = (0x089D0F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0F3Cu) goto L_089D0F3C;
    return;
L_089D0F3C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g17 = (hot_regs.g2 & 65535u);
    g17 = (g17 & 127u);
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    g4 = (16544u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089D0FE8;
      }
      goto L_089D0F74;
    }
}
}
L_089D0F74:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5048)));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (16608u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g4 = (49376u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    hot_regs.g4 = (hot_regs.g4 >> 31u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    hot_regs.g4 = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16928u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x089D0FE8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D0FE8u) goto L_089D0FE8;
    return;
L_089D0FE8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f15 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    hot_regs.g4 = (16704u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[17]);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g4 = (15360u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (0u | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089D103Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D103Cu) goto L_089D103C;
    return;
L_089D103C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D104C;
      }
      goto L_089D1044;
    }
L_089D1044:
    hot_regs.g31 = (0x089D104Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D104Cu) goto L_089D104C;
    return;
L_089D104C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(356)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(360)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(364)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(368)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(372)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(376)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(380)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(384)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D1074:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    ctx.gpr[18] = (g7 & 255u);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[22] = (0u | 0u);
    g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(72)));
    g7 = (g7 & 14u);
    g7 = (g7 ^ 6u);
    g7 = (g7 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g7 = (g7 & 255u);
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    { const bool branch_taken = g7 == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089D1120;
      }
      goto L_089D10D4;
    }
}
L_089D10D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1118;
      }
      goto L_089D10E0;
    }
L_089D10E0:
    hot_regs.g31 = (0x089D10E8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D10E8u) goto L_089D10E8;
    return;
L_089D10E8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1110;
      }
      goto L_089D10F0;
    }
L_089D10F0:
    hot_regs.g31 = (0x089D10F8u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 680u, 0x089CFB28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D10F8u) goto L_089D10F8;
    return;
L_089D10F8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D130C;
      }
      goto L_089D1108;
    }
L_089D1108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1700;
      }
      goto L_089D1110;
    }
L_089D1110:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089D1704;
      }
      goto L_089D1118;
    }
L_089D1118:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089D1704;
      }
      goto L_089D1120;
    }
L_089D1120:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D1170;
      }
      goto L_089D113C;
    }
}
L_089D113C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(478))))));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    // nop
      if (branch_taken) {
          goto L_089D1160;
      }
      goto L_089D114C;
    }
L_089D114C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(452)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D1168;
      }
      goto L_089D1158;
    }
}
L_089D1158:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089D1704;
      }
      goto L_089D1160;
    }
L_089D1160:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089D1704;
      }
      goto L_089D1168;
    }
L_089D1168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D10F0;
      }
      goto L_089D1170;
    }
L_089D1170:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D11D4;
      }
      goto L_089D118C;
    }
}
L_089D118C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D11B0;
      }
      goto L_089D119C;
    }
L_089D119C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D10F0;
      }
      goto L_089D11A8;
    }
L_089D11A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D11B8;
      }
      goto L_089D11B0;
    }
L_089D11B0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089D1704;
      }
      goto L_089D11B8;
    }
L_089D11B8:
    hot_regs.g31 = (0x089D11C0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(944));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 387u, 0x08B0D970u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D11C0u) goto L_089D11C0;
    return;
L_089D11C0:
    hot_regs.g4 = (hot_regs.g2 < static_cast<std::uint32_t>(225) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D10F0;
      }
      goto L_089D11CC;
    }
L_089D11CC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089D1704;
      }
      goto L_089D11D4;
    }
L_089D11D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D10F0;
      }
      goto L_089D11F0;
    }
}
L_089D11F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089D120Cu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D120Cu) goto L_089D120C;
    return;
L_089D120C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1304;
      }
      goto L_089D121C;
    }
L_089D121C:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-3488)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D1234:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1248;
      }
      goto L_089D1240;
    }
L_089D1240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1304;
      }
      goto L_089D1248;
    }
L_089D1248:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089D1704;
      }
      goto L_089D1250;
    }
L_089D1250:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(368)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1274;
      }
      goto L_089D125C;
    }
L_089D125C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D127C;
      }
      goto L_089D126C;
    }
L_089D126C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_089D129C;
      }
      goto L_089D1274;
    }
L_089D1274:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089D1704;
      }
      goto L_089D127C;
    }
L_089D127C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x089D128Cu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D128Cu) goto L_089D128C;
    return;
L_089D128C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(g21 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_089D129C;
}
L_089D129C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(456)));
    g4 = (17274u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D12F4;
      }
      goto L_089D12B8;
    }
}
L_089D12B8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[23] = (0u | 5u);
      if (branch_taken) {
          goto L_089D12E4;
      }
      goto L_089D12C8;
    }
L_089D12C8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(49));
    hot_regs.g31 = (0x089D12D8u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D12D8u) goto L_089D12D8;
    return;
L_089D12D8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(49)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089D12E4;
L_089D12E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = g4 != ctx.gpr[23];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D12FC;
      }
      goto L_089D12F4;
    }
}
L_089D12F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1304;
      }
      goto L_089D12FC;
    }
L_089D12FC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089D1704;
      }
      goto L_089D1304;
    }
L_089D1304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D10F0;
      }
      goto L_089D130C;
    }
L_089D130C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (g4 << 6u);
    g22 = (ctx.gpr[20] + g4);
    g22 = (g22 + static_cast<std::uint32_t>(16));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[23] = (0u | 1u);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_089D1488;
      }
      goto L_089D1334;
    }
}
L_089D1334:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1712), ctx.gpr[22]);
    hot_regs.g31 = (0x089D1344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1344u) goto L_089D1344;
    return;
L_089D1344:
    { const bool branch_taken = ctx.gpr[20] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_089D1430;
      }
      goto L_089D134C;
    }
L_089D134C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D136C;
      }
      goto L_089D1354;
    }
L_089D1354:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089D1364u);
    hot_regs.g6 = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1364u) goto L_089D1364;
    return;
L_089D1364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D13C4;
      }
      goto L_089D136C;
    }
L_089D136C:
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g5);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089D13B8u);
    hot_regs.g6 = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D13B8u) goto L_089D13B8;
    return;
L_089D13B8:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089D13C4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 60u, 0x089103CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D13C4u) goto L_089D13C4;
    return;
L_089D13C4:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089D13D0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D13D0u) goto L_089D13D0;
    return;
L_089D13D0:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089D13DCu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D13DCu) goto L_089D13DC;
    return;
L_089D13DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1368), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (49152u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089D1408u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1408u) goto L_089D1408;
    return;
L_089D1408:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(248));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[20] + hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089D1424u);
    hot_regs.g5 = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1424u) goto L_089D1424;
    return;
L_089D1424:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089D1430u);
    hot_regs.g5 = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1430u) goto L_089D1430;
    return;
L_089D1430:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D158C;
      }
      goto L_089D1438;
    }
L_089D1438:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D1468;
      }
      goto L_089D1448;
    }
L_089D1448:
    hot_regs.g4 = (0u | 15u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089D1460u);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1460u) goto L_089D1460;
    return;
L_089D1460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D158C;
      }
      goto L_089D1468;
    }
L_089D1468:
    hot_regs.g4 = (0u | 14u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089D1480u);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1480u) goto L_089D1480;
    return;
L_089D1480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D158C;
      }
      goto L_089D1488;
    }
L_089D1488:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D14B0;
      }
      goto L_089D14A4;
    }
}
L_089D14A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D158C;
      }
      goto L_089D14B0;
    }
L_089D14B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D1524;
      }
      goto L_089D14CC;
    }
}
L_089D14CC:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(596), ctx.gpr[22]);
    hot_regs.g31 = (0x089D14DCu);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 217u, 0x08AECC3Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D14DCu) goto L_089D14DC;
    return;
L_089D14DC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D14F4;
      }
      goto L_089D14E4;
    }
L_089D14E4:
    hot_regs.g31 = (0x089D14ECu);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 181u, 0x08AECAA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D14ECu) goto L_089D14EC;
    return;
L_089D14EC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D14FC;
      }
      goto L_089D14F4;
    }
L_089D14F4:
    hot_regs.g31 = (0x089D14FCu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 526u, 0x08B0E268u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D14FCu) goto L_089D14FC;
    return;
L_089D14FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D151C;
      }
      goto L_089D1504;
    }
L_089D1504:
    hot_regs.g4 = (0u | 16u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089D151Cu);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D151Cu) goto L_089D151C;
    return;
L_089D151C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D158C;
      }
      goto L_089D1524;
    }
L_089D1524:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D158C;
      }
      goto L_089D1540;
    }
}
L_089D1540:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089D155Cu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D155Cu) goto L_089D155C;
    return;
L_089D155C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    g4 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    hot_regs.g4 = g4;
        goto L_089D1580;
    }
    goto L_089D156C;
}
L_089D156C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_089D158C;
      }
      goto L_089D1574;
    }
L_089D1574:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(376), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D158C;
      }
      goto L_089D1580;
    }
L_089D1580:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D158C;
      }
      goto L_089D1588;
    }
L_089D1588:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(368), ctx.gpr[22]);
    goto L_089D158C;
L_089D158C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g22 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D15F8;
      }
      goto L_089D15BC;
    }
}
L_089D15BC:
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
          goto L_089D15F8;
      }
      goto L_089D15D8;
    }
}
L_089D15D8:
    hot_regs.g31 = (0x089D15E0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D15E0u) goto L_089D15E0;
    return;
L_089D15E0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D15F8;
      }
      goto L_089D15E8;
    }
L_089D15E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(3333));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(40), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D1694;
      }
      goto L_089D15F8;
    }
}
L_089D15F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    hot_regs.g5 = (0u | 4u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11700)));
    { const bool branch_taken = g4 != hot_regs.g5;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11704)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D1654;
      }
      goto L_089D1610;
    }
}
L_089D1610:
    hot_regs.g31 = (0x089D1618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1618u) goto L_089D1618;
    return;
L_089D1618:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089D162Cu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D162Cu) goto L_089D162C;
    return;
L_089D162C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (hot_regs.g2 >> 31u);
    g4 = (ctx.gpr[1] | g4);
    g4 = (g4 | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g5 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(4000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(40), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089D1694;
      }
      goto L_089D1654;
    }
}
L_089D1654:
    hot_regs.g31 = (0x089D165Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D165Cu) goto L_089D165C;
    return;
L_089D165C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089D1670u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1670u) goto L_089D1670;
    return;
L_089D1670:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (hot_regs.g2 >> 31u);
    g4 = (ctx.gpr[1] | g4);
    g4 = (g4 | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g5 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(40), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089D1694;
}
L_089D1694:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x089D16B0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D16B0u) goto L_089D16B0;
    return;
L_089D16B0:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D16CC;
      }
      goto L_089D16BC;
    }
L_089D16BC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089D16CC;
      }
      goto L_089D16C4;
    }
L_089D16C4:
    hot_regs.g31 = (0x089D16CCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D16CCu) goto L_089D16CC;
    return;
L_089D16CC:
    hot_regs.g31 = (0x089D16D4u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 672u, 0x089CFA7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D16D4u) goto L_089D16D4;
    return;
L_089D16D4:
{
    std::uint32_t g22 = ctx.gpr[22];
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[23]));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1700;
      }
      goto L_089D16F0;
    }
}
L_089D16F0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1700;
      }
      goto L_089D16F8;
    }
L_089D16F8:
    hot_regs.g31 = (0x089D1700u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 602u, 0x089CF58Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1700u) goto L_089D1700;
    return;
L_089D1700:
    hot_regs.g2 = (ctx.gpr[22] | 0u);
    goto L_089D1704;
L_089D1704:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D1734:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), hot_regs.g31);
    ctx.gpr[16] = (g4 | 0u);
    g17 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(g17) < 40 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089D1A68;
      }
      goto L_089D177C;
    }
}
L_089D177C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] << 6u);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D1A58;
      }
      goto L_089D1790;
    }
}
L_089D1790:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (ctx.gpr[17] << 6u);
    g4 = (ctx.gpr[16] + g4);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    f13 = f13 - f14;
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    f15 = f15 - f16;
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f13 = f13 + f15;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    f14 = f14 - ctx.fpr[17];
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = f13 + f14;
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    ctx.set_fpu_condition((f13 < f16));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_089D1A58;
      }
      goto L_089D17E4;
    }
}
}
L_089D17E4:
    hot_regs.g4 = (ctx.gpr[17] << 6u);
    ctx.gpr[18] = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (15428u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39846u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (0u | 210u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 240u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 90u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089D1840u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1840u) goto L_089D1840;
    return;
L_089D1840:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (15477u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089D1874u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1874u) goto L_089D1874;
    return;
L_089D1874:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089D189Cu);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D189Cu) goto L_089D189C;
    return;
L_089D189C:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (15267u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (16281u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (0u | 28u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089D191Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D191Cu) goto L_089D191C;
    return;
L_089D191C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16307u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 13107u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 28u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089D1968u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1968u) goto L_089D1968;
    return;
L_089D1968:
    hot_regs.g31 = (0x089D1970u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1970u) goto L_089D1970;
    return;
L_089D1970:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089D1998u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1998u) goto L_089D1998;
    return;
L_089D1998:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[28] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089D19C0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D19C0u) goto L_089D19C0;
    return;
L_089D19C0:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = (15897u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 28u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x089D1A24u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1A24u) goto L_089D1A24;
    return;
L_089D1A24:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D1A50;
      }
      goto L_089D1A40;
    }
L_089D1A40:
    hot_regs.g4 = (ctx.gpr[17] << 6u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g31 = (0x089D1A50u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1A50u) goto L_089D1A50;
    return;
L_089D1A50:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089D1A6C;
      }
      goto L_089D1A58;
    }
L_089D1A58:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 40 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089D177C;
      }
      goto L_089D1A68;
    }
}
L_089D1A68:
    hot_regs.g2 = (0u | 0u);
    goto L_089D1A6C;
L_089D1A6C:
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
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D1AA4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g31 = (0x089D1AB8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(14864));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 674u, 0x089CFABCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1AB8u) goto L_089D1AB8;
    return;
L_089D1AB8:
    hot_regs.g31 = (0x089D1AC0u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-11696));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1AC0u) goto L_089D1AC0;
    return;
L_089D1AC0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(9636), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (g28 + static_cast<std::uint32_t>(-11684));
    g5 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(9636)));
    g5 = (g5 << 2u);
    g6 = (2237u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-30144));
    g5 = (g5 + g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D1AEC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (18804u << 16u);
    g5 = (g5 | 9216u);
    f12 = std::bit_cast<float>(g5);
    hot_regs.g2 = (g4 | 0u);
    g5 = (51572u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 | 9216u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089D1B1C:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f15));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D1B34:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g7 << 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089D1B54u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1B54u) goto L_089D1B54;
    return;
L_089D1B54:
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
L_089D1B60:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g5);
    hot_regs.g7 = (hot_regs.g5 << 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x089D1B80u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1B80u) goto L_089D1B80;
    return;
L_089D1B80:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089D1BB4;
      }
      goto L_089D1B9C;
    }
L_089D1B9C:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    goto L_089D1BA0;
L_089D1BA0:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g9 = ctx.gpr[9];
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), 0u);
    g6 = (g6 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    g9 = (g9 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = g6;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089D1BA0;
      }
      goto L_089D1BB4;
    }
}
L_089D1BB4:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(hot_regs.g2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D1C24;
      }
      goto L_089D1BC8;
    }
L_089D1BC8:
    ctx.gpr[9] = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (0u | 0u);
    goto L_089D1BD0;
L_089D1BD0:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (ctx.gpr[11] + ctx.gpr[3]);
    g10 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g10 == 0u;
    // nop
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_089D1C14;
      }
      goto L_089D1BE0;
    }
}
L_089D1BE0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    goto L_089D1BE4;
L_089D1BE4:
{
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    hot_regs.g2 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    g11 = (g11 & ctx.gpr[9]);
    g11 = (g11 << 2u);
    g11 = (ctx.gpr[8] + g11);
    ctx.gpr[12] = (aot_mem.aot_load32(g11 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    aot_mem.aot_store32(g11 + static_cast<std::uint32_t>(0), g10);
    g10 = (hot_regs.g2 | 0u);
    if (g10 != 0u) {
    g11 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
        goto L_089D1BE4;
    }
    goto L_089D1C0C;
}
L_089D1C0C:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    goto L_089D1C14;
L_089D1C14:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089D1BD0;
      }
      goto L_089D1C24;
    }
}
L_089D1C24:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g6 = (hot_regs.g2 << 2u);
    hot_regs.g5 = (ctx.gpr[11] | 0u);
    hot_regs.g31 = (0x089D1C44u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1C44u) goto L_089D1C44;
    return;
L_089D1C44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D1C64:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(17));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x089D1CA0u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1CA0u) goto L_089D1CA0;
    return;
L_089D1CA0:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089D1CD0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1CD0u) goto L_089D1CD0;
    return;
L_089D1CD0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (ctx.gpr[20] + ctx.gpr[18]);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g5 = (ctx.gpr[17] & g5);
    g5 = (g5 << 2u);
    g7 = (g7 + g5);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), g7);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g5 = (g7 + g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    g7 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g7);
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g6 = (16384u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089D1D40;
      }
      goto L_089D1D28;
    }
}
L_089D1D28:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(-2));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089D1D40;
      }
      goto L_089D1D38;
    }
}
L_089D1D38:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g31 = (0x089D1D40u);
    g5 = (g5 + g5);
    hot_regs.g5 = g5;
    goto L_089D1B60;
}
L_089D1D40:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
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
L_089D1D64:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (g5 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g5 = (g19 >> 5u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g6 < g5 ? 1u : 0u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = hot_regs.g7 != 0u;
    ctx.gpr[18] = (g19 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089D1DE0;
      }
      goto L_089D1DAC;
    }
}
L_089D1DAC:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    g7 = (ctx.gpr[17] + g7);
    hot_regs.g7 = g7;
    goto L_089D1DB4;
}
L_089D1DB4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g19 = ctx.gpr[19];
    g8 = (g19 << 5u);
    g9 = (g19 >> 2u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0))))));
    g8 = (g8 + g9);
    g9 = (ctx.gpr[10] & 255u);
    g8 = (g8 + g9);
    g19 = (g19 ^ g8);
    g6 = (g6 - g5);
    g8 = (g6 < g5 ? 1u : 0u);
    { const bool branch_taken = g8 == 0u;
    g7 = (g7 - g5);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089D1DB4;
      }
      goto L_089D1DE0;
    }
}
L_089D1DE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g4 = (ctx.gpr[19] & g4);
    g4 = (g4 << 2u);
    g4 = (g20 + g4);
    g20 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g20 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089D1E34;
      }
      goto L_089D1DFC;
    }
}
L_089D1DFC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[20] | 0u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = g5 != ctx.gpr[18];
    g5 = (g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089D1E28;
      }
      goto L_089D1E0C;
    }
}
L_089D1E0C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089D1E18u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1E18u) goto L_089D1E18;
    return;
L_089D1E18:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1E28;
      }
      goto L_089D1E20;
    }
L_089D1E20:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089D1E48;
      }
      goto L_089D1E28;
    }
L_089D1E28:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g20 != 0u;
    // nop
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089D1DFC;
      }
      goto L_089D1E34;
    }
}
L_089D1E34:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089D1E48u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    goto L_089D1C64;
L_089D1E48:
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
L_089D1E68:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089D1E90u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1E90u) goto L_089D1E90;
    return;
L_089D1E90:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 2u);
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(g4));
    g4 = (0u | 7u);
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(16)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(8), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(16)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g2);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D1ED8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D1F04:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089D1F58;
      }
      goto L_089D1F20;
    }
}
L_089D1F20:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D1F44;
      }
      goto L_089D1F2C;
    }
L_089D1F2C:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (ctx.gpr[16] & 1u);
        goto L_089D1F48;
    }
    goto L_089D1F34;
L_089D1F34:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (ctx.gpr[16] & 1u);
        goto L_089D1F48;
    }
    goto L_089D1F3C;
L_089D1F3C:
    hot_regs.g31 = (0x089D1F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1F44u) goto L_089D1F44;
    return;
L_089D1F44:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    goto L_089D1F48;
L_089D1F48:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1F58;
      }
      goto L_089D1F50;
    }
L_089D1F50:
    hot_regs.g31 = (0x089D1F58u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D1F58u) goto L_089D1F58;
    return;
L_089D1F58:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_089D1F6C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g7 = (g5 | 0u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(104)));
    g4 = (g5 | 0u);
    g6 = (g4 + static_cast<std::uint32_t>(4));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089D1FC0;
      }
      goto L_089D1F8C;
    }
}
L_089D1F8C:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    goto L_089D1F94;
L_089D1F94:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 < hot_regs.g7 ? 1u : 0u);
    g8 = (g8 & 255u);
    if (g8 != 0u) {
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = g8;
        goto L_089D1FB4;
    }
    goto L_089D1FA4;
}
L_089D1FA4:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (g6 | 0u);
    g6 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089D1FB8;
      }
      goto L_089D1FB4;
    }
}
L_089D1FB4:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    goto L_089D1FB8;
L_089D1FB8:
    if (hot_regs.g6 != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
        goto L_089D1F94;
    }
    goto L_089D1FC0;
L_089D1FC0:
    if (hot_regs.g4 == hot_regs.g5) {
    hot_regs.g4 = (hot_regs.g5 | 0u);
        goto L_089D1FE4;
    }
    goto L_089D1FC8;
L_089D1FC8:
{
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g6 = (hot_regs.g7 < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    if (g6 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g6 = g6;
        goto L_089D1FE8;
    }
    goto L_089D1FE0;
}
L_089D1FE0:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    goto L_089D1FE4;
L_089D1FE4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    goto L_089D1FE8;
L_089D1FE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g4 = (g5 ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089D2020;
      }
      goto L_089D2018;
    }
}
L_089D2018:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089D2024;
      }
      goto L_089D2020;
    }
L_089D2020:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    goto L_089D2024;
L_089D2024:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D202C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089D2040u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 273u, 0x08A8D728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2040u) goto L_089D2040;
    return;
L_089D2040:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-26772));
    hot_regs.g5 = (0u | 65535u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(hot_regs.g5));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(0u));
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(346), static_cast<std::uint8_t>(0u));
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089D20A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    hot_regs.g31 = (0x089D20BCu);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 275u, 0x08A8D7B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D20BCu) goto L_089D20BC;
    return;
L_089D20BC:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-26772));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(182), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(816));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(192));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    hot_regs.g31 = (0x089D212Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 166u, 0x08A9D4C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D212Cu) goto L_089D212C;
    return;
L_089D212C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    g5 = (64u << 16u);
    g4 = (g4 & g5);
    g4 = (g4 >> 22u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    g5 = (8192u << 16u);
    g4 = (g4 & g5);
    g4 = (g4 >> 29u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(1916)));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(304))))));
    g4 = (g4 & 1u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1928))))));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(311)));
    g4 = (g4 & 255u);
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2244)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (g16 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(340)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(346), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(76)));
    g5 = (8u << 16u);
    g4 = (g4 & g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089D21CC;
      }
      goto L_089D21C0;
    }
}
L_089D21C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(346)));
    g4 = (g4 | 32u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(346), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_089D21CC;
}
L_089D21CC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x089D21D8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089D2304;
L_089D21D8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D21F0;
      }
      goto L_089D21E4;
    }
L_089D21E4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x089D21F0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089D2304;
L_089D21F0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1931)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_089D2208;
      }
      goto L_089D21FC;
    }
L_089D21FC:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089D2208u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(1168));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2208u) goto L_089D2208;
    return;
L_089D2208:
    hot_regs.g31 = (0x089D2210u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2210u) goto L_089D2210;
    return;
L_089D2210:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (2237u << 16u);
      if (branch_taken) {
          goto L_089D22E4;
      }
      goto L_089D2218;
    }
L_089D2218:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (hot_regs.g6 | 0u);
    g7 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g7 == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089D2268;
      }
      goto L_089D2234;
    }
}
L_089D2234:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(16)));
    goto L_089D223C;
L_089D223C:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 < ctx.gpr[8] ? 1u : 0u);
    g9 = (g9 & 255u);
    if (g9 != 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(12));
    ctx.gpr[9] = g9;
        goto L_089D225C;
    }
    goto L_089D224C;
}
L_089D224C:
{
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g5 = (g7 | 0u);
    g7 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089D2260;
      }
      goto L_089D225C;
    }
}
L_089D225C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    goto L_089D2260;
L_089D2260:
    if (hot_regs.g7 != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(16)));
        goto L_089D223C;
    }
    goto L_089D2268;
L_089D2268:
    if (hot_regs.g5 == hot_regs.g6) {
    hot_regs.g5 = (hot_regs.g6 | 0u);
        goto L_089D228C;
    }
    goto L_089D2270;
L_089D2270:
{
    std::uint32_t g7 = hot_regs.g7;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    g7 = (ctx.gpr[8] < g7 ? 1u : 0u);
    g7 = (g7 & 255u);
    if (g7 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g5);
    hot_regs.g7 = g7;
        goto L_089D2290;
    }
    goto L_089D2288;
}
L_089D2288:
    hot_regs.g5 = (hot_regs.g6 | 0u);
    goto L_089D228C;
L_089D228C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g5);
    goto L_089D2290;
L_089D2290:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g6);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g6);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g5 = (g6 ^ g5);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    if (g5 == 0u) {
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_089D22C8;
    }
    goto L_089D22C0;
}
L_089D22C0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 0u);
      if (branch_taken) {
          goto L_089D22C8;
      }
      goto L_089D22C8;
    }
L_089D22C8:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D22E4;
      }
      goto L_089D22D0;
    }
L_089D22D0:
    hot_regs.g31 = (0x089D22D8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    goto L_089D1F6C;
L_089D22D8:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089D22EC;
      }
      goto L_089D22E4;
    }
L_089D22E4:
    hot_regs.g4 = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_089D22EC;
L_089D22EC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D2304:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g6 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_089D2324;
}
L_089D2324:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g7 = (hot_regs.g6 < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_089D2398;
      }
      goto L_089D232C;
    }
L_089D232C:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2398;
      }
      goto L_089D2334;
    }
L_089D2334:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[8] == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = g7;
        goto L_089D2350;
    }
    goto L_089D2344;
}
L_089D2344:
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D2390;
      }
      goto L_089D2350;
    }
L_089D2350:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(f12));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(50))))));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(232), static_cast<std::uint16_t>(g8));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(48))))));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(234), static_cast<std::uint16_t>(g8));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(236), g7);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(24));
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    goto L_089D2390;
}
}
L_089D2390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2324;
      }
      goto L_089D2398;
    }
L_089D2398:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D23CC;
      }
      goto L_089D23A8;
    }
L_089D23A8:
    hot_regs.g31 = (0x089D23B0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 625u, 0x0888FEECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D23B0u) goto L_089D23B0;
    return;
L_089D23B0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D23C0;
      }
      goto L_089D23B8;
    }
L_089D23B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D23C4;
      }
      goto L_089D23C0;
    }
L_089D23C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089D23C4;
L_089D23C4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D23A8;
      }
      goto L_089D23CC;
    }
L_089D23CC:
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
L_089D23E0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089D2404u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 279u, 0x08A8D860u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2404u) goto L_089D2404;
    return;
L_089D2404:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D240C;
    }
L_089D240C:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D241C;
    }
L_089D241C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D242C;
    }
L_089D242C:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(178)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D243C;
    }
L_089D243C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D244C;
    }
L_089D244C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(181)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(181)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D245C;
    }
L_089D245C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(182)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(182)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D246C;
    }
L_089D246C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(183)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(183)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D247C;
    }
L_089D247C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(345)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(345)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D248C;
    }
L_089D248C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D24A4;
    }
}
L_089D24A4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D24BC;
    }
}
L_089D24BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    { const bool branch_taken = g4 != hot_regs.g5;
    hot_regs.g6 = (g4 << 3u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D24CC;
    }
}
L_089D24CC:
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g6);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(216));
    hot_regs.g31 = (0x089D24E4u);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D24E4u) goto L_089D24E4;
    return;
L_089D24E4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D24EC;
    }
L_089D24EC:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(342)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(342)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D24FC;
    }
L_089D24FC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(344)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D250C;
    }
L_089D250C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(346)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(346)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D2520;
      }
      goto L_089D251C;
    }
L_089D251C:
    ctx.gpr[18] = (0u | 1u);
    goto L_089D2520;
L_089D2520:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] & 255u);
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
L_089D253C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089D2580u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2580u) goto L_089D2580;
    return;
L_089D2580:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g16 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g17 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g16 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g17 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g16 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g17 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g16 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g17 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(g4));
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-26772));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g4);
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(178)));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(181)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(182)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(182), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(183)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(g4));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(f12));
    g4 = (g17 + static_cast<std::uint32_t>(192));
    g5 = (g16 + static_cast<std::uint32_t>(192));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(2))))));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g7));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g8));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(8))))));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g7));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g8));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(12))))));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(14))))));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(g7));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(g8));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(18))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(g5));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(214)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(g4));
    g6 = (0u | 0u);
    g5 = (g17 + static_cast<std::uint32_t>(216));
    g4 = (g16 + static_cast<std::uint32_t>(216));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    goto L_089D2688;
}
}
L_089D2688:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g8 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g7);
    g9 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g8);
    g7 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), g9);
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    g9 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(12), g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(16), g8);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), g9);
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(24));
    g7 = (static_cast<std::int32_t>(g6) < 5 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(24));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089D2688;
      }
      goto L_089D26DC;
    }
}
L_089D26DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(337)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(338)));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(340)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(341))))));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(342)));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(344)));
    hot_regs.g2 = (g17 | 0u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(345)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(346)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(346), static_cast<std::uint8_t>(g4));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D273C:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (2205u << 16u);
    jump_target = hot_regs.g31;
    g2 = (g2 + static_cast<std::uint32_t>(10044));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D2748:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089D2758u);
    // nop
    hot_regs.g29 = g29;
    goto L_089D273C;
}
L_089D2758:
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
L_089D2764:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089D2784u);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_089D273C;
}
L_089D2784:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_089D27CC;
    }
    goto L_089D278C;
L_089D278C:
    hot_regs.g31 = (0x089D2794u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2794u) goto L_089D2794;
    return;
L_089D2794:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089D27BC;
    }
    goto L_089D279C;
L_089D279C:
    hot_regs.g31 = (0x089D27A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 295u, 0x08A9A6CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D27A4u) goto L_089D27A4;
    return;
L_089D27A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 ^ ctx.gpr[16]);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D27C0;
      }
      goto L_089D27B8;
    }
}
L_089D27B8:
    ctx.gpr[17] = (0u | 1u);
    goto L_089D27BC;
L_089D27BC:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_089D27C0;
L_089D27C0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D27CC;
      }
      goto L_089D27C8;
    }
L_089D27C8:
    ctx.gpr[18] = (0u | 1u);
    goto L_089D27CC;
L_089D27CC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] & 255u);
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
L_089D27E8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089D2838;
      }
      goto L_089D2804;
    }
}
L_089D2804:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-26756));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), hot_regs.g4);
    hot_regs.g31 = (0x089D2818u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2818u) goto L_089D2818;
    return;
L_089D2818:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089D2824u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 411u, 0x0888E5E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2824u) goto L_089D2824;
    return;
L_089D2824:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2838;
      }
      goto L_089D2830;
    }
L_089D2830:
    hot_regs.g31 = (0x089D2838u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2838u) goto L_089D2838;
    return;
L_089D2838:
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
L_089D284C:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2854:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 352u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089D2878u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2878u) goto L_089D2878;
    return;
L_089D2878:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D2890;
      }
      goto L_089D2884;
    }
L_089D2884:
    hot_regs.g31 = (0x089D288Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089D202C;
L_089D288C:
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    goto L_089D2890;
L_089D2890:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_089D28A0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089D28CC;
      }
      goto L_089D28B0;
    }
}
L_089D28B0:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089D28CCu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D28CCu) goto L_089D28CC;
    return;
L_089D28CC:
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
L_089D28D8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g5);
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 352u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089D2900u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2900u) goto L_089D2900;
    return;
L_089D2900:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D2920;
      }
      goto L_089D2910;
    }
L_089D2910:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x089D291Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089D253C;
L_089D291C:
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    goto L_089D2920;
L_089D2920:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_089D2930:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089D2944u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
    goto L_089D23E0;
}
L_089D2944:
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
L_089D2950:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.g31 = (0x089D2974u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 409u, 0x0888E5A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2974u) goto L_089D2974;
    return;
L_089D2974:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25592));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), hot_regs.g4);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(219), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11672)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11672), hot_regs.g4);
    hot_regs.g31 = (0x089D29B0u);
    hot_regs.g4 = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D29B0u) goto L_089D29B0;
    return;
L_089D29B0:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (17036u << 16u);
      if (branch_taken) {
          goto L_089D29D0;
      }
      goto L_089D29BC;
    }
L_089D29BC:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089D29C8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 41u, 0x089D4258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D29C8u) goto L_089D29C8;
    return;
L_089D29C8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    hot_regs.g4 = (17036u << 16u);
    goto L_089D29D0;
L_089D29D0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(112), g17);
    f12 = std::bit_cast<float>(g4);
    g4 = (17096u << 16u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g5 = (16076u << 16u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(112)));
    g5 = (g5 | 52429u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(112)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(208)));
    f12 = hot_regs.f13 / f12;
    g17 = (g16 | 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9628)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9632)));
    { const bool branch_taken = g4 == g5;
    g5 = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089D2A38;
      }
      goto L_089D2A1C;
    }
}
}
L_089D2A1C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D2A30;
      }
      goto L_089D2A24;
    }
L_089D2A24:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9628)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    goto L_089D2A30;
}
L_089D2A30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9628), hot_regs.g4);
      if (branch_taken) {
          goto L_089D2B44;
      }
      goto L_089D2A38;
    }
L_089D2A38:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9624)));
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
          goto L_089D2A78;
      }
      goto L_089D2A68;
    }
}
L_089D2A68:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    g18 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    g18 = (hot_regs.g5 + g18);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089D2A84;
      }
      goto L_089D2A78;
    }
}
L_089D2A78:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    g18 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g18 = (hot_regs.g5 + g18);
    ctx.gpr[18] = g18;
    goto L_089D2A84;
}
L_089D2A84:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_089D2AC4;
      }
      goto L_089D2A8C;
    }
L_089D2A8C:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g5);
    hot_regs.g31 = (0x089D2AA0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2AA0u) goto L_089D2AA0;
    return;
L_089D2AA0:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089D2AC4;
      }
      goto L_089D2AB0;
    }
L_089D2AB0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    hot_regs.g31 = (0x089D2ABCu);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2ABCu) goto L_089D2ABC;
    return;
L_089D2ABC:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    goto L_089D2AC4;
L_089D2AC4:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9624)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    ctx.gpr[19] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_089D2AD8;
      }
      goto L_089D2AD0;
    }
L_089D2AD0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089D2AF4;
      }
      goto L_089D2AD8;
    }
L_089D2AD8:
    hot_regs.g5 = (hot_regs.g6 | 0u);
    ctx.gpr[20] = (hot_regs.g4 - hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089D2AECu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2AECu) goto L_089D2AEC;
    return;
L_089D2AEC:
    hot_regs.g5 = (hot_regs.g2 + ctx.gpr[20]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    goto L_089D2AF4;
L_089D2AF4:
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
        goto L_089D2B1C;
    }
    goto L_089D2B08;
}
L_089D2B08:
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
          goto L_089D2B08;
      }
      goto L_089D2B18;
    }
}
L_089D2B18:
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    goto L_089D2B1C;
L_089D2B1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9624)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D2B30;
      }
      goto L_089D2B28;
    }
L_089D2B28:
    hot_regs.g31 = (0x089D2B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2B30u) goto L_089D2B30;
    return;
L_089D2B30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9624), ctx.gpr[19]);
    g4 = (ctx.gpr[19] + g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9628), ctx.gpr[17]);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9632), g4);
    hot_regs.g4 = g4;
    goto L_089D2B44;
}
L_089D2B44:
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
L_089D2B68:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    hot_regs.g31 = (0x089D2B8Cu);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 409u, 0x0888E5A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2B8Cu) goto L_089D2B8C;
    return;
L_089D2B8C:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25592));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), hot_regs.g4);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(219), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11672)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11672), hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089D2BD0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 736u, 0x08ADEF00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2BD0u) goto L_089D2BD0;
    return;
L_089D2BD0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x089D2BE0u);
    hot_regs.g4 = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2BE0u) goto L_089D2BE0;
    return;
L_089D2BE0:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    hot_regs.g4 = (17036u << 16u);
      if (branch_taken) {
          goto L_089D2C00;
      }
      goto L_089D2BEC;
    }
L_089D2BEC:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089D2BF8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 41u, 0x089D4258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2BF8u) goto L_089D2BF8;
    return;
L_089D2BF8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    hot_regs.g4 = (17036u << 16u);
    goto L_089D2C00;
L_089D2C00:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17096u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (16076u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(208)));
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089D2C58u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2C58u) goto L_089D2C58;
    return;
L_089D2C58:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(152));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089D2C70u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2C70u) goto L_089D2C70;
    return;
L_089D2C70:
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1916)));
    hot_regs.g31 = (0x089D2C7Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089D3450;
L_089D2C7C:
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 352u);
    hot_regs.g31 = (0x089D2C98u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2C98u) goto L_089D2C98;
    return;
L_089D2C98:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089D2CB4;
      }
      goto L_089D2CA4;
    }
L_089D2CA4:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089D2CB0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_089D20A0;
L_089D2CB0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_089D2CB4;
L_089D2CB4:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089D2CC4u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2CC4u) goto L_089D2CC4;
    return;
L_089D2CC4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
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
L_089D2CE4:
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
          goto L_089D2F60;
      }
      goto L_089D2D04;
    }
}
L_089D2D04:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(25592));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11672)));
    g5 = (2237u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11672), g4);
    g4 = (g5 + static_cast<std::uint32_t>(-28736));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(100)));
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(52)));
    g4 = (g5 ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089D2DE8;
      }
      goto L_089D2D44;
    }
}
L_089D2D44:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9628)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9624)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089D2D5Cu);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 256u, 0x08B6D560u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2D5Cu) goto L_089D2D5C;
    return;
L_089D2D5C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D2D70;
      }
      goto L_089D2D68;
    }
L_089D2D68:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_089D2DA8;
      }
      goto L_089D2D70;
    }
L_089D2D70:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 | 0u);
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = g4 == ctx.gpr[18];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D2DA8;
      }
      goto L_089D2D80;
    }
}
L_089D2D80:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    goto L_089D2D84;
L_089D2D84:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g6 == hot_regs.g7) {
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
        goto L_089D2DA0;
    }
    goto L_089D2D90;
L_089D2D90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089D2DA0;
}
L_089D2DA0:
    if (hot_regs.g4 != ctx.gpr[18]) {
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
        goto L_089D2D84;
    }
    goto L_089D2DA8;
L_089D2DA8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9628)));
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089D2DDC;
      }
      goto L_089D2DB8;
    }
L_089D2DB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9628)));
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g6;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D2DDC;
      }
      goto L_089D2DC8;
    }
L_089D2DC8:
    hot_regs.g7 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (hot_regs.g4 - hot_regs.g7);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x089D2DDCu);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2DDCu) goto L_089D2DDC;
    return;
L_089D2DDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9628)));
    g4 = (g4 + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9628), g4);
    hot_regs.g4 = g4;
    goto L_089D2DE8;
}
L_089D2DE8:
    hot_regs.g31 = (0x089D2DF0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 623u, 0x08A17AF8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2DF0u) goto L_089D2DF0;
    return;
L_089D2DF0:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_089D2E00;
      }
      goto L_089D2DF8;
    }
L_089D2DF8:
    hot_regs.g31 = (0x089D2E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 606u, 0x08A17A04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2E00u) goto L_089D2E00;
    return;
L_089D2E00:
    hot_regs.g31 = (0x089D2E08u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 79u, 0x0888089Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2E08u) goto L_089D2E08;
    return;
L_089D2E08:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g4 = (0u | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089D2F24;
      }
      goto L_089D2E20;
    }
}
L_089D2E20:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_089D2E38;
      }
      goto L_089D2E28;
    }
L_089D2E28:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g5 != 0u) {
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = g5;
        goto L_089D2E40;
    }
    goto L_089D2E38;
}
L_089D2E38:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_089D2E6C;
      }
      goto L_089D2E40;
    }
L_089D2E40:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + hot_regs.g4);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & 128u);
    { const bool branch_taken = g5 == 0u;
    g5 = (0u + static_cast<std::uint32_t>(3344));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089D2E5C;
      }
      goto L_089D2E54;
    }
}
L_089D2E54:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_089D2E6C;
      }
      goto L_089D2E5C;
    }
L_089D2E5C:
{
    std::uint32_t g5 = hot_regs.g5;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (ctx.lo);
    g5 = (g5 + hot_regs.g6);
    hot_regs.g5 = g5;
    goto L_089D2E6C;
}
L_089D2E6C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2F10;
      }
      goto L_089D2E74;
    }
L_089D2E74:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(1912)));
    hot_regs.g6 = (0u | 0u);
    g7 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089D2F10;
      }
      goto L_089D2E88;
    }
}
L_089D2E88:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (hot_regs.g6 << 2u);
    g7 = (hot_regs.g5 + g7);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(1824)));
    { const bool branch_taken = g7 != ctx.gpr[16];
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089D2EFC;
      }
      goto L_089D2E9C;
    }
}
L_089D2E9C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(1912)));
    g7 = (hot_regs.g6 | 0u);
    g8 = (g8 + static_cast<std::uint32_t>(-1));
    g8 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    if (g8 == 0u) {
    g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(1912)));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
        goto L_089D2EE0;
    }
    goto L_089D2EB4;
}
L_089D2EB4:
    ctx.gpr[8] = (hot_regs.g7 << 2u);
    goto L_089D2EB8;
L_089D2EB8:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g5 + g8);
    ctx.gpr[9] = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(1828)));
    g7 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(1824), ctx.gpr[9]);
    g8 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(1912)));
    g8 = (g8 + static_cast<std::uint32_t>(-1));
    g8 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    g8 = (g7 << 2u);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089D2EB8;
      }
      goto L_089D2EDC;
    }
}
L_089D2EDC:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(1912)));
    goto L_089D2EE0;
L_089D2EE0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(1912), static_cast<std::uint16_t>(g7));
    g7 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(1912)));
    g7 = (g7 << 2u);
    g7 = (g5 + g7);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(1824), 0u);
    hot_regs.g7 = g7;
    goto L_089D2EFC;
}
L_089D2EFC:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(1912)));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g7 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089D2E88;
      }
      goto L_089D2F10;
    }
}
L_089D2F10:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089D2E20;
      }
      goto L_089D2F24;
    }
}
L_089D2F24:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_089D2F50;
      }
      goto L_089D2F2C;
    }
L_089D2F2C:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-26756));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), hot_regs.g4);
    hot_regs.g31 = (0x089D2F40u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2F40u) goto L_089D2F40;
    return;
L_089D2F40:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089D2F4Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 411u, 0x0888E5E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2F4Cu) goto L_089D2F4C;
    return;
L_089D2F4C:
    hot_regs.g4 = (ctx.gpr[17] & 1u);
    goto L_089D2F50;
L_089D2F50:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2F60;
      }
      goto L_089D2F58;
    }
L_089D2F58:
    hot_regs.g31 = (0x089D2F60u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2F60u) goto L_089D2F60;
    return;
L_089D2F60:
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
L_089D2F78:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x089D2F9Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 73u, 0x08AD06ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2F9Cu) goto L_089D2F9C;
    return;
L_089D2F9C:
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 352u);
    hot_regs.g31 = (0x089D2FB8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2FB8u) goto L_089D2FB8;
    return;
L_089D2FB8:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089D2FD4;
      }
      goto L_089D2FC4;
    }
L_089D2FC4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (0x089D2FD0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089D20A0;
L_089D2FD0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089D2FD4;
L_089D2FD4:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089D2FE4u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D2FE4u) goto L_089D2FE4;
    return;
L_089D2FE4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D2FFC:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g7);
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(68))))));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(30))))));
    g6 = (g7 - g6);
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    g6 = (static_cast<std::int32_t>(g6) < 0 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    g6 = (g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), hot_regs.g31);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089D3098;
      }
      goto L_089D3050;
    }
}
L_089D3050:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(64))))));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g31 = (0x089D3064u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(32))))));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 440u, 0x08A9B864u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D3064u) goto L_089D3064;
    return;
L_089D3064:
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x089D307Cu);
    hot_regs.g6 = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D307Cu) goto L_089D307C;
    return;
L_089D307C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089D3090u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 363u, 0x089D58F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D3090u) goto L_089D3090;
    return;
L_089D3090:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089D30FC;
      }
      goto L_089D3098;
    }
L_089D3098:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(64))))));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g31 = (0x089D30ACu);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(34))))));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 440u, 0x08A9B864u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D30ACu) goto L_089D30AC;
    return;
L_089D30AC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(68))))));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(36))))));
    hot_regs.g31 = (0x089D30C4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 440u, 0x08A9B864u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D30C4u) goto L_089D30C4;
    return;
L_089D30C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(64))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(68))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(g4));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(38))))));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(40))))));
    g4 = (ctx.gpr[17] | 0u);
    g5 = (g5 - g6);
    g8 = (g5 << 16u);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 16u));
    g5 = (ctx.gpr[16] | 0u);
    g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089D30FCu);
    hot_regs.g7 = (hot_regs.g2 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    goto L_089D3460;
}
L_089D30FC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D3118:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3120:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089D314Cu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 421u, 0x0888E688u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D314Cu) goto L_089D314C;
    return;
L_089D314C:
{
    std::uint32_t g17 = ctx.gpr[17];
    ctx.gpr[8] = (g17 | 0u);
    g17 = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(214)));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = (hot_regs.g4 < g17 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g5 = (0u | 0u);
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089D31E8;
      }
      goto L_089D3164;
    }
}
L_089D3164:
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(216));
    hot_regs.g6 = (hot_regs.g7 | 0u);
    goto L_089D316C;
L_089D316C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(232))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[11];
    ctx.gpr[10] = (hot_regs.g5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D318C;
      }
      goto L_089D317C;
    }
L_089D317C:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(234))))));
    hot_regs.g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[11] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_089D31D0;
      }
      goto L_089D318C;
    }
L_089D318C:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (ctx.gpr[10] << 3u);
    hot_regs.g2 = (g9 | 0u);
    g9 = (g11 + g11);
    g9 = (g11 + g9);
    g9 = (hot_regs.g7 + g9);
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = hot_regs.g2 != g11;
    // nop
    ctx.gpr[9] = g9;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_089D31C8;
      }
      goto L_089D31AC;
    }
}
L_089D31AC:
{
    std::uint32_t g9 = ctx.gpr[9];
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(234))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[11] != g9;
    // nop
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089D31C8;
      }
      goto L_089D31BC;
    }
}
L_089D31BC:
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D31D0;
      }
      goto L_089D31C8;
    }
L_089D31C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D31D8;
      }
      goto L_089D31D0;
    }
L_089D31D0:
    hot_regs.g5 = (ctx.gpr[10] | 0u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(24));
    goto L_089D31D8;
L_089D31D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (g4 < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(24));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D316C;
      }
      goto L_089D31E8;
    }
}
L_089D31E8:
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
L_089D31FC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089D3220u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 355u, 0x08A9AE40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D3220u) goto L_089D3220;
    return;
L_089D3220:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(ctx.gpr[16]);
    g4 = (15496u << 16u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (g4 | 34953u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
    g4 = (0u | 0u);
    g5 = (g4 < g5 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089D3284;
      }
      goto L_089D3248;
    }
}
}
L_089D3248:
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_089D324C;
L_089D324C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(236)));
    g6 = (g6 & 1u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089D3270;
      }
      goto L_089D325C;
    }
}
L_089D325C:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(228)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(224)));
    { const float fs = f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = hot_regs.f14 + f13;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
    goto L_089D3270;
}
}
L_089D3270:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (g4 < g6 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(24));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089D324C;
      }
      goto L_089D3284;
    }
}
L_089D3284:
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
L_089D3298:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    hot_regs.f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    hot_regs.g31 = (0x089D32DCu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D32DCu) goto L_089D32DC;
    return;
L_089D32DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x089D32F0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D32F0u) goto L_089D32F0;
    return;
L_089D32F0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089D32FCu);
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D32FCu) goto L_089D32FC;
    return;
L_089D32FC:
    hot_regs.g7 = (ctx.gpr[18] << 6u);
    hot_regs.g7 = (hot_regs.g2 + hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089D3314u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D3314u) goto L_089D3314;
    return;
L_089D3314:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089D333C;
      }
      goto L_089D3320;
    }
L_089D3320:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x089D3330u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D3330u) goto L_089D3330;
    return;
L_089D3330:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089D333C;
L_089D333C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    g4 = (g4 + static_cast<std::uint32_t>(64));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    f12 = f12 + hot_regs.f20;
    ctx.set_fpu_condition((hot_regs.f22 <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089D3364;
      }
      goto L_089D335C;
    }
}
}
L_089D335C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089D3368;
      }
      goto L_089D3364;
    }
L_089D3364:
    hot_regs.g2 = (0u | 0u);
    goto L_089D3368;
L_089D3368:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D3388:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) <= 0;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089D33CC;
      }
      goto L_089D33C0;
    }
}
}
L_089D33C0:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 18 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D33DC;
      }
      goto L_089D33CC;
    }
L_089D33CC:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089D3434;
      }
      goto L_089D33DC;
    }
L_089D33DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    hot_regs.g31 = (0x089D33E8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D33E8u) goto L_089D33E8;
    return;
L_089D33E8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[16] << 2u);
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(140)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x089D3404u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D3404u) goto L_089D3404;
    return;
L_089D3404:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089D3410u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D3410u) goto L_089D3410;
    return;
L_089D3410:
    hot_regs.g7 = (ctx.gpr[16] << 6u);
    hot_regs.g7 = (hot_regs.g2 + hot_regs.g7);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x089D3428u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D3428u) goto L_089D3428;
    return;
L_089D3428:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.g2 = (0u | 1u);
    goto L_089D3434;
L_089D3434:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D3450:
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(216), static_cast<std::uint16_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3458:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(216)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3460:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x089D348Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 264u, 0x089D5288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D348Cu) goto L_089D348C;
    return;
L_089D348C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D34B4;
      }
      goto L_089D3498;
    }
L_089D3498:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089D34ACu);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 363u, 0x089D58F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D34ACu) goto L_089D34AC;
    return;
L_089D34AC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089D34B8;
      }
      goto L_089D34B4;
    }
L_089D34B4:
    hot_regs.g2 = (0u | 0u);
    goto L_089D34B8;
L_089D34B8:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089D34D0:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g4 = (46470u << 16u);
    f14 = hot_regs.f13 - f14;
    g4 = (g4 | 14269u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((f14 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (65535u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089D3524;
      }
      goto L_089D3504;
    }
}
}
L_089D3504:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (13702u << 16u);
    g10 = (g10 | 14269u);
    hot_regs.f15 = std::bit_cast<float>(g10);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_089D3528;
      }
      goto L_089D3520;
    }
}
L_089D3520:
    ctx.gpr[9] = (0u | 1u);
    goto L_089D3524;
L_089D3524:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    goto L_089D3528;
L_089D3528:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D353C;
      }
      goto L_089D3530;
    }
L_089D3530:
    hot_regs.g2 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D3544;
      }
      goto L_089D353C;
    }
L_089D353C:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    goto L_089D3544;
L_089D3544:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    f14 = hot_regs.f13 - f14;
    ctx.set_fpu_condition((f14 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[9] = (0u | 0u);
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089D357C;
      }
      goto L_089D355C;
    }
}
L_089D355C:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (13702u << 16u);
    g10 = (g10 | 14269u);
    hot_regs.f15 = std::bit_cast<float>(g10);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_089D3580;
      }
      goto L_089D3578;
    }
}
L_089D3578:
    ctx.gpr[9] = (0u | 1u);
    goto L_089D357C;
L_089D357C:
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    goto L_089D3580;
L_089D3580:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D359C;
      }
      goto L_089D3588;
    }
L_089D3588:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    hot_regs.g2 = (hot_regs.g2 | 2u);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    g9 = (g9 & 1u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089D35AC;
      }
      goto L_089D359C;
    }
}
L_089D359C:
{
    std::uint32_t g9 = ctx.gpr[9];
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    g9 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    g9 = (g9 & 1u);
    ctx.gpr[9] = g9;
    goto L_089D35AC;
}
L_089D35AC:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
      if (branch_taken) {
          goto L_089D35D8;
      }
      goto L_089D35B4;
    }
L_089D35B4:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g7 = hot_regs.g7;
    f13 = std::bit_cast<float>(g7);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(12)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g7 = (15496u << 16u);
    g7 = (g7 | 34953u);
    hot_regs.f15 = std::bit_cast<float>(g7);
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = hot_regs.f14 + f13;
    hot_regs.g7 = g7;
    hot_regs.f13 = f13;
    goto L_089D35D8;
}
}
L_089D35D8:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g7 = hot_regs.g7;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    g7 = (48163u << 16u);
    f14 = hot_regs.f13 - f14;
    ctx.gpr[9] = (g7 | 55050u);
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[9]);
    ctx.set_fpu_condition((f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g7 = (0u | 0u);
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089D361C;
      }
      goto L_089D35FC;
    }
}
}
L_089D35FC:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (15395u << 16u);
    g9 = (g9 | 55050u);
    hot_regs.f15 = std::bit_cast<float>(g9);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089D3620;
      }
      goto L_089D3618;
    }
}
L_089D3618:
    hot_regs.g7 = (0u | 1u);
    goto L_089D361C;
L_089D361C:
    hot_regs.g7 = (hot_regs.g7 & 255u);
    goto L_089D3620;
L_089D3620:
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3634;
      }
      goto L_089D3628;
    }
L_089D3628:
    hot_regs.g2 = (hot_regs.g2 | 4u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089D363C;
      }
      goto L_089D3634;
    }
L_089D3634:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(12)));
    goto L_089D363C;
L_089D363C:
{
    float f12 = hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    f12 = hot_regs.f13 - f12;
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089D3678;
      }
      goto L_089D3658;
    }
}
L_089D3658:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (13702u << 16u);
    g9 = (g9 | 14269u);
    hot_regs.f14 = std::bit_cast<float>(g9);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089D367C;
      }
      goto L_089D3674;
    }
}
L_089D3674:
    hot_regs.g7 = (0u | 1u);
    goto L_089D3678;
L_089D3678:
    hot_regs.g7 = (hot_regs.g7 & 255u);
    goto L_089D367C;
L_089D367C:
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_089D36A0;
      }
      goto L_089D3684;
    }
L_089D3684:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(18))))));
    hot_regs.g2 = (hot_regs.g2 | 8u);
    hot_regs.g7 = (g11 & 65535u);
    { const bool branch_taken = 0u == 0u;
    g6 = (g11 & hot_regs.g4);
    hot_regs.g6 = g6;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_089D36B8;
      }
      goto L_089D36A0;
    }
}
L_089D36A0:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g11 = ctx.gpr[11];
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f13));
    g11 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(18))))));
    hot_regs.g7 = (g11 & 65535u);
    g6 = (g11 & hot_regs.g4);
    hot_regs.g6 = g6;
    ctx.gpr[11] = g11;
    goto L_089D36B8;
}
L_089D36B8:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_089D36CC;
      }
      goto L_089D36C4;
    }
L_089D36C4:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (g2 | 16u);
    g2 = (g2 | 32u);
    hot_regs.g2 = g2;
    goto L_089D36CC;
}
L_089D36CC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[9] == g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089D36E0;
      }
      goto L_089D36D8;
    }
}
L_089D36D8:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (g2 | 32u);
    g2 = (g2 | 16u);
    hot_regs.g2 = g2;
    goto L_089D36E0;
}
L_089D36E0:
    hot_regs.g5 = (ctx.gpr[8] & 65535u);
    { const bool branch_taken = hot_regs.g7 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089D36F0;
      }
      goto L_089D36EC;
    }
L_089D36EC:
    hot_regs.g2 = (hot_regs.g2 | 64u);
    goto L_089D36F0;
L_089D36F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[8] & g4);
    { const bool branch_taken = hot_regs.g6 == g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D3700;
      }
      goto L_089D36FC;
    }
}
L_089D36FC:
    hot_regs.g2 = (hot_regs.g2 | 128u);
    goto L_089D3700;
L_089D3700:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3708:
    hot_regs.g4 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g7 & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D37FC;
      }
      goto L_089D373C;
    }
L_089D373C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[8] = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089D37FC;
L_089D37FC:
    hot_regs.g4 = (hot_regs.g7 & 2u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D38C8;
      }
      goto L_089D3808;
    }
L_089D3808:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[8] = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089D38C8;
L_089D38C8:
    hot_regs.g4 = (hot_regs.g7 & 4u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3994;
      }
      goto L_089D38D4;
    }
L_089D38D4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[8] = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089D3994;
L_089D3994:
    hot_regs.g4 = (hot_regs.g7 & 8u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3A60;
      }
      goto L_089D39A0;
    }
L_089D39A0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[8] = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089D3A60;
L_089D3A60:
    hot_regs.g4 = (hot_regs.g7 & 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3AD4;
      }
      goto L_089D3A6C;
    }
L_089D3A6C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(16))))));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089D3AD4;
L_089D3AD4:
    hot_regs.g4 = (hot_regs.g7 & 32u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3B48;
      }
      goto L_089D3AE0;
    }
L_089D3AE0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(18))))));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089D3B48;
L_089D3B48:
    hot_regs.g4 = (hot_regs.g7 & 64u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3BB4;
      }
      goto L_089D3B54;
    }
L_089D3B54:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.gpr[8] = (hot_regs.g4 & 255u);
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (hot_regs.g5 + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (hot_regs.g5 + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089D3BB4;
L_089D3BB4:
    hot_regs.g4 = (hot_regs.g7 & 128u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3C20;
      }
      goto L_089D3BC0;
    }
L_089D3BC0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (hot_regs.g4 >> 16u);
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g6 = (hot_regs.g4 & 255u);
    hot_regs.g7 = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g7));
    hot_regs.g7 = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g7));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (hot_regs.g5 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 8u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g6 = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6));
    hot_regs.g6 = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g6));
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089D3C20;
L_089D3C20:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3C28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g7 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g7);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g4 & 1u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089D3CB0;
      }
      goto L_089D3C48;
    }
}
L_089D3C48:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_089D3CB0;
}
L_089D3CB0:
    hot_regs.g7 = (hot_regs.g4 & 2u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3D24;
      }
      goto L_089D3CBC;
    }
L_089D3CBC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_089D3D24;
}
L_089D3D24:
    hot_regs.g7 = (hot_regs.g4 & 4u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3D98;
      }
      goto L_089D3D30;
    }
L_089D3D30:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_089D3D98;
}
L_089D3D98:
    hot_regs.g7 = (hot_regs.g4 & 8u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3E0C;
      }
      goto L_089D3DA4;
    }
L_089D3DA4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_089D3E0C;
}
L_089D3E0C:
    hot_regs.g7 = (hot_regs.g4 & 16u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3E44;
      }
      goto L_089D3E18;
    }
L_089D3E18:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(g7));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_089D3E44;
}
L_089D3E44:
    hot_regs.g7 = (hot_regs.g4 & 32u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3E7C;
      }
      goto L_089D3E50;
    }
L_089D3E50:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(g7));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_089D3E7C;
}
L_089D3E7C:
    hot_regs.g7 = (hot_regs.g4 & 64u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3EC8;
      }
      goto L_089D3E88;
    }
L_089D3E88:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    g8 = (65535u << 16u);
    g7 = (g7 & g8);
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(20), g7);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_089D3EC8;
}
L_089D3EC8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 128u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D3F14;
      }
      goto L_089D3ED4;
    }
}
L_089D3ED4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    g4 = (g4 & 65535u);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    g5 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g5 = (g7 | g5);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(20), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_089D3F14;
}
L_089D3F14:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D3F1C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g5) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 5u, 0x089D4024u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_089D3F44;
    }
L_089D3F44:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (0u | 65535u);
      if (branch_taken) {
          goto L_089D3F70;
      }
      goto L_089D3F50;
    }
L_089D3F50:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089D3F60u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D3F60u) goto L_089D3F60;
    return;
L_089D3F60:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (hot_regs.g2 | 0u);
    hot_regs.g4 = g4;
    goto L_089D3F70;
}
L_089D3F70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = g4 != ctx.gpr[18];
    hot_regs.g6 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089D3F84;
      }
      goto L_089D3F7C;
    }
}
L_089D3F7C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_089D3F98;
      }
      goto L_089D3F84;
    }
L_089D3F84:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g31 = (0x089D3F94u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D3F94u) goto L_089D3F94;
    return;
L_089D3F94:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_089D3F98;
L_089D3F98:
    if (hot_regs.g4 == 0u) {
    ctx.gpr[17] = (0u | 1u);
        (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 5u, 0x089D4024u>(ctx, &aot_mem, &hot_regs); return;
    }
    goto L_089D3FA0;
L_089D3FA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(176)));
    hot_regs.g4 = g4;
        goto L_089D3FD0;
    }
    goto L_089D3FAC;
}
L_089D3FAC:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(17));
    hot_regs.g31 = (0x089D3FBCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D3FBCu) goto L_089D3FBC;
    return;
L_089D3FBC:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (hot_regs.g2 | 0u);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(176)));
    hot_regs.g4 = g4;
    goto L_089D3FD0;
}
L_089D3FD0:
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    hot_regs.g6 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_089D3FE8;
      }
      goto L_089D3FD8;
    }
L_089D3FD8:
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(136));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 2u, 0x089D4004u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_089D3FE8;
    }
L_089D3FE8:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g31 = (0x089D3FF8u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089D3FF8u) goto L_089D3FF8;
    return;
L_089D3FF8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    ctx.pc = 0x089D4000u; return;
}

void recomp_unit_0115(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0115_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_115(Runtime &runtime) {
    runtime.register_generated_unit(115u, 0x089D0000u, 16384u, &recomp_unit_0115, &recomp_unit_0115_entry);
    runtime.register_function(0x089D0000u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D000Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D001Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0024u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D002Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0048u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0058u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0060u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D006Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0078u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0084u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0090u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0094u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D009Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0110u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D012Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D013Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0144u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0190u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0224u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0244u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0250u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0258u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D026Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0284u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0308u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0310u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0324u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0344u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0360u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0384u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0398u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D041Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0428u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0430u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0444u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D045Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0498u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0508u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0528u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D052Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0538u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0550u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0558u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0560u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0580u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0584u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0598u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0614u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0634u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0690u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0708u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0710u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0718u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0720u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0738u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0740u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0774u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D079Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0810u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0858u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0860u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0874u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D087Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0884u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0890u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D092Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0934u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0944u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D094Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0968u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0978u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0984u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F14u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D103Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1044u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D104Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1074u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1108u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1110u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1118u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1120u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D113Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D114Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1158u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1160u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1168u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1170u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D118Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D119Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D120Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D121Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1234u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1240u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1248u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1250u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D125Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D126Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1274u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D127Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D128Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D129Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1304u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D130Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1334u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1344u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D134Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1354u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1364u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D136Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1408u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1424u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1430u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1438u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1448u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1460u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1468u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1480u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1488u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1504u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D151Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1524u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1540u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D155Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D156Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1574u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1580u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1588u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D158Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1610u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1618u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D162Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1654u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D165Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1670u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1694u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1700u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1704u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1734u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D177Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1790u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1840u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1874u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D189Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D191Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1968u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1970u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1998u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C14u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1CA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1CD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1ED8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2018u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2020u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2024u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D202Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2040u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D212Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2208u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2210u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2218u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2234u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D223Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D224Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D225Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2260u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2268u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2270u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2288u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D228Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2290u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2304u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2324u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D232Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2334u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2344u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2350u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2390u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2398u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2404u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D240Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D241Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D242Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D243Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D244Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D245Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D246Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D247Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D248Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D250Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D251Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2520u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D253Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2580u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2688u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D273Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2748u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2758u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2764u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2784u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D278Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2794u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D279Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2804u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2818u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2824u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2830u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2838u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D284Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2854u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2878u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2884u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D288Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2890u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D28A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D28B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D28CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D28D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2900u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2910u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D291Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2920u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2930u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2944u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2950u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2974u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2ABCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3050u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3064u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D307Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3090u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3098u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3118u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3120u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D314Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3164u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D316Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D317Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D318Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3220u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3248u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D324Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D325Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3270u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3284u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3298u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3314u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3320u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3330u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D333Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D335Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3364u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3368u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3388u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3404u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3410u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3428u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3434u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3450u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3458u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3460u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D348Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3498u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3504u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3520u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3524u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3528u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3530u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D353Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3544u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D355Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3578u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D357Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3580u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3588u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D359Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3618u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D361Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3620u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3628u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3634u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D363Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3658u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3674u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3678u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D367Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3684u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3700u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3708u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D373Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D37FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3808u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3994u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D39A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3AD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3AE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3CB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3CBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3DA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3EC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3ED4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F14u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FF8u, &recomp_unit_0115, "recomp_unit_0115");
}
} // namespace psprecomp
