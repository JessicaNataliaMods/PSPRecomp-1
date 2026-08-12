#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0133[4093] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 33, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0,
    39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 45, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 50, 51, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 60, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0,
    115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0,
    141, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0,
    150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 172, 0, 0, 0, 0, 173, 0, 0,
    174, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 182, 183, 0, 0, 0, 0,
    0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0,
    201, 0, 0, 0, 202, 0, 203, 204, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0,
    212, 0, 0, 0, 213, 0, 214, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 221,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 241, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245,
    0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0,
    259, 0, 0, 260, 0, 261, 0, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    270, 0, 271, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 0, 300, 0, 301, 0, 302, 0, 303, 0, 0, 304, 305, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0,
    0, 0, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0,
    321, 322, 0, 323, 0, 0, 0, 324, 0, 325, 326, 327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 331, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 334, 335, 0, 336, 0, 0, 0, 337, 0, 338, 339, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0,
    0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0,
    0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0, 0, 0,
    0, 363, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369,
    370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375,
    0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381,
    0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 384, 0, 385, 386, 0, 387, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0,
    398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0,
    402, 0, 403, 404, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0,
    0, 413, 0, 0, 414, 0, 0, 415, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0,
    0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 428, 0, 429, 0, 0,
    0, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435,
    0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0,
    0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451,
    0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0,
    0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0,
    468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0,
    0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0,
    0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0,
    0, 0, 491, 0, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 496, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0,
    0, 503, 0, 0, 0, 504, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0,
    0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 0, 0, 0, 522, 523, 0, 0, 0, 0,
    524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0,
    529, 0, 530, 0, 531, 0, 532, 0, 533, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0,
    0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 540, 0, 0, 541, 0, 542, 543, 0, 544, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0,
    552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 558, 559, 0, 560, 0, 0, 0, 561, 0, 0,
    562, 0, 563, 0, 564, 0, 565, 0, 0, 0, 566, 0, 0, 567, 0, 568, 569, 0, 570, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573,
    574, 0, 0, 0, 575, 576, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 582,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0,
    588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 592, 593, 0, 0, 594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 0, 599,
    0, 600, 0, 601, 0, 0, 0, 602, 0, 603, 604, 0, 605, 0, 606, 0, 0, 607, 0, 608, 609, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 0,
    612, 0, 0, 613, 0, 0, 0, 0, 614, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620,
};
void recomp_unit_0133_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A18000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0133[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A18000;
    case 2u: goto L_08A18014;
    case 3u: goto L_08A1801C;
    case 4u: goto L_08A18024;
    case 5u: goto L_08A18030;
    case 6u: goto L_08A1803C;
    case 7u: goto L_08A18044;
    case 8u: goto L_08A18050;
    case 9u: goto L_08A1805C;
    case 10u: goto L_08A18068;
    case 11u: goto L_08A18078;
    case 12u: goto L_08A18088;
    case 13u: goto L_08A180B4;
    case 14u: goto L_08A180BC;
    case 15u: goto L_08A180E8;
    case 16u: goto L_08A180F0;
    case 17u: goto L_08A180FC;
    case 18u: goto L_08A1811C;
    case 19u: goto L_08A1813C;
    case 20u: goto L_08A18148;
    case 21u: goto L_08A18154;
    case 22u: goto L_08A18164;
    case 23u: goto L_08A18174;
    case 24u: goto L_08A1819C;
    case 25u: goto L_08A181A4;
    case 26u: goto L_08A181D0;
    case 27u: goto L_08A181D8;
    case 28u: goto L_08A181F4;
    case 29u: goto L_08A1822C;
    case 30u: goto L_08A18234;
    case 31u: goto L_08A18260;
    case 32u: goto L_08A18274;
    case 33u: goto L_08A18278;
    case 34u: goto L_08A18294;
    case 35u: goto L_08A182D4;
    case 36u: goto L_08A182DC;
    case 37u: goto L_08A182E8;
    case 38u: goto L_08A182F4;
    case 39u: goto L_08A18300;
    case 40u: goto L_08A1830C;
    case 41u: goto L_08A18318;
    case 42u: goto L_08A18328;
    case 43u: goto L_08A1835C;
    case 44u: goto L_08A18374;
    case 45u: goto L_08A18384;
    case 46u: goto L_08A18388;
    case 47u: goto L_08A183A4;
    case 48u: goto L_08A183B8;
    case 49u: goto L_08A183D4;
    case 50u: goto L_08A183DC;
    case 51u: goto L_08A183E0;
    case 52u: goto L_08A183FC;
    case 53u: goto L_08A1841C;
    case 54u: goto L_08A18428;
    case 55u: goto L_08A18438;
    case 56u: goto L_08A18444;
    case 57u: goto L_08A18454;
    case 58u: goto L_08A18464;
    case 59u: goto L_08A1848C;
    case 60u: goto L_08A18494;
    case 61u: goto L_08A18498;
    case 62u: goto L_08A184B4;
    case 63u: goto L_08A184D4;
    case 64u: goto L_08A18538;
    case 65u: goto L_08A18560;
    case 66u: goto L_08A18584;
    case 67u: goto L_08A1858C;
    case 68u: goto L_08A185B8;
    case 69u: goto L_08A185D0;
    case 70u: goto L_08A185D8;
    case 71u: goto L_08A185E0;
    case 72u: goto L_08A185FC;
    case 73u: goto L_08A1860C;
    case 74u: goto L_08A1864C;
    case 75u: goto L_08A18654;
    case 76u: goto L_08A18664;
    case 77u: goto L_08A186A8;
    case 78u: goto L_08A186B4;
    case 79u: goto L_08A186BC;
    case 80u: goto L_08A186C4;
    case 81u: goto L_08A186CC;
    case 82u: goto L_08A186D4;
    case 83u: goto L_08A1874C;
    case 84u: goto L_08A1879C;
    case 85u: goto L_08A187EC;
    case 86u: goto L_08A187F4;
    case 87u: goto L_08A1882C;
    case 88u: goto L_08A1884C;
    case 89u: goto L_08A188CC;
    case 90u: goto L_08A1891C;
    case 91u: goto L_08A18974;
    case 92u: goto L_08A1898C;
    case 93u: goto L_08A189A0;
    case 94u: goto L_08A189B8;
    case 95u: goto L_08A189C0;
    case 96u: goto L_08A189CC;
    case 97u: goto L_08A189D8;
    case 98u: goto L_08A189E4;
    case 99u: goto L_08A18A18;
    case 100u: goto L_08A18D44;
    case 101u: goto L_08A18E08;
    case 102u: goto L_08A18EC4;
    case 103u: goto L_08A18ECC;
    case 104u: goto L_08A18F00;
    case 105u: goto L_08A19164;
    case 106u: goto L_08A19228;
    case 107u: goto L_08A192E4;
    case 108u: goto L_08A192EC;
    case 109u: goto L_08A19320;
    case 110u: goto L_08A19344;
    case 111u: goto L_08A19350;
    case 112u: goto L_08A1935C;
    case 113u: goto L_08A19368;
    case 114u: goto L_08A19374;
    case 115u: goto L_08A19380;
    case 116u: goto L_08A19394;
    case 117u: goto L_08A1939C;
    case 118u: goto L_08A193AC;
    case 119u: goto L_08A193B4;
    case 120u: goto L_08A193CC;
    case 121u: goto L_08A193E0;
    case 122u: goto L_08A193E8;
    case 123u: goto L_08A19410;
    case 124u: goto L_08A1943C;
    case 125u: goto L_08A19470;
    case 126u: goto L_08A19514;
    case 127u: goto L_08A1951C;
    case 128u: goto L_08A19524;
    case 129u: goto L_08A19590;
    case 130u: goto L_08A195AC;
    case 131u: goto L_08A195C0;
    case 132u: goto L_08A195E0;
    case 133u: goto L_08A195FC;
    case 134u: goto L_08A19614;
    case 135u: goto L_08A19620;
    case 136u: goto L_08A19628;
    case 137u: goto L_08A1963C;
    case 138u: goto L_08A19650;
    case 139u: goto L_08A1965C;
    case 140u: goto L_08A19664;
    case 141u: goto L_08A19680;
    case 142u: goto L_08A19688;
    case 143u: goto L_08A1969C;
    case 144u: goto L_08A196AC;
    case 145u: goto L_08A196C0;
    case 146u: goto L_08A19738;
    case 147u: goto L_08A19754;
    case 148u: goto L_08A1976C;
    case 149u: goto L_08A19778;
    case 150u: goto L_08A19780;
    case 151u: goto L_08A19794;
    case 152u: goto L_08A197A8;
    case 153u: goto L_08A197BC;
    case 154u: goto L_08A197C4;
    case 155u: goto L_08A197EC;
    case 156u: goto L_08A197FC;
    case 157u: goto L_08A19804;
    case 158u: goto L_08A19824;
    case 159u: goto L_08A19830;
    case 160u: goto L_08A1984C;
    case 161u: goto L_08A19854;
    case 162u: goto L_08A19860;
    case 163u: goto L_08A19868;
    case 164u: goto L_08A19888;
    case 165u: goto L_08A19894;
    case 166u: goto L_08A1989C;
    case 167u: goto L_08A198A8;
    case 168u: goto L_08A198B0;
    case 169u: goto L_08A198C4;
    case 170u: goto L_08A198D4;
    case 171u: goto L_08A198DC;
    case 172u: goto L_08A198E0;
    case 173u: goto L_08A198F4;
    case 174u: goto L_08A19900;
    case 175u: goto L_08A19910;
    case 176u: goto L_08A1991C;
    case 177u: goto L_08A19924;
    case 178u: goto L_08A1993C;
    case 179u: goto L_08A19948;
    case 180u: goto L_08A19950;
    case 181u: goto L_08A19960;
    case 182u: goto L_08A19968;
    case 183u: goto L_08A1996C;
    case 184u: goto L_08A19988;
    case 185u: goto L_08A19994;
    case 186u: goto L_08A199A4;
    case 187u: goto L_08A199B0;
    case 188u: goto L_08A199B8;
    case 189u: goto L_08A199C0;
    case 190u: goto L_08A199DC;
    case 191u: goto L_08A19A00;
    case 192u: goto L_08A19A08;
    case 193u: goto L_08A19A30;
    case 194u: goto L_08A19A5C;
    case 195u: goto L_08A19A94;
    case 196u: goto L_08A19AAC;
    case 197u: goto L_08A19ACC;
    case 198u: goto L_08A19AD8;
    case 199u: goto L_08A19AE4;
    case 200u: goto L_08A19AEC;
    case 201u: goto L_08A19B00;
    case 202u: goto L_08A19B10;
    case 203u: goto L_08A19B18;
    case 204u: goto L_08A19B1C;
    case 205u: goto L_08A19B34;
    case 206u: goto L_08A19B40;
    case 207u: goto L_08A19B50;
    case 208u: goto L_08A19B5C;
    case 209u: goto L_08A19B64;
    case 210u: goto L_08A19B6C;
    case 211u: goto L_08A19B78;
    case 212u: goto L_08A19B80;
    case 213u: goto L_08A19B90;
    case 214u: goto L_08A19B98;
    case 215u: goto L_08A19B9C;
    case 216u: goto L_08A19BB8;
    case 217u: goto L_08A19BC4;
    case 218u: goto L_08A19BD4;
    case 219u: goto L_08A19BE0;
    case 220u: goto L_08A19BE8;
    case 221u: goto L_08A19BFC;
    case 222u: goto L_08A19C04;
    case 223u: goto L_08A19C60;
    case 224u: goto L_08A19C78;
    case 225u: goto L_08A19C80;
    case 226u: goto L_08A19CB8;
    case 227u: goto L_08A19CD4;
    case 228u: goto L_08A19CF4;
    case 229u: goto L_08A19D68;
    case 230u: goto L_08A19DBC;
    case 231u: goto L_08A19DC8;
    case 232u: goto L_08A19DD4;
    case 233u: goto L_08A19DE8;
    case 234u: goto L_08A19DFC;
    case 235u: goto L_08A19E14;
    case 236u: goto L_08A19E1C;
    case 237u: goto L_08A19E24;
    case 238u: goto L_08A19E38;
    case 239u: goto L_08A19E54;
    case 240u: goto L_08A19E5C;
    case 241u: goto L_08A19E88;
    case 242u: goto L_08A19E8C;
    case 243u: goto L_08A19EA0;
    case 244u: goto L_08A19ECC;
    case 245u: goto L_08A19EFC;
    case 246u: goto L_08A19F1C;
    case 247u: goto L_08A19F70;
    case 248u: goto L_08A19F84;
    case 249u: goto L_08A19FAC;
    case 250u: goto L_08A19FC0;
    case 251u: goto L_08A19FD0;
    case 252u: goto L_08A19FE4;
    case 253u: goto L_08A19FFC;
    case 254u: goto L_08A1A010;
    case 255u: goto L_08A1A058;
    case 256u: goto L_08A1A068;
    case 257u: goto L_08A1A070;
    case 258u: goto L_08A1A078;
    case 259u: goto L_08A1A080;
    case 260u: goto L_08A1A08C;
    case 261u: goto L_08A1A094;
    case 262u: goto L_08A1A0A4;
    case 263u: goto L_08A1A0AC;
    case 264u: goto L_08A1A0B4;
    case 265u: goto L_08A1A0BC;
    case 266u: goto L_08A1A0C4;
    case 267u: goto L_08A1A0CC;
    case 268u: goto L_08A1A0D4;
    case 269u: goto L_08A1A0E4;
    case 270u: goto L_08A1A100;
    case 271u: goto L_08A1A108;
    case 272u: goto L_08A1A10C;
    case 273u: goto L_08A1A118;
    case 274u: goto L_08A1A128;
    case 275u: goto L_08A1A134;
    case 276u: goto L_08A1A13C;
    case 277u: goto L_08A1A144;
    case 278u: goto L_08A1A14C;
    case 279u: goto L_08A1A158;
    case 280u: goto L_08A1A160;
    case 281u: goto L_08A1A168;
    case 282u: goto L_08A1A178;
    case 283u: goto L_08A1A194;
    case 284u: goto L_08A1A19C;
    case 285u: goto L_08A1A1AC;
    case 286u: goto L_08A1A1C0;
    case 287u: goto L_08A1A1C8;
    case 288u: goto L_08A1A1F8;
    case 289u: goto L_08A1A210;
    case 290u: goto L_08A1A21C;
    case 291u: goto L_08A1A230;
    case 292u: goto L_08A1A23C;
    case 293u: goto L_08A1A254;
    case 294u: goto L_08A1A26C;
    case 295u: goto L_08A1A294;
    case 296u: goto L_08A1A29C;
    case 297u: goto L_08A1A2A4;
    case 298u: goto L_08A1A2DC;
    case 299u: goto L_08A1A2EC;
    case 300u: goto L_08A1A30C;
    case 301u: goto L_08A1A314;
    case 302u: goto L_08A1A31C;
    case 303u: goto L_08A1A324;
    case 304u: goto L_08A1A330;
    case 305u: goto L_08A1A334;
    case 306u: goto L_08A1A348;
    case 307u: goto L_08A1A350;
    case 308u: goto L_08A1A36C;
    case 309u: goto L_08A1A37C;
    case 310u: goto L_08A1A3BC;
    case 311u: goto L_08A1A3D4;
    case 312u: goto L_08A1A3DC;
    case 313u: goto L_08A1A3E8;
    case 314u: goto L_08A1A40C;
    case 315u: goto L_08A1A41C;
    case 316u: goto L_08A1A424;
    case 317u: goto L_08A1A438;
    case 318u: goto L_08A1A440;
    case 319u: goto L_08A1A468;
    case 320u: goto L_08A1A478;
    case 321u: goto L_08A1A480;
    case 322u: goto L_08A1A484;
    case 323u: goto L_08A1A48C;
    case 324u: goto L_08A1A49C;
    case 325u: goto L_08A1A4A4;
    case 326u: goto L_08A1A4A8;
    case 327u: goto L_08A1A4AC;
    case 328u: goto L_08A1A4BC;
    case 329u: goto L_08A1A4D0;
    case 330u: goto L_08A1A4E4;
    case 331u: goto L_08A1A4E8;
    case 332u: goto L_08A1A510;
    case 333u: goto L_08A1A520;
    case 334u: goto L_08A1A528;
    case 335u: goto L_08A1A52C;
    case 336u: goto L_08A1A534;
    case 337u: goto L_08A1A544;
    case 338u: goto L_08A1A54C;
    case 339u: goto L_08A1A550;
    case 340u: goto L_08A1A554;
    case 341u: goto L_08A1A564;
    case 342u: goto L_08A1A578;
    case 343u: goto L_08A1A58C;
    case 344u: goto L_08A1A5A0;
    case 345u: goto L_08A1A5AC;
    case 346u: goto L_08A1A5C0;
    case 347u: goto L_08A1A5CC;
    case 348u: goto L_08A1A5D4;
    case 349u: goto L_08A1A5DC;
    case 350u: goto L_08A1A5F4;
    case 351u: goto L_08A1A61C;
    case 352u: goto L_08A1A638;
    case 353u: goto L_08A1A650;
    case 354u: goto L_08A1A668;
    case 355u: goto L_08A1A684;
    case 356u: goto L_08A1A6A0;
    case 357u: goto L_08A1A6B8;
    case 358u: goto L_08A1A6C0;
    case 359u: goto L_08A1A6C8;
    case 360u: goto L_08A1A6E0;
    case 361u: goto L_08A1A6E8;
    case 362u: goto L_08A1A6F0;
    case 363u: goto L_08A1A704;
    case 364u: goto L_08A1A70C;
    case 365u: goto L_08A1A71C;
    case 366u: goto L_08A1A724;
    case 367u: goto L_08A1A730;
    case 368u: goto L_08A1A774;
    case 369u: goto L_08A1A77C;
    case 370u: goto L_08A1A780;
    case 371u: goto L_08A1A7A0;
    case 372u: goto L_08A1A7C0;
    case 373u: goto L_08A1A7DC;
    case 374u: goto L_08A1A7EC;
    case 375u: goto L_08A1A7FC;
    case 376u: goto L_08A1A808;
    case 377u: goto L_08A1A818;
    case 378u: goto L_08A1A828;
    case 379u: goto L_08A1A830;
    case 380u: goto L_08A1A850;
    case 381u: goto L_08A1A87C;
    case 382u: goto L_08A1A894;
    case 383u: goto L_08A1A8A8;
    case 384u: goto L_08A1A8B4;
    case 385u: goto L_08A1A8BC;
    case 386u: goto L_08A1A8C0;
    case 387u: goto L_08A1A8C8;
    case 388u: goto L_08A1A8DC;
    case 389u: goto L_08A1A8E4;
    case 390u: goto L_08A1A8EC;
    case 391u: goto L_08A1A8F4;
    case 392u: goto L_08A1A910;
    case 393u: goto L_08A1A91C;
    case 394u: goto L_08A1A948;
    case 395u: goto L_08A1A95C;
    case 396u: goto L_08A1A96C;
    case 397u: goto L_08A1A978;
    case 398u: goto L_08A1A980;
    case 399u: goto L_08A1A9D8;
    case 400u: goto L_08A1A9E0;
    case 401u: goto L_08A1A9F8;
    case 402u: goto L_08A1AA00;
    case 403u: goto L_08A1AA08;
    case 404u: goto L_08A1AA0C;
    case 405u: goto L_08A1AA20;
    case 406u: goto L_08A1AA30;
    case 407u: goto L_08A1AA3C;
    case 408u: goto L_08A1AA48;
    case 409u: goto L_08A1AA54;
    case 410u: goto L_08A1AA60;
    case 411u: goto L_08A1AA6C;
    case 412u: goto L_08A1AA78;
    case 413u: goto L_08A1AA84;
    case 414u: goto L_08A1AA90;
    case 415u: goto L_08A1AA9C;
    case 416u: goto L_08A1AAA0;
    case 417u: goto L_08A1AAA8;
    case 418u: goto L_08A1AACC;
    case 419u: goto L_08A1AB28;
    case 420u: goto L_08A1AB4C;
    case 421u: goto L_08A1AB74;
    case 422u: goto L_08A1AB98;
    case 423u: goto L_08A1ABA8;
    case 424u: goto L_08A1ABB0;
    case 425u: goto L_08A1ABC0;
    case 426u: goto L_08A1ABCC;
    case 427u: goto L_08A1ABD8;
    case 428u: goto L_08A1ABEC;
    case 429u: goto L_08A1ABF4;
    case 430u: goto L_08A1AC08;
    case 431u: goto L_08A1AC10;
    case 432u: goto L_08A1AC24;
    case 433u: goto L_08A1AC44;
    case 434u: goto L_08A1AC54;
    case 435u: goto L_08A1AC7C;
    case 436u: goto L_08A1AC98;
    case 437u: goto L_08A1ACB4;
    case 438u: goto L_08A1ACCC;
    case 439u: goto L_08A1ACDC;
    case 440u: goto L_08A1ACE4;
    case 441u: goto L_08A1AD08;
    case 442u: goto L_08A1AD18;
    case 443u: goto L_08A1AD28;
    case 444u: goto L_08A1AD30;
    case 445u: goto L_08A1AD3C;
    case 446u: goto L_08A1AD54;
    case 447u: goto L_08A1AD5C;
    case 448u: goto L_08A1AD64;
    case 449u: goto L_08A1AD6C;
    case 450u: goto L_08A1AD74;
    case 451u: goto L_08A1AD7C;
    case 452u: goto L_08A1AD90;
    case 453u: goto L_08A1ADA4;
    case 454u: goto L_08A1ADB8;
    case 455u: goto L_08A1ADC0;
    case 456u: goto L_08A1ADC8;
    case 457u: goto L_08A1ADD0;
    case 458u: goto L_08A1ADE4;
    case 459u: goto L_08A1ADEC;
    case 460u: goto L_08A1AE04;
    case 461u: goto L_08A1AE18;
    case 462u: goto L_08A1AE28;
    case 463u: goto L_08A1AE34;
    case 464u: goto L_08A1AE44;
    case 465u: goto L_08A1AE54;
    case 466u: goto L_08A1AE64;
    case 467u: goto L_08A1AE6C;
    case 468u: goto L_08A1AE80;
    case 469u: goto L_08A1AE94;
    case 470u: goto L_08A1AEF0;
    case 471u: goto L_08A1AF14;
    case 472u: goto L_08A1AFB4;
    case 473u: goto L_08A1AFC0;
    case 474u: goto L_08A1B03C;
    case 475u: goto L_08A1B050;
    case 476u: goto L_08A1B064;
    case 477u: goto L_08A1B0C4;
    case 478u: goto L_08A1B0CC;
    case 479u: goto L_08A1B0E8;
    case 480u: goto L_08A1B148;
    case 481u: goto L_08A1B154;
    case 482u: goto L_08A1B1CC;
    case 483u: goto L_08A1B1E0;
    case 484u: goto L_08A1B1F4;
    case 485u: goto L_08A1B280;
    case 486u: goto L_08A1B294;
    case 487u: goto L_08A1B2A8;
    case 488u: goto L_08A1B2F0;
    case 489u: goto L_08A1B310;
    case 490u: goto L_08A1B36C;
    case 491u: goto L_08A1B388;
    case 492u: goto L_08A1B398;
    case 493u: goto L_08A1B3A0;
    case 494u: goto L_08A1B3B0;
    case 495u: goto L_08A1B3B8;
    case 496u: goto L_08A1B3CC;
    case 497u: goto L_08A1B3D0;
    case 498u: goto L_08A1B434;
    case 499u: goto L_08A1B43C;
    case 500u: goto L_08A1B448;
    case 501u: goto L_08A1B528;
    case 502u: goto L_08A1B570;
    case 503u: goto L_08A1B584;
    case 504u: goto L_08A1B594;
    case 505u: goto L_08A1B59C;
    case 506u: goto L_08A1B5AC;
    case 507u: goto L_08A1B5C8;
    case 508u: goto L_08A1B5D0;
    case 509u: goto L_08A1B5E0;
    case 510u: goto L_08A1B5F0;
    case 511u: goto L_08A1B608;
    case 512u: goto L_08A1B614;
    case 513u: goto L_08A1B63C;
    case 514u: goto L_08A1B640;
    case 515u: goto L_08A1B674;
    case 516u: goto L_08A1B7B0;
    case 517u: goto L_08A1B7BC;
    case 518u: goto L_08A1B7EC;
    case 519u: goto L_08A1B844;
    case 520u: goto L_08A1B84C;
    case 521u: goto L_08A1B854;
    case 522u: goto L_08A1B868;
    case 523u: goto L_08A1B86C;
    case 524u: goto L_08A1B880;
    case 525u: goto L_08A1B8B8;
    case 526u: goto L_08A1B8C0;
    case 527u: goto L_08A1B8E0;
    case 528u: goto L_08A1B8F8;
    case 529u: goto L_08A1B900;
    case 530u: goto L_08A1B908;
    case 531u: goto L_08A1B910;
    case 532u: goto L_08A1B918;
    case 533u: goto L_08A1B920;
    case 534u: goto L_08A1B924;
    case 535u: goto L_08A1B938;
    case 536u: goto L_08A1B964;
    case 537u: goto L_08A1B978;
    case 538u: goto L_08A1B994;
    case 539u: goto L_08A1B9A0;
    case 540u: goto L_08A1B9B0;
    case 541u: goto L_08A1B9BC;
    case 542u: goto L_08A1B9C4;
    case 543u: goto L_08A1B9C8;
    case 544u: goto L_08A1B9D0;
    case 545u: goto L_08A1B9D8;
    case 546u: goto L_08A1B9EC;
    case 547u: goto L_08A1BA30;
    case 548u: goto L_08A1BA44;
    case 549u: goto L_08A1BA58;
    case 550u: goto L_08A1BAA0;
    case 551u: goto L_08A1BB74;
    case 552u: goto L_08A1BB80;
    case 553u: goto L_08A1BB9C;
    case 554u: goto L_08A1BBA8;
    case 555u: goto L_08A1BBB4;
    case 556u: goto L_08A1BBC4;
    case 557u: goto L_08A1BBD0;
    case 558u: goto L_08A1BBD8;
    case 559u: goto L_08A1BBDC;
    case 560u: goto L_08A1BBE4;
    case 561u: goto L_08A1BBF4;
    case 562u: goto L_08A1BC00;
    case 563u: goto L_08A1BC08;
    case 564u: goto L_08A1BC10;
    case 565u: goto L_08A1BC18;
    case 566u: goto L_08A1BC28;
    case 567u: goto L_08A1BC34;
    case 568u: goto L_08A1BC3C;
    case 569u: goto L_08A1BC40;
    case 570u: goto L_08A1BC48;
    case 571u: goto L_08A1BC50;
    case 572u: goto L_08A1BC64;
    case 573u: goto L_08A1BCFC;
    case 574u: goto L_08A1BD00;
    case 575u: goto L_08A1BD10;
    case 576u: goto L_08A1BD14;
    case 577u: goto L_08A1BD1C;
    case 578u: goto L_08A1BD30;
    case 579u: goto L_08A1BD44;
    case 580u: goto L_08A1BD50;
    case 581u: goto L_08A1BD70;
    case 582u: goto L_08A1BD7C;
    case 583u: goto L_08A1BDAC;
    case 584u: goto L_08A1BDC0;
    case 585u: goto L_08A1BDD4;
    case 586u: goto L_08A1BDE0;
    case 587u: goto L_08A1BDF8;
    case 588u: goto L_08A1BE00;
    case 589u: goto L_08A1BE20;
    case 590u: goto L_08A1BE30;
    case 591u: goto L_08A1BE38;
    case 592u: goto L_08A1BE40;
    case 593u: goto L_08A1BE44;
    case 594u: goto L_08A1BE50;
    case 595u: goto L_08A1BE58;
    case 596u: goto L_08A1BE60;
    case 597u: goto L_08A1BE68;
    case 598u: goto L_08A1BE70;
    case 599u: goto L_08A1BE7C;
    case 600u: goto L_08A1BE84;
    case 601u: goto L_08A1BE8C;
    case 602u: goto L_08A1BE9C;
    case 603u: goto L_08A1BEA4;
    case 604u: goto L_08A1BEA8;
    case 605u: goto L_08A1BEB0;
    case 606u: goto L_08A1BEB8;
    case 607u: goto L_08A1BEC4;
    case 608u: goto L_08A1BECC;
    case 609u: goto L_08A1BED0;
    case 610u: goto L_08A1BED8;
    case 611u: goto L_08A1BEE8;
    case 612u: goto L_08A1BF00;
    case 613u: goto L_08A1BF0C;
    case 614u: goto L_08A1BF20;
    case 615u: goto L_08A1BF24;
    case 616u: goto L_08A1BF34;
    case 617u: goto L_08A1BF98;
    case 618u: goto L_08A1BFB8;
    case 619u: goto L_08A1BFC8;
    case 620u: goto L_08A1BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A18000:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f22 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f22));
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A180F0;
      }
      goto L_08A18014;
    }
}
L_08A18014:
    hot_regs.g31 = (0x08A1801Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x08AD0600u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1801Cu) goto L_08A1801C;
    return;
L_08A1801C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A180F0;
      }
      goto L_08A18024;
    }
L_08A18024:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g31 = (0x08A18030u);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A18030u) goto L_08A18030;
    return;
L_08A18030:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1928))))));
    hot_regs.g31 = (0x08A1803Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1803Cu) goto L_08A1803C;
    return;
L_08A1803C:
    hot_regs.g31 = (0x08A18044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A18044u) goto L_08A18044;
    return;
L_08A18044:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1928))))));
    hot_regs.g31 = (0x08A18050u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A18050u) goto L_08A18050;
    return;
L_08A18050:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A180E8;
      }
      goto L_08A1805C;
    }
L_08A1805C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08A18088;
    }
    goto L_08A18068;
}
L_08A18068:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(56));
    hot_regs.g31 = (0x08A18078u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A18078u) goto L_08A18078;
    return;
L_08A18078:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08A18088;
}
L_08A18088:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (17096u << 16u);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(178)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    f12 = std::bit_cast<float>(g4);
    f22 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f22 = f22 / hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f22));
    ctx.set_fpu_condition((hot_regs.f20 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
        goto L_08A180B4;
    }
    goto L_08A180B4;
}
}
L_08A180B4:
    hot_regs.g31 = (0x08A180BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 624u, 0x08A17B08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A180BCu) goto L_08A180BC;
    return;
L_08A180BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(28)));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A180E8;
}
L_08A180E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18260;
      }
      goto L_08A180F0;
    }
L_08A180F0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A181D8;
      }
      goto L_08A180FC;
    }
L_08A180FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A181D8;
      }
      goto L_08A1811C;
    }
}
L_08A1811C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(352)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A1813Cu);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1813Cu) goto L_08A1813C;
    return;
L_08A1813C:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A181D0;
      }
      goto L_08A18148;
    }
L_08A18148:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08A18174;
    }
    goto L_08A18154;
}
L_08A18154:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(57));
    hot_regs.g31 = (0x08A18164u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A18164u) goto L_08A18164;
    return;
L_08A18164:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(57)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08A18174;
}
L_08A18174:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (17096u << 16u);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(178)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f12 = f12 / hot_regs.f13;
    ctx.set_fpu_condition((hot_regs.f20 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_08A1819C;
    }
    goto L_08A1819C;
}
}
L_08A1819C:
    hot_regs.g31 = (0x08A181A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 624u, 0x08A17B08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A181A4u) goto L_08A181A4;
    return;
L_08A181A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(36)));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(37)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(39)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A181D0;
}
L_08A181D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18260;
      }
      goto L_08A181D8;
    }
L_08A181D8:
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
          goto L_08A18260;
      }
      goto L_08A181F4;
    }
}
L_08A181F4:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    g4 = (0u | 255u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    g4 = (0u | 225u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(g4));
    f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1252)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2084)));
    f22 = f22 / f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f22));
    ctx.set_fpu_condition((hot_regs.f20 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
        goto L_08A1822C;
    }
    goto L_08A1822C;
}
}
L_08A1822C:
    hot_regs.g31 = (0x08A18234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 624u, 0x08A17B08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A18234u) goto L_08A18234;
    return;
L_08A18234:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(48)));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(49)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(51)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A18260;
}
L_08A18260:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.set_fpu_condition((hot_regs.f20 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = f12;
        goto L_08A18274;
    }
    goto L_08A18274;
}
L_08A18274:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A18278;
L_08A18278:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
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
L_08A18294:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), g16);
    g16 = (2234u << 16u);
    hot_regs.g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(7488)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A189E4;
      }
      goto L_08A182D4;
    }
}
L_08A182D4:
    hot_regs.g31 = (0x08A182DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A182DCu) goto L_08A182DC;
    return;
L_08A182DC:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08A182E8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A182E8u) goto L_08A182E8;
    return;
L_08A182E8:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08A182F4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A182F4u) goto L_08A182F4;
    return;
L_08A182F4:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08A18300u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A18300u) goto L_08A18300;
    return;
L_08A18300:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08A1830Cu);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1830Cu) goto L_08A1830C;
    return;
L_08A1830C:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08A18318u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A18318u) goto L_08A18318;
    return;
L_08A18318:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(7488));
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (g16 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A185B8;
      }
      goto L_08A18328;
    }
}
L_08A18328:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
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
    hot_regs.g31 = (0x08A1835Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1835Cu) goto L_08A1835C;
    return;
L_08A1835C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 8u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = g4;
        goto L_08A18388;
    }
    goto L_08A18374;
}
L_08A18374:
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
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08A18538;
      }
      goto L_08A18384;
    }
L_08A18384:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08A18388;
L_08A18388:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = g4;
        goto L_08A183E0;
    }
    goto L_08A183A4;
}
L_08A183A4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A183B8u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A183B8u) goto L_08A183B8;
    return;
L_08A183B8:
{
    float f20 = hot_regs.f20;
    f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1252)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2084)));
    f20 = f20 / hot_regs.f12;
    ctx.set_fpu_condition((hot_regs.f22 <= f20));
    // nop
    if (!ctx.fpu_condition()) {
    f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f20 = f20;
        goto L_08A183D4;
    }
    goto L_08A183D4;
}
L_08A183D4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08A18538;
      }
      goto L_08A183DC;
    }
L_08A183DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08A183E0;
L_08A183E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = g4;
        goto L_08A18498;
    }
    goto L_08A183FC;
}
L_08A183FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(352)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A1841Cu);
    hot_regs.g4 = (ctx.gpr[19] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1841Cu) goto L_08A1841C;
    return;
L_08A1841C:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A1848C;
      }
      goto L_08A18428;
    }
L_08A18428:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A18438u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 587u, 0x089D3388u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A18438u) goto L_08A18438;
    return;
L_08A18438:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08A18464;
    }
    goto L_08A18444;
}
L_08A18444:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(132));
    hot_regs.g31 = (0x08A18454u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A18454u) goto L_08A18454;
    return;
L_08A18454:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08A18464;
}
L_08A18464:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (17096u << 16u);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(178)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(g4);
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    f20 = f20 / hot_regs.f13;
    ctx.set_fpu_condition((hot_regs.f22 <= f20));
    // nop
    if (!ctx.fpu_condition()) {
    f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
        goto L_08A1848C;
    }
    goto L_08A1848C;
}
}
L_08A1848C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08A18538;
      }
      goto L_08A18494;
    }
L_08A18494:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08A18498;
L_08A18498:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = g4;
        goto L_08A18538;
    }
    goto L_08A184B4;
}
L_08A184B4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A184D4u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A184D4u) goto L_08A184D4;
    return;
L_08A184D4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), hot_regs.g6);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g4);
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
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    f13 = f13 - ctx.fpr[16];
    g4 = (16040u << 16u);
    g4 = (g4 | 62915u);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08A18538;
}
}
L_08A18538:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g16 = ctx.gpr[16];
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (16128u << 16u);
    f13 = f12 - f13;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f15 <= hot_regs.f20));
    f12 = f12 - f13;
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A185B8;
      }
      goto L_08A18560;
    }
}
}
L_08A18560:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15820u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((hot_regs.f22 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_08A18584;
    }
    goto L_08A18584;
}
}
L_08A18584:
    hot_regs.g31 = (0x08A1858Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 624u, 0x08A17B08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1858Cu) goto L_08A1858C;
    return;
L_08A1858C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(120)));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(121)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(122)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(123)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A185B8;
}
L_08A185B8:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A185D0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A185D0u) goto L_08A185D0;
    return;
L_08A185D0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A189C0;
      }
      goto L_08A185D8;
    }
L_08A185D8:
    hot_regs.g31 = (0x08A185E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A185E0u) goto L_08A185E0;
    return;
L_08A185E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(3262))))));
    hot_regs.g5 = (16256u << 16u);
    g4 = (g4 & 8u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A18654;
      }
      goto L_08A185FC;
    }
}
L_08A185FC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7724)));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x08A1860Cu);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1860Cu) goto L_08A1860C;
    return;
L_08A1860C:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(0u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[17] = hot_regs.f22 / hot_regs.f14;
    ctx.gpr[9] = (16736u << 16u);
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.gpr[10] = (17280u << 16u);
    ctx.gpr[11] = (17184u << 16u);
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    hot_regs.g7 = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[9]);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[10]);
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[11]);
    hot_regs.g31 = (0x08A1864Cu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 81u, 0x08AA9084u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1864Cu) goto L_08A1864C;
    return;
L_08A1864C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A189C0;
      }
      goto L_08A18654;
    }
L_08A18654:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7716)));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x08A18664u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A18664u) goto L_08A18664;
    return;
L_08A18664:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16076u << 16u);
    g5 = (g5 | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(g5);
    g5 = (15948u << 16u);
    g5 = (g5 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    g5 = (48972u << 16u);
    g5 = (g5 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    g5 = (16508u << 16u);
    g5 = (g5 | 17166u);
    ctx.fpr[30] = std::bit_cast<float>(g5);
    g5 = (16329u << 16u);
    g5 = (g5 | 4059u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.fpr[28] = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A187F4;
      }
      goto L_08A186A8;
    }
}
L_08A186A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A187F4;
      }
      goto L_08A186B4;
    }
L_08A186B4:
    hot_regs.g31 = (0x08A186BCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x08AD0600u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A186BCu) goto L_08A186BC;
    return;
L_08A186BC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A187F4;
      }
      goto L_08A186C4;
    }
L_08A186C4:
    hot_regs.g31 = (0x08A186CCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A186CCu) goto L_08A186CC;
    return;
L_08A186CC:
    hot_regs.g31 = (0x08A186D4u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(3220)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A186D4u) goto L_08A186D4;
    return;
L_08A186D4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(3216)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = hot_regs.f22 / hot_regs.f14;
    hot_regs.g4 = (16040u << 16u);
    ctx.gpr[8] = (hot_regs.g4 | 62915u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    hot_regs.g7 = (0u | 158u);
    hot_regs.f12 = ctx.fpr[28] + hot_regs.f12;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.gpr[8] = (16640u << 16u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.f13 = ctx.fpr[16] - hot_regs.f13;
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.fpr[26] = hot_regs.f12 + ctx.fpr[26];
    ctx.fpr[18] = ctx.fpr[18] + hot_regs.f20;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[19] - hot_regs.f12;
    hot_regs.g31 = (0x08A1874Cu);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 81u, 0x08AA9084u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1874Cu) goto L_08A1874C;
    return;
L_08A1874C:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = hot_regs.f22 / hot_regs.f14;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    hot_regs.g7 = (0u | 158u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[30];
    hot_regs.f12 = hot_regs.f15 + hot_regs.f12;
    hot_regs.f13 = ctx.fpr[16] - hot_regs.f13;
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g31 = (0x08A1879Cu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 81u, 0x08AA9084u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1879Cu) goto L_08A1879C;
    return;
L_08A1879C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = hot_regs.f22 / ctx.fpr[16];
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    hot_regs.g7 = (0u | 158u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    hot_regs.f13 = hot_regs.f15 + hot_regs.f13;
    ctx.fpr[18] = ctx.fpr[18] + hot_regs.f12;
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g31 = (0x08A187ECu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 81u, 0x08AA9084u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A187ECu) goto L_08A187EC;
    return;
L_08A187EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18974;
      }
      goto L_08A187F4;
    }
L_08A187F4:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    f12 = std::bit_cast<float>(0u);
    g4 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    g4 = (15779u << 16u);
    f20 = hot_regs.f13 - f20;
    g4 = (g4 | 55050u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    g4 = (16672u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f12 <= f20));
    // nop
    if (!ctx.fpu_condition()) {
    f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
        goto L_08A1882C;
    }
    goto L_08A1882C;
}
}
L_08A1882C:
{
    float f13 = hot_regs.f13;
    float f20 = hot_regs.f20;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const float fs = f20; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    f13 = f13 - ctx.fpr[16];
    f20 = hot_regs.f15 - f20;
    ctx.set_fpu_condition((f13 < hot_regs.f12));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = f13;
    hot_regs.f20 = f20;
        goto L_08A1884C;
    }
    goto L_08A1884C;
}
L_08A1884C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = hot_regs.f22 / ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    ctx.gpr[9] = (16204u << 16u);
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    hot_regs.g7 = (48972u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    hot_regs.g7 = (hot_regs.g7 | 52429u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    hot_regs.f12 = hot_regs.f15 - hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[18];
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g7);
    ctx.fpr[18] = hot_regs.f13 + ctx.fpr[18];
    hot_regs.g7 = (0u | 158u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.f12 = ctx.fpr[2] - ctx.fpr[19];
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x08A188CCu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 113u, 0x08AA962Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A188CCu) goto L_08A188CC;
    return;
L_08A188CC:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = hot_regs.f22 / hot_regs.f14;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    hot_regs.g7 = (0u | 158u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[30];
    hot_regs.f12 = hot_regs.f15 + hot_regs.f12;
    hot_regs.f13 = ctx.fpr[16] - hot_regs.f13;
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A1891Cu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 113u, 0x08AA962Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1891Cu) goto L_08A1891C;
    return;
L_08A1891C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = hot_regs.f22 / ctx.fpr[16];
    hot_regs.g4 = (16128u << 16u);
    hot_regs.g7 = (0u | 158u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(47)));
    hot_regs.f13 = hot_regs.f15 + hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    ctx.fpr[18] = ctx.fpr[18] + hot_regs.f12;
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g31 = (0x08A18974u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 113u, 0x08AA962Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A18974u) goto L_08A18974;
    return;
L_08A18974:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A189A0;
      }
      goto L_08A1898C;
    }
L_08A1898C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    f12 = f12 - hot_regs.f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A189C0;
      }
      goto L_08A189A0;
    }
}
}
L_08A189A0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A189C0;
      }
      goto L_08A189B8;
    }
L_08A189B8:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A189C0;
L_08A189C0:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08A189CCu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A189CCu) goto L_08A189CC;
    return;
L_08A189CC:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08A189D8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A189D8u) goto L_08A189D8;
    return;
L_08A189D8:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08A189E4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A189E4u) goto L_08A189E4;
    return;
L_08A189E4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A18A18:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-672));
    ctx.gpr[13] = (15820u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] | 52429u);
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[13]);
    ctx.gpr[24] = (16256u << 16u);
    ctx.gpr[13] = (15907u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(656), ctx.gpr[16]);
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[24]);
    ctx.gpr[13] = (ctx.gpr[13] | 55050u);
    ctx.gpr[16] = (2238u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(660), ctx.gpr[17]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-272));
    ctx.gpr[24] = (16384u << 16u);
    ctx.gpr[17] = (2238u << 16u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[24]);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9776));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(9760));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[10] = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    ctx.gpr[11] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g2 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[3] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    ctx.gpr[12] = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    ctx.gpr[13] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[14] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[15] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12016));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(664), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(668), hot_regs.g31);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-7836), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[24] = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.gpr[25] = (0u | 2u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(131), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.gpr[24] = (0u | 3u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(ctx.gpr[24]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[24] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[24] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[24] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[25] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7835)));
    ctx.gpr[25] = (ctx.gpr[25] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-7835), static_cast<std::uint8_t>(ctx.gpr[25]));
    ctx.gpr[25] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[25]);
    { const std::uint32_t vfpu_address = ctx.gpr[24] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[25] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[25]);
    { const std::uint32_t vfpu_address = ctx.gpr[24] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[25] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[25] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[25] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[25] = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[25]);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[25] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[25] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[25] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[25] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[25] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g31);
    { const std::uint32_t vfpu_address = ctx.gpr[24] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[25] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[25] = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[25]);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[25] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[25]);
    { const std::uint32_t vfpu_address = ctx.gpr[24] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[24] = (ctx.gpr[24] << 3u);
    ctx.gpr[25] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[16]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(176)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(180)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[24] = (ctx.gpr[24] << 3u);
    ctx.gpr[25] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[13]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[24] = (ctx.gpr[24] << 3u);
    ctx.gpr[25] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[24] = (ctx.gpr[24] << 3u);
    ctx.gpr[25] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[15]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(228)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[24] = (ctx.gpr[24] << 3u);
    ctx.gpr[25] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[16]);
    ctx.gpr[25] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[25]));
    hot_regs.g31 = (0u | 120u);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g31));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[24] = (ctx.gpr[24] << 3u);
    ctx.gpr[18] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[18]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[13]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g31));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[24] = (ctx.gpr[24] << 3u);
    ctx.gpr[18] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[18]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[14]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g31));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[24] = (ctx.gpr[24] << 3u);
    ctx.gpr[18] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[18]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[15]);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[25]));
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g31));
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7835)));
    if (ctx.gpr[24] == 0u) {
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
        goto L_08A18E08;
    }
    goto L_08A18D44;
L_08A18D44:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g24 = ctx.gpr[24];
    std::uint32_t g25 = ctx.gpr[25];
    std::uint32_t g28 = ctx.gpr[28];
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[16]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[16]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[13]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[13]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[14]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[14]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[15]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[15]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    ctx.gpr[24] = g24;
    ctx.gpr[25] = g25;
      if (branch_taken) {
          goto L_08A18EC4;
      }
      goto L_08A18E08;
    }
}
}
L_08A18E08:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g24 = ctx.gpr[24];
    std::uint32_t g25 = ctx.gpr[25];
    std::uint32_t g28 = ctx.gpr[28];
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[16]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[16]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[13]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[13]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[14]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[14]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[15]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g24 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g24 = (g24 << 3u);
    g25 = (g24 + g24);
    g24 = (g24 + g25);
    g24 = (g24 + ctx.gpr[15]);
    aot_mem.aot_store32(g24 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    ctx.gpr[24] = g24;
    ctx.gpr[25] = g25;
    goto L_08A18EC4;
}
}
L_08A18EC4:
    ctx.gpr[24] = (0u | 0u);
    ctx.gpr[25] = (hot_regs.g29 + ctx.gpr[24]);
    goto L_08A18ECC;
L_08A18ECC:
{
    std::uint32_t g24 = ctx.gpr[24];
    std::uint32_t g25 = ctx.gpr[25];
    std::uint32_t g31 = hot_regs.g31;
    g25 = (aot_mem.aot_load8(g25 + static_cast<std::uint32_t>(128)));
    g31 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    g31 = (g31 + g24);
    g31 = (g31 + g31);
    g25 = (g25 + ctx.gpr[18]);
    g31 = (g31 + ctx.gpr[17]);
    g24 = (g24 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g31 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g25));
    g24 = (g24 & 255u);
    g25 = (static_cast<std::int32_t>(g24) < 6 ? 1u : 0u);
    { const bool branch_taken = g25 != 0u;
    g25 = (hot_regs.g29 + g24);
    ctx.gpr[24] = g24;
    ctx.gpr[25] = g25;
    hot_regs.g31 = g31;
      if (branch_taken) {
          goto L_08A18ECC;
      }
      goto L_08A18F00;
    }
}
L_08A18F00:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), ctx.gpr[24]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), ctx.gpr[24]);
    ctx.gpr[24] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[24]);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[16]);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(176)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(180)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[13]);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[14]);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[15]);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(228)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[16]);
    hot_regs.g5 = (0u | 255u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g6 = (0u | 120u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g7 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[13]);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g7 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[14]);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g7 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[15]);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7835)));
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
        goto L_08A19228;
    }
    goto L_08A19164;
L_08A19164:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[16]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[16]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[13]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[13]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[14]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[14]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[15]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[15]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A192E4;
      }
      goto L_08A19228;
    }
}
}
L_08A19228:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[16]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[16]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[13]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[13]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[14]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[14]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[15]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[15]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A192E4;
}
}
L_08A192E4:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (hot_regs.g29 + hot_regs.g4);
    goto L_08A192EC;
L_08A192EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(128)));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    g6 = (g6 + g4);
    g6 = (g6 + g6);
    g5 = (g5 + hot_regs.g7);
    g6 = (g6 + ctx.gpr[17]);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g4 = (g4 & 255u);
    g5 = (static_cast<std::int32_t>(g4) < 6 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g5 = (hot_regs.g29 + g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A192EC;
      }
      goto L_08A19320;
    }
}
L_08A19320:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), hot_regs.g4);
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08A19344u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19344u) goto L_08A19344;
    return;
L_08A19344:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08A19350u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19350u) goto L_08A19350;
    return;
L_08A19350:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08A1935Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1935Cu) goto L_08A1935C;
    return;
L_08A1935C:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08A19368u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19368u) goto L_08A19368;
    return;
L_08A19368:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8752)));
    hot_regs.g31 = (0x08A19374u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19374u) goto L_08A19374;
    return;
L_08A19374:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A193B4;
      }
      goto L_08A19380;
    }
L_08A19380:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08A19394u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19394u) goto L_08A19394;
    return;
L_08A19394:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A193B4;
      }
      goto L_08A1939C;
    }
L_08A1939C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    hot_regs.g4 = (0u | 3u);
    hot_regs.g31 = (0x08A193ACu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A193ACu) goto L_08A193AC;
    return;
L_08A193AC:
    hot_regs.g31 = (0x08A193B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A193B4u) goto L_08A193B4;
    return;
L_08A193B4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(656)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(660)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(664)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(668)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A193CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2234u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A193E0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(7488));
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 590u, 0x08A178F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A193E0u) goto L_08A193E0;
    return;
L_08A193E0:
    hot_regs.g31 = (0x08A193E8u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-7760));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A193E8u) goto L_08A193E8;
    return;
L_08A193E8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9760), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9764), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9768), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9776), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9780), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9784), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
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
L_08A19410:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g6);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A1943C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g8 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g8);
    g8 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g8);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(hot_regs.g6));
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(hot_regs.g7));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A19470:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), hot_regs.g31);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16384u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f14 = ctx.fpr[16] - hot_regs.f14;
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g31 = (0x08A19514u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 576u, 0x08A8F040u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19514u) goto L_08A19514;
    return;
L_08A19514:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A19524;
      }
      goto L_08A1951C;
    }
L_08A1951C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A19590;
      }
      goto L_08A19524;
    }
L_08A19524:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g2 = (0u | 1u);
    goto L_08A19590;
L_08A19590:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A195AC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A195C0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 154u, 0x08A3CB54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A195C0u) goto L_08A195C0;
    return;
L_08A195C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(28968));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(92), g4);
    hot_regs.g2 = (g16 | 0u);
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
L_08A195E0:
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
          goto L_08A19628;
      }
      goto L_08A195FC;
    }
}
L_08A195FC:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(28968));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A19614u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 156u, 0x08A3CBA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19614u) goto L_08A19614;
    return;
L_08A19614:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19628;
      }
      goto L_08A19620;
    }
L_08A19620:
    hot_regs.g31 = (0x08A19628u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08A1963C;
L_08A19628:
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
L_08A1963C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A19650u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15964)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 346u, 0x08B6D9D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19650u) goto L_08A19650;
    return;
L_08A19650:
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
L_08A1965C:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19664:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (2279u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 + static_cast<std::uint32_t>(25152));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A19680u);
    g4 = (g16 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08A195AC;
}
L_08A19680:
    hot_regs.g31 = (0x08A19688u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-7736));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19688u) goto L_08A19688;
    return;
L_08A19688:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9792));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-7724));
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A1969Cu);
    hot_regs.g7 = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 279u, 0x08A312B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1969Cu) goto L_08A1969C;
    return;
L_08A1969C:
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
L_08A196AC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A196C0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 349u, 0x0882B4E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A196C0u) goto L_08A196C0;
    return;
L_08A196C0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(29160));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(92), g4);
    f12 = std::bit_cast<float>(0u);
    g4 = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(f12));
    g4 = (g5 & g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 | 32u);
    g5 = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(f12));
    g5 = (32768u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 | g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(f12));
    g5 = (0u | 4u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(496), 0u);
    g5 = (0u + static_cast<std::uint32_t>(-2049));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(500), 0u);
    g4 = (g4 & g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A19738:
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
          goto L_08A19780;
      }
      goto L_08A19754;
    }
}
L_08A19754:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(29160));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A1976Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 368u, 0x0882B854u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1976Cu) goto L_08A1976C;
    return;
L_08A1976C:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19780;
      }
      goto L_08A19778;
    }
L_08A19778:
    hot_regs.g31 = (0x08A19780u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 396u, 0x0882B9CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19780u) goto L_08A19780;
    return;
L_08A19780:
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
L_08A19794:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A197A8u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1055u, 0x08ACFA70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A197A8u) goto L_08A197A8;
    return;
L_08A197A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A197EC;
      }
      goto L_08A197BC;
    }
L_08A197BC:
    hot_regs.g31 = (0x08A197C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 171u, 0x0886D308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A197C4u) goto L_08A197C4;
    return;
L_08A197C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(80)));
    g5 = (g16 + static_cast<std::uint32_t>(320));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(80)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0))))));
    g5 = (g5 | 16u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A197EC;
}
L_08A197EC:
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
L_08A197FC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19804:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-304));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A1984C;
      }
      goto L_08A19824;
    }
}
L_08A19824:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1984C;
      }
      goto L_08A19830;
    }
L_08A19830:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (2u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A19868;
      }
      goto L_08A1984C;
    }
}
L_08A1984C:
    hot_regs.g31 = (0x08A19854u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19854u) goto L_08A19854;
    return;
L_08A19854:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A19888;
      }
      goto L_08A19860;
    }
L_08A19860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A199C0;
      }
      goto L_08A19868;
    }
L_08A19868:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (65534u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    g5 = (2u << 16u);
    g4 = (g4 | g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A19A94;
      }
      goto L_08A19888;
    }
}
L_08A19888:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A1993C;
      }
      goto L_08A19894;
    }
L_08A19894:
    hot_regs.g31 = (0x08A1989Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 73u, 0x08AD06ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1989Cu) goto L_08A1989C;
    return;
L_08A1989C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    hot_regs.g31 = (0x08A198A8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 629u, 0x0889EB94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A198A8u) goto L_08A198A8;
    return;
L_08A198A8:
    hot_regs.g31 = (0x08A198B0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A198B0u) goto L_08A198B0;
    return;
L_08A198B0:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), 0u);
    g18 = (hot_regs.g4 << 6u);
    { const bool branch_taken = 0u == 0u;
    g18 = (hot_regs.g2 + g18);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A198DC;
      }
      goto L_08A198C4;
    }
}
L_08A198C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
        goto L_08A198E0;
    }
    goto L_08A198D4;
}
L_08A198D4:
    hot_regs.g31 = (0x08A198DCu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A198DCu) goto L_08A198DC;
    return;
L_08A198DC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    goto L_08A198E0;
L_08A198E0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x08A198F4u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A198F4u) goto L_08A198F4;
    return;
L_08A198F4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A19900u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19900u) goto L_08A19900;
    return;
L_08A19900:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A19924;
      }
      goto L_08A19910;
    }
}
L_08A19910:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19924;
      }
      goto L_08A1991C;
    }
L_08A1991C:
    hot_regs.g31 = (0x08A19924u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19924u) goto L_08A19924;
    return;
L_08A19924:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (65534u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A19A94;
      }
      goto L_08A1993C;
    }
}
L_08A1993C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    hot_regs.g31 = (0x08A19948u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19948u) goto L_08A19948;
    return;
L_08A19948:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), 0u);
      if (branch_taken) {
          goto L_08A19968;
      }
      goto L_08A19950;
    }
L_08A19950:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    hot_regs.g4 = g4;
        goto L_08A1996C;
    }
    goto L_08A19960;
}
L_08A19960:
    hot_regs.g31 = (0x08A19968u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19968u) goto L_08A19968;
    return;
L_08A19968:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    goto L_08A1996C;
L_08A1996C:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), hot_regs.g4);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g31 = (0x08A19988u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19988u) goto L_08A19988;
    return;
L_08A19988:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A19994u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19994u) goto L_08A19994;
    return;
L_08A19994:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A199B8;
      }
      goto L_08A199A4;
    }
}
L_08A199A4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A199B8;
      }
      goto L_08A199B0;
    }
L_08A199B0:
    hot_regs.g31 = (0x08A199B8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A199B8u) goto L_08A199B8;
    return;
L_08A199B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19A94;
      }
      goto L_08A199C0;
    }
L_08A199C0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_08A19A08;
      }
      goto L_08A199DC;
    }
L_08A199DC:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A19A00u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19A00u) goto L_08A19A00;
    return;
L_08A19A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19A30;
      }
      goto L_08A19A08;
    }
L_08A19A08:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A19A30u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19A30u) goto L_08A19A30;
    return;
L_08A19A30:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(528));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A19A5Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19A5Cu) goto L_08A19A5C;
    return;
L_08A19A5C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g16 + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A19A94;
}
}
L_08A19A94:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A19AAC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-256));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A19BE8;
      }
      goto L_08A19ACC;
    }
}
L_08A19ACC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A19B6C;
      }
      goto L_08A19AD8;
    }
L_08A19AD8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    hot_regs.g31 = (0x08A19AE4u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 629u, 0x0889EB94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19AE4u) goto L_08A19AE4;
    return;
L_08A19AE4:
    hot_regs.g31 = (0x08A19AECu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19AECu) goto L_08A19AEC;
    return;
L_08A19AEC:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), 0u);
    g18 = (hot_regs.g4 << 6u);
    { const bool branch_taken = 0u == 0u;
    g18 = (hot_regs.g2 + g18);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A19B18;
      }
      goto L_08A19B00;
    }
}
L_08A19B00:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    hot_regs.g4 = g4;
        goto L_08A19B1C;
    }
    goto L_08A19B10;
}
L_08A19B10:
    hot_regs.g31 = (0x08A19B18u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19B18u) goto L_08A19B18;
    return;
L_08A19B18:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    goto L_08A19B1C;
L_08A19B1C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), hot_regs.g4);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g31 = (0x08A19B34u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19B34u) goto L_08A19B34;
    return;
L_08A19B34:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A19B40u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19B40u) goto L_08A19B40;
    return;
L_08A19B40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A19B64;
      }
      goto L_08A19B50;
    }
}
L_08A19B50:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19B64;
      }
      goto L_08A19B5C;
    }
L_08A19B5C:
    hot_regs.g31 = (0x08A19B64u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19B64u) goto L_08A19B64;
    return;
L_08A19B64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19BE8;
      }
      goto L_08A19B6C;
    }
L_08A19B6C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    hot_regs.g31 = (0x08A19B78u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19B78u) goto L_08A19B78;
    return;
L_08A19B78:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), 0u);
      if (branch_taken) {
          goto L_08A19B98;
      }
      goto L_08A19B80;
    }
L_08A19B80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
    hot_regs.g4 = g4;
        goto L_08A19B9C;
    }
    goto L_08A19B90;
}
L_08A19B90:
    hot_regs.g31 = (0x08A19B98u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19B98u) goto L_08A19B98;
    return;
L_08A19B98:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
    goto L_08A19B9C;
L_08A19B9C:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), hot_regs.g4);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g31 = (0x08A19BB8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19BB8u) goto L_08A19BB8;
    return;
L_08A19BB8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A19BC4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19BC4u) goto L_08A19BC4;
    return;
L_08A19BC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A19BE8;
      }
      goto L_08A19BD4;
    }
}
L_08A19BD4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19BE8;
      }
      goto L_08A19BE0;
    }
L_08A19BE0:
    hot_regs.g31 = (0x08A19BE8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19BE8u) goto L_08A19BE8;
    return;
L_08A19BE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g5 = (0u | 2u);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A19C04;
      }
      goto L_08A19BFC;
    }
}
L_08A19BFC:
    hot_regs.g31 = (0x08A19C04u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 73u, 0x08AD06ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19C04u) goto L_08A19C04;
    return;
L_08A19C04:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (16544u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f14;
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08A19C60u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A19C60u) goto L_08A19C60;
    return;
L_08A19C60:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A19C78:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19C80:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-7712));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A19CB8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B7341Cu;
    hot_regs.g29 = g29;
    return;
}
L_08A19CB8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-7700));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08A19CD4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B7341Cu;
    return;
L_08A19CD4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x08A19CF4u);
    g4 = (g4 + static_cast<std::uint32_t>(5272));
    ctx.pc = 0x08B7341Cu;
    hot_regs.g4 = g4;
    return;
}
L_08A19CF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (68u << 16u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), hot_regs.g2);
    g4 = (g28 + static_cast<std::uint32_t>(6908));
    g5 = (g17 + g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(24), g4);
    g5 = (68u << 16u);
    g4 = (g28 + static_cast<std::uint32_t>(6912));
    g5 = (g17 + g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(28), g4);
    g5 = (68u << 16u);
    g4 = (g28 + static_cast<std::uint32_t>(6916));
    g5 = (g17 + g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(32), g4);
    g5 = (68u << 16u);
    g4 = (g28 + static_cast<std::uint32_t>(6920));
    g5 = (g17 + g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(36), g4);
    g6 = (68u << 16u);
    g5 = (g28 + static_cast<std::uint32_t>(6924));
    g6 = (g17 + g6);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(40), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A19D68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6928), 0u);
    g4 = (68u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6932), 0u);
    g4 = (g16 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    g5 = (68u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    g4 = (g16 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g5 = (68u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    g4 = (g16 + g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g4 = (g16 | 0u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A19DBCu);
    g5 = (0u | 1u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08A19FE4;
}
L_08A19DBC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08A19DC8u);
    hot_regs.g5 = (0u | 1u);
    ctx.pc = 0x08B734CCu;
    return;
L_08A19DC8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08A19DD4u);
    hot_regs.g5 = (0u | 1u);
    ctx.pc = 0x08B734CCu;
    return;
L_08A19DD4:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (0u | 512u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08A19DE8u);
    hot_regs.g7 = (0u | 1u);
    ctx.pc = 0x08B73204u;
    return;
L_08A19DE8:
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
L_08A19DFC:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A19E14u);
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B73474u;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    return;
}
L_08A19E14:
    hot_regs.g31 = (0x08A19E1Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B73474u;
    return;
L_08A19E1C:
    hot_regs.g31 = (0x08A19E24u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B73474u;
    return;
L_08A19E24:
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
L_08A19E38:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A19E54u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
    goto L_08A19F84;
}
L_08A19E54:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) <= 0;
    hot_regs.g4 = (68u << 16u);
      if (branch_taken) {
          goto L_08A19E88;
      }
      goto L_08A19E5C;
    }
L_08A19E5C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[17] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    g5 = (9u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(-32768));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    g4 = (ctx.gpr[17] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A19E8C;
      }
      goto L_08A19E88;
    }
}
L_08A19E88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A19E8C;
L_08A19E8C:
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
L_08A19EA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (68u << 16u);
    g6 = (g4 + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(24)));
    hot_regs.g7 = (68u << 16u);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g2 = (0u | 0u);
    g6 = (g6 << 2u);
    g4 = (g4 + g6);
    g4 = (g4 + hot_regs.g7);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), hot_regs.g5);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A19ECC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (68u << 16u);
    g6 = (g4 + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(28)));
    hot_regs.g7 = (68u << 16u);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g2 = (0u | 0u);
    g6 = (g6 << 2u);
    g4 = (g4 + g6);
    g4 = (g4 + hot_regs.g7);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A19EFC:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A19F1Cu);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    return;
}
L_08A19F1C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (68u << 16u);
    g4 = (g16 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (68u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g5 = (g16 + g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(24)));
    g5 = (68u << 16u);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g16 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(36)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(g6); const std::int32_t divisor = static_cast<std::int32_t>(g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g5 = (0u | 1u);
    g6 = (ctx.hi);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    hot_regs.g31 = (0x08A19F70u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B734A4u;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    return;
}
L_08A19F70:
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
L_08A19F84:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (68u << 16u);
    g5 = (g4 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (68u << 16u);
    g4 = (g4 + hot_regs.g6);
    g2 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g2 = (g2 - g4);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A19FAC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (68u << 16u);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A19FC0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A19FD0u);
    // nop
    hot_regs.g29 = g29;
    goto L_08A19FFC;
}
L_08A19FD0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    g2 = (g2 ^ 255u);
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A19FE4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (68u << 16u);
    g4 = (g4 + hot_regs.g6);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g2 = (0u | 0u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A19FFC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (68u << 16u);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1A010:
{
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g23);
    g23 = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g22);
    g22 = (aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 1u);
    hot_regs.g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (0u | 1u);
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x08A1A058u);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    ctx.gpr[22] = g22;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
    return;
}
L_08A1A058:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (68u << 16u);
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[17] = (0u | 2u);
    g16 = (ctx.gpr[22] + g16);
    ctx.gpr[16] = g16;
    goto L_08A1A068;
}
L_08A1A068:
    hot_regs.g31 = (0x08A1A070u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08A19FC0;
L_08A1A070:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A144;
      }
      goto L_08A1A078;
    }
L_08A1A078:
    hot_regs.g31 = (0x08A1A080u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08A19FFC;
L_08A1A080:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A1A0A4;
      }
      goto L_08A1A08C;
    }
L_08A1A08C:
    hot_regs.g31 = (0x08A1A094u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 189u, 0x08A116A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1A094u) goto L_08A1A094;
    return;
L_08A1A094:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08A1A0A4u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    goto L_08A19FE4;
L_08A1A0A4:
    hot_regs.g31 = (0x08A1A0ACu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08A19FAC;
L_08A1A0AC:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A1A128;
      }
      goto L_08A1A0B4;
    }
L_08A1A0B4:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A1A0C4;
      }
      goto L_08A1A0BC;
    }
L_08A1A0BC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A1A10C;
      }
      goto L_08A1A0C4;
    }
L_08A1A0C4:
    hot_regs.g31 = (0x08A1A0CCu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08A1A23C;
L_08A1A0CC:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A108;
      }
      goto L_08A1A0D4;
    }
L_08A1A0D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08A1A0E4u);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    return;
L_08A1A0E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08A1A100u);
    g5 = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    return;
}
L_08A1A100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A10C;
      }
      goto L_08A1A108;
    }
L_08A1A108:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A1A10C;
L_08A1A10C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08A1A118u);
    hot_regs.g5 = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    return;
L_08A1A118:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6928)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6928), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A1A134;
      }
      goto L_08A1A128;
    }
}
L_08A1A128:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6932)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6932), g4);
    hot_regs.g4 = g4;
    goto L_08A1A134;
}
L_08A1A134:
    hot_regs.g31 = (0x08A1A13Cu);
    // nop
    ctx.pc = 0x08B73224u;
    return;
L_08A1A13C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A068;
      }
      goto L_08A1A144;
    }
L_08A1A144:
    hot_regs.g31 = (0x08A1A14Cu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08A19FAC;
L_08A1A14C:
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g2) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A1AC;
      }
      goto L_08A1A158;
    }
L_08A1A158:
    hot_regs.g31 = (0x08A1A160u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08A19FFC;
L_08A1A160:
    hot_regs.g31 = (0x08A1A168u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    goto L_08A1A23C;
L_08A1A168:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08A1A178u);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    return;
L_08A1A178:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08A1A194u);
    g5 = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    return;
}
L_08A1A194:
    hot_regs.g31 = (0x08A1A19Cu);
    // nop
    ctx.pc = 0x08B73224u;
    return;
L_08A1A19C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6928)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6928), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A1A144;
      }
      goto L_08A1A1AC;
    }
}
L_08A1A1AC:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (0u | 512u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08A1A1C0u);
    hot_regs.g7 = (0u | 1u);
    ctx.pc = 0x08B73204u;
    return;
L_08A1A1C0:
    hot_regs.g31 = (0x08A1A1C8u);
    hot_regs.g4 = (0u | 0u);
    ctx.pc = 0x08B73524u;
    return;
L_08A1A1C8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1A1F8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A1A210u);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    hot_regs.g29 = g29;
    return;
}
L_08A1A210:
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
L_08A1A21C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A1A230u);
    hot_regs.g5 = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    hot_regs.g29 = g29;
    return;
}
L_08A1A230:
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
L_08A1A23C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A1A254u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_08A19FFC;
}
L_08A1A254:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (68u << 16u);
    g17 = (ctx.gpr[16] + g17);
    hot_regs.g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(28)));
    hot_regs.g6 = (0u | 1u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g6;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A1A2A4;
      }
      goto L_08A1A26C;
    }
}
L_08A1A26C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (9u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-32768));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g5 = (0u | 512u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g7 = (0u | 1u);
    g4 = (ctx.lo);
    g4 = (ctx.gpr[16] + g4);
    hot_regs.g31 = (0x08A1A294u);
    g4 = (g4 + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08B73204u;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    return;
}
L_08A1A294:
    hot_regs.g31 = (0x08A1A29Cu);
    // nop
    ctx.pc = 0x08B73224u;
    return;
L_08A1A29C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    goto L_08A1A2A4;
L_08A1A2A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (68u << 16u);
    g6 = (ctx.gpr[16] + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(36)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g2 = (0u | 0u);
    g4 = (ctx.hi);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1A2DC:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(hot_regs.g5));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1A2EC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A1A314;
      }
      goto L_08A1A30C;
    }
}
L_08A1A30C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1A334;
      }
      goto L_08A1A314;
    }
L_08A1A314:
    hot_regs.g31 = (0x08A1A31Cu);
    hot_regs.g4 = (0u | 1u);
    ctx.pc = 0x08B7322Cu;
    return;
L_08A1A31C:
    hot_regs.g31 = (0x08A1A324u);
    hot_regs.g4 = (0u | 0u);
    ctx.pc = 0x08B7323Cu;
    return;
L_08A1A324:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    hot_regs.g31 = (0x08A1A330u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A1A5A0;
L_08A1A330:
    hot_regs.g2 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A1A334;
L_08A1A334:
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
L_08A1A348:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A350:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A1A3D4;
      }
      goto L_08A1A36C;
    }
}
L_08A1A36C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g31 = (0x08A1A37Cu);
    hot_regs.g5 = (0u | 1u);
    ctx.pc = 0x08B73234u;
    return;
L_08A1A37C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16298u << 16u);
    g4 = (g4 | 43691u);
    ctx.fpr[18] = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (15360u << 16u);
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    hot_regs.g5 = (0u | 128u);
    g4 = (48768u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    g4 = (16000u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(g4);
    g4 = (49024u << 16u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.fpr[19] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A1A3DC;
      }
      goto L_08A1A3BC;
    }
}
L_08A1A3BC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g7 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(13)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(hot_regs.g6));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(hot_regs.g7));
      if (branch_taken) {
          goto L_08A1A3E8;
      }
      goto L_08A1A3D4;
    }
}
L_08A1A3D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A58C;
      }
      goto L_08A1A3DC;
    }
L_08A1A3DC:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A1A3E8;
L_08A1A3E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g5));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(g5));
    g5 = (g4 ^ g6);
    g5 = (g5 & g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(88), g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), g4);
    g5 = (0u | 0u);
    g6 = (g16 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A1A40C;
}
L_08A1A40C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (ctx.gpr[17] << (hot_regs.g5 & 31u));
    g7 = (hot_regs.g4 & g7);
    if (g7 == 0u) {
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g7 = g7;
        goto L_08A1A424;
    }
    goto L_08A1A41C;
}
L_08A1A41C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A1A424;
      }
      goto L_08A1A424;
    }
L_08A1A424:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f15));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A1A40C;
      }
      goto L_08A1A438;
    }
}
L_08A1A438:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_08A1A440;
L_08A1A440:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g29 + hot_regs.g4);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(2)));
    g6 = (g6 + static_cast<std::uint32_t>(-128));
    f15 = std::bit_cast<float>(g6);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const float fs = f15; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    ctx.set_fpu_condition((f15 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g6 = g6;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A1A48C;
      }
      goto L_08A1A468;
    }
}
}
L_08A1A468:
{
    float f15 = hot_regs.f15;
    ctx.set_fpu_condition((f15 <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    f15 = f15 + ctx.fpr[17];
    hot_regs.f15 = f15;
        goto L_08A1A480;
    }
    goto L_08A1A478;
}
L_08A1A478:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
      if (branch_taken) {
          goto L_08A1A484;
      }
      goto L_08A1A480;
    }
L_08A1A480:
{
    float f15 = hot_regs.f15;
    { const float fs = f15; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    hot_regs.f15 = f15;
    goto L_08A1A484;
}
L_08A1A484:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
      if (branch_taken) {
          goto L_08A1A4AC;
      }
      goto L_08A1A48C;
    }
L_08A1A48C:
{
    float f15 = hot_regs.f15;
    ctx.set_fpu_condition((f15 < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    f15 = f15 - ctx.fpr[17];
    hot_regs.f15 = f15;
        goto L_08A1A4A4;
    }
    goto L_08A1A49C;
}
L_08A1A49C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
      if (branch_taken) {
          goto L_08A1A4A8;
      }
      goto L_08A1A4A4;
    }
L_08A1A4A4:
{
    float f15 = hot_regs.f15;
    { const float fs = f15; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    hot_regs.f15 = f15;
    goto L_08A1A4A8;
}
L_08A1A4A8:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_08A1A4AC;
L_08A1A4AC:
    ctx.set_fpu_condition((ctx.fpr[0] <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1A4D0;
      }
      goto L_08A1A4BC;
    }
L_08A1A4BC:
{
    float f0 = ctx.fpr[0];
    f0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.set_fpu_condition((hot_regs.f12 < f0));
    // nop
    if (ctx.fpu_condition()) {
    f0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[0] = f0;
        goto L_08A1A4D0;
    }
    goto L_08A1A4D0;
}
L_08A1A4D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A1A440;
      }
      goto L_08A1A4E4;
    }
}
L_08A1A4E4:
    hot_regs.g4 = (0u | 0u);
    goto L_08A1A4E8;
L_08A1A4E8:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g29 + hot_regs.g4);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(-128));
    f15 = std::bit_cast<float>(g5);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const float fs = f15; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    ctx.set_fpu_condition((f15 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A1A534;
      }
      goto L_08A1A510;
    }
}
}
L_08A1A510:
{
    float f15 = hot_regs.f15;
    ctx.set_fpu_condition((f15 <= ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    f15 = f15 + ctx.fpr[17];
    hot_regs.f15 = f15;
        goto L_08A1A528;
    }
    goto L_08A1A520;
}
L_08A1A520:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
      if (branch_taken) {
          goto L_08A1A52C;
      }
      goto L_08A1A528;
    }
L_08A1A528:
{
    float f15 = hot_regs.f15;
    { const float fs = f15; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    hot_regs.f15 = f15;
    goto L_08A1A52C;
}
L_08A1A52C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
      if (branch_taken) {
          goto L_08A1A554;
      }
      goto L_08A1A534;
    }
L_08A1A534:
{
    float f15 = hot_regs.f15;
    ctx.set_fpu_condition((f15 < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    f15 = f15 - ctx.fpr[17];
    hot_regs.f15 = f15;
        goto L_08A1A54C;
    }
    goto L_08A1A544;
}
L_08A1A544:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
      if (branch_taken) {
          goto L_08A1A550;
      }
      goto L_08A1A54C;
    }
L_08A1A54C:
{
    float f15 = hot_regs.f15;
    { const float fs = f15; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    hot_regs.f15 = f15;
    goto L_08A1A550;
}
L_08A1A550:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_08A1A554;
L_08A1A554:
    ctx.set_fpu_condition((ctx.fpr[0] <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1A578;
      }
      goto L_08A1A564;
    }
L_08A1A564:
{
    float f0 = ctx.fpr[0];
    f0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.set_fpu_condition((hot_regs.f12 < f0));
    // nop
    if (ctx.fpu_condition()) {
    f0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[0] = f0;
        goto L_08A1A578;
    }
    goto L_08A1A578;
}
L_08A1A578:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A1A4E8;
      }
      goto L_08A1A58C;
    }
}
L_08A1A58C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1A5A0:
    hot_regs.g6 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    goto L_08A1A5AC;
L_08A1A5AC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 20 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A1A5AC;
      }
      goto L_08A1A5C0;
    }
}
L_08A1A5C0:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(84), 0u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(88), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A5CC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A5D4:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A5DC:
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
L_08A1A5F4:
{
    std::uint32_t g5 = hot_regs.g5;
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
}
L_08A1A61C:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A638:
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
L_08A1A650:
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
L_08A1A668:
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
L_08A1A684:
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
L_08A1A6A0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1A6C0;
      }
      goto L_08A1A6B8;
    }
L_08A1A6B8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A1A6C0;
      }
      goto L_08A1A6C0;
    }
L_08A1A6C0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A6C8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1A6E8;
      }
      goto L_08A1A6E0;
    }
L_08A1A6E0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A1A6E8;
      }
      goto L_08A1A6E8;
    }
L_08A1A6E8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A6F0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A1A70C;
      }
      goto L_08A1A704;
    }
}
L_08A1A704:
    hot_regs.g31 = (0x08A1A70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1A70Cu) goto L_08A1A70C;
    return;
L_08A1A70C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1A71C:
    jump_target = hot_regs.g31;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A724:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) & 0x7FFFFFFFu);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A730:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    g6 = (g6 & 255u);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g7 = (0u | 1u);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f15;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = g6 != hot_regs.g7;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A1A780;
      }
      goto L_08A1A774;
    }
}
L_08A1A774:
    hot_regs.g31 = (0x08A1A77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1A77Cu) goto L_08A1A77C;
    return;
L_08A1A77C:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A1A780;
L_08A1A780:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    { const float fs = f12; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = f20 - f12;
    ctx.set_fpu_condition((hot_regs.f14 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A1A7C0;
      }
      goto L_08A1A7A0;
    }
}
L_08A1A7A0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    f14 = hot_regs.f20 - f14;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    { const float fs = hot_regs.f22; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A1A7DC;
      }
      goto L_08A1A7C0;
    }
}
L_08A1A7C0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    f14 = hot_regs.f20 - f14;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    { const float fs = hot_regs.f22; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08A1A7DC;
}
L_08A1A7DC:
    ctx.set_fpu_condition((hot_regs.f20 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1A808;
      }
      goto L_08A1A7EC;
    }
L_08A1A7EC:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1A808;
      }
      goto L_08A1A7FC;
    }
L_08A1A7FC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_08A1A830;
      }
      goto L_08A1A808;
    }
L_08A1A808:
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1A830;
      }
      goto L_08A1A818;
    }
L_08A1A818:
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1A830;
      }
      goto L_08A1A828;
    }
L_08A1A828:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_08A1A830;
L_08A1A830:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (16672u << 16u);
    f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((f14 < f15));
    // nop
    if (ctx.fpu_condition()) {
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
        goto L_08A1A850;
    }
    goto L_08A1A850;
}
L_08A1A850:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 + f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A1A87C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A1A894u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1A894u) goto L_08A1A894;
    return;
L_08A1A894:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
L_08A1A8A8:
    hot_regs.g5 = (0u | 173u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A1A8BC;
      }
      goto L_08A1A8B4;
    }
L_08A1A8B4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A1A8C0;
      }
      goto L_08A1A8BC;
    }
L_08A1A8BC:
    hot_regs.g2 = (0u | 0u);
    goto L_08A1A8C0;
L_08A1A8C0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A8C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g2 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A1A8E4;
      }
      goto L_08A1A8DC;
    }
}
L_08A1A8DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08A1A8E4;
      }
      goto L_08A1A8E4;
    }
L_08A1A8E4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A8EC:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A8F4:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1940)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1936)));
    g5 = (hot_regs.g6 - g5);
    f14 = std::bit_cast<float>(g5);
    { const bool branch_taken = static_cast<std::int32_t>(g5) >= 0;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A1A91C;
      }
      goto L_08A1A910;
    }
}
}
L_08A1A910:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    goto L_08A1A91C;
L_08A1A91C:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (14979u << 16u);
    g5 = (g5 | 4719u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g5 = (16384u << 16u);
    f14 = f13 - f14;
    f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((f14 < f13));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14));
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_08A1A948;
    }
    goto L_08A1A948;
}
}
L_08A1A948:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f13 <= f14));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = f14;
        goto L_08A1A95C;
    }
    goto L_08A1A95C;
}
L_08A1A95C:
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1A978;
      }
      goto L_08A1A96C;
    }
L_08A1A96C:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(1940), hot_regs.g5);
    goto L_08A1A978;
L_08A1A978:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A980:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    hot_regs.g5 = (hot_regs.g5 << 5u);
    hot_regs.g6 = (0u - hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 << 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(144));
    ctx.gpr[17] = (hot_regs.g6 + hot_regs.g5);
    ctx.gpr[17] = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (0u | 1u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A1A9D8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1A9D8u) goto L_08A1A9D8;
    return;
L_08A1A9D8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AA00;
      }
      goto L_08A1A9E0;
    }
L_08A1A9E0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1AA08;
      }
      goto L_08A1A9F8;
    }
L_08A1A9F8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A1AA0C;
      }
      goto L_08A1AA00;
    }
L_08A1AA00:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A1AA0C;
      }
      goto L_08A1AA08;
    }
L_08A1AA08:
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    goto L_08A1AA0C;
L_08A1AA0C:
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
L_08A1AA20:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g7;
    hot_regs.g6 = (0u | 0u);
      if (branch_taken) {
          goto L_08A1AA9C;
      }
      goto L_08A1AA30;
    }
L_08A1AA30:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    if (hot_regs.g4 == hot_regs.g7) {
    hot_regs.g6 = (0u | 1u);
        goto L_08A1AAA0;
    }
    goto L_08A1AA3C;
L_08A1AA3C:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(14)));
    if (hot_regs.g4 == hot_regs.g7) {
    hot_regs.g6 = (0u | 1u);
        goto L_08A1AAA0;
    }
    goto L_08A1AA48;
L_08A1AA48:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(184)));
    if (hot_regs.g4 == hot_regs.g7) {
    hot_regs.g6 = (0u | 1u);
        goto L_08A1AAA0;
    }
    goto L_08A1AA54;
L_08A1AA54:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(226)));
    if (hot_regs.g4 == hot_regs.g7) {
    hot_regs.g6 = (0u | 1u);
        goto L_08A1AAA0;
    }
    goto L_08A1AA60;
L_08A1AA60:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(18)));
    if (hot_regs.g4 == hot_regs.g7) {
    hot_regs.g6 = (0u | 1u);
        goto L_08A1AAA0;
    }
    goto L_08A1AA6C;
L_08A1AA6C:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    if (hot_regs.g4 == hot_regs.g7) {
    hot_regs.g6 = (0u | 1u);
        goto L_08A1AAA0;
    }
    goto L_08A1AA78;
L_08A1AA78:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(232)));
    if (hot_regs.g4 == hot_regs.g7) {
    hot_regs.g6 = (0u | 1u);
        goto L_08A1AAA0;
    }
    goto L_08A1AA84;
L_08A1AA84:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(6)));
    if (hot_regs.g4 == hot_regs.g7) {
    hot_regs.g6 = (0u | 1u);
        goto L_08A1AAA0;
    }
    goto L_08A1AA90;
L_08A1AA90:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g4 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A1AAA0;
      }
      goto L_08A1AA9C;
    }
}
L_08A1AA9C:
    hot_regs.g6 = (0u | 1u);
    goto L_08A1AAA0;
L_08A1AAA0:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g6 & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AAA8:
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
L_08A1AACC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    f14 = f14 - f13;
    f12 = f12 - f13;
    f12 = f12 / f14;
    { const float fs = hot_regs.f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (17332u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (17204u << 16u);
    f14 = std::bit_cast<float>(g4);
    f12 = f12 / f14;
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
    ctx.fpr[0] = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A1AB28:
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
L_08A1AB4C:
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
    ctx.execute_vfpu_vrot(1u, 64u, 2u, 4u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AB74:
{
    float f0 = ctx.fpr[0];
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    f0 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(f0)) && f13 == f0));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g29 = g29;
    ctx.fpr[0] = f0;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A1ABB0;
      }
      goto L_08A1AB98;
    }
}
}
L_08A1AB98:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(ctx.fpr[0])) && hot_regs.f12 == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1ABB0;
      }
      goto L_08A1ABA8;
    }
L_08A1ABA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1ABC0;
      }
      goto L_08A1ABB0;
    }
L_08A1ABB0:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08A1ABC0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1ABC0u) goto L_08A1ABC0;
    return;
L_08A1ABC0:
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
L_08A1ABCC:
    ctx.fpr[0] = std::sqrt(hot_regs.f12);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ABD8:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08A1ABEC;
    }
    goto L_08A1ABEC;
L_08A1ABEC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ABF4:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08A1AC08;
    }
    goto L_08A1AC08;
L_08A1AC08:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AC10:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1AC24:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g2 = (g4 | 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A1AC44:
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
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AC54:
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
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AC7C:
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
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AC98:
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ACB4:
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ACCC:
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
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ACDC:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ACE4:
{
    float f0 = ctx.fpr[0];
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    f0 = std::bit_cast<float>(0u);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(f0)) && f13 == f0));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g29 = g29;
    ctx.fpr[0] = f0;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A1AD18;
      }
      goto L_08A1AD08;
    }
}
}
L_08A1AD08:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(ctx.fpr[0])) && hot_regs.f12 == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1AD30;
      }
      goto L_08A1AD18;
    }
L_08A1AD18:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08A1AD28u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1AD28u) goto L_08A1AD28;
    return;
L_08A1AD28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AD30;
      }
      goto L_08A1AD30;
    }
L_08A1AD30:
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
L_08A1AD3C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1AD54:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AD5C:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AD64:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7792), std::bit_cast<std::uint32_t>(hot_regs.f12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AD6C:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7796), std::bit_cast<std::uint32_t>(hot_regs.f12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AD74:
    jump_target = hot_regs.g31;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16976)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AD7C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(154)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    g5 = (g5 & hot_regs.g6);
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(g5));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1AD90:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g2 = (g4 ^ 4u);
    jump_target = hot_regs.g31;
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1ADA4:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g2 = (g4 ^ 6u);
    jump_target = hot_regs.g31;
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1ADB8:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ADC0:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ADC8:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(44), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ADD0:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1ADE4:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ADEC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08A1AE04u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1AE04u) goto L_08A1AE04;
    return;
L_08A1AE04:
    hot_regs.f15 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1AE28;
      }
      goto L_08A1AE18;
    }
L_08A1AE18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.fpr[0] = ctx.fpr[0] + hot_regs.f12;
    hot_regs.g4 = g4;
    goto L_08A1AE28;
}
L_08A1AE28:
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
L_08A1AE34:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A1AE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1AE44u) goto L_08A1AE44;
    return;
L_08A1AE44:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (hot_regs.g2 & 65535u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1AE54:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(208)));
    g2 = (g4 & hot_regs.g5);
    jump_target = hot_regs.g31;
    g2 = (0u < g2 ? 1u : 0u);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1AE64:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(852)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AE6C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A1AE80u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 198u, 0x089997E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1AE80u) goto L_08A1AE80;
    return;
L_08A1AE80:
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
L_08A1AE94:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9824));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9840));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9856));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9872), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A1AEF0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 122u, 0x08890830u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1AEF0u) goto L_08A1AEF0;
    return;
L_08A1AEF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9876), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9808));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
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
L_08A1AF14:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(252), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), hot_regs.g31);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A1AFB4u);
    // nop
    goto L_08A1AAA8;
L_08A1AFB4:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x08A1AFC0u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A1AB28;
L_08A1AFC0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(ctx.fpr[26])) && hot_regs.f12 == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1B064;
      }
      goto L_08A1B03C;
    }
L_08A1B03C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(ctx.fpr[26])) && f12 == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A1B064;
      }
      goto L_08A1B050;
    }
}
L_08A1B050:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (14545u << 16u);
    g4 = (g4 | 46871u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A1B064;
}
}
L_08A1B064:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    hot_regs.g31 = (0x08A1B0C4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 111u, 0x08890798u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1B0C4u) goto L_08A1B0C4;
    return;
L_08A1B0C4:
    hot_regs.g31 = (0x08A1B0CCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08A1AE94;
L_08A1B0CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7608), hot_regs.g4);
    hot_regs.g4 = (2279u << 16u);
    ctx.gpr[22] = (hot_regs.g4 + static_cast<std::uint32_t>(25248));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08A1B0E8u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 243u, 0x08A21DE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1B0E8u) goto L_08A1B0E8;
    return;
L_08A1B0E8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A1B148u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_08A1AAA8;
L_08A1B148:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A1B154u);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A1AB28;
L_08A1B154:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(ctx.fpr[26])) && hot_regs.f12 == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1B1F4;
      }
      goto L_08A1B1CC;
    }
L_08A1B1CC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(ctx.fpr[26])) && f12 == ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A1B1F4;
      }
      goto L_08A1B1E0;
    }
}
L_08A1B1E0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (14545u << 16u);
    g4 = (g4 | 46871u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A1B1F4;
}
}
L_08A1B1F4:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(220)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    ctx.gpr[21] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(252)));
    hot_regs.g31 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B280:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1B294:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1B2A8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-464));
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(428), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(432), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(436), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(440), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(444), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(448), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(452), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(456), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(460), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A1B3B0;
      }
      goto L_08A1B2F0;
    }
}
L_08A1B2F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A1B3B0;
      }
      goto L_08A1B310;
    }
}
L_08A1B310:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (g29 + static_cast<std::uint32_t>(160));
    ctx.gpr[3] = (g29 + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    ctx.gpr[12] = (g29 + static_cast<std::uint32_t>(176));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[13] = (g29 + static_cast<std::uint32_t>(196));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(112));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[14] = (g29 + static_cast<std::uint32_t>(208));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(68));
    ctx.gpr[10] = (g29 + static_cast<std::uint32_t>(128));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[11] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A1B36Cu);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    goto L_08A1B674;
}
L_08A1B36C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7568)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1B3A0;
      }
      goto L_08A1B388;
    }
L_08A1B388:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7584)));
    hot_regs.g4 = (0u | 56u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g4;
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A1B3D0;
      }
      goto L_08A1B398;
    }
L_08A1B398:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
      if (branch_taken) {
          goto L_08A1B3B8;
      }
      goto L_08A1B3A0;
    }
L_08A1B3A0:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[22]));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A1B640;
      }
      goto L_08A1B3B0;
    }
L_08A1B3B0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A1B640;
      }
      goto L_08A1B3B8;
    }
L_08A1B3B8:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7608)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g5 = (hot_regs.g6 < g5 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A1B448;
      }
      goto L_08A1B3CC;
    }
}
L_08A1B3CC:
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(8));
    goto L_08A1B3D0;
L_08A1B3D0:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (2234u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(7704));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7584), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7604), ctx.gpr[21]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (ctx.gpr[21] + hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7600), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A1B434u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1B434u) goto L_08A1B434;
    return;
L_08A1B434:
    { const bool branch_taken = hot_regs.g2 == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), 0u);
      if (branch_taken) {
          goto L_08A1B448;
      }
      goto L_08A1B43C;
    }
L_08A1B43C:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[22]));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A1B640;
      }
      goto L_08A1B448;
    }
L_08A1B448:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7604)));
    hot_regs.g5 = (ctx.gpr[21] - hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7600)));
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.f20 = hot_regs.f20 / hot_regs.f13;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7564), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7560)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A1B528u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1B528u) goto L_08A1B528;
    return;
L_08A1B528:
    hot_regs.g4 = (17036u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x08A1B570u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1B570u) goto L_08A1B570;
    return;
L_08A1B570:
    ctx.gpr[19] = (hot_regs.g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6944)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B594;
      }
      goto L_08A1B584;
    }
L_08A1B584:
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-7556)));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(6944), hot_regs.g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(6948), hot_regs.g5);
    goto L_08A1B594;
}
L_08A1B594:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B5F0;
      }
      goto L_08A1B59C;
    }
L_08A1B59C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6948)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6948), hot_regs.g5);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A1B5E0;
      }
      goto L_08A1B5AC;
    }
}
L_08A1B5AC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (0u | 28u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A1B5C8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A1B7BC;
L_08A1B5C8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B614;
      }
      goto L_08A1B5D0;
    }
L_08A1B5D0:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[22]));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A1B640;
      }
      goto L_08A1B5E0;
    }
L_08A1B5E0:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[22]));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A1B640;
      }
      goto L_08A1B5F0;
    }
L_08A1B5F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(6948)));
    hot_regs.g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-7556)));
    hot_regs.g6 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(6948), hot_regs.g6);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A1B5AC;
      }
      goto L_08A1B608;
    }
}
L_08A1B608:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7556)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6948), hot_regs.g4);
      if (branch_taken) {
          goto L_08A1B5AC;
      }
      goto L_08A1B614;
    }
L_08A1B614:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (16544u << 16u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.f14 = std::bit_cast<float>(g7);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    g7 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.f15 = std::bit_cast<float>(g7);
    hot_regs.g31 = (0x08A1B63Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = g7;
    goto L_08A1AF14;
}
L_08A1B63C:
    hot_regs.g2 = (ctx.gpr[22] | 0u);
    goto L_08A1B640;
L_08A1B640:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(420)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(424)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(428)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(432)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(436)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(440)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(444)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(448)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(452)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(456)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(460)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(464));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1B674:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[3] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[12] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[13] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[14] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9808));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[12] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (hot_regs.g5 << 2u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (hot_regs.g7 + hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g5 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(48);
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
    hot_regs.g4 = (ctx.gpr[14] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08A1B7B0u);
    hot_regs.g7 = (0u | 0u);
    goto L_08A1943C;
L_08A1B7B0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1B7BC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), g16);
    ctx.gpr[9] = (hot_regs.g7 | 0u);
    g16 = (g5 + static_cast<std::uint32_t>(-20));
    hot_regs.g7 = (g8 & 255u);
    g5 = (ctx.gpr[28] + g16);
    g8 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(-7596)));
    g5 = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), hot_regs.g31);
    { const bool branch_taken = g8 != 0u;
    hot_regs.g6 = (ctx.gpr[9] | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A1B84C;
      }
      goto L_08A1B7EC;
    }
}
L_08A1B7EC:
    ctx.gpr[8] = (ctx.gpr[16] << 2u);
    ctx.gpr[9] = (2234u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(7740));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[10] = (2234u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(7776));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[10]);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[10] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[10]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1B854;
      }
      goto L_08A1B844;
    }
L_08A1B844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B86C;
      }
      goto L_08A1B84C;
    }
L_08A1B84C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A1B924;
      }
      goto L_08A1B854;
    }
L_08A1B854:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1B86C;
      }
      goto L_08A1B868;
    }
L_08A1B868:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A1B86C;
L_08A1B86C:
    ctx.gpr[8] = (hot_regs.g7 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    hot_regs.g7 = (0u | 1u);
      if (branch_taken) {
          goto L_08A1B8C0;
      }
      goto L_08A1B880;
    }
L_08A1B880:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A1B8B8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1B8B8u) goto L_08A1B8B8;
    return;
L_08A1B8B8:
    hot_regs.g7 = (hot_regs.g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), 0u);
    goto L_08A1B8C0;
L_08A1B8C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7600)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g16 = (g16 + static_cast<std::uint32_t>(20));
    g4 = (g4 < g5 ? 1u : 0u);
    g16 = (g16 + static_cast<std::uint32_t>(-20));
    g5 = (g16 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A1B920;
      }
      goto L_08A1B8E0;
    }
}
L_08A1B8E0:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g16);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(5360)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    ctx.gpr[16] = g16;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1B8F8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B918;
      }
      goto L_08A1B900;
    }
L_08A1B900:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B918;
      }
      goto L_08A1B908;
    }
L_08A1B908:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B918;
      }
      goto L_08A1B910;
    }
L_08A1B910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B920;
      }
      goto L_08A1B918;
    }
L_08A1B918:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A1B924;
      }
      goto L_08A1B920;
    }
L_08A1B920:
    hot_regs.g2 = (0u | 0u);
    goto L_08A1B924;
L_08A1B924:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1B938:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(152)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(144), 0u);
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(152), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A1B964u);
    g4 = (g16 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08A1BAA0;
}
L_08A1B964:
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
L_08A1B978:
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
          goto L_08A1B9D8;
      }
      goto L_08A1B994;
    }
}
L_08A1B994:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A1B9C8;
      }
      goto L_08A1B9A0;
    }
}
L_08A1B9A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A1B9C8;
      }
      goto L_08A1B9B0;
    }
}
L_08A1B9B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    if (g4 == 0u) {
    g4 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = g4;
        goto L_08A1B9C8;
    }
    goto L_08A1B9BC;
}
L_08A1B9BC:
    hot_regs.g31 = (0x08A1B9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1B9C4u) goto L_08A1B9C4;
    return;
L_08A1B9C4:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    goto L_08A1B9C8;
L_08A1B9C8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B9D8;
      }
      goto L_08A1B9D0;
    }
L_08A1B9D0:
    hot_regs.g31 = (0x08A1B9D8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1B9D8u) goto L_08A1B9D8;
    return;
L_08A1B9D8:
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
L_08A1B9EC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
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
    hot_regs.g31 = (0x08A1BA30u);
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BA30u) goto L_08A1BA30;
    return;
L_08A1BA30:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[24] = hot_regs.f20 + hot_regs.f12;
    hot_regs.g31 = (0x08A1BA44u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BA44u) goto L_08A1BA44;
    return;
L_08A1BA44:
    hot_regs.f13 = ctx.fpr[26] - hot_regs.f20;
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f22 = hot_regs.f20 + hot_regs.f13;
    hot_regs.g31 = (0x08A1BA58u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BA58u) goto L_08A1BA58;
    return;
L_08A1BA58:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = ctx.fpr[28] - f20;
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f20 + f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A1BAA0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    g5 = (15523u << 16u);
    g5 = (g5 | 55050u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g5 = (15395u << 16u);
    g5 = (g5 | 55050u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (g4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g5 = (14673u << 16u);
    g5 = (g5 | 46871u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g5 = (14545u << 16u);
    g5 = (g5 | 46871u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (g4 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g5 = (16294u << 16u);
    g5 = (g5 | 26214u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g5 = (16307u << 16u);
    g5 = (g5 | 13107u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (g4 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g5 = (16025u << 16u);
    g5 = (g5 | 39322u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f12));
    g5 = (16256u << 16u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f12));
    g5 = (0u | 20u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(168), g5);
    g5 = (14979u << 16u);
    g5 = (g5 | 4719u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g31 = (0x08A1BB74u);
    // nop
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    goto L_08A1B9EC;
}
}
L_08A1BB74:
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
L_08A1BB80:
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
          goto L_08A1BC50;
      }
      goto L_08A1BB9C;
    }
}
L_08A1BB9C:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(2856));
    hot_regs.g31 = (0x08A1BBA8u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 500u, 0x088BA62Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BBA8u) goto L_08A1BBA8;
    return;
L_08A1BBA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(2656));
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(2560));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A1BBDC;
      }
      goto L_08A1BBB4;
    }
}
L_08A1BBB4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2728)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(2560));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A1BBDC;
      }
      goto L_08A1BBC4;
    }
}
L_08A1BBC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2720)));
    if (g4 == 0u) {
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(2560));
    hot_regs.g4 = g4;
        goto L_08A1BBDC;
    }
    goto L_08A1BBD0;
}
L_08A1BBD0:
    hot_regs.g31 = (0x08A1BBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BBD8u) goto L_08A1BBD8;
    return;
L_08A1BBD8:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(2560));
    goto L_08A1BBDC;
L_08A1BBDC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BC08;
      }
      goto L_08A1BBE4;
    }
L_08A1BBE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2632)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A1BC08;
      }
      goto L_08A1BBF4;
    }
}
L_08A1BBF4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2624)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BC08;
      }
      goto L_08A1BC00;
    }
L_08A1BC00:
    hot_regs.g31 = (0x08A1BC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BC08u) goto L_08A1BC08;
    return;
L_08A1BC08:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A1BC40;
      }
      goto L_08A1BC10;
    }
L_08A1BC10:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A1BC40;
      }
      goto L_08A1BC18;
    }
L_08A1BC18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A1BC40;
      }
      goto L_08A1BC28;
    }
}
L_08A1BC28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (g4 == 0u) {
    g4 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = g4;
        goto L_08A1BC40;
    }
    goto L_08A1BC34;
}
L_08A1BC34:
    hot_regs.g31 = (0x08A1BC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BC3Cu) goto L_08A1BC3C;
    return;
L_08A1BC3C:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    goto L_08A1BC40;
L_08A1BC40:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BC50;
      }
      goto L_08A1BC48;
    }
L_08A1BC48:
    hot_regs.g31 = (0x08A1BC50u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BC50u) goto L_08A1BC50;
    return;
L_08A1BC50:
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
L_08A1BC64:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(80)));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g5 = (g4 + g5);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(144)));
    f13 = ctx.fpr[16] - f13;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = ctx.fpr[17] - f14;
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - hot_regs.f15;
    f13 = f18 + f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f22 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    f13 = std::sqrt(f13);
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f13 + f12;
    f12 = std::sqrt(f12);
    g5 = (17096u << 16u);
    f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_08A1BD00;
      }
      goto L_08A1BCFC;
    }
}
}
L_08A1BCFC:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_08A1BD00;
L_08A1BD00:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A1BD14;
      }
      goto L_08A1BD10;
    }
L_08A1BD10:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    goto L_08A1BD14;
L_08A1BD14:
    hot_regs.g31 = (0x08A1BD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BD1Cu) goto L_08A1BD1C;
    return;
L_08A1BD1C:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7548)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7552)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08A1BD30u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BD30u) goto L_08A1BD30;
    return;
L_08A1BD30:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7540)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7544)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08A1BD44u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BD44u) goto L_08A1BD44;
    return;
L_08A1BD44:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08A1BD50u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BD50u) goto L_08A1BD50;
    return;
L_08A1BD50:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1936)));
    g4 = (hot_regs.g5 - g4);
    f14 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A1BD7C;
      }
      goto L_08A1BD70;
    }
}
}
L_08A1BD70:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    goto L_08A1BD7C;
L_08A1BD7C:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (14979u << 16u);
    g4 = (g4 | 4719u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g4 = (16384u << 16u);
    f13 = f13 - f14;
    { const float fs = f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f13 < f14));
    // nop
    if (ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_08A1BDAC;
    }
    goto L_08A1BDAC;
}
}
L_08A1BDAC:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.set_fpu_condition((hot_regs.f14 <= f13));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f13 = f13;
        goto L_08A1BDC0;
    }
    goto L_08A1BDC0;
}
L_08A1BDC0:
{
    float f20 = hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f13 < f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A1BDE0;
      }
      goto L_08A1BDD4;
    }
}
L_08A1BDD4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1940), hot_regs.g4);
    goto L_08A1BDE0;
L_08A1BDE0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A1BDF8:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 + static_cast<std::uint32_t>(2856));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BE00:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24896)));
    g4 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == g4;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A1BE38;
      }
      goto L_08A1BE20;
    }
}
L_08A1BE20:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2900)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1976))))));
      if (branch_taken) {
          goto L_08A1BE40;
      }
      goto L_08A1BE30;
    }
L_08A1BE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BE44;
      }
      goto L_08A1BE38;
    }
L_08A1BE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BED8;
      }
      goto L_08A1BE40;
    }
L_08A1BE40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2900), 0u);
    goto L_08A1BE44;
L_08A1BE44:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 7u);
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (0u | 8u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A1BE70;
      }
      goto L_08A1BE50;
    }
}
L_08A1BE50:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 46u);
      if (branch_taken) {
          goto L_08A1BE70;
      }
      goto L_08A1BE58;
    }
L_08A1BE58:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 47u);
      if (branch_taken) {
          goto L_08A1BE70;
      }
      goto L_08A1BE60;
    }
L_08A1BE60:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 34u);
      if (branch_taken) {
          goto L_08A1BE70;
      }
      goto L_08A1BE68;
    }
L_08A1BE68:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A1BE8C;
      }
      goto L_08A1BE70;
    }
L_08A1BE70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (g4 != 0u) {
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(11240), 0u);
    hot_regs.g4 = g4;
        goto L_08A1BE8C;
    }
    goto L_08A1BE7C;
}
L_08A1BE7C:
    hot_regs.g31 = (0x08A1BE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BE84u) goto L_08A1BE84;
    return;
L_08A1BE84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(11240), 0u);
    goto L_08A1BE8C;
L_08A1BE8C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1976), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BEA8;
      }
      goto L_08A1BE9C;
    }
L_08A1BE9C:
    hot_regs.g31 = (0x08A1BEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BEA4u) goto L_08A1BEA4;
    return;
L_08A1BEA4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08A1BEA8;
L_08A1BEA8:
    hot_regs.g31 = (0x08A1BEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 557u, 0x089BAA80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BEB0u) goto L_08A1BEB0;
    return;
L_08A1BEB0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BED8;
      }
      goto L_08A1BEB8;
    }
L_08A1BEB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BED0;
      }
      goto L_08A1BEC4;
    }
L_08A1BEC4:
    hot_regs.g31 = (0x08A1BECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BECCu) goto L_08A1BECC;
    return;
L_08A1BECC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08A1BED0;
L_08A1BED0:
    hot_regs.g31 = (0x08A1BED8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 681u, 0x089BB258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BED8u) goto L_08A1BED8;
    return;
L_08A1BED8:
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
L_08A1BEE8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2544)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A1BF24;
      }
      goto L_08A1BF00;
    }
}
L_08A1BF00:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(2544));
    hot_regs.g31 = (0x08A1BF0Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BF0Cu) goto L_08A1BF0C;
    return;
L_08A1BF0C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2544)));
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(31984));
    hot_regs.g31 = (0x08A1BF20u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-32));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BF20u) goto L_08A1BF20;
    return;
L_08A1BF20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2544), 0u);
    goto L_08A1BF24;
L_08A1BF24:
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
L_08A1BF34:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (17096u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2020)));
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f12 / hot_regs.f20;
    hot_regs.g6 = (17392u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g5 = (17160u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.f22 = std::bit_cast<float>(0u);
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g6);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08A1BF98u);
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BF98u) goto L_08A1BF98;
    return;
L_08A1BF98:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A1BFB8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BFB8u) goto L_08A1BFB8;
    return;
L_08A1BFB8:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A1BFC8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BFC8u) goto L_08A1BFC8;
    return;
L_08A1BFC8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2020)));
    hot_regs.f15 = hot_regs.f12 / hot_regs.f20;
    hot_regs.g5 = (17288u << 16u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08A1BFF0u);
    hot_regs.f15 = hot_regs.f13 - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A1BFF0u) goto L_08A1BFF0;
    return;
L_08A1BFF0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = 0x08A1C000u; return;
}

void recomp_unit_0133(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0133_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_133(Runtime &runtime) {
    runtime.register_generated_unit(133u, 0x08A18000u, 16384u, &recomp_unit_0133, &recomp_unit_0133_entry);
    runtime.register_function(0x08A18000u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18014u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1801Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18024u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18030u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1803Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18044u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18050u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1805Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18068u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18078u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18088u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A180B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A180BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A180E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A180F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A180FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1811Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1813Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18148u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18154u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18164u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18174u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1819Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A181A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A181D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A181D8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A181F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1822Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18234u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18260u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18274u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18278u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18294u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A182D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A182DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A182E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A182F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18300u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1830Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18318u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18328u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1835Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18374u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18384u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18388u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A183A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A183B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A183D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A183DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A183E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A183FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1841Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18428u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18438u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18444u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18454u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18464u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1848Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18494u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18498u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A184B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A184D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18538u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18560u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18584u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1858Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A185B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A185D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A185D8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A185E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A185FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1860Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1864Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18654u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18664u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A186A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A186B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A186BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A186C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A186CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A186D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1874Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1879Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A187ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A187F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1882Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1884Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A188CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1891Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18974u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1898Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189D8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18A18u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18D44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18E08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18EC4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18ECCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18F00u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19164u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19228u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A192E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A192ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19320u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19344u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19350u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1935Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19368u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19374u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19380u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19394u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1939Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A193ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A193B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A193CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A193E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A193E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19410u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1943Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19470u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19514u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1951Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19524u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19590u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A195ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A195C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A195E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A195FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19614u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19620u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19628u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1963Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19650u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1965Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19664u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19680u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19688u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1969Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A196ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A196C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19738u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19754u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1976Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19778u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19780u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19794u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A197A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A197BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A197C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A197ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A197FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19804u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19824u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19830u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1984Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19854u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19860u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19868u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19888u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19894u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1989Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A198A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A198B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A198C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A198D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A198DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A198E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A198F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19900u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19910u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1991Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19924u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1993Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19948u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19950u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19960u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19968u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1996Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19988u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19994u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A199A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A199B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A199B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A199C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A199DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19A00u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19A08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19A30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19A5Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19A94u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19AACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19ACCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19AD8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19AE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19AECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B00u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B10u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B18u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B34u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B40u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B50u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B5Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B64u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B6Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B78u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B80u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B98u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B9Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19BB8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19BC4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19BD4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19BE0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19BE8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19BFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19C04u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19C60u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19C78u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19C80u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19CB8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19CD4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19CF4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19D68u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19DBCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19DC8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19DD4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19DE8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19DFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E14u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E24u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E38u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E54u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E5Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E88u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E8Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19EA0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19ECCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19EFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19F1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19F70u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19F84u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19FACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19FC0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19FD0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19FE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19FFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A010u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A058u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A068u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A070u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A078u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A080u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A08Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A094u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A0A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A0ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A0B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A0BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A0C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A0CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A0D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A0E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A100u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A108u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A10Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A118u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A128u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A134u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A13Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A144u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A14Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A158u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A160u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A168u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A178u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A194u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A19Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A1ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A1C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A1C8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A1F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A210u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A21Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A230u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A23Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A254u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A26Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A294u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A29Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A2A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A2DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A2ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A30Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A314u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A31Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A324u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A330u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A334u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A348u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A350u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A36Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A37Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A3BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A3D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A3DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A3E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A40Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A41Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A424u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A438u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A440u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A468u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A478u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A480u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A484u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A48Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A49Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A4A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A4A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A4ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A4BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A4D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A4E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A4E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A510u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A520u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A528u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A52Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A534u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A544u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A54Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A550u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A554u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A564u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A578u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A58Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A5A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A5ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A5C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A5CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A5D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A5DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A5F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A61Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A638u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A650u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A668u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A684u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A6A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A6B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A6C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A6C8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A6E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A6E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A6F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A704u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A70Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A71Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A724u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A730u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A774u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A77Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A780u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A7A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A7C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A7DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A7ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A7FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A808u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A818u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A828u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A830u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A850u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A87Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A894u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A8A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A8B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A8BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A8C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A8C8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A8DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A8E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A8ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A8F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A910u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A91Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A948u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A95Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A96Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A978u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A980u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A9D8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A9E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A9F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA00u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA0Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA20u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA3Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA48u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA54u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA60u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA6Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA78u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA84u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA9Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AAA0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AAA8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AACCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AB28u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AB4Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AB74u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AB98u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ABA8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ABB0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ABC0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ABCCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ABD8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ABECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ABF4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC10u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC24u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC54u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC7Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC98u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ACB4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ACCCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ACDCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ACE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD18u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD28u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD3Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD54u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD5Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD64u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD6Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD74u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD7Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADA4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADB8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADC0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADC8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADD0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE04u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE18u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE28u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE34u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE54u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE64u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE6Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE80u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE94u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AEF0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF14u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AFB4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AFC0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B03Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B050u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B064u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B0C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B0CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B0E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B148u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B154u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B1CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B1E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B1F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B280u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B294u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B2A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B2F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B310u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B36Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B388u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B398u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B3A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B3B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B3B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B3CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B3D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B434u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B43Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B448u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B528u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B570u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B584u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B594u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B59Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B5ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B5C8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B5D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B5E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B5F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B608u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B614u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B63Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B640u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B674u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B7B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B7BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B7ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B844u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B84Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B854u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B868u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B86Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B880u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B8B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B8C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B8E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B8F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B900u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B908u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B910u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B918u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B920u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B924u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B938u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B964u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B978u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B994u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9C8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9D8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BA30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BA44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BA58u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BAA0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BB74u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BB80u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BB9Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBA8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBB4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBC4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBD0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBD8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBDCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBF4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC00u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC10u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC18u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC28u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC34u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC3Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC40u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC48u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC50u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC64u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BCFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD00u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD10u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD14u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD50u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD70u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD7Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BDACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BDC0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BDD4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BDE0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BDF8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE00u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE20u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE38u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE40u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE50u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE58u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE60u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE68u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE70u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE7Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE84u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE8Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE9Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BEA4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BEA8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BEB0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BEB8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BEC4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BECCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BED0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BED8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BEE8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BF00u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BF0Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BF20u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BF24u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BF34u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BF98u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BFB8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BFC8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BFF0u, &recomp_unit_0133, "recomp_unit_0133");
}
} // namespace psprecomp
