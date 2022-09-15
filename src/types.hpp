#pragma once

// This file was generated automatically by generate_types.py python script

#include <cstdint>
#include <array>
#include <bitset>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <optional>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <limits>
#include <queue>
#include <string>

template<class Serializer>
struct DataTypes {
  Serializer& ar;

  DataTypes(Serializer& ar) : ar(ar) {}

  void serialize(uint16_t type) {
    switch(type) {
    case 0: return serialize_bool();
    case 1: return serialize_int8_t();
    case 2: return serialize_uint8_t();
    case 3: return serialize_int16_t();
    case 4: return serialize_uint16_t();
    case 5: return serialize_int32_t();
    case 6: return serialize_uint32_t();
    case 7: return serialize_int64_t();
    case 8: return serialize_uint64_t();
    case 9: return serialize_float();
    case 10: return serialize_double();
    case 11: return serialize_std__string();
    case 12: return serialize_std__array_int32_t__1_();
    case 13: return serialize_std__array_int32_t__32_();
    case 14: return serialize_std__array_int32_t__1023_();
    case 15: return serialize_std__array_int8_t__1_();
    case 16: return serialize_std__array_int8_t__32_();
    case 17: return serialize_std__array_int8_t__1023_();
    case 18: return serialize_std__array_float__1_();
    case 19: return serialize_std__array_float__32_();
    case 20: return serialize_std__array_float__1023_();
    case 21: return serialize_std__array_std__string__1_();
    case 22: return serialize_std__array_std__string__32_();
    case 23: return serialize_std__array_std__string__1023_();
    case 24: return serialize_std__array_bool__1_();
    case 25: return serialize_std__array_bool__32_();
    case 26: return serialize_std__array_bool__1023_();
    case 27: return serialize_std__array_uint64_t__1_();
    case 28: return serialize_std__array_uint64_t__32_();
    case 29: return serialize_std__array_uint64_t__1023_();
    case 30: return serialize_std__bitset_1_();
    case 31: return serialize_std__bitset_32_();
    case 32: return serialize_std__bitset_1023_();
    case 33: return serialize_std__deque_int32_t_();
    case 34: return serialize_std__deque_int8_t_();
    case 35: return serialize_std__deque_float_();
    case 36: return serialize_std__deque_std__string_();
    case 37: return serialize_std__deque_bool_();
    case 38: return serialize_std__deque_uint64_t_();
    case 39: return serialize_std__forward_list_int32_t_();
    case 40: return serialize_std__forward_list_int8_t_();
    case 41: return serialize_std__forward_list_float_();
    case 42: return serialize_std__forward_list_std__string_();
    case 43: return serialize_std__forward_list_bool_();
    case 44: return serialize_std__forward_list_uint64_t_();
    case 45: return serialize_std__list_int32_t_();
    case 46: return serialize_std__list_int8_t_();
    case 47: return serialize_std__list_float_();
    case 48: return serialize_std__list_std__string_();
    case 49: return serialize_std__list_bool_();
    case 50: return serialize_std__list_uint64_t_();
    case 51: return serialize_std__map_int32_t__int32_t_();
    case 52: return serialize_std__map_int32_t__int8_t_();
    case 53: return serialize_std__map_int32_t__float_();
    case 54: return serialize_std__map_int32_t__std__string_();
    case 55: return serialize_std__map_int32_t__bool_();
    case 56: return serialize_std__map_int32_t__uint64_t_();
    case 57: return serialize_std__map_int8_t__int32_t_();
    case 58: return serialize_std__map_int8_t__int8_t_();
    case 59: return serialize_std__map_int8_t__float_();
    case 60: return serialize_std__map_int8_t__std__string_();
    case 61: return serialize_std__map_int8_t__bool_();
    case 62: return serialize_std__map_int8_t__uint64_t_();
    case 63: return serialize_std__map_float__int32_t_();
    case 64: return serialize_std__map_float__int8_t_();
    case 65: return serialize_std__map_float__float_();
    case 66: return serialize_std__map_float__std__string_();
    case 67: return serialize_std__map_float__bool_();
    case 68: return serialize_std__map_float__uint64_t_();
    case 69: return serialize_std__map_std__string__int32_t_();
    case 70: return serialize_std__map_std__string__int8_t_();
    case 71: return serialize_std__map_std__string__float_();
    case 72: return serialize_std__map_std__string__std__string_();
    case 73: return serialize_std__map_std__string__bool_();
    case 74: return serialize_std__map_std__string__uint64_t_();
    case 75: return serialize_std__map_bool__int32_t_();
    case 76: return serialize_std__map_bool__int8_t_();
    case 77: return serialize_std__map_bool__float_();
    case 78: return serialize_std__map_bool__std__string_();
    case 79: return serialize_std__map_bool__bool_();
    case 80: return serialize_std__map_bool__uint64_t_();
    case 81: return serialize_std__map_uint64_t__int32_t_();
    case 82: return serialize_std__map_uint64_t__int8_t_();
    case 83: return serialize_std__map_uint64_t__float_();
    case 84: return serialize_std__map_uint64_t__std__string_();
    case 85: return serialize_std__map_uint64_t__bool_();
    case 86: return serialize_std__map_uint64_t__uint64_t_();
    case 87: return serialize_std__multimap_int32_t__int32_t_();
    case 88: return serialize_std__multimap_int32_t__int8_t_();
    case 89: return serialize_std__multimap_int32_t__float_();
    case 90: return serialize_std__multimap_int32_t__std__string_();
    case 91: return serialize_std__multimap_int32_t__bool_();
    case 92: return serialize_std__multimap_int32_t__uint64_t_();
    case 93: return serialize_std__multimap_int8_t__int32_t_();
    case 94: return serialize_std__multimap_int8_t__int8_t_();
    case 95: return serialize_std__multimap_int8_t__float_();
    case 96: return serialize_std__multimap_int8_t__std__string_();
    case 97: return serialize_std__multimap_int8_t__bool_();
    case 98: return serialize_std__multimap_int8_t__uint64_t_();
    case 99: return serialize_std__multimap_float__int32_t_();
    case 100: return serialize_std__multimap_float__int8_t_();
    case 101: return serialize_std__multimap_float__float_();
    case 102: return serialize_std__multimap_float__std__string_();
    case 103: return serialize_std__multimap_float__bool_();
    case 104: return serialize_std__multimap_float__uint64_t_();
    case 105: return serialize_std__multimap_std__string__int32_t_();
    case 106: return serialize_std__multimap_std__string__int8_t_();
    case 107: return serialize_std__multimap_std__string__float_();
    case 108: return serialize_std__multimap_std__string__std__string_();
    case 109: return serialize_std__multimap_std__string__bool_();
    case 110: return serialize_std__multimap_std__string__uint64_t_();
    case 111: return serialize_std__multimap_bool__int32_t_();
    case 112: return serialize_std__multimap_bool__int8_t_();
    case 113: return serialize_std__multimap_bool__float_();
    case 114: return serialize_std__multimap_bool__std__string_();
    case 115: return serialize_std__multimap_bool__bool_();
    case 116: return serialize_std__multimap_bool__uint64_t_();
    case 117: return serialize_std__multimap_uint64_t__int32_t_();
    case 118: return serialize_std__multimap_uint64_t__int8_t_();
    case 119: return serialize_std__multimap_uint64_t__float_();
    case 120: return serialize_std__multimap_uint64_t__std__string_();
    case 121: return serialize_std__multimap_uint64_t__bool_();
    case 122: return serialize_std__multimap_uint64_t__uint64_t_();
    case 123: return serialize_std__multiset_int32_t_();
    case 124: return serialize_std__multiset_int8_t_();
    case 125: return serialize_std__multiset_float_();
    case 126: return serialize_std__multiset_std__string_();
    case 127: return serialize_std__multiset_bool_();
    case 128: return serialize_std__multiset_uint64_t_();
    case 129: return serialize_std__pair_int32_t__int32_t_();
    case 130: return serialize_std__pair_int32_t__int8_t_();
    case 131: return serialize_std__pair_int32_t__float_();
    case 132: return serialize_std__pair_int32_t__std__string_();
    case 133: return serialize_std__pair_int32_t__bool_();
    case 134: return serialize_std__pair_int32_t__uint64_t_();
    case 135: return serialize_std__pair_int8_t__int32_t_();
    case 136: return serialize_std__pair_int8_t__int8_t_();
    case 137: return serialize_std__pair_int8_t__float_();
    case 138: return serialize_std__pair_int8_t__std__string_();
    case 139: return serialize_std__pair_int8_t__bool_();
    case 140: return serialize_std__pair_int8_t__uint64_t_();
    case 141: return serialize_std__pair_float__int32_t_();
    case 142: return serialize_std__pair_float__int8_t_();
    case 143: return serialize_std__pair_float__float_();
    case 144: return serialize_std__pair_float__std__string_();
    case 145: return serialize_std__pair_float__bool_();
    case 146: return serialize_std__pair_float__uint64_t_();
    case 147: return serialize_std__pair_std__string__int32_t_();
    case 148: return serialize_std__pair_std__string__int8_t_();
    case 149: return serialize_std__pair_std__string__float_();
    case 150: return serialize_std__pair_std__string__std__string_();
    case 151: return serialize_std__pair_std__string__bool_();
    case 152: return serialize_std__pair_std__string__uint64_t_();
    case 153: return serialize_std__pair_bool__int32_t_();
    case 154: return serialize_std__pair_bool__int8_t_();
    case 155: return serialize_std__pair_bool__float_();
    case 156: return serialize_std__pair_bool__std__string_();
    case 157: return serialize_std__pair_bool__bool_();
    case 158: return serialize_std__pair_bool__uint64_t_();
    case 159: return serialize_std__pair_uint64_t__int32_t_();
    case 160: return serialize_std__pair_uint64_t__int8_t_();
    case 161: return serialize_std__pair_uint64_t__float_();
    case 162: return serialize_std__pair_uint64_t__std__string_();
    case 163: return serialize_std__pair_uint64_t__bool_();
    case 164: return serialize_std__pair_uint64_t__uint64_t_();
    case 165: return serialize_std__set_int32_t_();
    case 166: return serialize_std__set_int8_t_();
    case 167: return serialize_std__set_float_();
    case 168: return serialize_std__set_std__string_();
    case 169: return serialize_std__set_bool_();
    case 170: return serialize_std__set_uint64_t_();
    case 171: return serialize_std__unordered_map_int32_t__int32_t_();
    case 172: return serialize_std__unordered_map_int32_t__int8_t_();
    case 173: return serialize_std__unordered_map_int32_t__float_();
    case 174: return serialize_std__unordered_map_int32_t__std__string_();
    case 175: return serialize_std__unordered_map_int32_t__bool_();
    case 176: return serialize_std__unordered_map_int32_t__uint64_t_();
    case 177: return serialize_std__unordered_map_int8_t__int32_t_();
    case 178: return serialize_std__unordered_map_int8_t__int8_t_();
    case 179: return serialize_std__unordered_map_int8_t__float_();
    case 180: return serialize_std__unordered_map_int8_t__std__string_();
    case 181: return serialize_std__unordered_map_int8_t__bool_();
    case 182: return serialize_std__unordered_map_int8_t__uint64_t_();
    case 183: return serialize_std__unordered_map_float__int32_t_();
    case 184: return serialize_std__unordered_map_float__int8_t_();
    case 185: return serialize_std__unordered_map_float__float_();
    case 186: return serialize_std__unordered_map_float__std__string_();
    case 187: return serialize_std__unordered_map_float__bool_();
    case 188: return serialize_std__unordered_map_float__uint64_t_();
    case 189: return serialize_std__unordered_map_std__string__int32_t_();
    case 190: return serialize_std__unordered_map_std__string__int8_t_();
    case 191: return serialize_std__unordered_map_std__string__float_();
    case 192: return serialize_std__unordered_map_std__string__std__string_();
    case 193: return serialize_std__unordered_map_std__string__bool_();
    case 194: return serialize_std__unordered_map_std__string__uint64_t_();
    case 195: return serialize_std__unordered_map_bool__int32_t_();
    case 196: return serialize_std__unordered_map_bool__int8_t_();
    case 197: return serialize_std__unordered_map_bool__float_();
    case 198: return serialize_std__unordered_map_bool__std__string_();
    case 199: return serialize_std__unordered_map_bool__bool_();
    case 200: return serialize_std__unordered_map_bool__uint64_t_();
    case 201: return serialize_std__unordered_map_uint64_t__int32_t_();
    case 202: return serialize_std__unordered_map_uint64_t__int8_t_();
    case 203: return serialize_std__unordered_map_uint64_t__float_();
    case 204: return serialize_std__unordered_map_uint64_t__std__string_();
    case 205: return serialize_std__unordered_map_uint64_t__bool_();
    case 206: return serialize_std__unordered_map_uint64_t__uint64_t_();
    case 207: return serialize_std__unordered_multimap_int32_t__int32_t_();
    case 208: return serialize_std__unordered_multimap_int32_t__int8_t_();
    case 209: return serialize_std__unordered_multimap_int32_t__float_();
    case 210: return serialize_std__unordered_multimap_int32_t__std__string_();
    case 211: return serialize_std__unordered_multimap_int32_t__bool_();
    case 212: return serialize_std__unordered_multimap_int32_t__uint64_t_();
    case 213: return serialize_std__unordered_multimap_int8_t__int32_t_();
    case 214: return serialize_std__unordered_multimap_int8_t__int8_t_();
    case 215: return serialize_std__unordered_multimap_int8_t__float_();
    case 216: return serialize_std__unordered_multimap_int8_t__std__string_();
    case 217: return serialize_std__unordered_multimap_int8_t__bool_();
    case 218: return serialize_std__unordered_multimap_int8_t__uint64_t_();
    case 219: return serialize_std__unordered_multimap_float__int32_t_();
    case 220: return serialize_std__unordered_multimap_float__int8_t_();
    case 221: return serialize_std__unordered_multimap_float__float_();
    case 222: return serialize_std__unordered_multimap_float__std__string_();
    case 223: return serialize_std__unordered_multimap_float__bool_();
    case 224: return serialize_std__unordered_multimap_float__uint64_t_();
    case 225: return serialize_std__unordered_multimap_std__string__int32_t_();
    case 226: return serialize_std__unordered_multimap_std__string__int8_t_();
    case 227: return serialize_std__unordered_multimap_std__string__float_();
    case 228: return serialize_std__unordered_multimap_std__string__std__string_();
    case 229: return serialize_std__unordered_multimap_std__string__bool_();
    case 230: return serialize_std__unordered_multimap_std__string__uint64_t_();
    case 231: return serialize_std__unordered_multimap_bool__int32_t_();
    case 232: return serialize_std__unordered_multimap_bool__int8_t_();
    case 233: return serialize_std__unordered_multimap_bool__float_();
    case 234: return serialize_std__unordered_multimap_bool__std__string_();
    case 235: return serialize_std__unordered_multimap_bool__bool_();
    case 236: return serialize_std__unordered_multimap_bool__uint64_t_();
    case 237: return serialize_std__unordered_multimap_uint64_t__int32_t_();
    case 238: return serialize_std__unordered_multimap_uint64_t__int8_t_();
    case 239: return serialize_std__unordered_multimap_uint64_t__float_();
    case 240: return serialize_std__unordered_multimap_uint64_t__std__string_();
    case 241: return serialize_std__unordered_multimap_uint64_t__bool_();
    case 242: return serialize_std__unordered_multimap_uint64_t__uint64_t_();
    case 243: return serialize_std__unordered_multiset_int32_t_();
    case 244: return serialize_std__unordered_multiset_int8_t_();
    case 245: return serialize_std__unordered_multiset_float_();
    case 246: return serialize_std__unordered_multiset_std__string_();
    case 247: return serialize_std__unordered_multiset_bool_();
    case 248: return serialize_std__unordered_multiset_uint64_t_();
    case 249: return serialize_std__unordered_set_int32_t_();
    case 250: return serialize_std__unordered_set_int8_t_();
    case 251: return serialize_std__unordered_set_float_();
    case 252: return serialize_std__unordered_set_std__string_();
    case 253: return serialize_std__unordered_set_bool_();
    case 254: return serialize_std__unordered_set_uint64_t_();
    case 255: return serialize_std__vector_int32_t_();
    case 256: return serialize_std__vector_int8_t_();
    case 257: return serialize_std__vector_float_();
    case 258: return serialize_std__vector_std__string_();
    case 259: return serialize_std__vector_bool_();
    case 260: return serialize_std__vector_uint64_t_();
    case 261: return serialize_std__vector_std__vector_int32_t__();
    case 262: return serialize_std__vector_std__vector_int8_t__();
    case 263: return serialize_std__vector_std__vector_float__();
    case 264: return serialize_std__vector_std__vector_std__string__();
    case 265: return serialize_std__vector_std__vector_bool__();
    case 266: return serialize_std__vector_std__vector_uint64_t__();
    case 267: return serialize_std__map_int32_t__std__map_int32_t__int32_t__();
    case 268: return serialize_std__map_int32_t__std__map_int32_t__int8_t__();
    case 269: return serialize_std__map_int32_t__std__map_int32_t__float__();
    case 270: return serialize_std__map_int32_t__std__map_int32_t__std__string__();
    case 271: return serialize_std__map_int32_t__std__map_int32_t__bool__();
    case 272: return serialize_std__map_int32_t__std__map_int32_t__uint64_t__();
    case 273: return serialize_std__map_int32_t__std__map_int8_t__int32_t__();
    case 274: return serialize_std__map_int32_t__std__map_int8_t__int8_t__();
    case 275: return serialize_std__map_int32_t__std__map_int8_t__float__();
    case 276: return serialize_std__map_int32_t__std__map_int8_t__std__string__();
    case 277: return serialize_std__map_int32_t__std__map_int8_t__bool__();
    case 278: return serialize_std__map_int32_t__std__map_int8_t__uint64_t__();
    case 279: return serialize_std__map_int32_t__std__map_float__int32_t__();
    case 280: return serialize_std__map_int32_t__std__map_float__int8_t__();
    case 281: return serialize_std__map_int32_t__std__map_float__float__();
    case 282: return serialize_std__map_int32_t__std__map_float__std__string__();
    case 283: return serialize_std__map_int32_t__std__map_float__bool__();
    case 284: return serialize_std__map_int32_t__std__map_float__uint64_t__();
    case 285: return serialize_std__map_int32_t__std__map_std__string__int32_t__();
    case 286: return serialize_std__map_int32_t__std__map_std__string__int8_t__();
    case 287: return serialize_std__map_int32_t__std__map_std__string__float__();
    case 288: return serialize_std__map_int32_t__std__map_std__string__std__string__();
    case 289: return serialize_std__map_int32_t__std__map_std__string__bool__();
    case 290: return serialize_std__map_int32_t__std__map_std__string__uint64_t__();
    case 291: return serialize_std__map_int32_t__std__map_bool__int32_t__();
    case 292: return serialize_std__map_int32_t__std__map_bool__int8_t__();
    case 293: return serialize_std__map_int32_t__std__map_bool__float__();
    case 294: return serialize_std__map_int32_t__std__map_bool__std__string__();
    case 295: return serialize_std__map_int32_t__std__map_bool__bool__();
    case 296: return serialize_std__map_int32_t__std__map_bool__uint64_t__();
    case 297: return serialize_std__map_int32_t__std__map_uint64_t__int32_t__();
    case 298: return serialize_std__map_int32_t__std__map_uint64_t__int8_t__();
    case 299: return serialize_std__map_int32_t__std__map_uint64_t__float__();
    case 300: return serialize_std__map_int32_t__std__map_uint64_t__std__string__();
    case 301: return serialize_std__map_int32_t__std__map_uint64_t__bool__();
    case 302: return serialize_std__map_int32_t__std__map_uint64_t__uint64_t__();
    case 303: return serialize_std__map_int8_t__std__map_int32_t__int32_t__();
    case 304: return serialize_std__map_int8_t__std__map_int32_t__int8_t__();
    case 305: return serialize_std__map_int8_t__std__map_int32_t__float__();
    case 306: return serialize_std__map_int8_t__std__map_int32_t__std__string__();
    case 307: return serialize_std__map_int8_t__std__map_int32_t__bool__();
    case 308: return serialize_std__map_int8_t__std__map_int32_t__uint64_t__();
    case 309: return serialize_std__map_int8_t__std__map_int8_t__int32_t__();
    case 310: return serialize_std__map_int8_t__std__map_int8_t__int8_t__();
    case 311: return serialize_std__map_int8_t__std__map_int8_t__float__();
    case 312: return serialize_std__map_int8_t__std__map_int8_t__std__string__();
    case 313: return serialize_std__map_int8_t__std__map_int8_t__bool__();
    case 314: return serialize_std__map_int8_t__std__map_int8_t__uint64_t__();
    case 315: return serialize_std__map_int8_t__std__map_float__int32_t__();
    case 316: return serialize_std__map_int8_t__std__map_float__int8_t__();
    case 317: return serialize_std__map_int8_t__std__map_float__float__();
    case 318: return serialize_std__map_int8_t__std__map_float__std__string__();
    case 319: return serialize_std__map_int8_t__std__map_float__bool__();
    case 320: return serialize_std__map_int8_t__std__map_float__uint64_t__();
    case 321: return serialize_std__map_int8_t__std__map_std__string__int32_t__();
    case 322: return serialize_std__map_int8_t__std__map_std__string__int8_t__();
    case 323: return serialize_std__map_int8_t__std__map_std__string__float__();
    case 324: return serialize_std__map_int8_t__std__map_std__string__std__string__();
    case 325: return serialize_std__map_int8_t__std__map_std__string__bool__();
    case 326: return serialize_std__map_int8_t__std__map_std__string__uint64_t__();
    case 327: return serialize_std__map_int8_t__std__map_bool__int32_t__();
    case 328: return serialize_std__map_int8_t__std__map_bool__int8_t__();
    case 329: return serialize_std__map_int8_t__std__map_bool__float__();
    case 330: return serialize_std__map_int8_t__std__map_bool__std__string__();
    case 331: return serialize_std__map_int8_t__std__map_bool__bool__();
    case 332: return serialize_std__map_int8_t__std__map_bool__uint64_t__();
    case 333: return serialize_std__map_int8_t__std__map_uint64_t__int32_t__();
    case 334: return serialize_std__map_int8_t__std__map_uint64_t__int8_t__();
    case 335: return serialize_std__map_int8_t__std__map_uint64_t__float__();
    case 336: return serialize_std__map_int8_t__std__map_uint64_t__std__string__();
    case 337: return serialize_std__map_int8_t__std__map_uint64_t__bool__();
    case 338: return serialize_std__map_int8_t__std__map_uint64_t__uint64_t__();
    case 339: return serialize_std__map_float__std__map_int32_t__int32_t__();
    case 340: return serialize_std__map_float__std__map_int32_t__int8_t__();
    case 341: return serialize_std__map_float__std__map_int32_t__float__();
    case 342: return serialize_std__map_float__std__map_int32_t__std__string__();
    case 343: return serialize_std__map_float__std__map_int32_t__bool__();
    case 344: return serialize_std__map_float__std__map_int32_t__uint64_t__();
    case 345: return serialize_std__map_float__std__map_int8_t__int32_t__();
    case 346: return serialize_std__map_float__std__map_int8_t__int8_t__();
    case 347: return serialize_std__map_float__std__map_int8_t__float__();
    case 348: return serialize_std__map_float__std__map_int8_t__std__string__();
    case 349: return serialize_std__map_float__std__map_int8_t__bool__();
    case 350: return serialize_std__map_float__std__map_int8_t__uint64_t__();
    case 351: return serialize_std__map_float__std__map_float__int32_t__();
    case 352: return serialize_std__map_float__std__map_float__int8_t__();
    case 353: return serialize_std__map_float__std__map_float__float__();
    case 354: return serialize_std__map_float__std__map_float__std__string__();
    case 355: return serialize_std__map_float__std__map_float__bool__();
    case 356: return serialize_std__map_float__std__map_float__uint64_t__();
    case 357: return serialize_std__map_float__std__map_std__string__int32_t__();
    case 358: return serialize_std__map_float__std__map_std__string__int8_t__();
    case 359: return serialize_std__map_float__std__map_std__string__float__();
    case 360: return serialize_std__map_float__std__map_std__string__std__string__();
    case 361: return serialize_std__map_float__std__map_std__string__bool__();
    case 362: return serialize_std__map_float__std__map_std__string__uint64_t__();
    case 363: return serialize_std__map_float__std__map_bool__int32_t__();
    case 364: return serialize_std__map_float__std__map_bool__int8_t__();
    case 365: return serialize_std__map_float__std__map_bool__float__();
    case 366: return serialize_std__map_float__std__map_bool__std__string__();
    case 367: return serialize_std__map_float__std__map_bool__bool__();
    case 368: return serialize_std__map_float__std__map_bool__uint64_t__();
    case 369: return serialize_std__map_float__std__map_uint64_t__int32_t__();
    case 370: return serialize_std__map_float__std__map_uint64_t__int8_t__();
    case 371: return serialize_std__map_float__std__map_uint64_t__float__();
    case 372: return serialize_std__map_float__std__map_uint64_t__std__string__();
    case 373: return serialize_std__map_float__std__map_uint64_t__bool__();
    case 374: return serialize_std__map_float__std__map_uint64_t__uint64_t__();
    case 375: return serialize_std__map_std__string__std__map_int32_t__int32_t__();
    case 376: return serialize_std__map_std__string__std__map_int32_t__int8_t__();
    case 377: return serialize_std__map_std__string__std__map_int32_t__float__();
    case 378: return serialize_std__map_std__string__std__map_int32_t__std__string__();
    case 379: return serialize_std__map_std__string__std__map_int32_t__bool__();
    case 380: return serialize_std__map_std__string__std__map_int32_t__uint64_t__();
    case 381: return serialize_std__map_std__string__std__map_int8_t__int32_t__();
    case 382: return serialize_std__map_std__string__std__map_int8_t__int8_t__();
    case 383: return serialize_std__map_std__string__std__map_int8_t__float__();
    case 384: return serialize_std__map_std__string__std__map_int8_t__std__string__();
    case 385: return serialize_std__map_std__string__std__map_int8_t__bool__();
    case 386: return serialize_std__map_std__string__std__map_int8_t__uint64_t__();
    case 387: return serialize_std__map_std__string__std__map_float__int32_t__();
    case 388: return serialize_std__map_std__string__std__map_float__int8_t__();
    case 389: return serialize_std__map_std__string__std__map_float__float__();
    case 390: return serialize_std__map_std__string__std__map_float__std__string__();
    case 391: return serialize_std__map_std__string__std__map_float__bool__();
    case 392: return serialize_std__map_std__string__std__map_float__uint64_t__();
    case 393: return serialize_std__map_std__string__std__map_std__string__int32_t__();
    case 394: return serialize_std__map_std__string__std__map_std__string__int8_t__();
    case 395: return serialize_std__map_std__string__std__map_std__string__float__();
    case 396: return serialize_std__map_std__string__std__map_std__string__std__string__();
    case 397: return serialize_std__map_std__string__std__map_std__string__bool__();
    case 398: return serialize_std__map_std__string__std__map_std__string__uint64_t__();
    case 399: return serialize_std__map_std__string__std__map_bool__int32_t__();
    case 400: return serialize_std__map_std__string__std__map_bool__int8_t__();
    case 401: return serialize_std__map_std__string__std__map_bool__float__();
    case 402: return serialize_std__map_std__string__std__map_bool__std__string__();
    case 403: return serialize_std__map_std__string__std__map_bool__bool__();
    case 404: return serialize_std__map_std__string__std__map_bool__uint64_t__();
    case 405: return serialize_std__map_std__string__std__map_uint64_t__int32_t__();
    case 406: return serialize_std__map_std__string__std__map_uint64_t__int8_t__();
    case 407: return serialize_std__map_std__string__std__map_uint64_t__float__();
    case 408: return serialize_std__map_std__string__std__map_uint64_t__std__string__();
    case 409: return serialize_std__map_std__string__std__map_uint64_t__bool__();
    case 410: return serialize_std__map_std__string__std__map_uint64_t__uint64_t__();
    case 411: return serialize_std__map_bool__std__map_int32_t__int32_t__();
    case 412: return serialize_std__map_bool__std__map_int32_t__int8_t__();
    case 413: return serialize_std__map_bool__std__map_int32_t__float__();
    case 414: return serialize_std__map_bool__std__map_int32_t__std__string__();
    case 415: return serialize_std__map_bool__std__map_int32_t__bool__();
    case 416: return serialize_std__map_bool__std__map_int32_t__uint64_t__();
    case 417: return serialize_std__map_bool__std__map_int8_t__int32_t__();
    case 418: return serialize_std__map_bool__std__map_int8_t__int8_t__();
    case 419: return serialize_std__map_bool__std__map_int8_t__float__();
    case 420: return serialize_std__map_bool__std__map_int8_t__std__string__();
    case 421: return serialize_std__map_bool__std__map_int8_t__bool__();
    case 422: return serialize_std__map_bool__std__map_int8_t__uint64_t__();
    case 423: return serialize_std__map_bool__std__map_float__int32_t__();
    case 424: return serialize_std__map_bool__std__map_float__int8_t__();
    case 425: return serialize_std__map_bool__std__map_float__float__();
    case 426: return serialize_std__map_bool__std__map_float__std__string__();
    case 427: return serialize_std__map_bool__std__map_float__bool__();
    case 428: return serialize_std__map_bool__std__map_float__uint64_t__();
    case 429: return serialize_std__map_bool__std__map_std__string__int32_t__();
    case 430: return serialize_std__map_bool__std__map_std__string__int8_t__();
    case 431: return serialize_std__map_bool__std__map_std__string__float__();
    case 432: return serialize_std__map_bool__std__map_std__string__std__string__();
    case 433: return serialize_std__map_bool__std__map_std__string__bool__();
    case 434: return serialize_std__map_bool__std__map_std__string__uint64_t__();
    case 435: return serialize_std__map_bool__std__map_bool__int32_t__();
    case 436: return serialize_std__map_bool__std__map_bool__int8_t__();
    case 437: return serialize_std__map_bool__std__map_bool__float__();
    case 438: return serialize_std__map_bool__std__map_bool__std__string__();
    case 439: return serialize_std__map_bool__std__map_bool__bool__();
    case 440: return serialize_std__map_bool__std__map_bool__uint64_t__();
    case 441: return serialize_std__map_bool__std__map_uint64_t__int32_t__();
    case 442: return serialize_std__map_bool__std__map_uint64_t__int8_t__();
    case 443: return serialize_std__map_bool__std__map_uint64_t__float__();
    case 444: return serialize_std__map_bool__std__map_uint64_t__std__string__();
    case 445: return serialize_std__map_bool__std__map_uint64_t__bool__();
    case 446: return serialize_std__map_bool__std__map_uint64_t__uint64_t__();
    case 447: return serialize_std__map_uint64_t__std__map_int32_t__int32_t__();
    case 448: return serialize_std__map_uint64_t__std__map_int32_t__int8_t__();
    case 449: return serialize_std__map_uint64_t__std__map_int32_t__float__();
    case 450: return serialize_std__map_uint64_t__std__map_int32_t__std__string__();
    case 451: return serialize_std__map_uint64_t__std__map_int32_t__bool__();
    case 452: return serialize_std__map_uint64_t__std__map_int32_t__uint64_t__();
    case 453: return serialize_std__map_uint64_t__std__map_int8_t__int32_t__();
    case 454: return serialize_std__map_uint64_t__std__map_int8_t__int8_t__();
    case 455: return serialize_std__map_uint64_t__std__map_int8_t__float__();
    case 456: return serialize_std__map_uint64_t__std__map_int8_t__std__string__();
    case 457: return serialize_std__map_uint64_t__std__map_int8_t__bool__();
    case 458: return serialize_std__map_uint64_t__std__map_int8_t__uint64_t__();
    case 459: return serialize_std__map_uint64_t__std__map_float__int32_t__();
    case 460: return serialize_std__map_uint64_t__std__map_float__int8_t__();
    case 461: return serialize_std__map_uint64_t__std__map_float__float__();
    case 462: return serialize_std__map_uint64_t__std__map_float__std__string__();
    case 463: return serialize_std__map_uint64_t__std__map_float__bool__();
    case 464: return serialize_std__map_uint64_t__std__map_float__uint64_t__();
    case 465: return serialize_std__map_uint64_t__std__map_std__string__int32_t__();
    case 466: return serialize_std__map_uint64_t__std__map_std__string__int8_t__();
    case 467: return serialize_std__map_uint64_t__std__map_std__string__float__();
    case 468: return serialize_std__map_uint64_t__std__map_std__string__std__string__();
    case 469: return serialize_std__map_uint64_t__std__map_std__string__bool__();
    case 470: return serialize_std__map_uint64_t__std__map_std__string__uint64_t__();
    case 471: return serialize_std__map_uint64_t__std__map_bool__int32_t__();
    case 472: return serialize_std__map_uint64_t__std__map_bool__int8_t__();
    case 473: return serialize_std__map_uint64_t__std__map_bool__float__();
    case 474: return serialize_std__map_uint64_t__std__map_bool__std__string__();
    case 475: return serialize_std__map_uint64_t__std__map_bool__bool__();
    case 476: return serialize_std__map_uint64_t__std__map_bool__uint64_t__();
    case 477: return serialize_std__map_uint64_t__std__map_uint64_t__int32_t__();
    case 478: return serialize_std__map_uint64_t__std__map_uint64_t__int8_t__();
    case 479: return serialize_std__map_uint64_t__std__map_uint64_t__float__();
    case 480: return serialize_std__map_uint64_t__std__map_uint64_t__std__string__();
    case 481: return serialize_std__map_uint64_t__std__map_uint64_t__bool__();
    case 482: return serialize_std__map_uint64_t__std__map_uint64_t__uint64_t__();
    case 483: return serialize_std__deque_std__set_int32_t__();
    case 484: return serialize_std__deque_std__set_int8_t__();
    case 485: return serialize_std__deque_std__set_float__();
    case 486: return serialize_std__deque_std__set_std__string__();
    case 487: return serialize_std__deque_std__set_bool__();
    case 488: return serialize_std__deque_std__set_uint64_t__();
    case 489: return serialize_std__unordered_map_int32_t__std__unordered_multimap_int32_t__int32_t__();
    case 490: return serialize_std__unordered_map_int32_t__std__unordered_multimap_int32_t__int8_t__();
    case 491: return serialize_std__unordered_map_int32_t__std__unordered_multimap_int32_t__float__();
    case 492: return serialize_std__unordered_map_int32_t__std__unordered_multimap_int32_t__std__string__();
    case 493: return serialize_std__unordered_map_int32_t__std__unordered_multimap_int32_t__bool__();
    case 494: return serialize_std__unordered_map_int32_t__std__unordered_multimap_int32_t__uint64_t__();
    case 495: return serialize_std__unordered_map_int32_t__std__unordered_multimap_int8_t__int32_t__();
    case 496: return serialize_std__unordered_map_int32_t__std__unordered_multimap_int8_t__int8_t__();
    case 497: return serialize_std__unordered_map_int32_t__std__unordered_multimap_int8_t__float__();
    case 498: return serialize_std__unordered_map_int32_t__std__unordered_multimap_int8_t__std__string__();
    case 499: return serialize_std__unordered_map_int32_t__std__unordered_multimap_int8_t__bool__();
    case 500: return serialize_std__unordered_map_int32_t__std__unordered_multimap_int8_t__uint64_t__();
    case 501: return serialize_std__unordered_map_int32_t__std__unordered_multimap_float__int32_t__();
    case 502: return serialize_std__unordered_map_int32_t__std__unordered_multimap_float__int8_t__();
    case 503: return serialize_std__unordered_map_int32_t__std__unordered_multimap_float__float__();
    case 504: return serialize_std__unordered_map_int32_t__std__unordered_multimap_float__std__string__();
    case 505: return serialize_std__unordered_map_int32_t__std__unordered_multimap_float__bool__();
    case 506: return serialize_std__unordered_map_int32_t__std__unordered_multimap_float__uint64_t__();
    case 507: return serialize_std__unordered_map_int32_t__std__unordered_multimap_std__string__int32_t__();
    case 508: return serialize_std__unordered_map_int32_t__std__unordered_multimap_std__string__int8_t__();
    case 509: return serialize_std__unordered_map_int32_t__std__unordered_multimap_std__string__float__();
    case 510: return serialize_std__unordered_map_int32_t__std__unordered_multimap_std__string__std__string__();
    case 511: return serialize_std__unordered_map_int32_t__std__unordered_multimap_std__string__bool__();
    case 512: return serialize_std__unordered_map_int32_t__std__unordered_multimap_std__string__uint64_t__();
    case 513: return serialize_std__unordered_map_int32_t__std__unordered_multimap_bool__int32_t__();
    case 514: return serialize_std__unordered_map_int32_t__std__unordered_multimap_bool__int8_t__();
    case 515: return serialize_std__unordered_map_int32_t__std__unordered_multimap_bool__float__();
    case 516: return serialize_std__unordered_map_int32_t__std__unordered_multimap_bool__std__string__();
    case 517: return serialize_std__unordered_map_int32_t__std__unordered_multimap_bool__bool__();
    case 518: return serialize_std__unordered_map_int32_t__std__unordered_multimap_bool__uint64_t__();
    case 519: return serialize_std__unordered_map_int32_t__std__unordered_multimap_uint64_t__int32_t__();
    case 520: return serialize_std__unordered_map_int32_t__std__unordered_multimap_uint64_t__int8_t__();
    case 521: return serialize_std__unordered_map_int32_t__std__unordered_multimap_uint64_t__float__();
    case 522: return serialize_std__unordered_map_int32_t__std__unordered_multimap_uint64_t__std__string__();
    case 523: return serialize_std__unordered_map_int32_t__std__unordered_multimap_uint64_t__bool__();
    case 524: return serialize_std__unordered_map_int32_t__std__unordered_multimap_uint64_t__uint64_t__();
    case 525: return serialize_std__unordered_map_int8_t__std__unordered_multimap_int32_t__int32_t__();
    case 526: return serialize_std__unordered_map_int8_t__std__unordered_multimap_int32_t__int8_t__();
    case 527: return serialize_std__unordered_map_int8_t__std__unordered_multimap_int32_t__float__();
    case 528: return serialize_std__unordered_map_int8_t__std__unordered_multimap_int32_t__std__string__();
    case 529: return serialize_std__unordered_map_int8_t__std__unordered_multimap_int32_t__bool__();
    case 530: return serialize_std__unordered_map_int8_t__std__unordered_multimap_int32_t__uint64_t__();
    case 531: return serialize_std__unordered_map_int8_t__std__unordered_multimap_int8_t__int32_t__();
    case 532: return serialize_std__unordered_map_int8_t__std__unordered_multimap_int8_t__int8_t__();
    case 533: return serialize_std__unordered_map_int8_t__std__unordered_multimap_int8_t__float__();
    case 534: return serialize_std__unordered_map_int8_t__std__unordered_multimap_int8_t__std__string__();
    case 535: return serialize_std__unordered_map_int8_t__std__unordered_multimap_int8_t__bool__();
    case 536: return serialize_std__unordered_map_int8_t__std__unordered_multimap_int8_t__uint64_t__();
    case 537: return serialize_std__unordered_map_int8_t__std__unordered_multimap_float__int32_t__();
    case 538: return serialize_std__unordered_map_int8_t__std__unordered_multimap_float__int8_t__();
    case 539: return serialize_std__unordered_map_int8_t__std__unordered_multimap_float__float__();
    case 540: return serialize_std__unordered_map_int8_t__std__unordered_multimap_float__std__string__();
    case 541: return serialize_std__unordered_map_int8_t__std__unordered_multimap_float__bool__();
    case 542: return serialize_std__unordered_map_int8_t__std__unordered_multimap_float__uint64_t__();
    case 543: return serialize_std__unordered_map_int8_t__std__unordered_multimap_std__string__int32_t__();
    case 544: return serialize_std__unordered_map_int8_t__std__unordered_multimap_std__string__int8_t__();
    case 545: return serialize_std__unordered_map_int8_t__std__unordered_multimap_std__string__float__();
    case 546: return serialize_std__unordered_map_int8_t__std__unordered_multimap_std__string__std__string__();
    case 547: return serialize_std__unordered_map_int8_t__std__unordered_multimap_std__string__bool__();
    case 548: return serialize_std__unordered_map_int8_t__std__unordered_multimap_std__string__uint64_t__();
    case 549: return serialize_std__unordered_map_int8_t__std__unordered_multimap_bool__int32_t__();
    case 550: return serialize_std__unordered_map_int8_t__std__unordered_multimap_bool__int8_t__();
    case 551: return serialize_std__unordered_map_int8_t__std__unordered_multimap_bool__float__();
    case 552: return serialize_std__unordered_map_int8_t__std__unordered_multimap_bool__std__string__();
    case 553: return serialize_std__unordered_map_int8_t__std__unordered_multimap_bool__bool__();
    case 554: return serialize_std__unordered_map_int8_t__std__unordered_multimap_bool__uint64_t__();
    case 555: return serialize_std__unordered_map_int8_t__std__unordered_multimap_uint64_t__int32_t__();
    case 556: return serialize_std__unordered_map_int8_t__std__unordered_multimap_uint64_t__int8_t__();
    case 557: return serialize_std__unordered_map_int8_t__std__unordered_multimap_uint64_t__float__();
    case 558: return serialize_std__unordered_map_int8_t__std__unordered_multimap_uint64_t__std__string__();
    case 559: return serialize_std__unordered_map_int8_t__std__unordered_multimap_uint64_t__bool__();
    case 560: return serialize_std__unordered_map_int8_t__std__unordered_multimap_uint64_t__uint64_t__();
    case 561: return serialize_std__unordered_map_float__std__unordered_multimap_int32_t__int32_t__();
    case 562: return serialize_std__unordered_map_float__std__unordered_multimap_int32_t__int8_t__();
    case 563: return serialize_std__unordered_map_float__std__unordered_multimap_int32_t__float__();
    case 564: return serialize_std__unordered_map_float__std__unordered_multimap_int32_t__std__string__();
    case 565: return serialize_std__unordered_map_float__std__unordered_multimap_int32_t__bool__();
    case 566: return serialize_std__unordered_map_float__std__unordered_multimap_int32_t__uint64_t__();
    case 567: return serialize_std__unordered_map_float__std__unordered_multimap_int8_t__int32_t__();
    case 568: return serialize_std__unordered_map_float__std__unordered_multimap_int8_t__int8_t__();
    case 569: return serialize_std__unordered_map_float__std__unordered_multimap_int8_t__float__();
    case 570: return serialize_std__unordered_map_float__std__unordered_multimap_int8_t__std__string__();
    case 571: return serialize_std__unordered_map_float__std__unordered_multimap_int8_t__bool__();
    case 572: return serialize_std__unordered_map_float__std__unordered_multimap_int8_t__uint64_t__();
    case 573: return serialize_std__unordered_map_float__std__unordered_multimap_float__int32_t__();
    case 574: return serialize_std__unordered_map_float__std__unordered_multimap_float__int8_t__();
    case 575: return serialize_std__unordered_map_float__std__unordered_multimap_float__float__();
    case 576: return serialize_std__unordered_map_float__std__unordered_multimap_float__std__string__();
    case 577: return serialize_std__unordered_map_float__std__unordered_multimap_float__bool__();
    case 578: return serialize_std__unordered_map_float__std__unordered_multimap_float__uint64_t__();
    case 579: return serialize_std__unordered_map_float__std__unordered_multimap_std__string__int32_t__();
    case 580: return serialize_std__unordered_map_float__std__unordered_multimap_std__string__int8_t__();
    case 581: return serialize_std__unordered_map_float__std__unordered_multimap_std__string__float__();
    case 582: return serialize_std__unordered_map_float__std__unordered_multimap_std__string__std__string__();
    case 583: return serialize_std__unordered_map_float__std__unordered_multimap_std__string__bool__();
    case 584: return serialize_std__unordered_map_float__std__unordered_multimap_std__string__uint64_t__();
    case 585: return serialize_std__unordered_map_float__std__unordered_multimap_bool__int32_t__();
    case 586: return serialize_std__unordered_map_float__std__unordered_multimap_bool__int8_t__();
    case 587: return serialize_std__unordered_map_float__std__unordered_multimap_bool__float__();
    case 588: return serialize_std__unordered_map_float__std__unordered_multimap_bool__std__string__();
    case 589: return serialize_std__unordered_map_float__std__unordered_multimap_bool__bool__();
    case 590: return serialize_std__unordered_map_float__std__unordered_multimap_bool__uint64_t__();
    case 591: return serialize_std__unordered_map_float__std__unordered_multimap_uint64_t__int32_t__();
    case 592: return serialize_std__unordered_map_float__std__unordered_multimap_uint64_t__int8_t__();
    case 593: return serialize_std__unordered_map_float__std__unordered_multimap_uint64_t__float__();
    case 594: return serialize_std__unordered_map_float__std__unordered_multimap_uint64_t__std__string__();
    case 595: return serialize_std__unordered_map_float__std__unordered_multimap_uint64_t__bool__();
    case 596: return serialize_std__unordered_map_float__std__unordered_multimap_uint64_t__uint64_t__();
    case 597: return serialize_std__unordered_map_std__string__std__unordered_multimap_int32_t__int32_t__();
    case 598: return serialize_std__unordered_map_std__string__std__unordered_multimap_int32_t__int8_t__();
    case 599: return serialize_std__unordered_map_std__string__std__unordered_multimap_int32_t__float__();
    case 600: return serialize_std__unordered_map_std__string__std__unordered_multimap_int32_t__std__string__();
    case 601: return serialize_std__unordered_map_std__string__std__unordered_multimap_int32_t__bool__();
    case 602: return serialize_std__unordered_map_std__string__std__unordered_multimap_int32_t__uint64_t__();
    case 603: return serialize_std__unordered_map_std__string__std__unordered_multimap_int8_t__int32_t__();
    case 604: return serialize_std__unordered_map_std__string__std__unordered_multimap_int8_t__int8_t__();
    case 605: return serialize_std__unordered_map_std__string__std__unordered_multimap_int8_t__float__();
    case 606: return serialize_std__unordered_map_std__string__std__unordered_multimap_int8_t__std__string__();
    case 607: return serialize_std__unordered_map_std__string__std__unordered_multimap_int8_t__bool__();
    case 608: return serialize_std__unordered_map_std__string__std__unordered_multimap_int8_t__uint64_t__();
    case 609: return serialize_std__unordered_map_std__string__std__unordered_multimap_float__int32_t__();
    case 610: return serialize_std__unordered_map_std__string__std__unordered_multimap_float__int8_t__();
    case 611: return serialize_std__unordered_map_std__string__std__unordered_multimap_float__float__();
    case 612: return serialize_std__unordered_map_std__string__std__unordered_multimap_float__std__string__();
    case 613: return serialize_std__unordered_map_std__string__std__unordered_multimap_float__bool__();
    case 614: return serialize_std__unordered_map_std__string__std__unordered_multimap_float__uint64_t__();
    case 615: return serialize_std__unordered_map_std__string__std__unordered_multimap_std__string__int32_t__();
    case 616: return serialize_std__unordered_map_std__string__std__unordered_multimap_std__string__int8_t__();
    case 617: return serialize_std__unordered_map_std__string__std__unordered_multimap_std__string__float__();
    case 618: return serialize_std__unordered_map_std__string__std__unordered_multimap_std__string__std__string__();
    case 619: return serialize_std__unordered_map_std__string__std__unordered_multimap_std__string__bool__();
    case 620: return serialize_std__unordered_map_std__string__std__unordered_multimap_std__string__uint64_t__();
    case 621: return serialize_std__unordered_map_std__string__std__unordered_multimap_bool__int32_t__();
    case 622: return serialize_std__unordered_map_std__string__std__unordered_multimap_bool__int8_t__();
    case 623: return serialize_std__unordered_map_std__string__std__unordered_multimap_bool__float__();
    case 624: return serialize_std__unordered_map_std__string__std__unordered_multimap_bool__std__string__();
    case 625: return serialize_std__unordered_map_std__string__std__unordered_multimap_bool__bool__();
    case 626: return serialize_std__unordered_map_std__string__std__unordered_multimap_bool__uint64_t__();
    case 627: return serialize_std__unordered_map_std__string__std__unordered_multimap_uint64_t__int32_t__();
    case 628: return serialize_std__unordered_map_std__string__std__unordered_multimap_uint64_t__int8_t__();
    case 629: return serialize_std__unordered_map_std__string__std__unordered_multimap_uint64_t__float__();
    case 630: return serialize_std__unordered_map_std__string__std__unordered_multimap_uint64_t__std__string__();
    case 631: return serialize_std__unordered_map_std__string__std__unordered_multimap_uint64_t__bool__();
    case 632: return serialize_std__unordered_map_std__string__std__unordered_multimap_uint64_t__uint64_t__();
    case 633: return serialize_std__unordered_map_bool__std__unordered_multimap_int32_t__int32_t__();
    case 634: return serialize_std__unordered_map_bool__std__unordered_multimap_int32_t__int8_t__();
    case 635: return serialize_std__unordered_map_bool__std__unordered_multimap_int32_t__float__();
    case 636: return serialize_std__unordered_map_bool__std__unordered_multimap_int32_t__std__string__();
    case 637: return serialize_std__unordered_map_bool__std__unordered_multimap_int32_t__bool__();
    case 638: return serialize_std__unordered_map_bool__std__unordered_multimap_int32_t__uint64_t__();
    case 639: return serialize_std__unordered_map_bool__std__unordered_multimap_int8_t__int32_t__();
    case 640: return serialize_std__unordered_map_bool__std__unordered_multimap_int8_t__int8_t__();
    case 641: return serialize_std__unordered_map_bool__std__unordered_multimap_int8_t__float__();
    case 642: return serialize_std__unordered_map_bool__std__unordered_multimap_int8_t__std__string__();
    case 643: return serialize_std__unordered_map_bool__std__unordered_multimap_int8_t__bool__();
    case 644: return serialize_std__unordered_map_bool__std__unordered_multimap_int8_t__uint64_t__();
    case 645: return serialize_std__unordered_map_bool__std__unordered_multimap_float__int32_t__();
    case 646: return serialize_std__unordered_map_bool__std__unordered_multimap_float__int8_t__();
    case 647: return serialize_std__unordered_map_bool__std__unordered_multimap_float__float__();
    case 648: return serialize_std__unordered_map_bool__std__unordered_multimap_float__std__string__();
    case 649: return serialize_std__unordered_map_bool__std__unordered_multimap_float__bool__();
    case 650: return serialize_std__unordered_map_bool__std__unordered_multimap_float__uint64_t__();
    case 651: return serialize_std__unordered_map_bool__std__unordered_multimap_std__string__int32_t__();
    case 652: return serialize_std__unordered_map_bool__std__unordered_multimap_std__string__int8_t__();
    case 653: return serialize_std__unordered_map_bool__std__unordered_multimap_std__string__float__();
    case 654: return serialize_std__unordered_map_bool__std__unordered_multimap_std__string__std__string__();
    case 655: return serialize_std__unordered_map_bool__std__unordered_multimap_std__string__bool__();
    case 656: return serialize_std__unordered_map_bool__std__unordered_multimap_std__string__uint64_t__();
    case 657: return serialize_std__unordered_map_bool__std__unordered_multimap_bool__int32_t__();
    case 658: return serialize_std__unordered_map_bool__std__unordered_multimap_bool__int8_t__();
    case 659: return serialize_std__unordered_map_bool__std__unordered_multimap_bool__float__();
    case 660: return serialize_std__unordered_map_bool__std__unordered_multimap_bool__std__string__();
    case 661: return serialize_std__unordered_map_bool__std__unordered_multimap_bool__bool__();
    case 662: return serialize_std__unordered_map_bool__std__unordered_multimap_bool__uint64_t__();
    case 663: return serialize_std__unordered_map_bool__std__unordered_multimap_uint64_t__int32_t__();
    case 664: return serialize_std__unordered_map_bool__std__unordered_multimap_uint64_t__int8_t__();
    case 665: return serialize_std__unordered_map_bool__std__unordered_multimap_uint64_t__float__();
    case 666: return serialize_std__unordered_map_bool__std__unordered_multimap_uint64_t__std__string__();
    case 667: return serialize_std__unordered_map_bool__std__unordered_multimap_uint64_t__bool__();
    case 668: return serialize_std__unordered_map_bool__std__unordered_multimap_uint64_t__uint64_t__();
    case 669: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_int32_t__int32_t__();
    case 670: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_int32_t__int8_t__();
    case 671: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_int32_t__float__();
    case 672: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_int32_t__std__string__();
    case 673: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_int32_t__bool__();
    case 674: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_int32_t__uint64_t__();
    case 675: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_int8_t__int32_t__();
    case 676: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_int8_t__int8_t__();
    case 677: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_int8_t__float__();
    case 678: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_int8_t__std__string__();
    case 679: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_int8_t__bool__();
    case 680: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_int8_t__uint64_t__();
    case 681: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_float__int32_t__();
    case 682: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_float__int8_t__();
    case 683: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_float__float__();
    case 684: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_float__std__string__();
    case 685: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_float__bool__();
    case 686: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_float__uint64_t__();
    case 687: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_std__string__int32_t__();
    case 688: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_std__string__int8_t__();
    case 689: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_std__string__float__();
    case 690: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_std__string__std__string__();
    case 691: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_std__string__bool__();
    case 692: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_std__string__uint64_t__();
    case 693: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_bool__int32_t__();
    case 694: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_bool__int8_t__();
    case 695: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_bool__float__();
    case 696: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_bool__std__string__();
    case 697: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_bool__bool__();
    case 698: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_bool__uint64_t__();
    case 699: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_uint64_t__int32_t__();
    case 700: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_uint64_t__int8_t__();
    case 701: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_uint64_t__float__();
    case 702: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_uint64_t__std__string__();
    case 703: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_uint64_t__bool__();
    case 704: return serialize_std__unordered_map_uint64_t__std__unordered_multimap_uint64_t__uint64_t__();
    case 705: return serialize_std__vector_std__unordered_set_int32_t__();
    case 706: return serialize_std__vector_std__unordered_set_int8_t__();
    case 707: return serialize_std__vector_std__unordered_set_float__();
    case 708: return serialize_std__vector_std__unordered_set_std__string__();
    case 709: return serialize_std__vector_std__unordered_set_bool__();
    case 710: return serialize_std__vector_std__unordered_set_uint64_t__();
    case 711: return serialize_std__list_std__vector_int32_t__();
    case 712: return serialize_std__list_std__vector_int8_t__();
    case 713: return serialize_std__list_std__vector_float__();
    case 714: return serialize_std__list_std__vector_std__string__();
    case 715: return serialize_std__list_std__vector_bool__();
    case 716: return serialize_std__list_std__vector_uint64_t__();
    case 717: return serialize_std__list_std__forward_list_std__set_int32_t___();
    case 718: return serialize_std__list_std__forward_list_std__set_int8_t___();
    case 719: return serialize_std__list_std__forward_list_std__set_float___();
    case 720: return serialize_std__list_std__forward_list_std__set_std__string___();
    case 721: return serialize_std__list_std__forward_list_std__set_bool___();
    case 722: return serialize_std__list_std__forward_list_std__set_uint64_t___();
    case 723: return serialize_std__forward_list_std__map_int32_t__std__list_int32_t___();
    case 724: return serialize_std__forward_list_std__map_int32_t__std__list_int8_t___();
    case 725: return serialize_std__forward_list_std__map_int32_t__std__list_float___();
    case 726: return serialize_std__forward_list_std__map_int32_t__std__list_std__string___();
    case 727: return serialize_std__forward_list_std__map_int32_t__std__list_bool___();
    case 728: return serialize_std__forward_list_std__map_int32_t__std__list_uint64_t___();
    case 729: return serialize_std__forward_list_std__map_int8_t__std__list_int32_t___();
    case 730: return serialize_std__forward_list_std__map_int8_t__std__list_int8_t___();
    case 731: return serialize_std__forward_list_std__map_int8_t__std__list_float___();
    case 732: return serialize_std__forward_list_std__map_int8_t__std__list_std__string___();
    case 733: return serialize_std__forward_list_std__map_int8_t__std__list_bool___();
    case 734: return serialize_std__forward_list_std__map_int8_t__std__list_uint64_t___();
    case 735: return serialize_std__forward_list_std__map_float__std__list_int32_t___();
    case 736: return serialize_std__forward_list_std__map_float__std__list_int8_t___();
    case 737: return serialize_std__forward_list_std__map_float__std__list_float___();
    case 738: return serialize_std__forward_list_std__map_float__std__list_std__string___();
    case 739: return serialize_std__forward_list_std__map_float__std__list_bool___();
    case 740: return serialize_std__forward_list_std__map_float__std__list_uint64_t___();
    case 741: return serialize_std__forward_list_std__map_std__string__std__list_int32_t___();
    case 742: return serialize_std__forward_list_std__map_std__string__std__list_int8_t___();
    case 743: return serialize_std__forward_list_std__map_std__string__std__list_float___();
    case 744: return serialize_std__forward_list_std__map_std__string__std__list_std__string___();
    case 745: return serialize_std__forward_list_std__map_std__string__std__list_bool___();
    case 746: return serialize_std__forward_list_std__map_std__string__std__list_uint64_t___();
    case 747: return serialize_std__forward_list_std__map_bool__std__list_int32_t___();
    case 748: return serialize_std__forward_list_std__map_bool__std__list_int8_t___();
    case 749: return serialize_std__forward_list_std__map_bool__std__list_float___();
    case 750: return serialize_std__forward_list_std__map_bool__std__list_std__string___();
    case 751: return serialize_std__forward_list_std__map_bool__std__list_bool___();
    case 752: return serialize_std__forward_list_std__map_bool__std__list_uint64_t___();
    case 753: return serialize_std__forward_list_std__map_uint64_t__std__list_int32_t___();
    case 754: return serialize_std__forward_list_std__map_uint64_t__std__list_int8_t___();
    case 755: return serialize_std__forward_list_std__map_uint64_t__std__list_float___();
    case 756: return serialize_std__forward_list_std__map_uint64_t__std__list_std__string___();
    case 757: return serialize_std__forward_list_std__map_uint64_t__std__list_bool___();
    case 758: return serialize_std__forward_list_std__map_uint64_t__std__list_uint64_t___();
    case 759: return serialize_std__vector_std__array_int32_t__1__();
    case 760: return serialize_std__vector_std__array_int32_t__32__();
    case 761: return serialize_std__vector_std__array_int32_t__1023__();
    case 762: return serialize_std__vector_std__array_int8_t__1__();
    case 763: return serialize_std__vector_std__array_int8_t__32__();
    case 764: return serialize_std__vector_std__array_int8_t__1023__();
    case 765: return serialize_std__vector_std__array_float__1__();
    case 766: return serialize_std__vector_std__array_float__32__();
    case 767: return serialize_std__vector_std__array_float__1023__();
    case 768: return serialize_std__vector_std__array_std__string__1__();
    case 769: return serialize_std__vector_std__array_std__string__32__();
    case 770: return serialize_std__vector_std__array_std__string__1023__();
    case 771: return serialize_std__vector_std__array_bool__1__();
    case 772: return serialize_std__vector_std__array_bool__32__();
    case 773: return serialize_std__vector_std__array_bool__1023__();
    case 774: return serialize_std__vector_std__array_uint64_t__1__();
    case 775: return serialize_std__vector_std__array_uint64_t__32__();
    case 776: return serialize_std__vector_std__array_uint64_t__1023__();
    case 777: return serialize_std__set_std__pair_int32_t__int32_t__();
    case 778: return serialize_std__set_std__pair_int32_t__int8_t__();
    case 779: return serialize_std__set_std__pair_int32_t__float__();
    case 780: return serialize_std__set_std__pair_int32_t__std__string__();
    case 781: return serialize_std__set_std__pair_int32_t__bool__();
    case 782: return serialize_std__set_std__pair_int32_t__uint64_t__();
    case 783: return serialize_std__set_std__pair_int8_t__int32_t__();
    case 784: return serialize_std__set_std__pair_int8_t__int8_t__();
    case 785: return serialize_std__set_std__pair_int8_t__float__();
    case 786: return serialize_std__set_std__pair_int8_t__std__string__();
    case 787: return serialize_std__set_std__pair_int8_t__bool__();
    case 788: return serialize_std__set_std__pair_int8_t__uint64_t__();
    case 789: return serialize_std__set_std__pair_float__int32_t__();
    case 790: return serialize_std__set_std__pair_float__int8_t__();
    case 791: return serialize_std__set_std__pair_float__float__();
    case 792: return serialize_std__set_std__pair_float__std__string__();
    case 793: return serialize_std__set_std__pair_float__bool__();
    case 794: return serialize_std__set_std__pair_float__uint64_t__();
    case 795: return serialize_std__set_std__pair_std__string__int32_t__();
    case 796: return serialize_std__set_std__pair_std__string__int8_t__();
    case 797: return serialize_std__set_std__pair_std__string__float__();
    case 798: return serialize_std__set_std__pair_std__string__std__string__();
    case 799: return serialize_std__set_std__pair_std__string__bool__();
    case 800: return serialize_std__set_std__pair_std__string__uint64_t__();
    case 801: return serialize_std__set_std__pair_bool__int32_t__();
    case 802: return serialize_std__set_std__pair_bool__int8_t__();
    case 803: return serialize_std__set_std__pair_bool__float__();
    case 804: return serialize_std__set_std__pair_bool__std__string__();
    case 805: return serialize_std__set_std__pair_bool__bool__();
    case 806: return serialize_std__set_std__pair_bool__uint64_t__();
    case 807: return serialize_std__set_std__pair_uint64_t__int32_t__();
    case 808: return serialize_std__set_std__pair_uint64_t__int8_t__();
    case 809: return serialize_std__set_std__pair_uint64_t__float__();
    case 810: return serialize_std__set_std__pair_uint64_t__std__string__();
    case 811: return serialize_std__set_std__pair_uint64_t__bool__();
    case 812: return serialize_std__set_std__pair_uint64_t__uint64_t__();
    }
  }

  void serialize_bool() {
    bool v;
    ar & v;
  }
  void serialize_int8_t() {
    int8_t v;
    ar & v;
  }
  void serialize_uint8_t() {
    uint8_t v;
    ar & v;
  }
  void serialize_int16_t() {
    int16_t v;
    ar & v;
  }
  void serialize_uint16_t() {
    uint16_t v;
    ar & v;
  }
  void serialize_int32_t() {
    int32_t v;
    ar & v;
  }
  void serialize_uint32_t() {
    uint32_t v;
    ar & v;
  }
  void serialize_int64_t() {
    int64_t v;
    ar & v;
  }
  void serialize_uint64_t() {
    uint64_t v;
    ar & v;
  }
  void serialize_float() {
    float v;
    ar & v;
  }
  void serialize_double() {
    double v;
    ar & v;
  }
  void serialize_std__string() {
    std::string v;
    ar & v;
  }
  void serialize_std__array_int32_t__1_() {
    std::array<int32_t, 1> v;
    ar & v;
  }
  void serialize_std__array_int32_t__32_() {
    std::array<int32_t, 32> v;
    ar & v;
  }
  void serialize_std__array_int32_t__1023_() {
    std::array<int32_t, 1023> v;
    ar & v;
  }
  void serialize_std__array_int8_t__1_() {
    std::array<int8_t, 1> v;
    ar & v;
  }
  void serialize_std__array_int8_t__32_() {
    std::array<int8_t, 32> v;
    ar & v;
  }
  void serialize_std__array_int8_t__1023_() {
    std::array<int8_t, 1023> v;
    ar & v;
  }
  void serialize_std__array_float__1_() {
    std::array<float, 1> v;
    ar & v;
  }
  void serialize_std__array_float__32_() {
    std::array<float, 32> v;
    ar & v;
  }
  void serialize_std__array_float__1023_() {
    std::array<float, 1023> v;
    ar & v;
  }
  void serialize_std__array_std__string__1_() {
    std::array<std::string, 1> v;
    ar & v;
  }
  void serialize_std__array_std__string__32_() {
    std::array<std::string, 32> v;
    ar & v;
  }
  void serialize_std__array_std__string__1023_() {
    std::array<std::string, 1023> v;
    ar & v;
  }
  void serialize_std__array_bool__1_() {
    std::array<bool, 1> v;
    ar & v;
  }
  void serialize_std__array_bool__32_() {
    std::array<bool, 32> v;
    ar & v;
  }
  void serialize_std__array_bool__1023_() {
    std::array<bool, 1023> v;
    ar & v;
  }
  void serialize_std__array_uint64_t__1_() {
    std::array<uint64_t, 1> v;
    ar & v;
  }
  void serialize_std__array_uint64_t__32_() {
    std::array<uint64_t, 32> v;
    ar & v;
  }
  void serialize_std__array_uint64_t__1023_() {
    std::array<uint64_t, 1023> v;
    ar & v;
  }
  void serialize_std__bitset_1_() {
    std::bitset<1> v;
    ar & v;
  }
  void serialize_std__bitset_32_() {
    std::bitset<32> v;
    ar & v;
  }
  void serialize_std__bitset_1023_() {
    std::bitset<1023> v;
    ar & v;
  }
  void serialize_std__deque_int32_t_() {
    std::deque<int32_t> v;
    ar & v;
  }
  void serialize_std__deque_int8_t_() {
    std::deque<int8_t> v;
    ar & v;
  }
  void serialize_std__deque_float_() {
    std::deque<float> v;
    ar & v;
  }
  void serialize_std__deque_std__string_() {
    std::deque<std::string> v;
    ar & v;
  }
  void serialize_std__deque_bool_() {
    std::deque<bool> v;
    ar & v;
  }
  void serialize_std__deque_uint64_t_() {
    std::deque<uint64_t> v;
    ar & v;
  }
  void serialize_std__forward_list_int32_t_() {
    std::forward_list<int32_t> v;
    ar & v;
  }
  void serialize_std__forward_list_int8_t_() {
    std::forward_list<int8_t> v;
    ar & v;
  }
  void serialize_std__forward_list_float_() {
    std::forward_list<float> v;
    ar & v;
  }
  void serialize_std__forward_list_std__string_() {
    std::forward_list<std::string> v;
    ar & v;
  }
  void serialize_std__forward_list_bool_() {
    std::forward_list<bool> v;
    ar & v;
  }
  void serialize_std__forward_list_uint64_t_() {
    std::forward_list<uint64_t> v;
    ar & v;
  }
  void serialize_std__list_int32_t_() {
    std::list<int32_t> v;
    ar & v;
  }
  void serialize_std__list_int8_t_() {
    std::list<int8_t> v;
    ar & v;
  }
  void serialize_std__list_float_() {
    std::list<float> v;
    ar & v;
  }
  void serialize_std__list_std__string_() {
    std::list<std::string> v;
    ar & v;
  }
  void serialize_std__list_bool_() {
    std::list<bool> v;
    ar & v;
  }
  void serialize_std__list_uint64_t_() {
    std::list<uint64_t> v;
    ar & v;
  }
  void serialize_std__map_int32_t__int32_t_() {
    std::map<int32_t, int32_t> v;
    ar & v;
  }
  void serialize_std__map_int32_t__int8_t_() {
    std::map<int32_t, int8_t> v;
    ar & v;
  }
  void serialize_std__map_int32_t__float_() {
    std::map<int32_t, float> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__string_() {
    std::map<int32_t, std::string> v;
    ar & v;
  }
  void serialize_std__map_int32_t__bool_() {
    std::map<int32_t, bool> v;
    ar & v;
  }
  void serialize_std__map_int32_t__uint64_t_() {
    std::map<int32_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__map_int8_t__int32_t_() {
    std::map<int8_t, int32_t> v;
    ar & v;
  }
  void serialize_std__map_int8_t__int8_t_() {
    std::map<int8_t, int8_t> v;
    ar & v;
  }
  void serialize_std__map_int8_t__float_() {
    std::map<int8_t, float> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__string_() {
    std::map<int8_t, std::string> v;
    ar & v;
  }
  void serialize_std__map_int8_t__bool_() {
    std::map<int8_t, bool> v;
    ar & v;
  }
  void serialize_std__map_int8_t__uint64_t_() {
    std::map<int8_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__map_float__int32_t_() {
    std::map<float, int32_t> v;
    ar & v;
  }
  void serialize_std__map_float__int8_t_() {
    std::map<float, int8_t> v;
    ar & v;
  }
  void serialize_std__map_float__float_() {
    std::map<float, float> v;
    ar & v;
  }
  void serialize_std__map_float__std__string_() {
    std::map<float, std::string> v;
    ar & v;
  }
  void serialize_std__map_float__bool_() {
    std::map<float, bool> v;
    ar & v;
  }
  void serialize_std__map_float__uint64_t_() {
    std::map<float, uint64_t> v;
    ar & v;
  }
  void serialize_std__map_std__string__int32_t_() {
    std::map<std::string, int32_t> v;
    ar & v;
  }
  void serialize_std__map_std__string__int8_t_() {
    std::map<std::string, int8_t> v;
    ar & v;
  }
  void serialize_std__map_std__string__float_() {
    std::map<std::string, float> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__string_() {
    std::map<std::string, std::string> v;
    ar & v;
  }
  void serialize_std__map_std__string__bool_() {
    std::map<std::string, bool> v;
    ar & v;
  }
  void serialize_std__map_std__string__uint64_t_() {
    std::map<std::string, uint64_t> v;
    ar & v;
  }
  void serialize_std__map_bool__int32_t_() {
    std::map<bool, int32_t> v;
    ar & v;
  }
  void serialize_std__map_bool__int8_t_() {
    std::map<bool, int8_t> v;
    ar & v;
  }
  void serialize_std__map_bool__float_() {
    std::map<bool, float> v;
    ar & v;
  }
  void serialize_std__map_bool__std__string_() {
    std::map<bool, std::string> v;
    ar & v;
  }
  void serialize_std__map_bool__bool_() {
    std::map<bool, bool> v;
    ar & v;
  }
  void serialize_std__map_bool__uint64_t_() {
    std::map<bool, uint64_t> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__int32_t_() {
    std::map<uint64_t, int32_t> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__int8_t_() {
    std::map<uint64_t, int8_t> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__float_() {
    std::map<uint64_t, float> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__string_() {
    std::map<uint64_t, std::string> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__bool_() {
    std::map<uint64_t, bool> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__uint64_t_() {
    std::map<uint64_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__multimap_int32_t__int32_t_() {
    std::multimap<int32_t, int32_t> v;
    ar & v;
  }
  void serialize_std__multimap_int32_t__int8_t_() {
    std::multimap<int32_t, int8_t> v;
    ar & v;
  }
  void serialize_std__multimap_int32_t__float_() {
    std::multimap<int32_t, float> v;
    ar & v;
  }
  void serialize_std__multimap_int32_t__std__string_() {
    std::multimap<int32_t, std::string> v;
    ar & v;
  }
  void serialize_std__multimap_int32_t__bool_() {
    std::multimap<int32_t, bool> v;
    ar & v;
  }
  void serialize_std__multimap_int32_t__uint64_t_() {
    std::multimap<int32_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__multimap_int8_t__int32_t_() {
    std::multimap<int8_t, int32_t> v;
    ar & v;
  }
  void serialize_std__multimap_int8_t__int8_t_() {
    std::multimap<int8_t, int8_t> v;
    ar & v;
  }
  void serialize_std__multimap_int8_t__float_() {
    std::multimap<int8_t, float> v;
    ar & v;
  }
  void serialize_std__multimap_int8_t__std__string_() {
    std::multimap<int8_t, std::string> v;
    ar & v;
  }
  void serialize_std__multimap_int8_t__bool_() {
    std::multimap<int8_t, bool> v;
    ar & v;
  }
  void serialize_std__multimap_int8_t__uint64_t_() {
    std::multimap<int8_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__multimap_float__int32_t_() {
    std::multimap<float, int32_t> v;
    ar & v;
  }
  void serialize_std__multimap_float__int8_t_() {
    std::multimap<float, int8_t> v;
    ar & v;
  }
  void serialize_std__multimap_float__float_() {
    std::multimap<float, float> v;
    ar & v;
  }
  void serialize_std__multimap_float__std__string_() {
    std::multimap<float, std::string> v;
    ar & v;
  }
  void serialize_std__multimap_float__bool_() {
    std::multimap<float, bool> v;
    ar & v;
  }
  void serialize_std__multimap_float__uint64_t_() {
    std::multimap<float, uint64_t> v;
    ar & v;
  }
  void serialize_std__multimap_std__string__int32_t_() {
    std::multimap<std::string, int32_t> v;
    ar & v;
  }
  void serialize_std__multimap_std__string__int8_t_() {
    std::multimap<std::string, int8_t> v;
    ar & v;
  }
  void serialize_std__multimap_std__string__float_() {
    std::multimap<std::string, float> v;
    ar & v;
  }
  void serialize_std__multimap_std__string__std__string_() {
    std::multimap<std::string, std::string> v;
    ar & v;
  }
  void serialize_std__multimap_std__string__bool_() {
    std::multimap<std::string, bool> v;
    ar & v;
  }
  void serialize_std__multimap_std__string__uint64_t_() {
    std::multimap<std::string, uint64_t> v;
    ar & v;
  }
  void serialize_std__multimap_bool__int32_t_() {
    std::multimap<bool, int32_t> v;
    ar & v;
  }
  void serialize_std__multimap_bool__int8_t_() {
    std::multimap<bool, int8_t> v;
    ar & v;
  }
  void serialize_std__multimap_bool__float_() {
    std::multimap<bool, float> v;
    ar & v;
  }
  void serialize_std__multimap_bool__std__string_() {
    std::multimap<bool, std::string> v;
    ar & v;
  }
  void serialize_std__multimap_bool__bool_() {
    std::multimap<bool, bool> v;
    ar & v;
  }
  void serialize_std__multimap_bool__uint64_t_() {
    std::multimap<bool, uint64_t> v;
    ar & v;
  }
  void serialize_std__multimap_uint64_t__int32_t_() {
    std::multimap<uint64_t, int32_t> v;
    ar & v;
  }
  void serialize_std__multimap_uint64_t__int8_t_() {
    std::multimap<uint64_t, int8_t> v;
    ar & v;
  }
  void serialize_std__multimap_uint64_t__float_() {
    std::multimap<uint64_t, float> v;
    ar & v;
  }
  void serialize_std__multimap_uint64_t__std__string_() {
    std::multimap<uint64_t, std::string> v;
    ar & v;
  }
  void serialize_std__multimap_uint64_t__bool_() {
    std::multimap<uint64_t, bool> v;
    ar & v;
  }
  void serialize_std__multimap_uint64_t__uint64_t_() {
    std::multimap<uint64_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__multiset_int32_t_() {
    std::multiset<int32_t> v;
    ar & v;
  }
  void serialize_std__multiset_int8_t_() {
    std::multiset<int8_t> v;
    ar & v;
  }
  void serialize_std__multiset_float_() {
    std::multiset<float> v;
    ar & v;
  }
  void serialize_std__multiset_std__string_() {
    std::multiset<std::string> v;
    ar & v;
  }
  void serialize_std__multiset_bool_() {
    std::multiset<bool> v;
    ar & v;
  }
  void serialize_std__multiset_uint64_t_() {
    std::multiset<uint64_t> v;
    ar & v;
  }
  void serialize_std__pair_int32_t__int32_t_() {
    std::pair<int32_t, int32_t> v;
    ar & v;
  }
  void serialize_std__pair_int32_t__int8_t_() {
    std::pair<int32_t, int8_t> v;
    ar & v;
  }
  void serialize_std__pair_int32_t__float_() {
    std::pair<int32_t, float> v;
    ar & v;
  }
  void serialize_std__pair_int32_t__std__string_() {
    std::pair<int32_t, std::string> v;
    ar & v;
  }
  void serialize_std__pair_int32_t__bool_() {
    std::pair<int32_t, bool> v;
    ar & v;
  }
  void serialize_std__pair_int32_t__uint64_t_() {
    std::pair<int32_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__pair_int8_t__int32_t_() {
    std::pair<int8_t, int32_t> v;
    ar & v;
  }
  void serialize_std__pair_int8_t__int8_t_() {
    std::pair<int8_t, int8_t> v;
    ar & v;
  }
  void serialize_std__pair_int8_t__float_() {
    std::pair<int8_t, float> v;
    ar & v;
  }
  void serialize_std__pair_int8_t__std__string_() {
    std::pair<int8_t, std::string> v;
    ar & v;
  }
  void serialize_std__pair_int8_t__bool_() {
    std::pair<int8_t, bool> v;
    ar & v;
  }
  void serialize_std__pair_int8_t__uint64_t_() {
    std::pair<int8_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__pair_float__int32_t_() {
    std::pair<float, int32_t> v;
    ar & v;
  }
  void serialize_std__pair_float__int8_t_() {
    std::pair<float, int8_t> v;
    ar & v;
  }
  void serialize_std__pair_float__float_() {
    std::pair<float, float> v;
    ar & v;
  }
  void serialize_std__pair_float__std__string_() {
    std::pair<float, std::string> v;
    ar & v;
  }
  void serialize_std__pair_float__bool_() {
    std::pair<float, bool> v;
    ar & v;
  }
  void serialize_std__pair_float__uint64_t_() {
    std::pair<float, uint64_t> v;
    ar & v;
  }
  void serialize_std__pair_std__string__int32_t_() {
    std::pair<std::string, int32_t> v;
    ar & v;
  }
  void serialize_std__pair_std__string__int8_t_() {
    std::pair<std::string, int8_t> v;
    ar & v;
  }
  void serialize_std__pair_std__string__float_() {
    std::pair<std::string, float> v;
    ar & v;
  }
  void serialize_std__pair_std__string__std__string_() {
    std::pair<std::string, std::string> v;
    ar & v;
  }
  void serialize_std__pair_std__string__bool_() {
    std::pair<std::string, bool> v;
    ar & v;
  }
  void serialize_std__pair_std__string__uint64_t_() {
    std::pair<std::string, uint64_t> v;
    ar & v;
  }
  void serialize_std__pair_bool__int32_t_() {
    std::pair<bool, int32_t> v;
    ar & v;
  }
  void serialize_std__pair_bool__int8_t_() {
    std::pair<bool, int8_t> v;
    ar & v;
  }
  void serialize_std__pair_bool__float_() {
    std::pair<bool, float> v;
    ar & v;
  }
  void serialize_std__pair_bool__std__string_() {
    std::pair<bool, std::string> v;
    ar & v;
  }
  void serialize_std__pair_bool__bool_() {
    std::pair<bool, bool> v;
    ar & v;
  }
  void serialize_std__pair_bool__uint64_t_() {
    std::pair<bool, uint64_t> v;
    ar & v;
  }
  void serialize_std__pair_uint64_t__int32_t_() {
    std::pair<uint64_t, int32_t> v;
    ar & v;
  }
  void serialize_std__pair_uint64_t__int8_t_() {
    std::pair<uint64_t, int8_t> v;
    ar & v;
  }
  void serialize_std__pair_uint64_t__float_() {
    std::pair<uint64_t, float> v;
    ar & v;
  }
  void serialize_std__pair_uint64_t__std__string_() {
    std::pair<uint64_t, std::string> v;
    ar & v;
  }
  void serialize_std__pair_uint64_t__bool_() {
    std::pair<uint64_t, bool> v;
    ar & v;
  }
  void serialize_std__pair_uint64_t__uint64_t_() {
    std::pair<uint64_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__set_int32_t_() {
    std::set<int32_t> v;
    ar & v;
  }
  void serialize_std__set_int8_t_() {
    std::set<int8_t> v;
    ar & v;
  }
  void serialize_std__set_float_() {
    std::set<float> v;
    ar & v;
  }
  void serialize_std__set_std__string_() {
    std::set<std::string> v;
    ar & v;
  }
  void serialize_std__set_bool_() {
    std::set<bool> v;
    ar & v;
  }
  void serialize_std__set_uint64_t_() {
    std::set<uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__int32_t_() {
    std::unordered_map<int32_t, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__int8_t_() {
    std::unordered_map<int32_t, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__float_() {
    std::unordered_map<int32_t, float> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__string_() {
    std::unordered_map<int32_t, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__bool_() {
    std::unordered_map<int32_t, bool> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__uint64_t_() {
    std::unordered_map<int32_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__int32_t_() {
    std::unordered_map<int8_t, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__int8_t_() {
    std::unordered_map<int8_t, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__float_() {
    std::unordered_map<int8_t, float> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__string_() {
    std::unordered_map<int8_t, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__bool_() {
    std::unordered_map<int8_t, bool> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__uint64_t_() {
    std::unordered_map<int8_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__int32_t_() {
    std::unordered_map<float, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__int8_t_() {
    std::unordered_map<float, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__float_() {
    std::unordered_map<float, float> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__string_() {
    std::unordered_map<float, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__bool_() {
    std::unordered_map<float, bool> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__uint64_t_() {
    std::unordered_map<float, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__int32_t_() {
    std::unordered_map<std::string, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__int8_t_() {
    std::unordered_map<std::string, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__float_() {
    std::unordered_map<std::string, float> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__string_() {
    std::unordered_map<std::string, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__bool_() {
    std::unordered_map<std::string, bool> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__uint64_t_() {
    std::unordered_map<std::string, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__int32_t_() {
    std::unordered_map<bool, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__int8_t_() {
    std::unordered_map<bool, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__float_() {
    std::unordered_map<bool, float> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__string_() {
    std::unordered_map<bool, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__bool_() {
    std::unordered_map<bool, bool> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__uint64_t_() {
    std::unordered_map<bool, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__int32_t_() {
    std::unordered_map<uint64_t, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__int8_t_() {
    std::unordered_map<uint64_t, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__float_() {
    std::unordered_map<uint64_t, float> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__string_() {
    std::unordered_map<uint64_t, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__bool_() {
    std::unordered_map<uint64_t, bool> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__uint64_t_() {
    std::unordered_map<uint64_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int32_t__int32_t_() {
    std::unordered_multimap<int32_t, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int32_t__int8_t_() {
    std::unordered_multimap<int32_t, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int32_t__float_() {
    std::unordered_multimap<int32_t, float> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int32_t__std__string_() {
    std::unordered_multimap<int32_t, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int32_t__bool_() {
    std::unordered_multimap<int32_t, bool> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int32_t__uint64_t_() {
    std::unordered_multimap<int32_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int8_t__int32_t_() {
    std::unordered_multimap<int8_t, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int8_t__int8_t_() {
    std::unordered_multimap<int8_t, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int8_t__float_() {
    std::unordered_multimap<int8_t, float> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int8_t__std__string_() {
    std::unordered_multimap<int8_t, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int8_t__bool_() {
    std::unordered_multimap<int8_t, bool> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int8_t__uint64_t_() {
    std::unordered_multimap<int8_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_float__int32_t_() {
    std::unordered_multimap<float, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_float__int8_t_() {
    std::unordered_multimap<float, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_float__float_() {
    std::unordered_multimap<float, float> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_float__std__string_() {
    std::unordered_multimap<float, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_float__bool_() {
    std::unordered_multimap<float, bool> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_float__uint64_t_() {
    std::unordered_multimap<float, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_std__string__int32_t_() {
    std::unordered_multimap<std::string, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_std__string__int8_t_() {
    std::unordered_multimap<std::string, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_std__string__float_() {
    std::unordered_multimap<std::string, float> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_std__string__std__string_() {
    std::unordered_multimap<std::string, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_std__string__bool_() {
    std::unordered_multimap<std::string, bool> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_std__string__uint64_t_() {
    std::unordered_multimap<std::string, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_bool__int32_t_() {
    std::unordered_multimap<bool, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_bool__int8_t_() {
    std::unordered_multimap<bool, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_bool__float_() {
    std::unordered_multimap<bool, float> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_bool__std__string_() {
    std::unordered_multimap<bool, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_bool__bool_() {
    std::unordered_multimap<bool, bool> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_bool__uint64_t_() {
    std::unordered_multimap<bool, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_uint64_t__int32_t_() {
    std::unordered_multimap<uint64_t, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_uint64_t__int8_t_() {
    std::unordered_multimap<uint64_t, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_uint64_t__float_() {
    std::unordered_multimap<uint64_t, float> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_uint64_t__std__string_() {
    std::unordered_multimap<uint64_t, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_uint64_t__bool_() {
    std::unordered_multimap<uint64_t, bool> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_uint64_t__uint64_t_() {
    std::unordered_multimap<uint64_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multiset_int32_t_() {
    std::unordered_multiset<int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multiset_int8_t_() {
    std::unordered_multiset<int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multiset_float_() {
    std::unordered_multiset<float> v;
    ar & v;
  }
  void serialize_std__unordered_multiset_std__string_() {
    std::unordered_multiset<std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multiset_bool_() {
    std::unordered_multiset<bool> v;
    ar & v;
  }
  void serialize_std__unordered_multiset_uint64_t_() {
    std::unordered_multiset<uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_set_int32_t_() {
    std::unordered_set<int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_set_int8_t_() {
    std::unordered_set<int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_set_float_() {
    std::unordered_set<float> v;
    ar & v;
  }
  void serialize_std__unordered_set_std__string_() {
    std::unordered_set<std::string> v;
    ar & v;
  }
  void serialize_std__unordered_set_bool_() {
    std::unordered_set<bool> v;
    ar & v;
  }
  void serialize_std__unordered_set_uint64_t_() {
    std::unordered_set<uint64_t> v;
    ar & v;
  }
  void serialize_std__vector_int32_t_() {
    std::vector<int32_t> v;
    ar & v;
  }
  void serialize_std__vector_int8_t_() {
    std::vector<int8_t> v;
    ar & v;
  }
  void serialize_std__vector_float_() {
    std::vector<float> v;
    ar & v;
  }
  void serialize_std__vector_std__string_() {
    std::vector<std::string> v;
    ar & v;
  }
  void serialize_std__vector_bool_() {
    std::vector<bool> v;
    ar & v;
  }
  void serialize_std__vector_uint64_t_() {
    std::vector<uint64_t> v;
    ar & v;
  }
  void serialize_std__vector_std__vector_int32_t__() {
    std::vector<std::vector<int32_t>> v;
    ar & v;
  }
  void serialize_std__vector_std__vector_int8_t__() {
    std::vector<std::vector<int8_t>> v;
    ar & v;
  }
  void serialize_std__vector_std__vector_float__() {
    std::vector<std::vector<float>> v;
    ar & v;
  }
  void serialize_std__vector_std__vector_std__string__() {
    std::vector<std::vector<std::string>> v;
    ar & v;
  }
  void serialize_std__vector_std__vector_bool__() {
    std::vector<std::vector<bool>> v;
    ar & v;
  }
  void serialize_std__vector_std__vector_uint64_t__() {
    std::vector<std::vector<uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_int32_t__int32_t__() {
    std::map<int32_t, std::map<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_int32_t__int8_t__() {
    std::map<int32_t, std::map<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_int32_t__float__() {
    std::map<int32_t, std::map<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_int32_t__std__string__() {
    std::map<int32_t, std::map<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_int32_t__bool__() {
    std::map<int32_t, std::map<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_int32_t__uint64_t__() {
    std::map<int32_t, std::map<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_int8_t__int32_t__() {
    std::map<int32_t, std::map<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_int8_t__int8_t__() {
    std::map<int32_t, std::map<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_int8_t__float__() {
    std::map<int32_t, std::map<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_int8_t__std__string__() {
    std::map<int32_t, std::map<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_int8_t__bool__() {
    std::map<int32_t, std::map<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_int8_t__uint64_t__() {
    std::map<int32_t, std::map<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_float__int32_t__() {
    std::map<int32_t, std::map<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_float__int8_t__() {
    std::map<int32_t, std::map<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_float__float__() {
    std::map<int32_t, std::map<float, float>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_float__std__string__() {
    std::map<int32_t, std::map<float, std::string>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_float__bool__() {
    std::map<int32_t, std::map<float, bool>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_float__uint64_t__() {
    std::map<int32_t, std::map<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_std__string__int32_t__() {
    std::map<int32_t, std::map<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_std__string__int8_t__() {
    std::map<int32_t, std::map<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_std__string__float__() {
    std::map<int32_t, std::map<std::string, float>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_std__string__std__string__() {
    std::map<int32_t, std::map<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_std__string__bool__() {
    std::map<int32_t, std::map<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_std__string__uint64_t__() {
    std::map<int32_t, std::map<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_bool__int32_t__() {
    std::map<int32_t, std::map<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_bool__int8_t__() {
    std::map<int32_t, std::map<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_bool__float__() {
    std::map<int32_t, std::map<bool, float>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_bool__std__string__() {
    std::map<int32_t, std::map<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_bool__bool__() {
    std::map<int32_t, std::map<bool, bool>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_bool__uint64_t__() {
    std::map<int32_t, std::map<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_uint64_t__int32_t__() {
    std::map<int32_t, std::map<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_uint64_t__int8_t__() {
    std::map<int32_t, std::map<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_uint64_t__float__() {
    std::map<int32_t, std::map<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_uint64_t__std__string__() {
    std::map<int32_t, std::map<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_uint64_t__bool__() {
    std::map<int32_t, std::map<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__map_uint64_t__uint64_t__() {
    std::map<int32_t, std::map<uint64_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_int32_t__int32_t__() {
    std::map<int8_t, std::map<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_int32_t__int8_t__() {
    std::map<int8_t, std::map<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_int32_t__float__() {
    std::map<int8_t, std::map<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_int32_t__std__string__() {
    std::map<int8_t, std::map<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_int32_t__bool__() {
    std::map<int8_t, std::map<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_int32_t__uint64_t__() {
    std::map<int8_t, std::map<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_int8_t__int32_t__() {
    std::map<int8_t, std::map<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_int8_t__int8_t__() {
    std::map<int8_t, std::map<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_int8_t__float__() {
    std::map<int8_t, std::map<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_int8_t__std__string__() {
    std::map<int8_t, std::map<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_int8_t__bool__() {
    std::map<int8_t, std::map<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_int8_t__uint64_t__() {
    std::map<int8_t, std::map<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_float__int32_t__() {
    std::map<int8_t, std::map<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_float__int8_t__() {
    std::map<int8_t, std::map<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_float__float__() {
    std::map<int8_t, std::map<float, float>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_float__std__string__() {
    std::map<int8_t, std::map<float, std::string>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_float__bool__() {
    std::map<int8_t, std::map<float, bool>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_float__uint64_t__() {
    std::map<int8_t, std::map<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_std__string__int32_t__() {
    std::map<int8_t, std::map<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_std__string__int8_t__() {
    std::map<int8_t, std::map<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_std__string__float__() {
    std::map<int8_t, std::map<std::string, float>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_std__string__std__string__() {
    std::map<int8_t, std::map<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_std__string__bool__() {
    std::map<int8_t, std::map<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_std__string__uint64_t__() {
    std::map<int8_t, std::map<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_bool__int32_t__() {
    std::map<int8_t, std::map<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_bool__int8_t__() {
    std::map<int8_t, std::map<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_bool__float__() {
    std::map<int8_t, std::map<bool, float>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_bool__std__string__() {
    std::map<int8_t, std::map<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_bool__bool__() {
    std::map<int8_t, std::map<bool, bool>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_bool__uint64_t__() {
    std::map<int8_t, std::map<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_uint64_t__int32_t__() {
    std::map<int8_t, std::map<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_uint64_t__int8_t__() {
    std::map<int8_t, std::map<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_uint64_t__float__() {
    std::map<int8_t, std::map<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_uint64_t__std__string__() {
    std::map<int8_t, std::map<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_uint64_t__bool__() {
    std::map<int8_t, std::map<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__map_uint64_t__uint64_t__() {
    std::map<int8_t, std::map<uint64_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_int32_t__int32_t__() {
    std::map<float, std::map<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_int32_t__int8_t__() {
    std::map<float, std::map<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_int32_t__float__() {
    std::map<float, std::map<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_int32_t__std__string__() {
    std::map<float, std::map<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_int32_t__bool__() {
    std::map<float, std::map<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_int32_t__uint64_t__() {
    std::map<float, std::map<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_int8_t__int32_t__() {
    std::map<float, std::map<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_int8_t__int8_t__() {
    std::map<float, std::map<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_int8_t__float__() {
    std::map<float, std::map<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_int8_t__std__string__() {
    std::map<float, std::map<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_int8_t__bool__() {
    std::map<float, std::map<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_int8_t__uint64_t__() {
    std::map<float, std::map<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_float__int32_t__() {
    std::map<float, std::map<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_float__int8_t__() {
    std::map<float, std::map<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_float__float__() {
    std::map<float, std::map<float, float>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_float__std__string__() {
    std::map<float, std::map<float, std::string>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_float__bool__() {
    std::map<float, std::map<float, bool>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_float__uint64_t__() {
    std::map<float, std::map<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_std__string__int32_t__() {
    std::map<float, std::map<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_std__string__int8_t__() {
    std::map<float, std::map<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_std__string__float__() {
    std::map<float, std::map<std::string, float>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_std__string__std__string__() {
    std::map<float, std::map<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_std__string__bool__() {
    std::map<float, std::map<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_std__string__uint64_t__() {
    std::map<float, std::map<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_bool__int32_t__() {
    std::map<float, std::map<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_bool__int8_t__() {
    std::map<float, std::map<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_bool__float__() {
    std::map<float, std::map<bool, float>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_bool__std__string__() {
    std::map<float, std::map<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_bool__bool__() {
    std::map<float, std::map<bool, bool>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_bool__uint64_t__() {
    std::map<float, std::map<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_uint64_t__int32_t__() {
    std::map<float, std::map<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_uint64_t__int8_t__() {
    std::map<float, std::map<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_uint64_t__float__() {
    std::map<float, std::map<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_uint64_t__std__string__() {
    std::map<float, std::map<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_uint64_t__bool__() {
    std::map<float, std::map<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_float__std__map_uint64_t__uint64_t__() {
    std::map<float, std::map<uint64_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_int32_t__int32_t__() {
    std::map<std::string, std::map<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_int32_t__int8_t__() {
    std::map<std::string, std::map<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_int32_t__float__() {
    std::map<std::string, std::map<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_int32_t__std__string__() {
    std::map<std::string, std::map<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_int32_t__bool__() {
    std::map<std::string, std::map<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_int32_t__uint64_t__() {
    std::map<std::string, std::map<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_int8_t__int32_t__() {
    std::map<std::string, std::map<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_int8_t__int8_t__() {
    std::map<std::string, std::map<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_int8_t__float__() {
    std::map<std::string, std::map<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_int8_t__std__string__() {
    std::map<std::string, std::map<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_int8_t__bool__() {
    std::map<std::string, std::map<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_int8_t__uint64_t__() {
    std::map<std::string, std::map<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_float__int32_t__() {
    std::map<std::string, std::map<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_float__int8_t__() {
    std::map<std::string, std::map<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_float__float__() {
    std::map<std::string, std::map<float, float>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_float__std__string__() {
    std::map<std::string, std::map<float, std::string>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_float__bool__() {
    std::map<std::string, std::map<float, bool>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_float__uint64_t__() {
    std::map<std::string, std::map<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_std__string__int32_t__() {
    std::map<std::string, std::map<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_std__string__int8_t__() {
    std::map<std::string, std::map<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_std__string__float__() {
    std::map<std::string, std::map<std::string, float>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_std__string__std__string__() {
    std::map<std::string, std::map<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_std__string__bool__() {
    std::map<std::string, std::map<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_std__string__uint64_t__() {
    std::map<std::string, std::map<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_bool__int32_t__() {
    std::map<std::string, std::map<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_bool__int8_t__() {
    std::map<std::string, std::map<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_bool__float__() {
    std::map<std::string, std::map<bool, float>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_bool__std__string__() {
    std::map<std::string, std::map<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_bool__bool__() {
    std::map<std::string, std::map<bool, bool>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_bool__uint64_t__() {
    std::map<std::string, std::map<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_uint64_t__int32_t__() {
    std::map<std::string, std::map<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_uint64_t__int8_t__() {
    std::map<std::string, std::map<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_uint64_t__float__() {
    std::map<std::string, std::map<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_uint64_t__std__string__() {
    std::map<std::string, std::map<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_uint64_t__bool__() {
    std::map<std::string, std::map<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__map_uint64_t__uint64_t__() {
    std::map<std::string, std::map<uint64_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_int32_t__int32_t__() {
    std::map<bool, std::map<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_int32_t__int8_t__() {
    std::map<bool, std::map<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_int32_t__float__() {
    std::map<bool, std::map<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_int32_t__std__string__() {
    std::map<bool, std::map<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_int32_t__bool__() {
    std::map<bool, std::map<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_int32_t__uint64_t__() {
    std::map<bool, std::map<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_int8_t__int32_t__() {
    std::map<bool, std::map<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_int8_t__int8_t__() {
    std::map<bool, std::map<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_int8_t__float__() {
    std::map<bool, std::map<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_int8_t__std__string__() {
    std::map<bool, std::map<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_int8_t__bool__() {
    std::map<bool, std::map<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_int8_t__uint64_t__() {
    std::map<bool, std::map<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_float__int32_t__() {
    std::map<bool, std::map<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_float__int8_t__() {
    std::map<bool, std::map<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_float__float__() {
    std::map<bool, std::map<float, float>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_float__std__string__() {
    std::map<bool, std::map<float, std::string>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_float__bool__() {
    std::map<bool, std::map<float, bool>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_float__uint64_t__() {
    std::map<bool, std::map<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_std__string__int32_t__() {
    std::map<bool, std::map<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_std__string__int8_t__() {
    std::map<bool, std::map<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_std__string__float__() {
    std::map<bool, std::map<std::string, float>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_std__string__std__string__() {
    std::map<bool, std::map<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_std__string__bool__() {
    std::map<bool, std::map<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_std__string__uint64_t__() {
    std::map<bool, std::map<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_bool__int32_t__() {
    std::map<bool, std::map<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_bool__int8_t__() {
    std::map<bool, std::map<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_bool__float__() {
    std::map<bool, std::map<bool, float>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_bool__std__string__() {
    std::map<bool, std::map<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_bool__bool__() {
    std::map<bool, std::map<bool, bool>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_bool__uint64_t__() {
    std::map<bool, std::map<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_uint64_t__int32_t__() {
    std::map<bool, std::map<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_uint64_t__int8_t__() {
    std::map<bool, std::map<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_uint64_t__float__() {
    std::map<bool, std::map<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_uint64_t__std__string__() {
    std::map<bool, std::map<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_uint64_t__bool__() {
    std::map<bool, std::map<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_bool__std__map_uint64_t__uint64_t__() {
    std::map<bool, std::map<uint64_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_int32_t__int32_t__() {
    std::map<uint64_t, std::map<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_int32_t__int8_t__() {
    std::map<uint64_t, std::map<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_int32_t__float__() {
    std::map<uint64_t, std::map<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_int32_t__std__string__() {
    std::map<uint64_t, std::map<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_int32_t__bool__() {
    std::map<uint64_t, std::map<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_int32_t__uint64_t__() {
    std::map<uint64_t, std::map<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_int8_t__int32_t__() {
    std::map<uint64_t, std::map<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_int8_t__int8_t__() {
    std::map<uint64_t, std::map<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_int8_t__float__() {
    std::map<uint64_t, std::map<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_int8_t__std__string__() {
    std::map<uint64_t, std::map<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_int8_t__bool__() {
    std::map<uint64_t, std::map<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_int8_t__uint64_t__() {
    std::map<uint64_t, std::map<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_float__int32_t__() {
    std::map<uint64_t, std::map<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_float__int8_t__() {
    std::map<uint64_t, std::map<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_float__float__() {
    std::map<uint64_t, std::map<float, float>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_float__std__string__() {
    std::map<uint64_t, std::map<float, std::string>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_float__bool__() {
    std::map<uint64_t, std::map<float, bool>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_float__uint64_t__() {
    std::map<uint64_t, std::map<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_std__string__int32_t__() {
    std::map<uint64_t, std::map<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_std__string__int8_t__() {
    std::map<uint64_t, std::map<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_std__string__float__() {
    std::map<uint64_t, std::map<std::string, float>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_std__string__std__string__() {
    std::map<uint64_t, std::map<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_std__string__bool__() {
    std::map<uint64_t, std::map<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_std__string__uint64_t__() {
    std::map<uint64_t, std::map<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_bool__int32_t__() {
    std::map<uint64_t, std::map<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_bool__int8_t__() {
    std::map<uint64_t, std::map<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_bool__float__() {
    std::map<uint64_t, std::map<bool, float>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_bool__std__string__() {
    std::map<uint64_t, std::map<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_bool__bool__() {
    std::map<uint64_t, std::map<bool, bool>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_bool__uint64_t__() {
    std::map<uint64_t, std::map<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_uint64_t__int32_t__() {
    std::map<uint64_t, std::map<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_uint64_t__int8_t__() {
    std::map<uint64_t, std::map<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_uint64_t__float__() {
    std::map<uint64_t, std::map<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_uint64_t__std__string__() {
    std::map<uint64_t, std::map<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_uint64_t__bool__() {
    std::map<uint64_t, std::map<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__map_uint64_t__uint64_t__() {
    std::map<uint64_t, std::map<uint64_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__deque_std__set_int32_t__() {
    std::deque<std::set<int32_t>> v;
    ar & v;
  }
  void serialize_std__deque_std__set_int8_t__() {
    std::deque<std::set<int8_t>> v;
    ar & v;
  }
  void serialize_std__deque_std__set_float__() {
    std::deque<std::set<float>> v;
    ar & v;
  }
  void serialize_std__deque_std__set_std__string__() {
    std::deque<std::set<std::string>> v;
    ar & v;
  }
  void serialize_std__deque_std__set_bool__() {
    std::deque<std::set<bool>> v;
    ar & v;
  }
  void serialize_std__deque_std__set_uint64_t__() {
    std::deque<std::set<uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_int32_t__int32_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_int32_t__int8_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_int32_t__float__() {
    std::unordered_map<int32_t, std::unordered_multimap<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_int32_t__std__string__() {
    std::unordered_map<int32_t, std::unordered_multimap<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_int32_t__bool__() {
    std::unordered_map<int32_t, std::unordered_multimap<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_int32_t__uint64_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_int8_t__int32_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_int8_t__int8_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_int8_t__float__() {
    std::unordered_map<int32_t, std::unordered_multimap<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_int8_t__std__string__() {
    std::unordered_map<int32_t, std::unordered_multimap<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_int8_t__bool__() {
    std::unordered_map<int32_t, std::unordered_multimap<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_int8_t__uint64_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_float__int32_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_float__int8_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_float__float__() {
    std::unordered_map<int32_t, std::unordered_multimap<float, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_float__std__string__() {
    std::unordered_map<int32_t, std::unordered_multimap<float, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_float__bool__() {
    std::unordered_map<int32_t, std::unordered_multimap<float, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_float__uint64_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_std__string__int32_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_std__string__int8_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_std__string__float__() {
    std::unordered_map<int32_t, std::unordered_multimap<std::string, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_std__string__std__string__() {
    std::unordered_map<int32_t, std::unordered_multimap<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_std__string__bool__() {
    std::unordered_map<int32_t, std::unordered_multimap<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_std__string__uint64_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_bool__int32_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_bool__int8_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_bool__float__() {
    std::unordered_map<int32_t, std::unordered_multimap<bool, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_bool__std__string__() {
    std::unordered_map<int32_t, std::unordered_multimap<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_bool__bool__() {
    std::unordered_map<int32_t, std::unordered_multimap<bool, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_bool__uint64_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_uint64_t__int32_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_uint64_t__int8_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_uint64_t__float__() {
    std::unordered_map<int32_t, std::unordered_multimap<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_uint64_t__std__string__() {
    std::unordered_map<int32_t, std::unordered_multimap<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_uint64_t__bool__() {
    std::unordered_map<int32_t, std::unordered_multimap<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__unordered_multimap_uint64_t__uint64_t__() {
    std::unordered_map<int32_t, std::unordered_multimap<uint64_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_int32_t__int32_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_int32_t__int8_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_int32_t__float__() {
    std::unordered_map<int8_t, std::unordered_multimap<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_int32_t__std__string__() {
    std::unordered_map<int8_t, std::unordered_multimap<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_int32_t__bool__() {
    std::unordered_map<int8_t, std::unordered_multimap<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_int32_t__uint64_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_int8_t__int32_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_int8_t__int8_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_int8_t__float__() {
    std::unordered_map<int8_t, std::unordered_multimap<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_int8_t__std__string__() {
    std::unordered_map<int8_t, std::unordered_multimap<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_int8_t__bool__() {
    std::unordered_map<int8_t, std::unordered_multimap<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_int8_t__uint64_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_float__int32_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_float__int8_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_float__float__() {
    std::unordered_map<int8_t, std::unordered_multimap<float, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_float__std__string__() {
    std::unordered_map<int8_t, std::unordered_multimap<float, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_float__bool__() {
    std::unordered_map<int8_t, std::unordered_multimap<float, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_float__uint64_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_std__string__int32_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_std__string__int8_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_std__string__float__() {
    std::unordered_map<int8_t, std::unordered_multimap<std::string, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_std__string__std__string__() {
    std::unordered_map<int8_t, std::unordered_multimap<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_std__string__bool__() {
    std::unordered_map<int8_t, std::unordered_multimap<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_std__string__uint64_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_bool__int32_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_bool__int8_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_bool__float__() {
    std::unordered_map<int8_t, std::unordered_multimap<bool, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_bool__std__string__() {
    std::unordered_map<int8_t, std::unordered_multimap<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_bool__bool__() {
    std::unordered_map<int8_t, std::unordered_multimap<bool, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_bool__uint64_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_uint64_t__int32_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_uint64_t__int8_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_uint64_t__float__() {
    std::unordered_map<int8_t, std::unordered_multimap<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_uint64_t__std__string__() {
    std::unordered_map<int8_t, std::unordered_multimap<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_uint64_t__bool__() {
    std::unordered_map<int8_t, std::unordered_multimap<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__unordered_multimap_uint64_t__uint64_t__() {
    std::unordered_map<int8_t, std::unordered_multimap<uint64_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_int32_t__int32_t__() {
    std::unordered_map<float, std::unordered_multimap<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_int32_t__int8_t__() {
    std::unordered_map<float, std::unordered_multimap<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_int32_t__float__() {
    std::unordered_map<float, std::unordered_multimap<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_int32_t__std__string__() {
    std::unordered_map<float, std::unordered_multimap<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_int32_t__bool__() {
    std::unordered_map<float, std::unordered_multimap<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_int32_t__uint64_t__() {
    std::unordered_map<float, std::unordered_multimap<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_int8_t__int32_t__() {
    std::unordered_map<float, std::unordered_multimap<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_int8_t__int8_t__() {
    std::unordered_map<float, std::unordered_multimap<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_int8_t__float__() {
    std::unordered_map<float, std::unordered_multimap<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_int8_t__std__string__() {
    std::unordered_map<float, std::unordered_multimap<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_int8_t__bool__() {
    std::unordered_map<float, std::unordered_multimap<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_int8_t__uint64_t__() {
    std::unordered_map<float, std::unordered_multimap<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_float__int32_t__() {
    std::unordered_map<float, std::unordered_multimap<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_float__int8_t__() {
    std::unordered_map<float, std::unordered_multimap<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_float__float__() {
    std::unordered_map<float, std::unordered_multimap<float, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_float__std__string__() {
    std::unordered_map<float, std::unordered_multimap<float, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_float__bool__() {
    std::unordered_map<float, std::unordered_multimap<float, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_float__uint64_t__() {
    std::unordered_map<float, std::unordered_multimap<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_std__string__int32_t__() {
    std::unordered_map<float, std::unordered_multimap<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_std__string__int8_t__() {
    std::unordered_map<float, std::unordered_multimap<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_std__string__float__() {
    std::unordered_map<float, std::unordered_multimap<std::string, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_std__string__std__string__() {
    std::unordered_map<float, std::unordered_multimap<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_std__string__bool__() {
    std::unordered_map<float, std::unordered_multimap<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_std__string__uint64_t__() {
    std::unordered_map<float, std::unordered_multimap<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_bool__int32_t__() {
    std::unordered_map<float, std::unordered_multimap<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_bool__int8_t__() {
    std::unordered_map<float, std::unordered_multimap<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_bool__float__() {
    std::unordered_map<float, std::unordered_multimap<bool, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_bool__std__string__() {
    std::unordered_map<float, std::unordered_multimap<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_bool__bool__() {
    std::unordered_map<float, std::unordered_multimap<bool, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_bool__uint64_t__() {
    std::unordered_map<float, std::unordered_multimap<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_uint64_t__int32_t__() {
    std::unordered_map<float, std::unordered_multimap<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_uint64_t__int8_t__() {
    std::unordered_map<float, std::unordered_multimap<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_uint64_t__float__() {
    std::unordered_map<float, std::unordered_multimap<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_uint64_t__std__string__() {
    std::unordered_map<float, std::unordered_multimap<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_uint64_t__bool__() {
    std::unordered_map<float, std::unordered_multimap<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__unordered_multimap_uint64_t__uint64_t__() {
    std::unordered_map<float, std::unordered_multimap<uint64_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_int32_t__int32_t__() {
    std::unordered_map<std::string, std::unordered_multimap<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_int32_t__int8_t__() {
    std::unordered_map<std::string, std::unordered_multimap<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_int32_t__float__() {
    std::unordered_map<std::string, std::unordered_multimap<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_int32_t__std__string__() {
    std::unordered_map<std::string, std::unordered_multimap<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_int32_t__bool__() {
    std::unordered_map<std::string, std::unordered_multimap<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_int32_t__uint64_t__() {
    std::unordered_map<std::string, std::unordered_multimap<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_int8_t__int32_t__() {
    std::unordered_map<std::string, std::unordered_multimap<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_int8_t__int8_t__() {
    std::unordered_map<std::string, std::unordered_multimap<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_int8_t__float__() {
    std::unordered_map<std::string, std::unordered_multimap<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_int8_t__std__string__() {
    std::unordered_map<std::string, std::unordered_multimap<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_int8_t__bool__() {
    std::unordered_map<std::string, std::unordered_multimap<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_int8_t__uint64_t__() {
    std::unordered_map<std::string, std::unordered_multimap<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_float__int32_t__() {
    std::unordered_map<std::string, std::unordered_multimap<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_float__int8_t__() {
    std::unordered_map<std::string, std::unordered_multimap<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_float__float__() {
    std::unordered_map<std::string, std::unordered_multimap<float, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_float__std__string__() {
    std::unordered_map<std::string, std::unordered_multimap<float, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_float__bool__() {
    std::unordered_map<std::string, std::unordered_multimap<float, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_float__uint64_t__() {
    std::unordered_map<std::string, std::unordered_multimap<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_std__string__int32_t__() {
    std::unordered_map<std::string, std::unordered_multimap<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_std__string__int8_t__() {
    std::unordered_map<std::string, std::unordered_multimap<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_std__string__float__() {
    std::unordered_map<std::string, std::unordered_multimap<std::string, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_std__string__std__string__() {
    std::unordered_map<std::string, std::unordered_multimap<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_std__string__bool__() {
    std::unordered_map<std::string, std::unordered_multimap<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_std__string__uint64_t__() {
    std::unordered_map<std::string, std::unordered_multimap<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_bool__int32_t__() {
    std::unordered_map<std::string, std::unordered_multimap<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_bool__int8_t__() {
    std::unordered_map<std::string, std::unordered_multimap<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_bool__float__() {
    std::unordered_map<std::string, std::unordered_multimap<bool, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_bool__std__string__() {
    std::unordered_map<std::string, std::unordered_multimap<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_bool__bool__() {
    std::unordered_map<std::string, std::unordered_multimap<bool, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_bool__uint64_t__() {
    std::unordered_map<std::string, std::unordered_multimap<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_uint64_t__int32_t__() {
    std::unordered_map<std::string, std::unordered_multimap<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_uint64_t__int8_t__() {
    std::unordered_map<std::string, std::unordered_multimap<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_uint64_t__float__() {
    std::unordered_map<std::string, std::unordered_multimap<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_uint64_t__std__string__() {
    std::unordered_map<std::string, std::unordered_multimap<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_uint64_t__bool__() {
    std::unordered_map<std::string, std::unordered_multimap<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__unordered_multimap_uint64_t__uint64_t__() {
    std::unordered_map<std::string, std::unordered_multimap<uint64_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_int32_t__int32_t__() {
    std::unordered_map<bool, std::unordered_multimap<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_int32_t__int8_t__() {
    std::unordered_map<bool, std::unordered_multimap<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_int32_t__float__() {
    std::unordered_map<bool, std::unordered_multimap<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_int32_t__std__string__() {
    std::unordered_map<bool, std::unordered_multimap<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_int32_t__bool__() {
    std::unordered_map<bool, std::unordered_multimap<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_int32_t__uint64_t__() {
    std::unordered_map<bool, std::unordered_multimap<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_int8_t__int32_t__() {
    std::unordered_map<bool, std::unordered_multimap<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_int8_t__int8_t__() {
    std::unordered_map<bool, std::unordered_multimap<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_int8_t__float__() {
    std::unordered_map<bool, std::unordered_multimap<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_int8_t__std__string__() {
    std::unordered_map<bool, std::unordered_multimap<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_int8_t__bool__() {
    std::unordered_map<bool, std::unordered_multimap<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_int8_t__uint64_t__() {
    std::unordered_map<bool, std::unordered_multimap<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_float__int32_t__() {
    std::unordered_map<bool, std::unordered_multimap<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_float__int8_t__() {
    std::unordered_map<bool, std::unordered_multimap<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_float__float__() {
    std::unordered_map<bool, std::unordered_multimap<float, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_float__std__string__() {
    std::unordered_map<bool, std::unordered_multimap<float, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_float__bool__() {
    std::unordered_map<bool, std::unordered_multimap<float, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_float__uint64_t__() {
    std::unordered_map<bool, std::unordered_multimap<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_std__string__int32_t__() {
    std::unordered_map<bool, std::unordered_multimap<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_std__string__int8_t__() {
    std::unordered_map<bool, std::unordered_multimap<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_std__string__float__() {
    std::unordered_map<bool, std::unordered_multimap<std::string, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_std__string__std__string__() {
    std::unordered_map<bool, std::unordered_multimap<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_std__string__bool__() {
    std::unordered_map<bool, std::unordered_multimap<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_std__string__uint64_t__() {
    std::unordered_map<bool, std::unordered_multimap<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_bool__int32_t__() {
    std::unordered_map<bool, std::unordered_multimap<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_bool__int8_t__() {
    std::unordered_map<bool, std::unordered_multimap<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_bool__float__() {
    std::unordered_map<bool, std::unordered_multimap<bool, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_bool__std__string__() {
    std::unordered_map<bool, std::unordered_multimap<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_bool__bool__() {
    std::unordered_map<bool, std::unordered_multimap<bool, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_bool__uint64_t__() {
    std::unordered_map<bool, std::unordered_multimap<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_uint64_t__int32_t__() {
    std::unordered_map<bool, std::unordered_multimap<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_uint64_t__int8_t__() {
    std::unordered_map<bool, std::unordered_multimap<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_uint64_t__float__() {
    std::unordered_map<bool, std::unordered_multimap<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_uint64_t__std__string__() {
    std::unordered_map<bool, std::unordered_multimap<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_uint64_t__bool__() {
    std::unordered_map<bool, std::unordered_multimap<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__unordered_multimap_uint64_t__uint64_t__() {
    std::unordered_map<bool, std::unordered_multimap<uint64_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_int32_t__int32_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_int32_t__int8_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_int32_t__float__() {
    std::unordered_map<uint64_t, std::unordered_multimap<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_int32_t__std__string__() {
    std::unordered_map<uint64_t, std::unordered_multimap<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_int32_t__bool__() {
    std::unordered_map<uint64_t, std::unordered_multimap<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_int32_t__uint64_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_int8_t__int32_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_int8_t__int8_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_int8_t__float__() {
    std::unordered_map<uint64_t, std::unordered_multimap<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_int8_t__std__string__() {
    std::unordered_map<uint64_t, std::unordered_multimap<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_int8_t__bool__() {
    std::unordered_map<uint64_t, std::unordered_multimap<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_int8_t__uint64_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_float__int32_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_float__int8_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_float__float__() {
    std::unordered_map<uint64_t, std::unordered_multimap<float, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_float__std__string__() {
    std::unordered_map<uint64_t, std::unordered_multimap<float, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_float__bool__() {
    std::unordered_map<uint64_t, std::unordered_multimap<float, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_float__uint64_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_std__string__int32_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_std__string__int8_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_std__string__float__() {
    std::unordered_map<uint64_t, std::unordered_multimap<std::string, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_std__string__std__string__() {
    std::unordered_map<uint64_t, std::unordered_multimap<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_std__string__bool__() {
    std::unordered_map<uint64_t, std::unordered_multimap<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_std__string__uint64_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_bool__int32_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_bool__int8_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_bool__float__() {
    std::unordered_map<uint64_t, std::unordered_multimap<bool, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_bool__std__string__() {
    std::unordered_map<uint64_t, std::unordered_multimap<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_bool__bool__() {
    std::unordered_map<uint64_t, std::unordered_multimap<bool, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_bool__uint64_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_uint64_t__int32_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_uint64_t__int8_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_uint64_t__float__() {
    std::unordered_map<uint64_t, std::unordered_multimap<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_uint64_t__std__string__() {
    std::unordered_map<uint64_t, std::unordered_multimap<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_uint64_t__bool__() {
    std::unordered_map<uint64_t, std::unordered_multimap<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__unordered_multimap_uint64_t__uint64_t__() {
    std::unordered_map<uint64_t, std::unordered_multimap<uint64_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__vector_std__unordered_set_int32_t__() {
    std::vector<std::unordered_set<int32_t>> v;
    ar & v;
  }
  void serialize_std__vector_std__unordered_set_int8_t__() {
    std::vector<std::unordered_set<int8_t>> v;
    ar & v;
  }
  void serialize_std__vector_std__unordered_set_float__() {
    std::vector<std::unordered_set<float>> v;
    ar & v;
  }
  void serialize_std__vector_std__unordered_set_std__string__() {
    std::vector<std::unordered_set<std::string>> v;
    ar & v;
  }
  void serialize_std__vector_std__unordered_set_bool__() {
    std::vector<std::unordered_set<bool>> v;
    ar & v;
  }
  void serialize_std__vector_std__unordered_set_uint64_t__() {
    std::vector<std::unordered_set<uint64_t>> v;
    ar & v;
  }
  void serialize_std__list_std__vector_int32_t__() {
    std::list<std::vector<int32_t>> v;
    ar & v;
  }
  void serialize_std__list_std__vector_int8_t__() {
    std::list<std::vector<int8_t>> v;
    ar & v;
  }
  void serialize_std__list_std__vector_float__() {
    std::list<std::vector<float>> v;
    ar & v;
  }
  void serialize_std__list_std__vector_std__string__() {
    std::list<std::vector<std::string>> v;
    ar & v;
  }
  void serialize_std__list_std__vector_bool__() {
    std::list<std::vector<bool>> v;
    ar & v;
  }
  void serialize_std__list_std__vector_uint64_t__() {
    std::list<std::vector<uint64_t>> v;
    ar & v;
  }
  void serialize_std__list_std__forward_list_std__set_int32_t___() {
    std::list<std::forward_list<std::set<int32_t>>> v;
    ar & v;
  }
  void serialize_std__list_std__forward_list_std__set_int8_t___() {
    std::list<std::forward_list<std::set<int8_t>>> v;
    ar & v;
  }
  void serialize_std__list_std__forward_list_std__set_float___() {
    std::list<std::forward_list<std::set<float>>> v;
    ar & v;
  }
  void serialize_std__list_std__forward_list_std__set_std__string___() {
    std::list<std::forward_list<std::set<std::string>>> v;
    ar & v;
  }
  void serialize_std__list_std__forward_list_std__set_bool___() {
    std::list<std::forward_list<std::set<bool>>> v;
    ar & v;
  }
  void serialize_std__list_std__forward_list_std__set_uint64_t___() {
    std::list<std::forward_list<std::set<uint64_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_int32_t__std__list_int32_t___() {
    std::forward_list<std::map<int32_t, std::list<int32_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_int32_t__std__list_int8_t___() {
    std::forward_list<std::map<int32_t, std::list<int8_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_int32_t__std__list_float___() {
    std::forward_list<std::map<int32_t, std::list<float>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_int32_t__std__list_std__string___() {
    std::forward_list<std::map<int32_t, std::list<std::string>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_int32_t__std__list_bool___() {
    std::forward_list<std::map<int32_t, std::list<bool>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_int32_t__std__list_uint64_t___() {
    std::forward_list<std::map<int32_t, std::list<uint64_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_int8_t__std__list_int32_t___() {
    std::forward_list<std::map<int8_t, std::list<int32_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_int8_t__std__list_int8_t___() {
    std::forward_list<std::map<int8_t, std::list<int8_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_int8_t__std__list_float___() {
    std::forward_list<std::map<int8_t, std::list<float>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_int8_t__std__list_std__string___() {
    std::forward_list<std::map<int8_t, std::list<std::string>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_int8_t__std__list_bool___() {
    std::forward_list<std::map<int8_t, std::list<bool>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_int8_t__std__list_uint64_t___() {
    std::forward_list<std::map<int8_t, std::list<uint64_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_float__std__list_int32_t___() {
    std::forward_list<std::map<float, std::list<int32_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_float__std__list_int8_t___() {
    std::forward_list<std::map<float, std::list<int8_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_float__std__list_float___() {
    std::forward_list<std::map<float, std::list<float>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_float__std__list_std__string___() {
    std::forward_list<std::map<float, std::list<std::string>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_float__std__list_bool___() {
    std::forward_list<std::map<float, std::list<bool>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_float__std__list_uint64_t___() {
    std::forward_list<std::map<float, std::list<uint64_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_std__string__std__list_int32_t___() {
    std::forward_list<std::map<std::string, std::list<int32_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_std__string__std__list_int8_t___() {
    std::forward_list<std::map<std::string, std::list<int8_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_std__string__std__list_float___() {
    std::forward_list<std::map<std::string, std::list<float>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_std__string__std__list_std__string___() {
    std::forward_list<std::map<std::string, std::list<std::string>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_std__string__std__list_bool___() {
    std::forward_list<std::map<std::string, std::list<bool>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_std__string__std__list_uint64_t___() {
    std::forward_list<std::map<std::string, std::list<uint64_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_bool__std__list_int32_t___() {
    std::forward_list<std::map<bool, std::list<int32_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_bool__std__list_int8_t___() {
    std::forward_list<std::map<bool, std::list<int8_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_bool__std__list_float___() {
    std::forward_list<std::map<bool, std::list<float>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_bool__std__list_std__string___() {
    std::forward_list<std::map<bool, std::list<std::string>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_bool__std__list_bool___() {
    std::forward_list<std::map<bool, std::list<bool>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_bool__std__list_uint64_t___() {
    std::forward_list<std::map<bool, std::list<uint64_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_uint64_t__std__list_int32_t___() {
    std::forward_list<std::map<uint64_t, std::list<int32_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_uint64_t__std__list_int8_t___() {
    std::forward_list<std::map<uint64_t, std::list<int8_t>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_uint64_t__std__list_float___() {
    std::forward_list<std::map<uint64_t, std::list<float>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_uint64_t__std__list_std__string___() {
    std::forward_list<std::map<uint64_t, std::list<std::string>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_uint64_t__std__list_bool___() {
    std::forward_list<std::map<uint64_t, std::list<bool>>> v;
    ar & v;
  }
  void serialize_std__forward_list_std__map_uint64_t__std__list_uint64_t___() {
    std::forward_list<std::map<uint64_t, std::list<uint64_t>>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_int32_t__1__() {
    std::vector<std::array<int32_t, 1>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_int32_t__32__() {
    std::vector<std::array<int32_t, 32>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_int32_t__1023__() {
    std::vector<std::array<int32_t, 1023>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_int8_t__1__() {
    std::vector<std::array<int8_t, 1>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_int8_t__32__() {
    std::vector<std::array<int8_t, 32>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_int8_t__1023__() {
    std::vector<std::array<int8_t, 1023>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_float__1__() {
    std::vector<std::array<float, 1>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_float__32__() {
    std::vector<std::array<float, 32>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_float__1023__() {
    std::vector<std::array<float, 1023>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_std__string__1__() {
    std::vector<std::array<std::string, 1>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_std__string__32__() {
    std::vector<std::array<std::string, 32>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_std__string__1023__() {
    std::vector<std::array<std::string, 1023>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_bool__1__() {
    std::vector<std::array<bool, 1>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_bool__32__() {
    std::vector<std::array<bool, 32>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_bool__1023__() {
    std::vector<std::array<bool, 1023>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_uint64_t__1__() {
    std::vector<std::array<uint64_t, 1>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_uint64_t__32__() {
    std::vector<std::array<uint64_t, 32>> v;
    ar & v;
  }
  void serialize_std__vector_std__array_uint64_t__1023__() {
    std::vector<std::array<uint64_t, 1023>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_int32_t__int32_t__() {
    std::set<std::pair<int32_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_int32_t__int8_t__() {
    std::set<std::pair<int32_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_int32_t__float__() {
    std::set<std::pair<int32_t, float>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_int32_t__std__string__() {
    std::set<std::pair<int32_t, std::string>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_int32_t__bool__() {
    std::set<std::pair<int32_t, bool>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_int32_t__uint64_t__() {
    std::set<std::pair<int32_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_int8_t__int32_t__() {
    std::set<std::pair<int8_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_int8_t__int8_t__() {
    std::set<std::pair<int8_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_int8_t__float__() {
    std::set<std::pair<int8_t, float>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_int8_t__std__string__() {
    std::set<std::pair<int8_t, std::string>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_int8_t__bool__() {
    std::set<std::pair<int8_t, bool>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_int8_t__uint64_t__() {
    std::set<std::pair<int8_t, uint64_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_float__int32_t__() {
    std::set<std::pair<float, int32_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_float__int8_t__() {
    std::set<std::pair<float, int8_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_float__float__() {
    std::set<std::pair<float, float>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_float__std__string__() {
    std::set<std::pair<float, std::string>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_float__bool__() {
    std::set<std::pair<float, bool>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_float__uint64_t__() {
    std::set<std::pair<float, uint64_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_std__string__int32_t__() {
    std::set<std::pair<std::string, int32_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_std__string__int8_t__() {
    std::set<std::pair<std::string, int8_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_std__string__float__() {
    std::set<std::pair<std::string, float>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_std__string__std__string__() {
    std::set<std::pair<std::string, std::string>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_std__string__bool__() {
    std::set<std::pair<std::string, bool>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_std__string__uint64_t__() {
    std::set<std::pair<std::string, uint64_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_bool__int32_t__() {
    std::set<std::pair<bool, int32_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_bool__int8_t__() {
    std::set<std::pair<bool, int8_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_bool__float__() {
    std::set<std::pair<bool, float>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_bool__std__string__() {
    std::set<std::pair<bool, std::string>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_bool__bool__() {
    std::set<std::pair<bool, bool>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_bool__uint64_t__() {
    std::set<std::pair<bool, uint64_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_uint64_t__int32_t__() {
    std::set<std::pair<uint64_t, int32_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_uint64_t__int8_t__() {
    std::set<std::pair<uint64_t, int8_t>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_uint64_t__float__() {
    std::set<std::pair<uint64_t, float>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_uint64_t__std__string__() {
    std::set<std::pair<uint64_t, std::string>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_uint64_t__bool__() {
    std::set<std::pair<uint64_t, bool>> v;
    ar & v;
  }
  void serialize_std__set_std__pair_uint64_t__uint64_t__() {
    std::set<std::pair<uint64_t, uint64_t>> v;
    ar & v;
  }

};
