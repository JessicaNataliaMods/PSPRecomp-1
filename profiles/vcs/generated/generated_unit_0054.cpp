#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0054[4095] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 32, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53,
    0, 54, 0, 55, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 63, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    68, 0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0,
    76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 80, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0,
    0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 103, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 135, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0,
    148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 169,
    0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0,
    0, 0, 183, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207,
    0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 216, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0,
    235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 251, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 277, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 288, 289, 0, 0, 0,
    290, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 294, 295, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0,
    299, 0, 0, 0, 0, 0, 300, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 328,
    329, 0, 330, 0, 331, 0, 332, 333, 0, 334, 0, 335, 0, 336, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0,
    343, 0, 344, 0, 345, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360,
    0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378,
    0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0,
    0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 422, 423, 0, 0, 0, 0, 424, 0, 0, 0,
    0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0,
    431, 0, 0, 0, 432, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0,
    442, 0, 443, 444, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 448, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0,
    0, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0,
    461, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 468, 469, 0, 0,
    0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 478,
    0, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 0, 0, 0, 493,
    0, 0, 494, 0, 0, 0, 495, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0,
    0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 511, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0,
    0, 0, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 525,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532,
};
void recomp_unit_0054_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088DC004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0054[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088DC004;
    case 2u: goto L_088DC018;
    case 3u: goto L_088DC020;
    case 4u: goto L_088DC02C;
    case 5u: goto L_088DC038;
    case 6u: goto L_088DC040;
    case 7u: goto L_088DC044;
    case 8u: goto L_088DC058;
    case 9u: goto L_088DC06C;
    case 10u: goto L_088DC094;
    case 11u: goto L_088DC098;
    case 12u: goto L_088DC0BC;
    case 13u: goto L_088DC0D8;
    case 14u: goto L_088DC0F4;
    case 15u: goto L_088DC104;
    case 16u: goto L_088DC114;
    case 17u: goto L_088DC134;
    case 18u: goto L_088DC150;
    case 19u: goto L_088DC15C;
    case 20u: goto L_088DC198;
    case 21u: goto L_088DC1A8;
    case 22u: goto L_088DC1B8;
    case 23u: goto L_088DC1C4;
    case 24u: goto L_088DC1D0;
    case 25u: goto L_088DC1D8;
    case 26u: goto L_088DC1E4;
    case 27u: goto L_088DC23C;
    case 28u: goto L_088DC24C;
    case 29u: goto L_088DC254;
    case 30u: goto L_088DC25C;
    case 31u: goto L_088DC264;
    case 32u: goto L_088DC268;
    case 33u: goto L_088DC270;
    case 34u: goto L_088DC2A8;
    case 35u: goto L_088DC2B0;
    case 36u: goto L_088DC2C4;
    case 37u: goto L_088DC2D8;
    case 38u: goto L_088DC2EC;
    case 39u: goto L_088DC2F4;
    case 40u: goto L_088DC300;
    case 41u: goto L_088DC308;
    case 42u: goto L_088DC33C;
    case 43u: goto L_088DC344;
    case 44u: goto L_088DC34C;
    case 45u: goto L_088DC36C;
    case 46u: goto L_088DC3C0;
    case 47u: goto L_088DC470;
    case 48u: goto L_088DC48C;
    case 49u: goto L_088DC4A4;
    case 50u: goto L_088DC4D0;
    case 51u: goto L_088DC4E0;
    case 52u: goto L_088DC4F8;
    case 53u: goto L_088DC500;
    case 54u: goto L_088DC508;
    case 55u: goto L_088DC510;
    case 56u: goto L_088DC528;
    case 57u: goto L_088DC530;
    case 58u: goto L_088DC538;
    case 59u: goto L_088DC53C;
    case 60u: goto L_088DC544;
    case 61u: goto L_088DC564;
    case 62u: goto L_088DC56C;
    case 63u: goto L_088DC570;
    case 64u: goto L_088DC58C;
    case 65u: goto L_088DC5C8;
    case 66u: goto L_088DC5D8;
    case 67u: goto L_088DC5F0;
    case 68u: goto L_088DC604;
    case 69u: goto L_088DC60C;
    case 70u: goto L_088DC624;
    case 71u: goto L_088DC62C;
    case 72u: goto L_088DC658;
    case 73u: goto L_088DC660;
    case 74u: goto L_088DC668;
    case 75u: goto L_088DC67C;
    case 76u: goto L_088DC684;
    case 77u: goto L_088DC69C;
    case 78u: goto L_088DC6A4;
    case 79u: goto L_088DC6AC;
    case 80u: goto L_088DC6B0;
    case 81u: goto L_088DC6B8;
    case 82u: goto L_088DC6C0;
    case 83u: goto L_088DC6D0;
    case 84u: goto L_088DC6EC;
    case 85u: goto L_088DC6F4;
    case 86u: goto L_088DC714;
    case 87u: goto L_088DC71C;
    case 88u: goto L_088DC724;
    case 89u: goto L_088DC740;
    case 90u: goto L_088DC748;
    case 91u: goto L_088DC768;
    case 92u: goto L_088DC770;
    case 93u: goto L_088DC778;
    case 94u: goto L_088DC788;
    case 95u: goto L_088DC794;
    case 96u: goto L_088DC7B8;
    case 97u: goto L_088DC830;
    case 98u: goto L_088DC888;
    case 99u: goto L_088DC894;
    case 100u: goto L_088DC8A8;
    case 101u: goto L_088DC8B4;
    case 102u: goto L_088DC8C4;
    case 103u: goto L_088DC8C8;
    case 104u: goto L_088DC8DC;
    case 105u: goto L_088DC8E4;
    case 106u: goto L_088DC8FC;
    case 107u: goto L_088DC910;
    case 108u: goto L_088DC924;
    case 109u: goto L_088DC938;
    case 110u: goto L_088DC944;
    case 111u: goto L_088DC960;
    case 112u: goto L_088DC974;
    case 113u: goto L_088DC990;
    case 114u: goto L_088DC9CC;
    case 115u: goto L_088DC9DC;
    case 116u: goto L_088DC9E8;
    case 117u: goto L_088DCA3C;
    case 118u: goto L_088DCA48;
    case 119u: goto L_088DCA50;
    case 120u: goto L_088DCA5C;
    case 121u: goto L_088DCA7C;
    case 122u: goto L_088DCA8C;
    case 123u: goto L_088DCAA8;
    case 124u: goto L_088DCACC;
    case 125u: goto L_088DCADC;
    case 126u: goto L_088DCAE4;
    case 127u: goto L_088DCB28;
    case 128u: goto L_088DCB5C;
    case 129u: goto L_088DCB98;
    case 130u: goto L_088DCBB8;
    case 131u: goto L_088DCBC0;
    case 132u: goto L_088DCBE0;
    case 133u: goto L_088DCBE8;
    case 134u: goto L_088DCBF0;
    case 135u: goto L_088DCBFC;
    case 136u: goto L_088DCC00;
    case 137u: goto L_088DCC24;
    case 138u: goto L_088DCC60;
    case 139u: goto L_088DCC6C;
    case 140u: goto L_088DCCD0;
    case 141u: goto L_088DCCEC;
    case 142u: goto L_088DCCFC;
    case 143u: goto L_088DCD0C;
    case 144u: goto L_088DCD28;
    case 145u: goto L_088DCD3C;
    case 146u: goto L_088DCD54;
    case 147u: goto L_088DCD70;
    case 148u: goto L_088DCD84;
    case 149u: goto L_088DCD90;
    case 150u: goto L_088DCDB0;
    case 151u: goto L_088DCDC0;
    case 152u: goto L_088DCDDC;
    case 153u: goto L_088DCE18;
    case 154u: goto L_088DCE28;
    case 155u: goto L_088DCE34;
    case 156u: goto L_088DCE44;
    case 157u: goto L_088DCE70;
    case 158u: goto L_088DCEC4;
    case 159u: goto L_088DCECC;
    case 160u: goto L_088DCEE0;
    case 161u: goto L_088DCF04;
    case 162u: goto L_088DCF08;
    case 163u: goto L_088DCF44;
    case 164u: goto L_088DD008;
    case 165u: goto L_088DD014;
    case 166u: goto L_088DD04C;
    case 167u: goto L_088DD060;
    case 168u: goto L_088DD07C;
    case 169u: goto L_088DD080;
    case 170u: goto L_088DD090;
    case 171u: goto L_088DD0A0;
    case 172u: goto L_088DD0BC;
    case 173u: goto L_088DD0CC;
    case 174u: goto L_088DD0D0;
    case 175u: goto L_088DD0E4;
    case 176u: goto L_088DD0EC;
    case 177u: goto L_088DD114;
    case 178u: goto L_088DD14C;
    case 179u: goto L_088DD154;
    case 180u: goto L_088DD164;
    case 181u: goto L_088DD174;
    case 182u: goto L_088DD17C;
    case 183u: goto L_088DD18C;
    case 184u: goto L_088DD190;
    case 185u: goto L_088DD1A4;
    case 186u: goto L_088DD1B4;
    case 187u: goto L_088DD1C0;
    case 188u: goto L_088DD1CC;
    case 189u: goto L_088DD224;
    case 190u: goto L_088DD234;
    case 191u: goto L_088DD244;
    case 192u: goto L_088DD24C;
    case 193u: goto L_088DD258;
    case 194u: goto L_088DD260;
    case 195u: goto L_088DD294;
    case 196u: goto L_088DD29C;
    case 197u: goto L_088DD2A4;
    case 198u: goto L_088DD2B0;
    case 199u: goto L_088DD2C4;
    case 200u: goto L_088DD2FC;
    case 201u: goto L_088DD354;
    case 202u: goto L_088DD36C;
    case 203u: goto L_088DD37C;
    case 204u: goto L_088DD3D4;
    case 205u: goto L_088DD3E4;
    case 206u: goto L_088DD3F0;
    case 207u: goto L_088DD400;
    case 208u: goto L_088DD410;
    case 209u: goto L_088DD440;
    case 210u: goto L_088DD44C;
    case 211u: goto L_088DD458;
    case 212u: goto L_088DD494;
    case 213u: goto L_088DD4E4;
    case 214u: goto L_088DD4F0;
    case 215u: goto L_088DD4F8;
    case 216u: goto L_088DD4FC;
    case 217u: goto L_088DD514;
    case 218u: goto L_088DD570;
    case 219u: goto L_088DD590;
    case 220u: goto L_088DD5A4;
    case 221u: goto L_088DD5C0;
    case 222u: goto L_088DD5D4;
    case 223u: goto L_088DD5E8;
    case 224u: goto L_088DD5F0;
    case 225u: goto L_088DD620;
    case 226u: goto L_088DD630;
    case 227u: goto L_088DD63C;
    case 228u: goto L_088DD670;
    case 229u: goto L_088DD6A8;
    case 230u: goto L_088DD6B8;
    case 231u: goto L_088DD6C0;
    case 232u: goto L_088DD6C8;
    case 233u: goto L_088DD6E4;
    case 234u: goto L_088DD6FC;
    case 235u: goto L_088DD704;
    case 236u: goto L_088DD720;
    case 237u: goto L_088DD730;
    case 238u: goto L_088DD73C;
    case 239u: goto L_088DD764;
    case 240u: goto L_088DD79C;
    case 241u: goto L_088DD7AC;
    case 242u: goto L_088DD7B4;
    case 243u: goto L_088DD7BC;
    case 244u: goto L_088DD7D8;
    case 245u: goto L_088DD7F0;
    case 246u: goto L_088DD7F8;
    case 247u: goto L_088DD814;
    case 248u: goto L_088DD824;
    case 249u: goto L_088DD830;
    case 250u: goto L_088DD858;
    case 251u: goto L_088DD888;
    case 252u: goto L_088DD898;
    case 253u: goto L_088DD8A0;
    case 254u: goto L_088DD8A8;
    case 255u: goto L_088DD8C4;
    case 256u: goto L_088DD8D4;
    case 257u: goto L_088DD8E0;
    case 258u: goto L_088DD8E4;
    case 259u: goto L_088DD990;
    case 260u: goto L_088DD9A0;
    case 261u: goto L_088DD9AC;
    case 262u: goto L_088DD9CC;
    case 263u: goto L_088DD9FC;
    case 264u: goto L_088DDA0C;
    case 265u: goto L_088DDA14;
    case 266u: goto L_088DDA1C;
    case 267u: goto L_088DDA38;
    case 268u: goto L_088DDA48;
    case 269u: goto L_088DDA54;
    case 270u: goto L_088DDA70;
    case 271u: goto L_088DDA80;
    case 272u: goto L_088DDA8C;
    case 273u: goto L_088DDAAC;
    case 274u: goto L_088DDAE4;
    case 275u: goto L_088DDAF0;
    case 276u: goto L_088DDAF8;
    case 277u: goto L_088DDAFC;
    case 278u: goto L_088DDB1C;
    case 279u: goto L_088DDB98;
    case 280u: goto L_088DDBA4;
    case 281u: goto L_088DDBBC;
    case 282u: goto L_088DDBCC;
    case 283u: goto L_088DDBD8;
    case 284u: goto L_088DDBF8;
    case 285u: goto L_088DDC30;
    case 286u: goto L_088DDC5C;
    case 287u: goto L_088DDC68;
    case 288u: goto L_088DDC70;
    case 289u: goto L_088DDC74;
    case 290u: goto L_088DDC84;
    case 291u: goto L_088DDC90;
    case 292u: goto L_088DDCA0;
    case 293u: goto L_088DDCA8;
    case 294u: goto L_088DDCB0;
    case 295u: goto L_088DDCB4;
    case 296u: goto L_088DDCD0;
    case 297u: goto L_088DDCD8;
    case 298u: goto L_088DDCF8;
    case 299u: goto L_088DDD04;
    case 300u: goto L_088DDD1C;
    case 301u: goto L_088DDD20;
    case 302u: goto L_088DDD40;
    case 303u: goto L_088DDD78;
    case 304u: goto L_088DDD9C;
    case 305u: goto L_088DDDA8;
    case 306u: goto L_088DDDBC;
    case 307u: goto L_088DDDDC;
    case 308u: goto L_088DDE14;
    case 309u: goto L_088DDE38;
    case 310u: goto L_088DDE44;
    case 311u: goto L_088DDE58;
    case 312u: goto L_088DDE78;
    case 313u: goto L_088DDEB0;
    case 314u: goto L_088DDEC0;
    case 315u: goto L_088DDEC8;
    case 316u: goto L_088DDED0;
    case 317u: goto L_088DDEE4;
    case 318u: goto L_088DDEFC;
    case 319u: goto L_088DDF0C;
    case 320u: goto L_088DDF34;
    case 321u: goto L_088DDF58;
    case 322u: goto L_088DDF68;
    case 323u: goto L_088DDF90;
    case 324u: goto L_088DDFB4;
    case 325u: goto L_088DDFD8;
    case 326u: goto L_088DE06C;
    case 327u: goto L_088DE074;
    case 328u: goto L_088DE080;
    case 329u: goto L_088DE084;
    case 330u: goto L_088DE08C;
    case 331u: goto L_088DE094;
    case 332u: goto L_088DE09C;
    case 333u: goto L_088DE0A0;
    case 334u: goto L_088DE0A8;
    case 335u: goto L_088DE0B0;
    case 336u: goto L_088DE0B8;
    case 337u: goto L_088DE0BC;
    case 338u: goto L_088DE0C8;
    case 339u: goto L_088DE0DC;
    case 340u: goto L_088DE140;
    case 341u: goto L_088DE160;
    case 342u: goto L_088DE174;
    case 343u: goto L_088DE184;
    case 344u: goto L_088DE18C;
    case 345u: goto L_088DE194;
    case 346u: goto L_088DE1A0;
    case 347u: goto L_088DE1B4;
    case 348u: goto L_088DE1C0;
    case 349u: goto L_088DE1CC;
    case 350u: goto L_088DE1D4;
    case 351u: goto L_088DE1E4;
    case 352u: goto L_088DE1EC;
    case 353u: goto L_088DE240;
    case 354u: goto L_088DE2B8;
    case 355u: goto L_088DE338;
    case 356u: goto L_088DE410;
    case 357u: goto L_088DE42C;
    case 358u: goto L_088DE448;
    case 359u: goto L_088DE464;
    case 360u: goto L_088DE480;
    case 361u: goto L_088DE49C;
    case 362u: goto L_088DE4B8;
    case 363u: goto L_088DE4CC;
    case 364u: goto L_088DE4E0;
    case 365u: goto L_088DE4F4;
    case 366u: goto L_088DE508;
    case 367u: goto L_088DE51C;
    case 368u: goto L_088DE530;
    case 369u: goto L_088DE544;
    case 370u: goto L_088DE558;
    case 371u: goto L_088DE56C;
    case 372u: goto L_088DE580;
    case 373u: goto L_088DE594;
    case 374u: goto L_088DE5A8;
    case 375u: goto L_088DE5BC;
    case 376u: goto L_088DE5D0;
    case 377u: goto L_088DE5E4;
    case 378u: goto L_088DE600;
    case 379u: goto L_088DE61C;
    case 380u: goto L_088DE638;
    case 381u: goto L_088DE654;
    case 382u: goto L_088DE670;
    case 383u: goto L_088DE68C;
    case 384u: goto L_088DE6AC;
    case 385u: goto L_088DE6C4;
    case 386u: goto L_088DE6DC;
    case 387u: goto L_088DE6F8;
    case 388u: goto L_088DE714;
    case 389u: goto L_088DE740;
    case 390u: goto L_088DE754;
    case 391u: goto L_088DE768;
    case 392u: goto L_088DE780;
    case 393u: goto L_088DE79C;
    case 394u: goto L_088DE7B8;
    case 395u: goto L_088DE7D4;
    case 396u: goto L_088DE7F0;
    case 397u: goto L_088DE80C;
    case 398u: goto L_088DE828;
    case 399u: goto L_088DE844;
    case 400u: goto L_088DE860;
    case 401u: goto L_088DE87C;
    case 402u: goto L_088DE890;
    case 403u: goto L_088DE8A4;
    case 404u: goto L_088DE8B8;
    case 405u: goto L_088DE8CC;
    case 406u: goto L_088DE8E0;
    case 407u: goto L_088DE8F4;
    case 408u: goto L_088DE924;
    case 409u: goto L_088DE954;
    case 410u: goto L_088DE958;
    case 411u: goto L_088DE9AC;
    case 412u: goto L_088DE9BC;
    case 413u: goto L_088DEA14;
    case 414u: goto L_088DEA24;
    case 415u: goto L_088DEA38;
    case 416u: goto L_088DEA88;
    case 417u: goto L_088DEAAC;
    case 418u: goto L_088DEAB8;
    case 419u: goto L_088DEB18;
    case 420u: goto L_088DEB38;
    case 421u: goto L_088DEB40;
    case 422u: goto L_088DEB5C;
    case 423u: goto L_088DEB60;
    case 424u: goto L_088DEB74;
    case 425u: goto L_088DEB90;
    case 426u: goto L_088DEBA8;
    case 427u: goto L_088DEBC0;
    case 428u: goto L_088DEBC4;
    case 429u: goto L_088DF068;
    case 430u: goto L_088DF3F8;
    case 431u: goto L_088DF404;
    case 432u: goto L_088DF414;
    case 433u: goto L_088DF418;
    case 434u: goto L_088DF454;
    case 435u: goto L_088DF5A8;
    case 436u: goto L_088DF5CC;
    case 437u: goto L_088DF5D8;
    case 438u: goto L_088DF5E0;
    case 439u: goto L_088DF5E8;
    case 440u: goto L_088DF5F0;
    case 441u: goto L_088DF5F8;
    case 442u: goto L_088DF604;
    case 443u: goto L_088DF60C;
    case 444u: goto L_088DF610;
    case 445u: goto L_088DF61C;
    case 446u: goto L_088DF634;
    case 447u: goto L_088DF63C;
    case 448u: goto L_088DF658;
    case 449u: goto L_088DF65C;
    case 450u: goto L_088DF694;
    case 451u: goto L_088DF69C;
    case 452u: goto L_088DF6EC;
    case 453u: goto L_088DF6FC;
    case 454u: goto L_088DF70C;
    case 455u: goto L_088DF714;
    case 456u: goto L_088DF720;
    case 457u: goto L_088DF738;
    case 458u: goto L_088DF74C;
    case 459u: goto L_088DF764;
    case 460u: goto L_088DF770;
    case 461u: goto L_088DF784;
    case 462u: goto L_088DF790;
    case 463u: goto L_088DF79C;
    case 464u: goto L_088DF7AC;
    case 465u: goto L_088DF7B8;
    case 466u: goto L_088DF7D8;
    case 467u: goto L_088DF7EC;
    case 468u: goto L_088DF7F4;
    case 469u: goto L_088DF7F8;
    case 470u: goto L_088DF80C;
    case 471u: goto L_088DF818;
    case 472u: goto L_088DF830;
    case 473u: goto L_088DF838;
    case 474u: goto L_088DF844;
    case 475u: goto L_088DF854;
    case 476u: goto L_088DF860;
    case 477u: goto L_088DF878;
    case 478u: goto L_088DF880;
    case 479u: goto L_088DF88C;
    case 480u: goto L_088DF89C;
    case 481u: goto L_088DF8A8;
    case 482u: goto L_088DF8BC;
    case 483u: goto L_088DF8D4;
    case 484u: goto L_088DF8EC;
    case 485u: goto L_088DF90C;
    case 486u: goto L_088DF928;
    case 487u: goto L_088DF934;
    case 488u: goto L_088DF93C;
    case 489u: goto L_088DF950;
    case 490u: goto L_088DF958;
    case 491u: goto L_088DF960;
    case 492u: goto L_088DF968;
    case 493u: goto L_088DF980;
    case 494u: goto L_088DF98C;
    case 495u: goto L_088DF99C;
    case 496u: goto L_088DF9A0;
    case 497u: goto L_088DF9B0;
    case 498u: goto L_088DF9D0;
    case 499u: goto L_088DFA08;
    case 500u: goto L_088DFA70;
    case 501u: goto L_088DFABC;
    case 502u: goto L_088DFAF8;
    case 503u: goto L_088DFB34;
    case 504u: goto L_088DFB3C;
    case 505u: goto L_088DFB6C;
    case 506u: goto L_088DFB74;
    case 507u: goto L_088DFB88;
    case 508u: goto L_088DFB90;
    case 509u: goto L_088DFC1C;
    case 510u: goto L_088DFC28;
    case 511u: goto L_088DFC30;
    case 512u: goto L_088DFC34;
    case 513u: goto L_088DFCBC;
    case 514u: goto L_088DFD48;
    case 515u: goto L_088DFDCC;
    case 516u: goto L_088DFDD4;
    case 517u: goto L_088DFDF0;
    case 518u: goto L_088DFDF8;
    case 519u: goto L_088DFE14;
    case 520u: goto L_088DFE20;
    case 521u: goto L_088DFE28;
    case 522u: goto L_088DFE44;
    case 523u: goto L_088DFE60;
    case 524u: goto L_088DFE78;
    case 525u: goto L_088DFE80;
    case 526u: goto L_088DFF18;
    case 527u: goto L_088DFF64;
    case 528u: goto L_088DFFA8;
    case 529u: goto L_088DFFAC;
    case 530u: goto L_088DFFD4;
    case 531u: goto L_088DFFD8;
    case 532u: goto L_088DFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088DC004:
{
    float f15 = hot_regs.f15;
    float f17 = ctx.fpr[17];
    float f26 = ctx.fpr[26];
    f17 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    f26 = f26 - f17;
    f15 = f15 - f17;
    f26 = f26 / f15;
    hot_regs.f12 = f26 - hot_regs.f12;
    hot_regs.f15 = f15;
    ctx.fpr[17] = f17;
    ctx.fpr[26] = f26;
    goto L_088DC018;
}
L_088DC018:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[23];
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_088DC02C;
      }
      goto L_088DC020;
    }
L_088DC020:
{
    float f15 = hot_regs.f15;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23496)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = f15; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_088DC040;
      }
      goto L_088DC02C;
    }
}
L_088DC02C:
{
    float f13 = hot_regs.f13;
    hot_regs.g4 = (0u | 2u);
    if (ctx.gpr[22] != hot_regs.g4) {
    { const float fs = hot_regs.f15; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.f13 = f13;
        goto L_088DC044;
    }
    goto L_088DC038;
}
L_088DC038:
{
    float f15 = hot_regs.f15;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23492)));
    { const float fs = f15; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    hot_regs.f15 = f15;
    goto L_088DC040;
}
L_088DC040:
{
    float f13 = hot_regs.f13;
    { const float fs = hot_regs.f15; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.f13 = f13;
    goto L_088DC044;
}
L_088DC044:
{
    float f13 = hot_regs.f13;
    float f22 = hot_regs.f22;
    f13 = f22 - f13;
    ctx.set_fpu_condition((f22 < f13));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f22));
    hot_regs.f13 = f13;
        goto L_088DC058;
    }
    goto L_088DC058;
}
L_088DC058:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((hot_regs.f14 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = f12;
        goto L_088DC06C;
    }
    goto L_088DC06C;
}
L_088DC06C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23508)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = hot_regs.f22 - f13;
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = hot_regs.f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f13 + f12;
    { const float fs = f16; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23476), std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[16] = f16;
    goto L_088DC094;
}
L_088DC094:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_088DC098;
L_088DC098:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 + g4);
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 << 2u);
    g4 = (ctx.gpr[16] + g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23476)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DC104;
      }
      goto L_088DC0BC;
    }
}
L_088DC0BC:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6056)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6052)));
    { const float fs = f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f14 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088DC104;
      }
      goto L_088DC0D8;
    }
}
L_088DC0D8:
{
    float f13 = hot_regs.f13;
    f13 = f13 - hot_regs.f14;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23472)));
    f13 = f13 / hot_regs.f12;
    ctx.set_fpu_condition((hot_regs.f22 < f13));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = f13;
        goto L_088DC0F4;
    }
    goto L_088DC0F4;
}
L_088DC0F4:
{
    float f0 = ctx.fpr[0];
    hot_regs.f12 = hot_regs.f22 - hot_regs.f13;
    { const float fs = f0; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23476), std::bit_cast<std::uint32_t>(f0));
    ctx.fpr[0] = f0;
      if (branch_taken) {
          goto L_088DC15C;
      }
      goto L_088DC104;
    }
}
L_088DC104:
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC15C;
      }
      goto L_088DC114;
    }
L_088DC114:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6056)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6052)));
    { const float fs = hot_regs.f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088DC15C;
      }
      goto L_088DC134;
    }
}
L_088DC134:
{
    float f12 = hot_regs.f12;
    f12 = f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23472)));
    f12 = f12 / hot_regs.f14;
    ctx.set_fpu_condition((hot_regs.f22 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = f12;
        goto L_088DC150;
    }
    goto L_088DC150;
}
L_088DC150:
{
    float f0 = ctx.fpr[0];
    float f12 = hot_regs.f12;
    f12 = hot_regs.f22 - f12;
    { const float fs = f0; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-23476), std::bit_cast<std::uint32_t>(f0));
    ctx.fpr[0] = f0;
    hot_regs.f12 = f12;
    goto L_088DC15C;
}
L_088DC15C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
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
L_088DC198:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088DC1D8;
      }
      goto L_088DC1A8;
    }
}
L_088DC1A8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2234u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(22640));
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), g6);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088DC1C4;
      }
      goto L_088DC1B8;
    }
}
L_088DC1B8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2235u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-30256));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), g6);
    hot_regs.g6 = g6;
    goto L_088DC1C4;
}
L_088DC1C4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DC1D8;
      }
      goto L_088DC1D0;
    }
}
L_088DC1D0:
    hot_regs.g31 = (0x088DC1D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC1D8u) goto L_088DC1D8;
    return;
L_088DC1D8:
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
L_088DC1E4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g5 = (g5 & 65535u);
    g8 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(1448)));
    g5 = (g5 & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g5); const std::int32_t divisor = static_cast<std::int32_t>(g8); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g5 = (g6 + g6);
    g6 = (2232u << 16u);
    g5 = (g5 << 2u);
    g6 = (g6 + static_cast<std::uint32_t>(-16584));
    g5 = (g5 + g6);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g9 = (ctx.lo);
    g6 = (g6 + g9);
    g9 = (ctx.hi);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g8)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g5 = (g5 + g9);
    g8 = (ctx.lo);
    g8 = (g8 + g5);
    { const bool branch_taken = static_cast<std::int32_t>(g6) < 0;
    aot_mem.aot_store16(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g8));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088DC264;
      }
      goto L_088DC23C;
    }
}
L_088DC23C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1448)));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088DC264;
      }
      goto L_088DC24C;
    }
}
L_088DC24C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
      if (branch_taken) {
          goto L_088DC264;
      }
      goto L_088DC254;
    }
L_088DC254:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC264;
      }
      goto L_088DC25C;
    }
L_088DC25C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088DC268;
      }
      goto L_088DC264;
    }
L_088DC264:
    hot_regs.g2 = (0u | 0u);
    goto L_088DC268;
L_088DC268:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC270:
{
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g20);
    g20 = (hot_regs.g5 & 65535u);
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x088DC2A8u);
    hot_regs.g5 = (g20 | 0u);
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
    goto L_088DC1E4;
}
L_088DC2A8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC300;
      }
      goto L_088DC2B0;
    }
L_088DC2B0:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088DC2C4u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    goto L_088DC7B8;
L_088DC2C4:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    g4 = (1u << 16u);
    g4 = (ctx.gpr[16] & g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DC2F4;
      }
      goto L_088DC2D8;
    }
}
L_088DC2D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 << (ctx.gpr[18] & 31u));
    g4 = (ctx.gpr[16] & g4);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_088DC308;
    }
    goto L_088DC2EC;
}
L_088DC2EC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088DC34C;
      }
      goto L_088DC2F4;
    }
L_088DC2F4:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[20]));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088DC34C;
      }
      goto L_088DC300;
    }
L_088DC300:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088DC34C;
      }
      goto L_088DC308;
    }
L_088DC308:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 0u);
    g4 = (g4 & 65535u);
    g4 = (g4 << 2u);
    g4 = (ctx.gpr[19] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (8u << 16u);
    g4 = (g4 >> (g5 & 31u));
    g5 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    g5 = (2u << 16u);
    g4 = (g4 & g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DC344;
      }
      goto L_088DC33C;
    }
}
L_088DC33C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088DC34C;
      }
      goto L_088DC344;
    }
L_088DC344:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088DC34C;
      }
      goto L_088DC34C;
    }
L_088DC34C:
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
L_088DC36C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    g7 = (g6 & 65535u);
    g6 = (g7 & 65535u);
    g6 = (g6 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    g6 = (hot_regs.g4 + g6);
    ctx.gpr[16] = (g5 | 0u);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g5 >> 0u);
    g5 = (8u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g6 = (g6 & g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g18);
    g18 = (g7 << 5u);
    g5 = (4u << 16u);
    g18 = (hot_regs.g4 + g18);
    ctx.gpr[8] = (g6 & g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[17] = (g18 + static_cast<std::uint32_t>(1520));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088DC470;
      }
      goto L_088DC3C0;
    }
}
L_088DC3C0:
    hot_regs.g5 = (hot_regs.g6 | hot_regs.g5);
    hot_regs.g6 = (hot_regs.g7 & 65535u);
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g6);
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (65528u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    hot_regs.g5 = (hot_regs.g5 << 0u);
    hot_regs.g5 = (ctx.gpr[8] | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1452)));
    hot_regs.g5 = (hot_regs.g7 & 65535u);
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(1448)));
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g5); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g5 = (ctx.lo);
    hot_regs.g7 = (ctx.hi);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1456)));
    ctx.gpr[8] = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 1u));
    ctx.gpr[8] = (ctx.gpr[8] >> 31u);
    hot_regs.g6 = (hot_regs.g6 + ctx.gpr[8]);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 1u));
    hot_regs.g5 = (hot_regs.g5 - hot_regs.g6);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f15)));
    { const float fs = hot_regs.f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1460)));
    hot_regs.g4 = (hot_regs.g7 - hot_regs.g6);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = hot_regs.f14 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088DC470u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC470u) goto L_088DC470;
    return;
L_088DC470:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1528)));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x088DC48Cu);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC48Cu) goto L_088DC48C;
    return;
L_088DC48C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DC4A4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-13104));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(13076), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(13072), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(13080), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(13084), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(13088), hot_regs.g31);
    hot_regs.g31 = (0x088DC4D0u);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 583u, 0x08A2F9E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC4D0u) goto L_088DC4D0;
    return;
L_088DC4D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(36))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DC56C;
      }
      goto L_088DC4E0;
    }
}
L_088DC4E0:
    hot_regs.g7 = (2192u << 16u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1520));
    hot_regs.g5 = (0u | 361u);
    hot_regs.g6 = (0u | 32u);
    hot_regs.g31 = (0x088DC4F8u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-32180));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC4F8u) goto L_088DC4F8;
    return;
L_088DC4F8:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    goto L_088DC500;
L_088DC500:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC544;
      }
      goto L_088DC508;
    }
L_088DC508:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC544;
      }
      goto L_088DC510;
    }
L_088DC510:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DC528u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    goto L_088DCF44;
L_088DC528:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC538;
      }
      goto L_088DC530;
    }
L_088DC530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DC53C;
      }
      goto L_088DC538;
    }
L_088DC538:
    ctx.gpr[18] = (0u | 1u);
    goto L_088DC53C;
L_088DC53C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DC500;
      }
      goto L_088DC544;
    }
L_088DC544:
    hot_regs.g7 = (2190u << 16u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1520));
    hot_regs.g5 = (0u | 361u);
    hot_regs.g6 = (0u | 32u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g31 = (0x088DC564u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-15976));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC564u) goto L_088DC564;
    return;
L_088DC564:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088DC570;
      }
      goto L_088DC56C;
    }
L_088DC56C:
    hot_regs.g2 = (0u | 0u);
    goto L_088DC570;
L_088DC570:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(13072)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(13076)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(13080)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(13084)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(13088)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(13104));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DC58C:
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g18);
    g18 = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g6 = (aot_mem.aot_load16(g18 + static_cast<std::uint32_t>(1492)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(1464)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    hot_regs.g31 = (0x088DC5C8u);
    hot_regs.g5 = (g29 | 0u);
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    goto L_088DC36C;
}
L_088DC5C8:
    hot_regs.g6 = (ctx.gpr[18] + static_cast<std::uint32_t>(1472));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088DC5D8u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 717u, 0x0890F188u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC5D8u) goto L_088DC5D8;
    return;
L_088DC5D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 28u);
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    g4 = (g4 >> 2u);
    { const bool branch_taken = g4 == ctx.gpr[21];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DC658;
      }
      goto L_088DC5F0;
    }
}
L_088DC5F0:
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088DC604u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    goto L_088DC1E4;
L_088DC604:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC658;
      }
      goto L_088DC60C;
    }
L_088DC60C:
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088DC624u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_088DC270;
L_088DC624:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC658;
      }
      goto L_088DC62C;
    }
L_088DC62C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    g5 = (0u + static_cast<std::uint32_t>(-29));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1492), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    hot_regs.g6 = (ctx.gpr[21] & 7u);
    g4 = (g4 & g5);
    g5 = (hot_regs.g6 << 2u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DC794;
      }
      goto L_088DC658;
    }
}
L_088DC658:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_088DC660;
L_088DC660:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC6B8;
      }
      goto L_088DC668;
    }
L_088DC668:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 28u);
    g4 = (g4 >> 2u);
    { const bool branch_taken = g4 == ctx.gpr[21];
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DC6B8;
      }
      goto L_088DC67C;
    }
}
L_088DC67C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC6B8;
      }
      goto L_088DC684;
    }
L_088DC684:
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088DC69Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    goto L_088DCB5C;
L_088DC69C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC6AC;
      }
      goto L_088DC6A4;
    }
L_088DC6A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC6B0;
      }
      goto L_088DC6AC;
    }
L_088DC6AC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088DC6B0;
L_088DC6B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC660;
      }
      goto L_088DC6B8;
    }
L_088DC6B8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC6D0;
      }
      goto L_088DC6C0;
    }
L_088DC6C0:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g2 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1492), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_088DC794;
      }
      goto L_088DC6D0;
    }
L_088DC6D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    g6 = (g4 & 28u);
    g6 = (g6 >> 2u);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x088DC6ECu);
    g4 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_088DC1E4;
}
L_088DC6EC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC71C;
      }
      goto L_088DC6F4;
    }
L_088DC6F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    g6 = (g4 & 28u);
    g6 = (g6 >> 2u);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088DC714u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_088DC270;
}
L_088DC714:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC778;
      }
      goto L_088DC71C;
    }
L_088DC71C:
    hot_regs.g31 = (0x088DC724u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 739u, 0x0890F33Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC724u) goto L_088DC724;
    return;
L_088DC724:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    g6 = (g4 & 28u);
    g6 = (g6 >> 2u);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x088DC740u);
    g4 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_088DC1E4;
}
L_088DC740:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC770;
      }
      goto L_088DC748;
    }
L_088DC748:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1492)));
    g6 = (g4 & 28u);
    g6 = (g6 >> 2u);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088DC768u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_088DC270;
}
L_088DC768:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC788;
      }
      goto L_088DC770;
    }
L_088DC770:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088DC794;
      }
      goto L_088DC778;
    }
L_088DC778:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g2 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1492), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_088DC794;
      }
      goto L_088DC788;
    }
L_088DC788:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(1492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_088DC794;
L_088DC794:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_088DC7B8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-336));
    g5 = (g5 & 65535u);
    g8 = (g5 & 65535u);
    g8 = (g8 << 2u);
    g8 = (hot_regs.g4 + g8);
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(280), static_cast<std::uint16_t>(g5));
    g5 = (8u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), g17);
    g17 = (g8 >> 0u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g17 = (g17 & g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(320), g22);
    g5 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    g22 = (0u | 1u);
    g5 = (g22 << (g5 & 31u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), g5);
    g8 = (g17 & g5);
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    ctx.gpr[20] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(332), hot_regs.g31);
    { const bool branch_taken = g8 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), hot_regs.g7);
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    ctx.gpr[17] = g17;
    ctx.gpr[22] = g22;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088DCB28;
      }
      goto L_088DC830;
    }
}
L_088DC830:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116))))));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-5));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[23]);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116))))));
    hot_regs.g5 = (16025u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 8u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116))))));
    hot_regs.g5 = (hot_regs.g5 | 39322u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116))))));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g4 = (hot_regs.g4 | 2u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x088DC888u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 26u, 0x088F824Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC888u) goto L_088DC888;
    return;
L_088DC888:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g31 = (0x088DC894u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 26u, 0x088F824Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC894u) goto L_088DC894;
    return;
L_088DC894:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1464)));
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088DC8A8u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    goto L_088DC36C;
L_088DC8A8:
    ctx.gpr[30] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    ctx.gpr[19] = (hot_regs.g29 | 0u);
      if (branch_taken) {
          goto L_088DC8C4;
      }
      goto L_088DC8B4;
    }
L_088DC8B4:
{
    std::uint32_t g30 = ctx.gpr[30];
    hot_regs.g4 = (0u - g30);
    g30 = (hot_regs.g4 & 7u);
    { const bool branch_taken = 0u == 0u;
    g30 = (0u - g30);
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_088DC8C8;
      }
      goto L_088DC8C4;
    }
}
L_088DC8C4:
    ctx.gpr[30] = (ctx.gpr[30] & 7u);
    goto L_088DC8C8;
L_088DC8C8:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088DC8DCu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    goto L_088DC1E4;
L_088DC8DC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCA3C;
      }
      goto L_088DC8E4;
    }
L_088DC8E4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), ctx.gpr[30]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088DC8FCu);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC8FCu) goto L_088DC8FC;
    return;
L_088DC8FC:
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    ctx.gpr[30] = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    hot_regs.g31 = (0x088DC910u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 29u, 0x088F83CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC910u) goto L_088DC910;
    return;
L_088DC910:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(264)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088DC924u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    goto L_088DC36C;
L_088DC924:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088DC938u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC938u) goto L_088DC938;
    return;
L_088DC938:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[18];
    ctx.gpr[30] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(292)));
      if (branch_taken) {
          goto L_088DC960;
      }
      goto L_088DC944;
    }
L_088DC944:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(116))))));
    g4 = (g4 | 1u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(116))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    g4 = (g4 | 2u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_088DC960;
}
L_088DC960:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(116))))));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    g4 = (g4 & ctx.gpr[23]);
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[16];
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DC990;
      }
      goto L_088DC974;
    }
}
L_088DC974:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(116))))));
    g4 = (g4 | 1u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(116))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    g4 = (g4 | 2u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_088DC990;
}
L_088DC990:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116))))));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[23]);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116))))));
    hot_regs.g4 = (hot_regs.g4 | 4u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116))))));
    hot_regs.g4 = (hot_regs.g4 | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116))))));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g4 = (hot_regs.g4 | 2u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x088DC9CCu);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 583u, 0x08A2F9E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DC9CCu) goto L_088DC9CC;
    return;
L_088DC9CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(36))))));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
        goto L_088DC9E8;
    }
    goto L_088DC9DC;
}
L_088DC9DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[22] << (ctx.gpr[20] & 31u));
    ctx.gpr[17] = (ctx.gpr[17] | g4);
    g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    goto L_088DC9E8;
}
L_088DC9E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (8u << 16u);
    g5 = (g4 & 65535u);
    g5 = (g5 << 2u);
    g5 = (ctx.gpr[21] + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 >> 0u);
    g4 = (g4 & 65535u);
    g5 = (g5 & g6);
    g6 = (ctx.gpr[22] << (ctx.gpr[30] & 31u));
    g4 = (g4 << 2u);
    g5 = (g5 | g6);
    g4 = (ctx.gpr[21] + g4);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (65528u << 16u);
    g6 = (g6 & hot_regs.g7);
    g5 = (g5 << 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g5 = (g6 | g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088DCA3C;
      }
      goto L_088DCA3C;
    }
}
L_088DCA3C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g5 = (ctx.gpr[17] & 65280u);
      if (branch_taken) {
          goto L_088DCAE4;
      }
      goto L_088DCA48;
    }
L_088DCA48:
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCAE4;
      }
      goto L_088DCA50;
    }
L_088DCA50:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    if (g5 == ctx.gpr[18]) {
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116))))));
    hot_regs.g5 = g5;
        goto L_088DCA7C;
    }
    goto L_088DCA5C;
}
L_088DCA5C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(116))))));
    g5 = (g5 | 1u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(116))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    g5 = (g5 | 2u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(116))))));
    hot_regs.g5 = g5;
    goto L_088DCA7C;
}
L_088DCA7C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    g5 = (g5 & ctx.gpr[23]);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g4;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DCAA8;
      }
      goto L_088DCA8C;
    }
}
L_088DCA8C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(116))))));
    g5 = (g5 | 1u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(116))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g4);
    g4 = (g5 | 2u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088DCAA8;
}
L_088DCAA8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116))))));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[23]);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116))))));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g4 = (hot_regs.g4 | 4u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x088DCACCu);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 583u, 0x08A2F9E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DCACCu) goto L_088DCACC;
    return;
L_088DCACC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(36))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DCAE4;
      }
      goto L_088DCADC;
    }
}
L_088DCADC:
    hot_regs.g4 = (1u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] | hot_regs.g4);
    goto L_088DCAE4;
L_088DCAE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    g17 = (g17 | g4);
    g4 = (aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(280)));
    g6 = (65528u << 16u);
    g4 = (g4 & 65535u);
    g4 = (g4 << 2u);
    g4 = (ctx.gpr[21] + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & g6);
    g6 = (g17 << 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g5 = (g5 | g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-30256));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
    goto L_088DCB28;
}
L_088DCB28:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(324)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(328)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(332)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DCB5C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    ctx.gpr[21] = (hot_regs.g6 & 65535u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x088DCB98u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 745u, 0x0890F3BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DCB98u) goto L_088DCB98;
    return;
L_088DCB98:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(460)));
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    g6 = (g4 & 28u);
    g6 = (g6 >> 2u);
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x088DCBB8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_088DC1E4;
}
L_088DCBB8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCBF0;
      }
      goto L_088DCBC0;
    }
L_088DCBC0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(460)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    g6 = (g5 & 28u);
    g6 = (g6 >> 2u);
    g5 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088DCBE0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_088DC270;
}
L_088DCBE0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCBF0;
      }
      goto L_088DCBE8;
    }
L_088DCBE8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088DCC00;
      }
      goto L_088DCBF0;
    }
L_088DCBF0:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[20]));
    hot_regs.g31 = (0x088DCBFCu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 739u, 0x0890F33Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DCBFCu) goto L_088DCBFC;
    return;
L_088DCBFC:
    hot_regs.g2 = (0u | 0u);
    goto L_088DCC00;
L_088DCC00:
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
L_088DCC24:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(220), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(236), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), hot_regs.g31);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x088DCC60u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 26u, 0x088F824Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DCC60u) goto L_088DCC60;
    return;
L_088DCC60:
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x088DCC6Cu);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 26u, 0x088F824Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DCC6Cu) goto L_088DCC6C;
    return;
L_088DCC6C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), 0u);
    hot_regs.g4 = (16025u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(148))))));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-5));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[23]);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(148))))));
    hot_regs.g4 = (hot_regs.g4 | 8u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(148))))));
    hot_regs.g4 = (hot_regs.g4 | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(148))))));
    hot_regs.g4 = (hot_regs.g4 | 2u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x088DCCD0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DCCD0u) goto L_088DCCD0;
    return;
L_088DCCD0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u + static_cast<std::uint32_t>(-1));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(904))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(204), g4);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (2235u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DCF08;
      }
      goto L_088DCCEC;
    }
}
L_088DCCEC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(-2));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(176));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), hot_regs.g4);
    goto L_088DCCFC;
}
L_088DCCFC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(204)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g4 == hot_regs.g5;
    ctx.gpr[20] = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DCD3C;
      }
      goto L_088DCD0C;
    }
}
L_088DCD0C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.g6 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(1494)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1464)));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088DCD28u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    goto L_088DC36C;
}
L_088DCD28:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x088DCD3Cu);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(196));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DCD3Cu) goto L_088DCD3C;
    return;
L_088DCD3C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(904))))));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(204)));
    g17 = (g17 + static_cast<std::uint32_t>(-1));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g17) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088DCEE0;
      }
      goto L_088DCD54;
    }
}
L_088DCD54:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    g16 = (ctx.gpr[17] + ctx.gpr[17]);
    g16 = (g19 + g16);
    hot_regs.g6 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(1494)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(1464)));
    hot_regs.g4 = (g19 | 0u);
    hot_regs.g31 = (0x088DCD70u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    ctx.gpr[16] = g16;
    goto L_088DC36C;
}
L_088DCD70:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(200));
    hot_regs.g31 = (0x088DCD84u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DCD84u) goto L_088DCD84;
    return;
L_088DCD84:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    if (g4 == g29) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(148))))));
    hot_regs.g4 = g4;
        goto L_088DCDB0;
    }
    goto L_088DCD90;
}
L_088DCD90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(148))))));
    g4 = (g4 | 1u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(148))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), g29);
    g4 = (g4 | 2u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(148))))));
    hot_regs.g4 = g4;
    goto L_088DCDB0;
}
L_088DCDB0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    g4 = (g4 & ctx.gpr[23]);
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[30];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DCDDC;
      }
      goto L_088DCDC0;
    }
}
L_088DCDC0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(148))))));
    g4 = (g4 | 1u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(148))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    g4 = (g4 | 2u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_088DCDDC;
}
L_088DCDDC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(148))))));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[23]);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(148))))));
    hot_regs.g4 = (hot_regs.g4 | 4u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(148))))));
    hot_regs.g4 = (hot_regs.g4 | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(148))))));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    hot_regs.g4 = (hot_regs.g4 | 2u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x088DCE18u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 583u, 0x08A2F9E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DCE18u) goto L_088DCE18;
    return;
L_088DCE18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(36))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DCECC;
      }
      goto L_088DCE28;
    }
}
L_088DCE28:
    ctx.gpr[24] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[24];
    // nop
      if (branch_taken) {
          goto L_088DCECC;
      }
      goto L_088DCE34;
    }
L_088DCE34:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(904))))));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[20] << 3u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DCEC4;
      }
      goto L_088DCE44;
    }
}
L_088DCE44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g15 = ctx.gpr[15];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (g20 + g4);
    g4 = (g20 + g4);
    g5 = (g17 << 3u);
    g15 = (ctx.gpr[18] + g4);
    g4 = (g17 + g5);
    g4 = (g17 + g4);
    g5 = (ctx.gpr[18] + g4);
    g4 = (g20 + g20);
    g15 = (g15 + static_cast<std::uint32_t>(944));
    g5 = (g5 + static_cast<std::uint32_t>(944));
    g4 = (ctx.gpr[19] + g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[15] = g15;
    goto L_088DCE70;
}
L_088DCE70:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g15 = ctx.gpr[15];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g15 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store16(g15 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g7));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_store16(g15 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(g15 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g15 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g7));
    g6 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(1494)));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(1494), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(904))))));
    g16 = (g16 + static_cast<std::uint32_t>(2));
    g5 = (g5 + static_cast<std::uint32_t>(10));
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(1));
    g15 = (g15 + static_cast<std::uint32_t>(10));
    g6 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[15] = g15;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088DCE70;
      }
      goto L_088DCEC4;
    }
}
L_088DCEC4:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(ctx.gpr[24]));
    goto L_088DCECC;
L_088DCECC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(204)));
    g17 = (g17 + static_cast<std::uint32_t>(-1));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g17) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088DCD54;
      }
      goto L_088DCEE0;
    }
}
L_088DCEE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(904))))));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[20]);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), g4);
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DCCFC;
      }
      goto L_088DCF04;
    }
}
L_088DCF04:
    hot_regs.g4 = (2235u << 16u);
    goto L_088DCF08;
L_088DCF08:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g4 + static_cast<std::uint32_t>(-30256));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g4);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DCF44:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), hot_regs.g31);
    ctx.gpr[30] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 19u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1448), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (16416u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16288u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16160u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16032u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g7 << 2u);
    hot_regs.g4 = (hot_regs.g29 + hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1452), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1448)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g4 = (ctx.lo);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 1u));
    hot_regs.g5 = (hot_regs.g5 >> 31u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    ctx.gpr[18] = (ctx.gpr[19] & 65535u);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x088DD008u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 27u, 0x088F82FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD008u) goto L_088DD008;
    return;
L_088DD008:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x088DD014u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 29u, 0x088F83CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD014u) goto L_088DD014;
    return;
L_088DD014:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(1456));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1492), static_cast<std::uint16_t>(ctx.gpr[19]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[30] + hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x088DD04Cu);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD04Cu) goto L_088DD04C;
    return;
L_088DD04C:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(1472));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088DD060u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD060u) goto L_088DD060;
    return;
L_088DD060:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (8u << 16u);
    g21 = (g21 + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (2u << 16u);
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-30256));
    { const bool branch_taken = hot_regs.g2 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), g4);
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_088DD080;
      }
      goto L_088DD07C;
    }
}
L_088DD07C:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    goto L_088DD080;
L_088DD080:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x088DD090u);
    hot_regs.g6 = (0u | 1448u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD090u) goto L_088DD090;
    return;
L_088DD090:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(1494));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x088DD0A0u);
    hot_regs.g6 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD0A0u) goto L_088DD0A0;
    return;
L_088DD0A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    g4 = (g4 & 28u);
    g4 = (g4 >> 2u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DD0CC;
      }
      goto L_088DD0BC;
    }
}
L_088DD0BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u - g4);
    g4 = (g4 & 7u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u - g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DD0D0;
      }
      goto L_088DD0CC;
    }
}
L_088DD0CC:
    hot_regs.g4 = (hot_regs.g4 & 7u);
    goto L_088DD0D0;
L_088DD0D0:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1492)));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g31 = (0x088DD0E4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DC1E4;
L_088DD0E4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD114;
      }
      goto L_088DD0EC;
    }
L_088DD0EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g6 = (65528u << 16u);
    g4 = (g4 & 65535u);
    g4 = (g4 << 2u);
    g4 = (ctx.gpr[16] + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g5 = (g5 | ctx.gpr[19]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088DD114;
}
L_088DD114:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    hot_regs.f22 = std::bit_cast<float>(0u);
    g5 = (16640u << 16u);
    g4 = (g4 & 28u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    g4 = (g4 >> 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1488), g4);
    g5 = (17096u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    g4 = (0u | 1u);
    ctx.gpr[22] = (1u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088DD14C;
}
L_088DD14C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD400;
      }
      goto L_088DD154;
    }
L_088DD154:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    g4 = (static_cast<std::int32_t>(g4) < 8 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DD400;
      }
      goto L_088DD164;
    }
}
L_088DD164:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088DD174u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    goto L_088DC58C;
L_088DD174:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD1C0;
      }
      goto L_088DD17C;
    }
L_088DD17C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    g5 = (static_cast<std::int32_t>(g4) < 8 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (g4 << 2u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DD1A4;
      }
      goto L_088DD18C;
    }
}
L_088DD18C:
    hot_regs.g5 = (ctx.gpr[17] + hot_regs.g5);
    goto L_088DD190;
L_088DD190:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(908), 0u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DD190;
      }
      goto L_088DD1A4;
    }
}
L_088DD1A4:
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DD1B4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_088DCC24;
L_088DD1B4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088DD458;
      }
      goto L_088DD1C0;
    }
L_088DD1C0:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1492)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088DD3F0;
      }
      goto L_088DD1CC;
    }
L_088DD1CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(1492)));
    g6 = (2u << 16u);
    g5 = (g4 & 65535u);
    g5 = (g5 << 2u);
    g5 = (g16 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 65535u);
    g5 = (g5 >> 0u);
    g5 = (g5 & ctx.gpr[21]);
    g4 = (g4 << 2u);
    g5 = (g5 | g6);
    g4 = (g16 + g4);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (65528u << 16u);
    g6 = (g6 & hot_regs.g7);
    g5 = (g5 << 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g5 = (g6 | g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (0u | 0u);
    g5 = (0u | 0u);
    g6 = (g16 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_088DD224;
}
L_088DD224:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088DD258;
      }
      goto L_088DD234;
    }
}
L_088DD234:
    hot_regs.g7 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1492)));
    ctx.gpr[8] = (aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(1494)));
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088DD24C;
      }
      goto L_088DD244;
    }
L_088DD244:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_088DD258;
      }
      goto L_088DD24C;
    }
L_088DD24C:
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088DD224;
      }
      goto L_088DD258;
    }
L_088DD258:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD29C;
      }
      goto L_088DD260;
    }
L_088DD260:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1448)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g6 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1492)));
    g7 = (ctx.lo);
    g8 = (g7 + static_cast<std::uint32_t>(-1));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 1u));
    g8 = (g8 >> 31u);
    g7 = (g7 + g8);
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 1u));
    g7 = (g7 & 65535u);
    { const bool branch_taken = g6 != g7;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088DD29C;
      }
      goto L_088DD294;
    }
}
L_088DD294:
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_088DD29C;
L_088DD29C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD2B0;
      }
      goto L_088DD2A4;
    }
L_088DD2A4:
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_088DD3F0;
      }
      goto L_088DD2B0;
    }
L_088DD2B0:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g6 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(1492)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1464)));
    hot_regs.g4 = (g16 | 0u);
    hot_regs.g31 = (0x088DD2C4u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    goto L_088DC36C;
}
L_088DD2C4:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1492)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g5);
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(1494), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    hot_regs.g5 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(944));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x088DD2FCu);
    hot_regs.g6 = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD2FCu) goto L_088DD2FC;
    return;
L_088DD2FC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    g5 = (g4 << 3u);
    g5 = (g4 + g5);
    g4 = (g4 + g5);
    g4 = (ctx.gpr[17] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(944));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    { const float fs = f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g5 = (std::bit_cast<std::uint32_t>(f14));
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088DD36C;
      }
      goto L_088DD354;
    }
}
}
L_088DD354:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    f12 = f12 + ctx.fpr[24];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 << 24u);
    { const bool branch_taken = 0u == 0u;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 24u));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088DD37C;
      }
      goto L_088DD36C;
    }
}
}
L_088DD36C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 << 24u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 24u));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_088DD37C;
}
}
L_088DD37C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g5));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(904))))));
    g5 = (g4 << 3u);
    g5 = (g4 + g5);
    g5 = (g4 + g5);
    g5 = (g17 + g5);
    g6 = (g4 << 2u);
    g5 = (g5 + static_cast<std::uint32_t>(944));
    g6 = (g17 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(908), g5);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1492)));
    g4 = (g4 & 65535u);
    g4 = (g4 << 2u);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 >> 0u);
    g4 = (g4 & ctx.gpr[21]);
    g4 = (g4 & ctx.gpr[22]);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088DD3F0;
      }
      goto L_088DD3D4;
    }
}
L_088DD3D4:
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DD3E4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_088DCC24;
L_088DD3E4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088DD458;
      }
      goto L_088DD3F0;
    }
L_088DD3F0:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1492)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 64 ? 1u : 0u);
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_088DD14C;
      }
      goto L_088DD400;
    }
}
L_088DD400:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(904))))));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088DD440;
      }
      goto L_088DD410;
    }
L_088DD410:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1488)));
    g6 = (0u + static_cast<std::uint32_t>(-29));
    g5 = (g5 & 7u);
    g4 = (g4 & g6);
    g5 = (g5 << 2u);
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    g4 = (g4 | g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), g6);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088DD458;
      }
      goto L_088DD440;
    }
}
L_088DD440:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DD44Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_088DCC24;
L_088DD44C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g4);
    goto L_088DD458;
L_088DD458:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DD494:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    ctx.gpr[23] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(29704));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), hot_regs.g31);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(120));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088DD4E4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD4E4u) goto L_088DD4E4;
    return;
L_088DD4E4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_088DD4F8;
    }
    goto L_088DD4F0;
L_088DD4F0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DD4FC;
      }
      goto L_088DD4F8;
    }
L_088DD4F8:
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_088DD4FC;
L_088DD4FC:
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 12u);
    hot_regs.g31 = (0x088DD514u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD514u) goto L_088DD514;
    return;
L_088DD514:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088DD570u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD570u) goto L_088DD570;
    return;
L_088DD570:
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (2246u << 16u);
    g19 = (2232u << 16u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(20));
    g22 = (g22 + static_cast<std::uint32_t>(30712));
    g19 = (g19 + static_cast<std::uint32_t>(-16512));
    ctx.gpr[19] = g19;
    ctx.gpr[22] = g22;
    goto L_088DD590;
}
L_088DD590:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 + g4);
    g5 = (hot_regs.g29 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[30] = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DD5D4;
      }
      goto L_088DD5A4;
    }
}
L_088DD5A4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 - g4);
    g4 = (g4 + ctx.gpr[22]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != ctx.gpr[21];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DD5D4;
      }
      goto L_088DD5C0;
    }
}
L_088DD5C0:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x088DD5D4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD5D4u) goto L_088DD5D4;
    return;
L_088DD5D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[30] << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 9 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DD590;
      }
      goto L_088DD5E8;
    }
}
L_088DD5E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DD63C;
      }
      goto L_088DD5F0;
    }
L_088DD5F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    hot_regs.g7 = (hot_regs.g5 << 16u);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DD620u);
    ctx.gpr[9] = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 486u, 0x08A8E694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD620u) goto L_088DD620;
    return;
L_088DD620:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088DD630u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 352u, 0x08A8DD20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD630u) goto L_088DD630;
    return;
L_088DD630:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088DD5F0;
      }
      goto L_088DD63C;
    }
L_088DD63C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DD670:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g31 = (0x088DD6A8u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD6A8u) goto L_088DD6A8;
    return;
L_088DD6A8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2236u << 16u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
      if (branch_taken) {
          goto L_088DD6C0;
      }
      goto L_088DD6B8;
    }
L_088DD6B8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DD6C8;
      }
      goto L_088DD6C0;
    }
L_088DD6C0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_088DD6C8;
L_088DD6C8:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088DD6E4u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD6E4u) goto L_088DD6E4;
    return;
L_088DD6E4:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x088DD6FCu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD6FCu) goto L_088DD6FC;
    return;
L_088DD6FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DD73C;
      }
      goto L_088DD704;
    }
L_088DD704:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (ctx.gpr[16] & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g31 = (0x088DD720u);
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 500u, 0x08A8E8E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD720u) goto L_088DD720;
    return;
L_088DD720:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088DD730u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 352u, 0x08A8DD20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD730u) goto L_088DD730;
    return;
L_088DD730:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088DD704;
      }
      goto L_088DD73C;
    }
L_088DD73C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DD764:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g31 = (0x088DD79Cu);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD79Cu) goto L_088DD79C;
    return;
L_088DD79C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2236u << 16u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
      if (branch_taken) {
          goto L_088DD7B4;
      }
      goto L_088DD7AC;
    }
L_088DD7AC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DD7BC;
      }
      goto L_088DD7B4;
    }
L_088DD7B4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_088DD7BC;
L_088DD7BC:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088DD7D8u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD7D8u) goto L_088DD7D8;
    return;
L_088DD7D8:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x088DD7F0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD7F0u) goto L_088DD7F0;
    return;
L_088DD7F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DD830;
      }
      goto L_088DD7F8;
    }
L_088DD7F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (ctx.gpr[16] & 65535u);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g31 = (0x088DD814u);
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 505u, 0x08A8E960u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD814u) goto L_088DD814;
    return;
L_088DD814:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088DD824u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 352u, 0x08A8DD20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD824u) goto L_088DD824;
    return;
L_088DD824:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088DD7F8;
      }
      goto L_088DD830;
    }
L_088DD830:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DD858:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    hot_regs.g31 = (0x088DD888u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD888u) goto L_088DD888;
    return;
L_088DD888:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (2236u << 16u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
      if (branch_taken) {
          goto L_088DD8A0;
      }
      goto L_088DD898;
    }
L_088DD898:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DD8A8;
      }
      goto L_088DD8A0;
    }
L_088DD8A0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_088DD8A8;
L_088DD8A8:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (0u | 12u);
    hot_regs.g31 = (0x088DD8C4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD8C4u) goto L_088DD8C4;
    return;
L_088DD8C4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DD8D4u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD8D4u) goto L_088DD8D4;
    return;
L_088DD8D4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_088DD9AC;
      }
      goto L_088DD8E0;
    }
L_088DD8E0:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    goto L_088DD8E4;
L_088DD8E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    hot_regs.g2 = (hot_regs.g2 << 16u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    hot_regs.g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g2) >> 16u));
    ctx.gpr[3] = (ctx.gpr[3] << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[12] = (ctx.gpr[12] << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 16u));
    ctx.gpr[13] = (ctx.gpr[13] << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 16u));
    ctx.gpr[14] = (ctx.gpr[14] << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 16u));
    ctx.gpr[15] = (ctx.gpr[15] << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    hot_regs.g7 = (hot_regs.g7 << 16u);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[11] = (ctx.gpr[11] << 16u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    hot_regs.g31 = (0x088DD990u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 493u, 0x08A8E770u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD990u) goto L_088DD990;
    return;
L_088DD990:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DD9A0u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 352u, 0x08A8DD20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD9A0u) goto L_088DD9A0;
    return;
L_088DD9A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DD8E4;
      }
      goto L_088DD9AC;
    }
}
L_088DD9AC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DD9CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x088DD9FCu);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DD9FCu) goto L_088DD9FC;
    return;
L_088DD9FC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2236u << 16u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
      if (branch_taken) {
          goto L_088DDA14;
      }
      goto L_088DDA0C;
    }
L_088DDA0C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DDA1C;
      }
      goto L_088DDA14;
    }
L_088DDA14:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_088DDA1C;
L_088DDA1C:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x088DDA38u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDA38u) goto L_088DDA38;
    return;
L_088DDA38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DDA48u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDA48u) goto L_088DDA48;
    return;
L_088DDA48:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_088DDA8C;
      }
      goto L_088DDA54;
    }
L_088DDA54:
    hot_regs.g5 = (hot_regs.g4 & 65535u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g31 = (0x088DDA70u);
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 510u, 0x08A8E9DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDA70u) goto L_088DDA70;
    return;
L_088DDA70:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DDA80u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 352u, 0x08A8DD20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDA80u) goto L_088DDA80;
    return;
L_088DDA80:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    // nop
      if (branch_taken) {
          goto L_088DDA54;
      }
      goto L_088DDA8C;
    }
L_088DDA8C:
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
L_088DDAAC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(28));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088DDAE4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDAE4u) goto L_088DDAE4;
    return;
L_088DDAE4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_088DDAF8;
    }
    goto L_088DDAF0;
L_088DDAF0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DDAFC;
      }
      goto L_088DDAF8;
    }
L_088DDAF8:
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_088DDAFC;
L_088DDAFC:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 14u);
    hot_regs.g31 = (0x088DDB1Cu);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDB1Cu) goto L_088DDB1C;
    return;
L_088DDB1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DDB98u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDB98u) goto L_088DDB98;
    return;
L_088DDB98:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_088DDBD8;
      }
      goto L_088DDBA4;
    }
L_088DDBA4:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g7 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088DDBBCu);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 479u, 0x08A8E5E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDBBCu) goto L_088DDBBC;
    return;
L_088DDBBC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DDBCCu);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 352u, 0x08A8DD20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDBCCu) goto L_088DDBCC;
    return;
L_088DDBCC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    // nop
      if (branch_taken) {
          goto L_088DDBA4;
      }
      goto L_088DDBD8;
    }
L_088DDBD8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_088DDBF8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    hot_regs.g31 = (0x088DDC30u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDC30u) goto L_088DDC30;
    return;
L_088DDC30:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088DDC5Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDC5Cu) goto L_088DDC5C;
    return;
L_088DDC5C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_088DDC70;
    }
    goto L_088DDC68;
L_088DDC68:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_088DDC74;
      }
      goto L_088DDC70;
    }
L_088DDC70:
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_088DDC74;
L_088DDC74:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g31 = (0x088DDC84u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDC84u) goto L_088DDC84;
    return;
L_088DDC84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g31 = (0x088DDC90u);
    hot_regs.g5 = (hot_regs.g2 & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 516u, 0x08A8EA74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDC90u) goto L_088DDC90;
    return;
L_088DDC90:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088DDCA0u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 313u, 0x08A8DAA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDCA0u) goto L_088DDCA0;
    return;
L_088DDCA0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDCB0;
      }
      goto L_088DDCA8;
    }
L_088DDCA8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_088DDCB4;
      }
      goto L_088DDCB0;
    }
L_088DDCB0:
    hot_regs.g4 = (0u | 0u);
    goto L_088DDCB4;
L_088DDCB4:
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
          goto L_088DDCD8;
      }
      goto L_088DDCD0;
    }
}
L_088DDCD0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_088DDD20;
      }
      goto L_088DDCD8;
    }
L_088DDCD8:
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
          goto L_088DDD04;
      }
      goto L_088DDCF8;
    }
}
L_088DDCF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DDD20;
      }
      goto L_088DDD04;
    }
}
L_088DDD04:
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
          goto L_088DDD20;
      }
      goto L_088DDD1C;
    }
}
L_088DDD1C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088DDD20;
L_088DDD20:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DDD40:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x088DDD78u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDD78u) goto L_088DDD78;
    return;
L_088DDD78:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088DDD9Cu);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 421u, 0x08A8E188u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDD9Cu) goto L_088DDD9C;
    return;
L_088DDD9C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DDDA8u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 436u, 0x08862920u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDDA8u) goto L_088DDDA8;
    return;
L_088DDDA8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088DDDBCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDDBCu) goto L_088DDDBC;
    return;
L_088DDDBC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_088DDDDC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x088DDE14u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDE14u) goto L_088DDE14;
    return;
L_088DDE14:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088DDE38u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 433u, 0x08A8E2ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDE38u) goto L_088DDE38;
    return;
L_088DDE38:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DDE44u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 436u, 0x08862920u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDE44u) goto L_088DDE44;
    return;
L_088DDE44:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088DDE58u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDE58u) goto L_088DDE58;
    return;
L_088DDE58:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_088DDE78:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g31 = (0x088DDEB0u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDEB0u) goto L_088DDEB0;
    return;
L_088DDEB0:
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
      if (branch_taken) {
          goto L_088DDEC8;
      }
      goto L_088DDEC0;
    }
L_088DDEC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DDED0;
      }
      goto L_088DDEC8;
    }
L_088DDEC8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[18] = (hot_regs.g4 + ctx.gpr[18]);
    goto L_088DDED0;
L_088DDED0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x088DDEE4u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDEE4u) goto L_088DDEE4;
    return;
L_088DDEE4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088DDEFCu);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 322u, 0x08A8DB38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDEFCu) goto L_088DDEFC;
    return;
L_088DDEFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088DDF0Cu);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 472u, 0x08A8E55Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDF0Cu) goto L_088DDF0C;
    return;
L_088DDF0C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), g4);
    g4 = (aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (0u | 2u);
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(40), g4);
    g5 = (aot_mem.aot_load16(g2 + static_cast<std::uint32_t>(50)));
    g4 = (g5 - g4);
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(4), g4);
    g4 = (g2 + static_cast<std::uint32_t>(4));
    g5 = (g20 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088DDF34;
}
L_088DDF34:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g6 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(48)));
    hot_regs.g7 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(46)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g6 = (g6 - hot_regs.g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g4 = (g4 + static_cast<std::uint32_t>(2));
    g6 = (static_cast<std::int32_t>(g18) < 10 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088DDF34;
      }
      goto L_088DDF58;
    }
}
L_088DDF58:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088DDF68u);
    hot_regs.g6 = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DDF68u) goto L_088DDF68;
    return;
L_088DDF68:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DDF90:
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
L_088DDFB4:
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
L_088DDFD8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11056)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11020)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11060)));
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    hot_regs.g7 = (17279u << 16u);
    { const float fs = f17; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11024)));
    f15 = std::bit_cast<float>(hot_regs.g7);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11064)));
    { const float fs = f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = f16 + f14;
    { const float fs = ctx.fpr[19]; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f17 = ctx.fpr[18] + f17;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11028)));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = f15 + f13;
    { const float fs = f12; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f17));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g20);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    g20 = (std::bit_cast<std::uint32_t>(f14));
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(g20) >= 0;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_088DE074;
      }
      goto L_088DE06C;
    }
}
}
L_088DE06C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088DE084;
      }
      goto L_088DE074;
    }
L_088DE074:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 256 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE084;
      }
      goto L_088DE080;
    }
L_088DE080:
    ctx.gpr[20] = (0u | 255u);
    goto L_088DE084;
L_088DE084:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DE094;
      }
      goto L_088DE08C;
    }
L_088DE08C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088DE0A0;
      }
      goto L_088DE094;
    }
L_088DE094:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE0A0;
      }
      goto L_088DE09C;
    }
L_088DE09C:
    ctx.gpr[19] = (0u | 255u);
    goto L_088DE0A0;
L_088DE0A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DE0B0;
      }
      goto L_088DE0A8;
    }
L_088DE0A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DE0BC;
      }
      goto L_088DE0B0;
    }
L_088DE0B0:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE0BC;
      }
      goto L_088DE0B8;
    }
L_088DE0B8:
    ctx.gpr[18] = (0u | 255u);
    goto L_088DE0BC;
L_088DE0BC:
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    hot_regs.g31 = (0x088DE0C8u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DE0C8u) goto L_088DE0C8;
    return;
L_088DE0C8:
    hot_regs.g6 = (ctx.gpr[16] - ctx.gpr[17]);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x088DE0DCu);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DE0DCu) goto L_088DE0DC;
    return;
L_088DE0DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g4 = (hot_regs.g2 >> 31u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (ctx.gpr[1] | g4);
    g6 = (ctx.gpr[22] + g4);
    g7 = (g6 < g4 ? 1u : 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    g4 = (g6 | 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    g4 = (g4 | 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    g7 = (g7 + ctx.gpr[23]);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g4));
    g5 = (g7 + g5);
    hot_regs.g2 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
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
L_088DE140:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11240)));
    f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g5 = (16256u << 16u);
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088DE174;
      }
      goto L_088DE160;
    }
}
}
L_088DE160:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(f13)) && hot_regs.f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088DE18C;
      }
      goto L_088DE174;
    }
}
L_088DE174:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g5 = (g5 & 15u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DE18C;
      }
      goto L_088DE184;
    }
}
L_088DE184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE194;
      }
      goto L_088DE18C;
    }
L_088DE18C:
    hot_regs.g31 = (0x088DE194u);
    // nop
    goto L_088DE338;
L_088DE194:
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
L_088DE1A0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(11232), g5);
    g5 = (0u | 1u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(11236), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088DE1C0;
      }
      goto L_088DE1B4;
    }
}
L_088DE1B4:
    hot_regs.f12 = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_088DE1CC;
      }
      goto L_088DE1C0;
    }
L_088DE1C0:
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088DE1CC;
L_088DE1CC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE1D4:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(11236), 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DE1EC;
      }
      goto L_088DE1E4;
    }
}
L_088DE1E4:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088DE1EC;
L_088DE1EC:
    hot_regs.g4 = (16179u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 13107u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8576));
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
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE240:
{
    float f0 = ctx.fpr[0];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(8344))))));
    g7 = (g5 + g4);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g4 = (hot_regs.g6 + g4);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(g7);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(6060)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f14 = std::bit_cast<float>(g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(8352))))));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(6068)));
    g5 = (g5 + g4);
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(6064)));
    f17 = std::bit_cast<float>(g5);
    g4 = (hot_regs.g6 + g4);
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f17)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(6072)));
    f15 = std::bit_cast<float>(g4);
    f12 = f12 + f14;
    { const float fs = f16; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    f0 = f12 + f16;
    { const float fs = f13; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    jump_target = hot_regs.g31;
    f0 = f0 + f13;
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.fpr[0] = f0;
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
L_088DE2B8:
{
    float f0 = ctx.fpr[0];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(8344))))));
    g4 = (g4 + g4);
    g7 = (g5 + g4);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0))))));
    g4 = (hot_regs.g6 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    f12 = std::bit_cast<float>(g7);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(6060)));
    f14 = std::bit_cast<float>(g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(8352))))));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(6068)));
    g4 = (g4 + g4);
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (g5 + g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(6064)));
    ctx.fpr[17] = std::bit_cast<float>(g5);
    g4 = (hot_regs.g6 + g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    f12 = f12 + f14;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(6072)));
    f18 = std::bit_cast<float>(g4);
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    { const float fs = ctx.fpr[16]; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f15; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f0 = f12 + f13;
    jump_target = hot_regs.g31;
    f0 = f0 + f14;
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.fpr[0] = f0;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[18] = f18;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_088DE338:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    g5 = (aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(7650)));
    g5 = (g5 & 255u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f20));
    g5 = (17008u << 16u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f20 = std::bit_cast<float>(g5);
    f12 = f12 / f20;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), g17);
    g17 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(7648)));
    g5 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(7649)));
    g6 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (0u | 24u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g6); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    f14 = std::bit_cast<float>(g5);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    f12 = f14 + f12;
    f12 = f12 / f20;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), g16);
    g16 = (g4 | 0u);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8664)));
    g4 = (16256u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f22));
    f22 = std::bit_cast<float>(g4);
    f14 = f22 - f13;
    f15 = f22 - f12;
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    g6 = (g17 << 3u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), g18);
    g18 = (g16 + g6);
    g6 = (ctx.hi);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g6 = (g6 << 16u);
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g19);
    g19 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    g6 = (g19 << 3u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(6068), std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), g20);
    g20 = (g16 + g6);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(6072), std::bit_cast<std::uint32_t>(f12));
    { const float fs = f15; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g5 = (g18 + static_cast<std::uint32_t>(3520));
    g4 = (g16 | 0u);
    g6 = (g20 + static_cast<std::uint32_t>(3520));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(6060), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), hot_regs.g31);
    hot_regs.g31 = (0x088DE410u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(6064), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
    goto L_088DE240;
}
}
L_088DE410:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(3712));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(3712));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088DE42Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11068), hot_regs.g7);
    goto L_088DE240;
L_088DE42C:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(3904));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(3904));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x088DE448u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11072), hot_regs.g7);
    goto L_088DE240;
L_088DE448:
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4096));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(4096));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x088DE464u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11076), hot_regs.g7);
    goto L_088DE240;
L_088DE464:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4288));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(4288));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088DE480u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11080), hot_regs.g7);
    goto L_088DE240;
L_088DE480:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4480));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(4480));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x088DE49Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11084), hot_regs.g7);
    goto L_088DE240;
L_088DE49C:
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(640));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(640));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x088DE4B8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11088), hot_regs.g7);
    goto L_088DE240;
L_088DE4B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11008), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(832));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(832));
    hot_regs.g31 = (0x088DE4CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE4CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11012), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1024));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(1024));
    hot_regs.g31 = (0x088DE4E0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE4E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11016), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1216));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(1216));
    hot_regs.g31 = (0x088DE4F4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE4F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11020), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1408));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(1408));
    hot_regs.g31 = (0x088DE508u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE508:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11024), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1600));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(1600));
    hot_regs.g31 = (0x088DE51Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE51C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11028), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1792));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(1792));
    hot_regs.g31 = (0x088DE530u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE530:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11032), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1984));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(1984));
    hot_regs.g31 = (0x088DE544u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE544:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11036), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(2176));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(2176));
    hot_regs.g31 = (0x088DE558u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE558:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11040), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(2368));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(2368));
    hot_regs.g31 = (0x088DE56Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE56C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11044), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(2560));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(2560));
    hot_regs.g31 = (0x088DE580u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE580:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11048), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(2752));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(2752));
    hot_regs.g31 = (0x088DE594u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE594:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11052), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(2944));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(2944));
    hot_regs.g31 = (0x088DE5A8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE5A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11056), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(3136));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(3136));
    hot_regs.g31 = (0x088DE5BCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE5BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11060), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(3328));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(3328));
    hot_regs.g31 = (0x088DE5D0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE5D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11064), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4672));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(4672));
    hot_regs.g31 = (0x088DE5E4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE5E4:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4864));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(4864));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088DE600u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11104), hot_regs.g7);
    goto L_088DE240;
L_088DE600:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(5056));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(5056));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x088DE61Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11108), hot_regs.g7);
    goto L_088DE240;
L_088DE61C:
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(5248));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(5248));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x088DE638u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11112), hot_regs.g7);
    goto L_088DE240;
L_088DE638:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(5440));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(5440));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088DE654u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11116), hot_regs.g7);
    goto L_088DE240;
L_088DE654:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(5632));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(5632));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x088DE670u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11120), hot_regs.g7);
    goto L_088DE240;
L_088DE670:
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(5824));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(5824));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x088DE68Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11124), hot_regs.g7);
    goto L_088DE240;
L_088DE68C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16672u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(6016));
    hot_regs.f12 = ctx.fpr[0] / ctx.fpr[24];
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(6016));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DE6ACu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    goto L_088DE240;
}
L_088DE6AC:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(6208));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(6208));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = ctx.fpr[0] / ctx.fpr[24];
    hot_regs.g31 = (0x088DE6C4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088DE240;
L_088DE6C4:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(6400));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(6400));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = ctx.fpr[0] / ctx.fpr[24];
    hot_regs.g31 = (0x088DE6DCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11136), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088DE240;
L_088DE6DC:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(6592));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(6592));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088DE6F8u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(11140), static_cast<std::uint16_t>(hot_regs.g7));
    goto L_088DE240;
L_088DE6F8:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(6784));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(6784));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x088DE714u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(11142), static_cast<std::uint16_t>(hot_regs.g7));
    goto L_088DE240;
L_088DE714:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    g4 = (g17 << 4u);
    g17 = (g16 + g4);
    g4 = (g19 << 4u);
    g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    g19 = (g16 + g4);
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(11144), static_cast<std::uint16_t>(g6));
    hot_regs.g5 = (g17 + static_cast<std::uint32_t>(6976));
    g6 = (g19 + static_cast<std::uint32_t>(6976));
    hot_regs.g31 = (0x088DE740u);
    g4 = (g16 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    goto L_088DE2B8;
}
L_088DE740:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(7360));
    hot_regs.g6 = (ctx.gpr[19] + static_cast<std::uint32_t>(7360));
    hot_regs.g31 = (0x088DE754u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE2B8;
L_088DE754:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(7744));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(7744));
    hot_regs.g31 = (0x088DE768u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE768:
    hot_regs.f12 = ctx.fpr[0] / ctx.fpr[24];
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(7936));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(7936));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088DE780u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11156), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088DE240;
L_088DE780:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8128));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(8128));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088DE79Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11160), hot_regs.g7);
    goto L_088DE240;
L_088DE79C:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8320));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(8320));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x088DE7B8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11164), hot_regs.g7);
    goto L_088DE240;
L_088DE7B8:
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8512));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(8512));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x088DE7D4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11168), hot_regs.g7);
    goto L_088DE240;
L_088DE7D4:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8704));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(8704));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088DE7F0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11172), hot_regs.g7);
    goto L_088DE240;
L_088DE7F0:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8896));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(8896));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x088DE80Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11176), hot_regs.g7);
    goto L_088DE240;
L_088DE80C:
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(9088));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(9088));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x088DE828u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11180), hot_regs.g7);
    goto L_088DE240;
L_088DE828:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(9280));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(9280));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088DE844u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11184), hot_regs.g7);
    goto L_088DE240;
L_088DE844:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(9472));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(9472));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x088DE860u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11188), hot_regs.g7);
    goto L_088DE240;
L_088DE860:
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(9664));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(9664));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x088DE87Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11192), hot_regs.g7);
    goto L_088DE240;
L_088DE87C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(9856));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(9856));
    hot_regs.g31 = (0x088DE890u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE890:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(10048));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(10048));
    hot_regs.g31 = (0x088DE8A4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE8A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(10240));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(10240));
    hot_regs.g31 = (0x088DE8B8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE8B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(10432));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(10432));
    hot_regs.g31 = (0x088DE8CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE8CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(10624));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(10624));
    hot_regs.g31 = (0x088DE8E0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE8E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11216), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(10816));
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(10816));
    hot_regs.g31 = (0x088DE8F4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088DE240;
L_088DE8F4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (17332u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    g5 = (17460u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11220), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f14 = std::bit_cast<float>(g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11228)));
    g5 = (17136u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    g17 = (2236u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g5);
    { const bool branch_taken = hot_regs.g4 == 0u;
    g17 = (g17 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088DE958;
      }
      goto L_088DE924;
    }
}
L_088DE924:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11228)));
    hot_regs.g5 = (16674u << 16u);
    f12 = std::bit_cast<float>(g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11148)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (hot_regs.g5 | 32768u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f15 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11148)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_088DE954;
    }
    goto L_088DE954;
}
}
L_088DE954:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11148), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088DE958;
L_088DE958:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11224)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 & 15u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11224), g4);
    g4 = (aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(7650)));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f20 = f12 / f20;
    g4 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(7648)));
    hot_regs.g5 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(7649)));
    hot_regs.g6 = (g4 << 6u);
    g4 = (g4 << 2u);
    g4 = (hot_regs.g6 - g4);
    g4 = (hot_regs.g5 + g4);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f20 = f12 + f20;
    ctx.set_fpu_condition((f20 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_088DEA14;
      }
      goto L_088DE9AC;
    }
}
}
L_088DE9AC:
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DEA14;
      }
      goto L_088DE9BC;
    }
L_088DE9BC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = f20 - f13;
    g4 = (16000u << 16u);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (17204u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    f12 = f12 / ctx.fpr[16];
    g4 = (std::bit_cast<std::uint32_t>(f12));
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
    f14 = std::bit_cast<float>(g4);
    f12 = hot_regs.f22 - f14;
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    f20 = f20 + f13;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_088DEA88;
      }
      goto L_088DEA14;
    }
}
}
L_088DEA14:
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (17543u << 16u);
      if (branch_taken) {
          goto L_088DEA88;
      }
      goto L_088DEA24;
    }
L_088DEA24:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DEA88;
      }
      goto L_088DEA38;
    }
L_088DEA38:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = f20 - hot_regs.f14;
    g4 = (16000u << 16u);
    f15 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (17204u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(g4);
    f12 = f12 / ctx.fpr[17];
    g4 = (std::bit_cast<std::uint32_t>(f12));
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
    f15 = std::bit_cast<float>(g4);
    { const float fs = f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    f20 = f20 + hot_regs.f14;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
    hot_regs.f20 = f20;
    goto L_088DEA88;
}
}
L_088DEA88:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15246u << 16u);
    g4 = (g4 | 64053u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11224)));
    g4 = (g4 << 4u);
    ctx.gpr[18] = (ctx.gpr[16] + g4);
    hot_regs.g31 = (0x088DEAACu);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    goto L_088DDF90;
}
}
L_088DEAAC:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x088DEAB8u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088DDFB4;
L_088DEAB8:
    hot_regs.g4 = (16076u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 - ctx.fpr[0];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11224)));
    hot_regs.g4 = (hot_regs.g4 << 4u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11236)));
    if (hot_regs.g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_088DEB40;
    }
    goto L_088DEB18;
L_088DEB18:
{
    float f26 = ctx.fpr[26];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f26 = hot_regs.f12 / f26;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11240)));
    f26 = hot_regs.f13 + f26;
    ctx.set_fpu_condition((f26 <= hot_regs.f22));
    // nop
    if (!ctx.fpu_condition()) {
    f26 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[26] = f26;
        goto L_088DEB38;
    }
    goto L_088DEB38;
}
L_088DEB38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088DEB60;
      }
      goto L_088DEB40;
    }
L_088DEB40:
{
    float f26 = ctx.fpr[26];
    f26 = hot_regs.f12 / f26;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11240)));
    f26 = hot_regs.f13 - f26;
    ctx.set_fpu_condition((ctx.fpr[28] <= f26));
    // nop
    if (!ctx.fpu_condition()) {
    f26 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[26] = f26;
        goto L_088DEB5C;
    }
    goto L_088DEB5C;
}
L_088DEB5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088DEB60;
L_088DEB60:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DF3F8;
      }
      goto L_088DEB74;
    }
L_088DEB74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11232)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11240)));
    g4 = (g4 << 3u);
    g4 = (g16 + g4);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3526)));
    { const bool branch_taken = g4 != 0u;
    hot_regs.f22 = hot_regs.f22 - hot_regs.f12;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DEBC0;
      }
      goto L_088DEB90;
    }
}
L_088DEB90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11232)));
    g4 = (g4 << 3u);
    g4 = (g16 + g4);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3718)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11232)));
    hot_regs.g4 = g4;
        goto L_088DEBC4;
    }
    goto L_088DEBA8;
}
L_088DEBA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11232)));
    g4 = (g4 << 3u);
    g4 = (g16 + g4);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3910)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11232)));
    hot_regs.g4 = g4;
        goto L_088DF068;
    }
    goto L_088DEBC0;
}
L_088DEBC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11232)));
    goto L_088DEBC4;
L_088DEBC4:
{
    float f0 = ctx.fpr[0];
    float f2 = ctx.fpr[2];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11068)));
    g4 = (g4 << 3u);
    g4 = (g16 + g4);
    f12 = std::bit_cast<float>(g5);
    g6 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3526)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11072)));
    f13 = std::bit_cast<float>(g6);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11240)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g6 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3718)));
    { const float fs = f12; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f15 = std::bit_cast<float>(g5);
    f16 = std::bit_cast<float>(g6);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11076)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3910)));
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11080)));
    f17 = std::bit_cast<float>(g5);
    f12 = f12 + f13;
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4102)));
    { const float fs = f15; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f17)));
    f13 = std::bit_cast<float>(g7);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f15 = f15 + f16;
    { const float fs = f17; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g7 = (std::bit_cast<std::uint32_t>(f12));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11068), g7);
    f18 = std::bit_cast<float>(g6);
    f12 = std::bit_cast<float>(g5);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11084)));
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4294)));
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f13 = f17 + f13;
    g5 = (std::bit_cast<std::uint32_t>(f15));
    { const float fs = f16; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11072), g5);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11088)));
    f18 = std::bit_cast<float>(g6);
    f15 = std::bit_cast<float>(g7);
    g6 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4486)));
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    f12 = f16 + f12;
    g7 = (std::bit_cast<std::uint32_t>(f13));
    { const float fs = f17; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11076), g7);
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f18 = std::bit_cast<float>(g5);
    f13 = std::bit_cast<float>(g6);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11104)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4678)));
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f15 = f17 + f15;
    g6 = (std::bit_cast<std::uint32_t>(f12));
    { const float fs = f16; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11080), g6);
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f18 = std::bit_cast<float>(g5);
    f12 = std::bit_cast<float>(g7);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11108)));
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    g6 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4870)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    f13 = f16 + f13;
    { const float fs = f17; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g7 = (std::bit_cast<std::uint32_t>(f15));
    f18 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11084), g7);
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11112)));
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(5062)));
    f12 = f17 + f12;
    f15 = std::bit_cast<float>(g6);
    g6 = (std::bit_cast<std::uint32_t>(f13));
    f18 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11088), g6);
    f13 = std::bit_cast<float>(g7);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11116)));
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    g6 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(5254)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const float fs = f17; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g7 = (std::bit_cast<std::uint32_t>(f12));
    { const float fs = f16; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11104), g7);
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f18 = std::bit_cast<float>(g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11120)));
    f13 = f17 + f13;
    g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(5830)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    f15 = f16 + f15;
    f19 = std::bit_cast<float>(g7);
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f19)));
    f17 = f17 / ctx.fpr[24];
    g8 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(5446)));
    f16 = std::bit_cast<float>(g6);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    { const float fs = f12; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f18 = std::bit_cast<float>(g5);
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    g6 = (std::bit_cast<std::uint32_t>(f15));
    f0 = std::bit_cast<float>(g8);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11108), g6);
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11124)));
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    g6 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(5638)));
    f19 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f0)));
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11160)));
    f12 = f12 + f16;
    g8 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(7942)));
    ctx.gpr[15] = (std::bit_cast<std::uint32_t>(f13));
    { const float fs = f15; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11128)));
    f2 = std::bit_cast<float>(g5);
    ctx.gpr[9] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11164)));
    { const float fs = f19; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    ctx.gpr[10] = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(8134)));
    f16 = std::bit_cast<float>(g6);
    ctx.gpr[11] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11168)));
    f0 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f2)));
    hot_regs.g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(8326)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    ctx.gpr[3] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11172)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[12] = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(8518)));
    f15 = f15 + f19;
    ctx.gpr[13] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11176)));
    { const float fs = f0; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    ctx.gpr[14] = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(8710)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11112), ctx.gpr[15]);
    g5 = (std::bit_cast<std::uint32_t>(f12));
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11116), g5);
    f2 = std::bit_cast<float>(g7);
    f12 = std::bit_cast<float>(g8);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f2)));
    f13 = f0 + f13;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f18; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    { const float fs = f17; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g5 = (std::bit_cast<std::uint32_t>(f15));
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11120), g5);
    { const float fs = f16; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f19 = std::bit_cast<float>(ctx.gpr[10]);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    f19 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f19)));
    f17 = f18 + f17;
    g5 = (std::bit_cast<std::uint32_t>(f13));
    f12 = f16 + f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11124), g5);
    { const float fs = f15; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f19; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11128), std::bit_cast<std::uint32_t>(f17));
    f17 = std::bit_cast<float>(ctx.gpr[11]);
    f18 = std::bit_cast<float>(hot_regs.g2);
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f17)));
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    f13 = f13 + f19;
    { const float fs = f17; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    g5 = (std::bit_cast<std::uint32_t>(f12));
    f0 = std::bit_cast<float>(ctx.gpr[3]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11160), g5);
    f19 = std::bit_cast<float>(ctx.gpr[12]);
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f0)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f19)));
    f15 = f15 + f16;
    g5 = (std::bit_cast<std::uint32_t>(f13));
    { const float fs = f18; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11164), g5);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11180)));
    f2 = std::bit_cast<float>(ctx.gpr[13]);
    g6 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(8902)));
    f13 = std::bit_cast<float>(ctx.gpr[14]);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f2)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    f12 = f17 + f12;
    { const float fs = f16; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g7 = (std::bit_cast<std::uint32_t>(f15));
    f18 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11168), g7);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11184)));
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(9094)));
    f15 = std::bit_cast<float>(g6);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    f13 = f16 + f13;
    g6 = (std::bit_cast<std::uint32_t>(f12));
    f18 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11172), g6);
    f12 = std::bit_cast<float>(g7);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11188)));
    { const float fs = f17; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g6 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(9286)));
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    f15 = f17 + f15;
    { const float fs = f16; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g7 = (std::bit_cast<std::uint32_t>(f13));
    f18 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11176), g7);
    f13 = std::bit_cast<float>(g6);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11192)));
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(9478)));
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f12 = f16 + f12;
    g6 = (std::bit_cast<std::uint32_t>(f15));
    { const float fs = f17; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11180), g6);
    f18 = std::bit_cast<float>(g5);
    g6 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(10246)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f16 = std::bit_cast<float>(g7);
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    f13 = f17 + f13;
    { const float fs = f18; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    g5 = (std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11184), g5);
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11208)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(10438)));
    f15 = f18 + f15;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11212)));
    { const float fs = f19; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g6 = (std::bit_cast<std::uint32_t>(f13));
    f0 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11188), g6);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(10630)));
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11216)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f0)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(10822)));
    f19 = std::bit_cast<float>(g5);
    f12 = f17 + f12;
    { const float fs = f16; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    g6 = (std::bit_cast<std::uint32_t>(f15));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11192), g6);
    f19 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f19)));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11220)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11208), std::bit_cast<std::uint32_t>(f12));
    f15 = std::bit_cast<float>(g4);
    { const float fs = f18; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = f16 + f13;
    { const float fs = f19; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const float fs = f0; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11212), std::bit_cast<std::uint32_t>(f13));
    f12 = f12 + f17;
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11216), std::bit_cast<std::uint32_t>(f12));
    f12 = f0 + f13;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11220), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11232)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.fpr[0] = f0;
    ctx.fpr[2] = f2;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
    goto L_088DF068;
}
}
L_088DF068:
{
    float f0 = ctx.fpr[0];
    float f1 = ctx.fpr[1];
    float f2 = ctx.fpr[2];
    float f3 = ctx.fpr[3];
    float f4 = ctx.fpr[4];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
    float f22 = hot_regs.f22;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (g4 << 3u);
    g5 = (g16 + g5);
    g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(646)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11008)));
    f14 = std::bit_cast<float>(g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11240)));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(838)));
    { const float fs = f12; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11012)));
    f16 = std::bit_cast<float>(g6);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(1030)));
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11016)));
    f18 = std::bit_cast<float>(g6);
    g7 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(1222)));
    { const float fs = f15; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11020)));
    { const float fs = f16; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(1414)));
    f12 = f12 + f14;
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    { const float fs = f17; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f15 = f15 + f16;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11008), std::bit_cast<std::uint32_t>(f12));
    f0 = std::bit_cast<float>(g7);
    { const float fs = f18; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11024)));
    f0 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f0)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11012), std::bit_cast<std::uint32_t>(f15));
    f2 = std::bit_cast<float>(g6);
    { const float fs = f19; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(1606)));
    f12 = f17 + f12;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11028)));
    { const float fs = f0; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    g7 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(1798)));
    f2 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f2)));
    { const float fs = f14; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11016), std::bit_cast<std::uint32_t>(f12));
    { const float fs = f18; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f12 = std::bit_cast<float>(g6);
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11032)));
    f15 = f15 + f16;
    g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(1990)));
    { const float fs = f2; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f19; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11020), std::bit_cast<std::uint32_t>(f15));
    f14 = f14 + f17;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11036)));
    f15 = std::bit_cast<float>(g7);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g7 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(2182)));
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11024), std::bit_cast<std::uint32_t>(f14));
    { const float fs = f16; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f14 = std::bit_cast<float>(g6);
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11040)));
    f12 = f18 + f12;
    g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(2374)));
    { const float fs = f15; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f17; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11028), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g7);
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11044)));
    f15 = f19 + f15;
    g7 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(2566)));
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f18; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11032), std::bit_cast<std::uint32_t>(f15));
    f14 = f16 + f14;
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11048)));
    f15 = std::bit_cast<float>(g6);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(2758)));
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11036), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(g7);
    f12 = f17 + f12;
    g7 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(6022)));
    { const float fs = f15; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11052)));
    g8 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(2950)));
    f0 = std::bit_cast<float>(g7);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11040), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g6);
    f15 = f18 + f15;
    g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(6214)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11056)));
    { const float fs = f19; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    g7 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(3142)));
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11044), std::bit_cast<std::uint32_t>(f15));
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11060)));
    { const float fs = f16; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    ctx.gpr[9] = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(3334)));
    f14 = f19 + f14;
    f1 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11064)));
    f3 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11132)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(11140))))));
    ctx.gpr[11] = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(6406)));
    f4 = std::bit_cast<float>(g6);
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11136)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(11142))))));
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f0)));
    ctx.gpr[3] = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(6598)));
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(11144))))));
    ctx.gpr[13] = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(6790)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.gpr[14] = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(7750)));
    f0 = std::bit_cast<float>(g8);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11048), std::bit_cast<std::uint32_t>(f14));
    f0 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f0)));
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f4)));
    f14 = f14 / f24;
    g4 = (g4 << 4u);
    g4 = (g16 + g4);
    f18 = f18 / f24;
    f12 = f15 + f12;
    { const float fs = f17; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f19 = std::bit_cast<float>(g7);
    { const float fs = f0; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    f19 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f19)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11052), std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(6988))))));
    { const float fs = f2; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11148)));
    f17 = f17 + f0;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(7372))))));
    { const float fs = f19; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11152)));
    f4 = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11056), std::bit_cast<std::uint32_t>(f17));
    f0 = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = f3; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f19 = f2 + f19;
    { const float fs = f16; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f3 = std::bit_cast<float>(ctx.gpr[11]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11060), std::bit_cast<std::uint32_t>(f19));
    f2 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f3)));
    f19 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f0)));
    f4 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f4)));
    f14 = f16 + f14;
    { const float fs = f2; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    { const float fs = f19; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    { const float fs = f1; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f1 = std::bit_cast<float>(0x7FC00000u); else f1 = fs * ft; }
    { const float fs = f4; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f4 = std::bit_cast<float>(0x7FC00000u); else f4 = fs * ft; }
    { const float fs = f18; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f19 = f19 + f2;
    f0 = std::bit_cast<float>(hot_regs.g2);
    f1 = f1 + f4;
    f17 = f17 + f18;
    f16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f19));
    f2 = std::bit_cast<float>(ctx.gpr[14]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11064), std::bit_cast<std::uint32_t>(f1));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11132), std::bit_cast<std::uint32_t>(f17));
    f18 = std::bit_cast<float>(ctx.gpr[3]);
    f19 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f2)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11136), std::bit_cast<std::uint32_t>(f14));
    f19 = f19 / f24;
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f0)));
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    f14 = std::bit_cast<float>(ctx.gpr[12]);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    f0 = std::bit_cast<float>(ctx.gpr[13]);
    f0 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f0)));
    { const float fs = f17; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    { const float fs = f18; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    { const float fs = f14; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f0; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    f3 = std::bit_cast<float>(g6);
    f17 = f17 + f18;
    f3 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f3)));
    g7 = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(11140), static_cast<std::uint16_t>(g7));
    f14 = f14 + f0;
    f1 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11156)));
    f17 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f17));
    f4 = std::bit_cast<float>(g4);
    g7 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(9670)));
    { const float fs = f12; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11196)));
    { const float fs = f3; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    g8 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(9862)));
    f4 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f4)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11200)));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(10054)));
    g6 = (std::bit_cast<std::uint32_t>(f17));
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(11204)));
    { const float fs = f15; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(11142), static_cast<std::uint16_t>(g6));
    f12 = f12 + f3;
    { const float fs = f4; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(11144), static_cast<std::uint16_t>(g4));
    { const float fs = f1; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11148), std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[5] = std::bit_cast<float>(g7);
    f15 = f15 + f17;
    { const float fs = f19; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[5])));
    { const float fs = f18; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11152), std::bit_cast<std::uint32_t>(f15));
    f17 = std::bit_cast<float>(g5);
    f12 = f0 + f12;
    f15 = std::bit_cast<float>(g8);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11156), std::bit_cast<std::uint32_t>(f12));
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f17)));
    { const float fs = f16; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f15; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = f18 + f14;
    { const float fs = f2; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f12 = f12 + f15;
    { const float fs = f17; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11196), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11200), std::bit_cast<std::uint32_t>(f12));
    f12 = f19 + f13;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11204), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.fpr[0] = f0;
    ctx.fpr[1] = f1;
    ctx.fpr[2] = f2;
    ctx.fpr[3] = f3;
    ctx.fpr[4] = f4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
    goto L_088DF3F8;
}
}
L_088DF3F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2900)));
    if (hot_regs.g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11196)));
        goto L_088DF418;
    }
    goto L_088DF404;
L_088DF404:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2900)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088DF454;
      }
      goto L_088DF414;
    }
L_088DF414:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11196)));
    goto L_088DF418;
L_088DF418:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11200)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11204)));
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (0u | 255u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g4 - g5);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f13));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(2884), g5);
    g5 = (g4 - hot_regs.g7);
    g4 = (g4 - hot_regs.g6);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(2892), g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(2888), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_088DF454;
}
}
L_088DF454:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11008)));
    hot_regs.g4 = (17279u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11008), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11012)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11012), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11016)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11016), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11020)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11020), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11024)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11024), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11028)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11028), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11032)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11032), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11036)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11036), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11040)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11040), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11044)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11044), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11048)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11048), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11052)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11052), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11056)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11056), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11060)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11060), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11064)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11064), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11068)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11080)));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g5 = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g4 = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11092), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11072)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11084)));
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g4 = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11096), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11076)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11088)));
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g4 = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11100), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11224)));
    hot_regs.g4 = (hot_regs.g4 << 4u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11224)));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    ctx.gpr[10] = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[10] + static_cast<std::uint32_t>(256));
    hot_regs.g6 = (ctx.gpr[10] + static_cast<std::uint32_t>(320));
    hot_regs.g7 = (ctx.gpr[10] + static_cast<std::uint32_t>(384));
    ctx.gpr[8] = (ctx.gpr[10] + static_cast<std::uint32_t>(448));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(512));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(576));
    hot_regs.g31 = (0x088DF5A8u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 486u, 0x08A97418u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF5A8u) goto L_088DF5A8;
    return;
L_088DF5A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (48998u << 16u);
    g4 = (g4 | 26214u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DF61C;
      }
      goto L_088DF5CC;
    }
}
L_088DF5CC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8668)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF63C;
      }
      goto L_088DF5D8;
    }
L_088DF5D8:
    hot_regs.g31 = (0x088DF5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF5E0u) goto L_088DF5E0;
    return;
L_088DF5E0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF61C;
      }
      goto L_088DF5E8;
    }
L_088DF5E8:
    hot_regs.g31 = (0x088DF5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF5F0u) goto L_088DF5F0;
    return;
L_088DF5F0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF61C;
      }
      goto L_088DF5F8;
    }
L_088DF5F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    hot_regs.g4 = g4;
        goto L_088DF610;
    }
    goto L_088DF604;
}
L_088DF604:
    hot_regs.g31 = (0x088DF60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF60Cu) goto L_088DF60C;
    return;
L_088DF60C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_088DF610;
L_088DF610:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088DF63C;
      }
      goto L_088DF61C;
    }
}
L_088DF61C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11228)));
    hot_regs.g5 = (0u | 64u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < 64 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
        goto L_088DF634;
    }
    goto L_088DF634;
}
L_088DF634:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11228), hot_regs.g5);
      if (branch_taken) {
          goto L_088DF65C;
      }
      goto L_088DF63C;
    }
L_088DF63C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(11228)));
    g6 = (0u | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g6 != 0u) {
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
        goto L_088DF658;
    }
    goto L_088DF658;
}
L_088DF658:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(11228), hot_regs.g5);
    goto L_088DF65C;
L_088DF65C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DF694:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF69C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2234u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(22544));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(g5));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(g5));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(g5));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(g5));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), 0u);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DF6EC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g6 = (2234u << 16u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088DF714;
      }
      goto L_088DF6FC;
    }
}
L_088DF6FC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(22544));
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088DF714;
      }
      goto L_088DF70C;
    }
}
L_088DF70C:
    hot_regs.g31 = (0x088DF714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF714u) goto L_088DF714;
    return;
L_088DF714:
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
L_088DF720:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x088DF738u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C7F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF738u) goto L_088DF738;
    return;
L_088DF738:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), hot_regs.g2);
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
L_088DF74C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g31 = (0x088DF764u);
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(g5));
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    goto L_088DF818;
}
L_088DF764:
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
L_088DF770:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088DF790;
      }
      goto L_088DF784;
    }
}
L_088DF784:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x088DF790u);
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(g5));
    hot_regs.g5 = g5;
    goto L_088DF860;
}
L_088DF790:
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
L_088DF79C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088DF7ACu);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(30))))));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 687u, 0x08AAF2ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF7ACu) goto L_088DF7AC;
    return;
L_088DF7AC:
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
L_088DF7B8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x088DF7D8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF7D8u) goto L_088DF7D8;
    return;
L_088DF7D8:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(hot_regs.g2));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(30))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088DF7F8;
      }
      goto L_088DF7EC;
    }
L_088DF7EC:
    hot_regs.g31 = (0x088DF7F4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 571u, 0x08AAEBC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF7F4u) goto L_088DF7F4;
    return;
L_088DF7F4:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(hot_regs.g2));
    goto L_088DF7F8;
L_088DF7F8:
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
L_088DF80C:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF818:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(30))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088DF838;
      }
      goto L_088DF830;
    }
}
L_088DF830:
    hot_regs.g31 = (0x088DF838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 644u, 0x08AAF008u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF838u) goto L_088DF838;
    return;
L_088DF838:
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
L_088DF844:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088DF854u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(30))))));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 651u, 0x08AAF068u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF854u) goto L_088DF854;
    return;
L_088DF854:
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
L_088DF860:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(30))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088DF880;
      }
      goto L_088DF878;
    }
}
L_088DF878:
    hot_regs.g31 = (0x088DF880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 661u, 0x08AAF118u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF880u) goto L_088DF880;
    return;
L_088DF880:
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
L_088DF88C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088DF89Cu);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(30))))));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 670u, 0x08AAF19Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF89Cu) goto L_088DF89C;
    return;
L_088DF89C:
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
L_088DF8A8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x088DF8BCu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_088DF90C;
}
L_088DF8BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x088DF8D4u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF8D4u) goto L_088DF8D4;
    return;
L_088DF8D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(88));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x088DF8ECu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF8ECu) goto L_088DF8EC;
    return;
L_088DF8EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(g4));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
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
L_088DF90C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088DF93C;
      }
      goto L_088DF928;
    }
}
L_088DF928:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF93C;
      }
      goto L_088DF934;
    }
L_088DF934:
    hot_regs.g31 = (0x088DF93Cu);
    hot_regs.g5 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 70u, 0x08990464u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF93Cu) goto L_088DF93C;
    return;
L_088DF93C:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
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
L_088DF950:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF958:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF960:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF968:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088DF9A0;
      }
      goto L_088DF980;
    }
}
L_088DF980:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x088DF98Cu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF98Cu) goto L_088DF98C;
    return;
L_088DF98C:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x088DF99Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088DF99Cu) goto L_088DF99C;
    return;
L_088DF99C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_088DF9A0;
L_088DF9A0:
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
L_088DF9B0:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g5 = (0u | 255u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), hot_regs.g5);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DF9D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 2u));
    g7 = (g7 >> 30u);
    g6 = (g6 + g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 2u));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g6 = (g6 << 2u);
    g5 = (g5 + g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g5);
    g6 = (0u | 255u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), g6);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088DFA08:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g14 = ctx.gpr[14];
    std::uint32_t g15 = ctx.gpr[15];
    std::uint32_t g24 = ctx.gpr[24];
    g15 = (ctx.gpr[11] - hot_regs.g7);
    g2 = (g15 + static_cast<std::uint32_t>(31));
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 5u));
    g2 = (g2 >> 27u);
    g2 = (g15 + g2);
    ctx.gpr[12] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g2 = (g2 + static_cast<std::uint32_t>(31));
    ctx.gpr[3] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    g14 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 5u));
    g2 = (g14 << 4u);
    g13 = (g14 << 2u);
    g24 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g2 = (g2 + g13);
    g2 = (g24 - g2);
    g13 = (0u + static_cast<std::uint32_t>(-4));
    g2 = (g2 & g13);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g2);
    g13 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g24 = (4736u << 16u);
    g24 = (g24 + static_cast<std::uint32_t>(258));
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(0), g24);
    g13 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g14 = (g14 + g14);
    g13 = (g13 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = g2 == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g13);
    hot_regs.g2 = g2;
    ctx.gpr[13] = g13;
    ctx.gpr[14] = g14;
    ctx.gpr[15] = g15;
    ctx.gpr[24] = g24;
      if (branch_taken) {
          goto L_088DFABC;
      }
      goto L_088DFA70;
    }
}
L_088DFA70:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g24 = ctx.gpr[24];
    std::uint32_t g25 = ctx.gpr[25];
    g24 = (hot_regs.g2 >> 8u);
    g25 = (15u << 16u);
    g24 = (g24 & g25);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), g24);
    g25 = (4096u << 16u);
    g24 = (g24 | g25);
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(0), g24);
    g13 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g24 = (256u << 16u);
    g24 = (g24 + static_cast<std::uint32_t>(-1));
    g13 = (g13 + static_cast<std::uint32_t>(4));
    g24 = (hot_regs.g2 & g24);
    g25 = (256u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g13);
    g24 = (g24 | g25);
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(0), g24);
    g13 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g13 = (g13 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g13);
    ctx.gpr[13] = g13;
    ctx.gpr[24] = g24;
    ctx.gpr[25] = g25;
    goto L_088DFABC;
}
L_088DFABC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g24 = ctx.gpr[24];
    g24 = (g5 | 0u);
    g5 = (ctx.gpr[9] - g24);
    g5 = (g5 << 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[15]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g5 = (1030u << 16u);
    g5 = (ctx.gpr[14] | g5);
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(0), g5);
    g13 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g7 | 0u);
    g7 = (g13 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g13 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    g7 = (ctx.lo);
    { const bool branch_taken = g13 == 0u;
    g4 = (g24 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[13] = g13;
    ctx.gpr[24] = g24;
      if (branch_taken) {
          goto L_088DFB6C;
      }
      goto L_088DFAF8;
    }
}
L_088DFAF8:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g13 = ctx.gpr[13];
    g13 = (g2 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g2 = (g13 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g13 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    g13 = (g2 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g2 = (g13 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g13 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g6));
    g13 = (g2 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    g2 = (g13 | 0u);
    ctx.gpr[14] = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    g4 = (g4 + hot_regs.g7);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[13] = g13;
      if (branch_taken) {
          goto L_088DFB3C;
      }
      goto L_088DFB34;
    }
}
L_088DFB34:
    hot_regs.g5 = (ctx.gpr[11] | 0u);
    hot_regs.g4 = (ctx.gpr[9] | 0u);
    goto L_088DFB3C;
L_088DFB3C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g13 = ctx.gpr[13];
    aot_mem.aot_store16(g13 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g5));
    g2 = (g2 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    g2 = (g2 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g4));
    g2 = (g2 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    g2 = (g2 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    g13 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = g13 != 0u;
    g2 = (g2 + static_cast<std::uint32_t>(2));
    hot_regs.g2 = g2;
    ctx.gpr[13] = g13;
      if (branch_taken) {
          goto L_088DFAF8;
      }
      goto L_088DFB6C;
    }
}
L_088DFB6C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFB74:
    ctx.gpr[9] = (hot_regs.g5 | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    hot_regs.g6 = (hot_regs.g6 << 8u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DFC1C;
      }
      goto L_088DFB88;
    }
L_088DFB88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.gpr[9] = (24320u << 16u);
      if (branch_taken) {
          goto L_088DFC34;
      }
      goto L_088DFB90;
    }
L_088DFB90:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    ctx.gpr[9] = (24576u << 16u);
    g7 = (g7 | ctx.gpr[9]);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (26112u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (26368u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (26624u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(8)));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DFC1C;
    }
}
}
L_088DFC1C:
{
    std::uint32_t g9 = ctx.gpr[9];
    ctx.gpr[10] = (static_cast<std::int32_t>(g9) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    g9 = (static_cast<std::int32_t>(g9) < 4 ? 1u : 0u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088DFCBC;
      }
      goto L_088DFC28;
    }
}
L_088DFC28:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (25088u << 16u);
      if (branch_taken) {
          goto L_088DFD48;
      }
      goto L_088DFC30;
    }
L_088DFC30:
    ctx.gpr[9] = (24320u << 16u);
    goto L_088DFC34;
L_088DFC34:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (g7 | ctx.gpr[9]);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (25344u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (25600u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (25856u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(8)));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DFCBC;
    }
}
}
L_088DFCBC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    ctx.gpr[9] = (24832u << 16u);
    g7 = (g7 | ctx.gpr[9]);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (26880u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (27136u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (27392u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(8)));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DFD48;
    }
}
}
L_088DFD48:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (g7 | ctx.gpr[9]);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (27648u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (27904u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (28160u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(8)));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    goto L_088DFDCC;
}
}
L_088DFDCC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFDD4:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g7 = (g5 | 0u);
    g5 = (256u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (hot_regs.g6 & g5);
    ctx.gpr[8] = (static_cast<std::int32_t>(hot_regs.g7) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DFE14;
      }
      goto L_088DFDF0;
    }
}
L_088DFDF0:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g7) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DFE28;
      }
      goto L_088DFDF8;
    }
L_088DFDF8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (37632u << 16u);
    g6 = (g6 | hot_regs.g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088DFE78;
      }
      goto L_088DFE14;
    }
}
L_088DFE14:
{
    std::uint32_t g7 = hot_regs.g7;
    ctx.gpr[8] = (static_cast<std::int32_t>(g7) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    g7 = (static_cast<std::int32_t>(g7) < 4 ? 1u : 0u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088DFE44;
      }
      goto L_088DFE20;
    }
}
L_088DFE20:
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE60;
      }
      goto L_088DFE28;
    }
L_088DFE28:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (36864u << 16u);
    g6 = (g6 | hot_regs.g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088DFE78;
      }
      goto L_088DFE44;
    }
}
L_088DFE44:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (38400u << 16u);
    g6 = (g6 | hot_regs.g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088DFE78;
      }
      goto L_088DFE60;
    }
}
L_088DFE60:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (39168u << 16u);
    g6 = (g6 | hot_regs.g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_088DFE78;
}
L_088DFE78:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DFE80:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g10 = ctx.gpr[10];
    g5 = (g5 & 255u);
    g7 = (g7 & 255u);
    g7 = (g7 << 10u);
    g5 = (g5 << 8u);
    g5 = (g7 | g5);
    g6 = (g6 & 255u);
    g7 = (54016u << 16u);
    g6 = (g6 << 9u);
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g6 = (g6 | g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 | g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[11] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g5 = (g5 + static_cast<std::uint32_t>(63));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 6u));
    g7 = (g7 >> 26u);
    g5 = (g5 + g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 6u));
    g5 = (g7 << 3u);
    g10 = (g5 + g5);
    g5 = (g5 + g10);
    g5 = (ctx.gpr[11] - g5);
    g10 = (0u + static_cast<std::uint32_t>(-4));
    g5 = (g5 & g10);
    g10 = (4736u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    g10 = (g10 + static_cast<std::uint32_t>(284));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g10);
    g10 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g7 + g7);
    g7 = (g10 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_088DFF64;
      }
      goto L_088DFF18;
    }
}
L_088DFF18:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g10 = (hot_regs.g5 >> 8u);
    g11 = (15u << 16u);
    g10 = (g10 & g11);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), g10);
    g11 = (4096u << 16u);
    g10 = (g10 | g11);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g10);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g10 = (256u << 16u);
    g10 = (g10 + static_cast<std::uint32_t>(-1));
    g7 = (g7 + static_cast<std::uint32_t>(4));
    g10 = (hot_regs.g5 & g10);
    g11 = (256u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g10 = (g10 | g11);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g10);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    hot_regs.g7 = g7;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    goto L_088DFF64;
}
L_088DFF64:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (g4 | 0u);
    g4 = (1030u << 16u);
    g4 = (g6 | g4);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    g6 = (54016u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g6 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    g4 = (0u | 0u);
    g6 = (g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(0), g6);
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    g10 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g10 == 0u;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_088DFFFC;
      }
      goto L_088DFFA8;
    }
}
L_088DFFA8:
    hot_regs.g6 = (hot_regs.g6 << 16u);
    goto L_088DFFAC;
L_088DFFAC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    g4 = (g4 + static_cast<std::uint32_t>(64));
    ctx.gpr[11] = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    g5 = (ctx.gpr[10] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088DFFD8;
      }
      goto L_088DFFD4;
    }
}
L_088DFFD4:
    hot_regs.g4 = (hot_regs.g7 | 0u);
    goto L_088DFFD8;
L_088DFFD8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g10 = ctx.gpr[10];
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g10 = (hot_regs.g6 | hot_regs.g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    g10 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g7) ? 1u : 0u);
    { const bool branch_taken = g10 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_088DFFAC;
      }
      goto L_088DFFFC;
    }
}
L_088DFFFC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0054(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0054_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_54(Runtime &runtime) {
    runtime.register_generated_unit(54u, 0x088DC000u, 16384u, &recomp_unit_0054, &recomp_unit_0054_entry);
    runtime.register_function(0x088DC004u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC018u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC020u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC02Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC038u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC040u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC044u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC058u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC06Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC094u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC098u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC104u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC114u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC134u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC150u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC15Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC198u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC23Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC24Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC254u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC25Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC264u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC268u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC270u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC300u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC308u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC33Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC344u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC34Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC36Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC3C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC470u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC48Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC500u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC508u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC510u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC528u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC530u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC538u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC53Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC544u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC564u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC56Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC570u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC58Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC604u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC60Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC624u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC62Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC658u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC660u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC668u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC67Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC684u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC69Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC714u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC71Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC724u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC740u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC748u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC768u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC770u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC778u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC788u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC794u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC7B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC830u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC888u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC894u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC910u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC924u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC938u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC944u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC960u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC974u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC990u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCAA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCACCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCADCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCAE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCECCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF04u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD008u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD014u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD04Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD060u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD07Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD080u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD090u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD114u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD14Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD154u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD164u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD174u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD17Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD18Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD190u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD224u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD234u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD244u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD24Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD258u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD260u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD294u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD29Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD354u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD36Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD37Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD400u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD410u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD440u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD44Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD458u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD494u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD514u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD570u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD590u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD620u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD630u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD63Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD670u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD704u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD720u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD730u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD73Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD764u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD79Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD814u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD824u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD830u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD858u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD888u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD898u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD990u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDBA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDBBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDBCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDBD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDBF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD04u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD20u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDDA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDDBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDDDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDED0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE06Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE074u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE080u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE084u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE08Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE094u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE09Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE140u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE160u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE174u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE184u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE18Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE194u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE240u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE338u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE410u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE42Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE448u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE464u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE480u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE49Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE508u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE51Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE530u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE544u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE558u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE56Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE580u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE594u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE600u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE61Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE638u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE654u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE670u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE68Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE714u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE740u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE754u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE768u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE780u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE79Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE80Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE828u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE844u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE860u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE87Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE890u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE924u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE954u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE958u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEAACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEAB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF068u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF404u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF414u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF418u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF454u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF604u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF60Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF610u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF61Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF634u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF63Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF658u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF65Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF694u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF69Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF70Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF714u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF720u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF738u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF74Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF764u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF770u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF784u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF790u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF79Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF80Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF818u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF830u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF838u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF844u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF854u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF860u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF878u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF880u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF88Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF89Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF90Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF928u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF934u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF93Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF950u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF958u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF960u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF968u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF980u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF98Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF99Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFABCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE20u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFFCu, &recomp_unit_0054, "recomp_unit_0054");
}
} // namespace psprecomp
