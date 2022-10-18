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
    case 12: return serialize_std__array_uint64_t__1_();
    case 13: return serialize_std__array_uint64_t__32_();
    case 14: return serialize_std__array_uint64_t__1023_();
    case 15: return serialize_std__array_bool__1_();
    case 16: return serialize_std__array_bool__32_();
    case 17: return serialize_std__array_bool__1023_();
    case 18: return serialize_std__array_int8_t__1_();
    case 19: return serialize_std__array_int8_t__32_();
    case 20: return serialize_std__array_int8_t__1023_();
    case 21: return serialize_std__array_std__string__1_();
    case 22: return serialize_std__array_std__string__32_();
    case 23: return serialize_std__array_std__string__1023_();
    case 24: return serialize_std__array_int32_t__1_();
    case 25: return serialize_std__array_int32_t__32_();
    case 26: return serialize_std__array_int32_t__1023_();
    case 27: return serialize_std__array_float__1_();
    case 28: return serialize_std__array_float__32_();
    case 29: return serialize_std__array_float__1023_();
    case 30: return serialize_std__bitset_1_();
    case 31: return serialize_std__bitset_32_();
    case 32: return serialize_std__bitset_1023_();
    case 33: return serialize_std__deque_uint64_t_();
    case 34: return serialize_std__deque_bool_();
    case 35: return serialize_std__deque_int8_t_();
    case 36: return serialize_std__deque_std__string_();
    case 37: return serialize_std__deque_int32_t_();
    case 38: return serialize_std__deque_float_();
    case 39: return serialize_std__forward_list_uint64_t_();
    case 40: return serialize_std__forward_list_bool_();
    case 41: return serialize_std__forward_list_int8_t_();
    case 42: return serialize_std__forward_list_std__string_();
    case 43: return serialize_std__forward_list_int32_t_();
    case 44: return serialize_std__forward_list_float_();
    case 45: return serialize_std__list_uint64_t_();
    case 46: return serialize_std__list_bool_();
    case 47: return serialize_std__list_int8_t_();
    case 48: return serialize_std__list_std__string_();
    case 49: return serialize_std__list_int32_t_();
    case 50: return serialize_std__list_float_();
    case 51: return serialize_std__map_uint64_t__uint64_t_();
    case 52: return serialize_std__map_uint64_t__bool_();
    case 53: return serialize_std__map_uint64_t__int8_t_();
    case 54: return serialize_std__map_uint64_t__std__string_();
    case 55: return serialize_std__map_uint64_t__int32_t_();
    case 56: return serialize_std__map_uint64_t__float_();
    case 57: return serialize_std__map_bool__uint64_t_();
    case 58: return serialize_std__map_bool__bool_();
    case 59: return serialize_std__map_bool__int8_t_();
    case 60: return serialize_std__map_bool__std__string_();
    case 61: return serialize_std__map_bool__int32_t_();
    case 62: return serialize_std__map_bool__float_();
    case 63: return serialize_std__map_int8_t__uint64_t_();
    case 64: return serialize_std__map_int8_t__bool_();
    case 65: return serialize_std__map_int8_t__int8_t_();
    case 66: return serialize_std__map_int8_t__std__string_();
    case 67: return serialize_std__map_int8_t__int32_t_();
    case 68: return serialize_std__map_int8_t__float_();
    case 69: return serialize_std__map_std__string__uint64_t_();
    case 70: return serialize_std__map_std__string__bool_();
    case 71: return serialize_std__map_std__string__int8_t_();
    case 72: return serialize_std__map_std__string__std__string_();
    case 73: return serialize_std__map_std__string__int32_t_();
    case 74: return serialize_std__map_std__string__float_();
    case 75: return serialize_std__map_int32_t__uint64_t_();
    case 76: return serialize_std__map_int32_t__bool_();
    case 77: return serialize_std__map_int32_t__int8_t_();
    case 78: return serialize_std__map_int32_t__std__string_();
    case 79: return serialize_std__map_int32_t__int32_t_();
    case 80: return serialize_std__map_int32_t__float_();
    case 81: return serialize_std__map_float__uint64_t_();
    case 82: return serialize_std__map_float__bool_();
    case 83: return serialize_std__map_float__int8_t_();
    case 84: return serialize_std__map_float__std__string_();
    case 85: return serialize_std__map_float__int32_t_();
    case 86: return serialize_std__map_float__float_();
    case 87: return serialize_std__multimap_uint64_t__uint64_t_();
    case 88: return serialize_std__multimap_uint64_t__bool_();
    case 89: return serialize_std__multimap_uint64_t__int8_t_();
    case 90: return serialize_std__multimap_uint64_t__std__string_();
    case 91: return serialize_std__multimap_uint64_t__int32_t_();
    case 92: return serialize_std__multimap_uint64_t__float_();
    case 93: return serialize_std__multimap_bool__uint64_t_();
    case 94: return serialize_std__multimap_bool__bool_();
    case 95: return serialize_std__multimap_bool__int8_t_();
    case 96: return serialize_std__multimap_bool__std__string_();
    case 97: return serialize_std__multimap_bool__int32_t_();
    case 98: return serialize_std__multimap_bool__float_();
    case 99: return serialize_std__multimap_int8_t__uint64_t_();
    case 100: return serialize_std__multimap_int8_t__bool_();
    case 101: return serialize_std__multimap_int8_t__int8_t_();
    case 102: return serialize_std__multimap_int8_t__std__string_();
    case 103: return serialize_std__multimap_int8_t__int32_t_();
    case 104: return serialize_std__multimap_int8_t__float_();
    case 105: return serialize_std__multimap_std__string__uint64_t_();
    case 106: return serialize_std__multimap_std__string__bool_();
    case 107: return serialize_std__multimap_std__string__int8_t_();
    case 108: return serialize_std__multimap_std__string__std__string_();
    case 109: return serialize_std__multimap_std__string__int32_t_();
    case 110: return serialize_std__multimap_std__string__float_();
    case 111: return serialize_std__multimap_int32_t__uint64_t_();
    case 112: return serialize_std__multimap_int32_t__bool_();
    case 113: return serialize_std__multimap_int32_t__int8_t_();
    case 114: return serialize_std__multimap_int32_t__std__string_();
    case 115: return serialize_std__multimap_int32_t__int32_t_();
    case 116: return serialize_std__multimap_int32_t__float_();
    case 117: return serialize_std__multimap_float__uint64_t_();
    case 118: return serialize_std__multimap_float__bool_();
    case 119: return serialize_std__multimap_float__int8_t_();
    case 120: return serialize_std__multimap_float__std__string_();
    case 121: return serialize_std__multimap_float__int32_t_();
    case 122: return serialize_std__multimap_float__float_();
    case 123: return serialize_std__multiset_uint64_t_();
    case 124: return serialize_std__multiset_bool_();
    case 125: return serialize_std__multiset_int8_t_();
    case 126: return serialize_std__multiset_std__string_();
    case 127: return serialize_std__multiset_int32_t_();
    case 128: return serialize_std__multiset_float_();
    case 129: return serialize_std__pair_uint64_t__uint64_t_();
    case 130: return serialize_std__pair_uint64_t__bool_();
    case 131: return serialize_std__pair_uint64_t__int8_t_();
    case 132: return serialize_std__pair_uint64_t__std__string_();
    case 133: return serialize_std__pair_uint64_t__int32_t_();
    case 134: return serialize_std__pair_uint64_t__float_();
    case 135: return serialize_std__pair_bool__uint64_t_();
    case 136: return serialize_std__pair_bool__bool_();
    case 137: return serialize_std__pair_bool__int8_t_();
    case 138: return serialize_std__pair_bool__std__string_();
    case 139: return serialize_std__pair_bool__int32_t_();
    case 140: return serialize_std__pair_bool__float_();
    case 141: return serialize_std__pair_int8_t__uint64_t_();
    case 142: return serialize_std__pair_int8_t__bool_();
    case 143: return serialize_std__pair_int8_t__int8_t_();
    case 144: return serialize_std__pair_int8_t__std__string_();
    case 145: return serialize_std__pair_int8_t__int32_t_();
    case 146: return serialize_std__pair_int8_t__float_();
    case 147: return serialize_std__pair_std__string__uint64_t_();
    case 148: return serialize_std__pair_std__string__bool_();
    case 149: return serialize_std__pair_std__string__int8_t_();
    case 150: return serialize_std__pair_std__string__std__string_();
    case 151: return serialize_std__pair_std__string__int32_t_();
    case 152: return serialize_std__pair_std__string__float_();
    case 153: return serialize_std__pair_int32_t__uint64_t_();
    case 154: return serialize_std__pair_int32_t__bool_();
    case 155: return serialize_std__pair_int32_t__int8_t_();
    case 156: return serialize_std__pair_int32_t__std__string_();
    case 157: return serialize_std__pair_int32_t__int32_t_();
    case 158: return serialize_std__pair_int32_t__float_();
    case 159: return serialize_std__pair_float__uint64_t_();
    case 160: return serialize_std__pair_float__bool_();
    case 161: return serialize_std__pair_float__int8_t_();
    case 162: return serialize_std__pair_float__std__string_();
    case 163: return serialize_std__pair_float__int32_t_();
    case 164: return serialize_std__pair_float__float_();
    case 165: return serialize_std__set_uint64_t_();
    case 166: return serialize_std__set_bool_();
    case 167: return serialize_std__set_int8_t_();
    case 168: return serialize_std__set_std__string_();
    case 169: return serialize_std__set_int32_t_();
    case 170: return serialize_std__set_float_();
    case 171: return serialize_std__unordered_map_uint64_t__uint64_t_();
    case 172: return serialize_std__unordered_map_uint64_t__bool_();
    case 173: return serialize_std__unordered_map_uint64_t__int8_t_();
    case 174: return serialize_std__unordered_map_uint64_t__std__string_();
    case 175: return serialize_std__unordered_map_uint64_t__int32_t_();
    case 176: return serialize_std__unordered_map_uint64_t__float_();
    case 177: return serialize_std__unordered_map_bool__uint64_t_();
    case 178: return serialize_std__unordered_map_bool__bool_();
    case 179: return serialize_std__unordered_map_bool__int8_t_();
    case 180: return serialize_std__unordered_map_bool__std__string_();
    case 181: return serialize_std__unordered_map_bool__int32_t_();
    case 182: return serialize_std__unordered_map_bool__float_();
    case 183: return serialize_std__unordered_map_int8_t__uint64_t_();
    case 184: return serialize_std__unordered_map_int8_t__bool_();
    case 185: return serialize_std__unordered_map_int8_t__int8_t_();
    case 186: return serialize_std__unordered_map_int8_t__std__string_();
    case 187: return serialize_std__unordered_map_int8_t__int32_t_();
    case 188: return serialize_std__unordered_map_int8_t__float_();
    case 189: return serialize_std__unordered_map_std__string__uint64_t_();
    case 190: return serialize_std__unordered_map_std__string__bool_();
    case 191: return serialize_std__unordered_map_std__string__int8_t_();
    case 192: return serialize_std__unordered_map_std__string__std__string_();
    case 193: return serialize_std__unordered_map_std__string__int32_t_();
    case 194: return serialize_std__unordered_map_std__string__float_();
    case 195: return serialize_std__unordered_map_int32_t__uint64_t_();
    case 196: return serialize_std__unordered_map_int32_t__bool_();
    case 197: return serialize_std__unordered_map_int32_t__int8_t_();
    case 198: return serialize_std__unordered_map_int32_t__std__string_();
    case 199: return serialize_std__unordered_map_int32_t__int32_t_();
    case 200: return serialize_std__unordered_map_int32_t__float_();
    case 201: return serialize_std__unordered_map_float__uint64_t_();
    case 202: return serialize_std__unordered_map_float__bool_();
    case 203: return serialize_std__unordered_map_float__int8_t_();
    case 204: return serialize_std__unordered_map_float__std__string_();
    case 205: return serialize_std__unordered_map_float__int32_t_();
    case 206: return serialize_std__unordered_map_float__float_();
    case 207: return serialize_std__unordered_multimap_uint64_t__uint64_t_();
    case 208: return serialize_std__unordered_multimap_uint64_t__bool_();
    case 209: return serialize_std__unordered_multimap_uint64_t__int8_t_();
    case 210: return serialize_std__unordered_multimap_uint64_t__std__string_();
    case 211: return serialize_std__unordered_multimap_uint64_t__int32_t_();
    case 212: return serialize_std__unordered_multimap_uint64_t__float_();
    case 213: return serialize_std__unordered_multimap_bool__uint64_t_();
    case 214: return serialize_std__unordered_multimap_bool__bool_();
    case 215: return serialize_std__unordered_multimap_bool__int8_t_();
    case 216: return serialize_std__unordered_multimap_bool__std__string_();
    case 217: return serialize_std__unordered_multimap_bool__int32_t_();
    case 218: return serialize_std__unordered_multimap_bool__float_();
    case 219: return serialize_std__unordered_multimap_int8_t__uint64_t_();
    case 220: return serialize_std__unordered_multimap_int8_t__bool_();
    case 221: return serialize_std__unordered_multimap_int8_t__int8_t_();
    case 222: return serialize_std__unordered_multimap_int8_t__std__string_();
    case 223: return serialize_std__unordered_multimap_int8_t__int32_t_();
    case 224: return serialize_std__unordered_multimap_int8_t__float_();
    case 225: return serialize_std__unordered_multimap_std__string__uint64_t_();
    case 226: return serialize_std__unordered_multimap_std__string__bool_();
    case 227: return serialize_std__unordered_multimap_std__string__int8_t_();
    case 228: return serialize_std__unordered_multimap_std__string__std__string_();
    case 229: return serialize_std__unordered_multimap_std__string__int32_t_();
    case 230: return serialize_std__unordered_multimap_std__string__float_();
    case 231: return serialize_std__unordered_multimap_int32_t__uint64_t_();
    case 232: return serialize_std__unordered_multimap_int32_t__bool_();
    case 233: return serialize_std__unordered_multimap_int32_t__int8_t_();
    case 234: return serialize_std__unordered_multimap_int32_t__std__string_();
    case 235: return serialize_std__unordered_multimap_int32_t__int32_t_();
    case 236: return serialize_std__unordered_multimap_int32_t__float_();
    case 237: return serialize_std__unordered_multimap_float__uint64_t_();
    case 238: return serialize_std__unordered_multimap_float__bool_();
    case 239: return serialize_std__unordered_multimap_float__int8_t_();
    case 240: return serialize_std__unordered_multimap_float__std__string_();
    case 241: return serialize_std__unordered_multimap_float__int32_t_();
    case 242: return serialize_std__unordered_multimap_float__float_();
    case 243: return serialize_std__unordered_multiset_uint64_t_();
    case 244: return serialize_std__unordered_multiset_bool_();
    case 245: return serialize_std__unordered_multiset_int8_t_();
    case 246: return serialize_std__unordered_multiset_std__string_();
    case 247: return serialize_std__unordered_multiset_int32_t_();
    case 248: return serialize_std__unordered_multiset_float_();
    case 249: return serialize_std__unordered_set_uint64_t_();
    case 250: return serialize_std__unordered_set_bool_();
    case 251: return serialize_std__unordered_set_int8_t_();
    case 252: return serialize_std__unordered_set_std__string_();
    case 253: return serialize_std__unordered_set_int32_t_();
    case 254: return serialize_std__unordered_set_float_();
    case 255: return serialize_std__vector_uint64_t_();
    case 256: return serialize_std__vector_bool_();
    case 257: return serialize_std__vector_int8_t_();
    case 258: return serialize_std__vector_std__string_();
    case 259: return serialize_std__vector_int32_t_();
    case 260: return serialize_std__vector_float_();
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
  void serialize_std__deque_uint64_t_() {
    std::deque<uint64_t> v;
    ar & v;
  }
  void serialize_std__deque_bool_() {
    std::deque<bool> v;
    ar & v;
  }
  void serialize_std__deque_int8_t_() {
    std::deque<int8_t> v;
    ar & v;
  }
  void serialize_std__deque_std__string_() {
    std::deque<std::string> v;
    ar & v;
  }
  void serialize_std__deque_int32_t_() {
    std::deque<int32_t> v;
    ar & v;
  }
  void serialize_std__deque_float_() {
    std::deque<float> v;
    ar & v;
  }
  void serialize_std__forward_list_uint64_t_() {
    std::forward_list<uint64_t> v;
    ar & v;
  }
  void serialize_std__forward_list_bool_() {
    std::forward_list<bool> v;
    ar & v;
  }
  void serialize_std__forward_list_int8_t_() {
    std::forward_list<int8_t> v;
    ar & v;
  }
  void serialize_std__forward_list_std__string_() {
    std::forward_list<std::string> v;
    ar & v;
  }
  void serialize_std__forward_list_int32_t_() {
    std::forward_list<int32_t> v;
    ar & v;
  }
  void serialize_std__forward_list_float_() {
    std::forward_list<float> v;
    ar & v;
  }
  void serialize_std__list_uint64_t_() {
    std::list<uint64_t> v;
    ar & v;
  }
  void serialize_std__list_bool_() {
    std::list<bool> v;
    ar & v;
  }
  void serialize_std__list_int8_t_() {
    std::list<int8_t> v;
    ar & v;
  }
  void serialize_std__list_std__string_() {
    std::list<std::string> v;
    ar & v;
  }
  void serialize_std__list_int32_t_() {
    std::list<int32_t> v;
    ar & v;
  }
  void serialize_std__list_float_() {
    std::list<float> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__uint64_t_() {
    std::map<uint64_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__bool_() {
    std::map<uint64_t, bool> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__int8_t_() {
    std::map<uint64_t, int8_t> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__std__string_() {
    std::map<uint64_t, std::string> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__int32_t_() {
    std::map<uint64_t, int32_t> v;
    ar & v;
  }
  void serialize_std__map_uint64_t__float_() {
    std::map<uint64_t, float> v;
    ar & v;
  }
  void serialize_std__map_bool__uint64_t_() {
    std::map<bool, uint64_t> v;
    ar & v;
  }
  void serialize_std__map_bool__bool_() {
    std::map<bool, bool> v;
    ar & v;
  }
  void serialize_std__map_bool__int8_t_() {
    std::map<bool, int8_t> v;
    ar & v;
  }
  void serialize_std__map_bool__std__string_() {
    std::map<bool, std::string> v;
    ar & v;
  }
  void serialize_std__map_bool__int32_t_() {
    std::map<bool, int32_t> v;
    ar & v;
  }
  void serialize_std__map_bool__float_() {
    std::map<bool, float> v;
    ar & v;
  }
  void serialize_std__map_int8_t__uint64_t_() {
    std::map<int8_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__map_int8_t__bool_() {
    std::map<int8_t, bool> v;
    ar & v;
  }
  void serialize_std__map_int8_t__int8_t_() {
    std::map<int8_t, int8_t> v;
    ar & v;
  }
  void serialize_std__map_int8_t__std__string_() {
    std::map<int8_t, std::string> v;
    ar & v;
  }
  void serialize_std__map_int8_t__int32_t_() {
    std::map<int8_t, int32_t> v;
    ar & v;
  }
  void serialize_std__map_int8_t__float_() {
    std::map<int8_t, float> v;
    ar & v;
  }
  void serialize_std__map_std__string__uint64_t_() {
    std::map<std::string, uint64_t> v;
    ar & v;
  }
  void serialize_std__map_std__string__bool_() {
    std::map<std::string, bool> v;
    ar & v;
  }
  void serialize_std__map_std__string__int8_t_() {
    std::map<std::string, int8_t> v;
    ar & v;
  }
  void serialize_std__map_std__string__std__string_() {
    std::map<std::string, std::string> v;
    ar & v;
  }
  void serialize_std__map_std__string__int32_t_() {
    std::map<std::string, int32_t> v;
    ar & v;
  }
  void serialize_std__map_std__string__float_() {
    std::map<std::string, float> v;
    ar & v;
  }
  void serialize_std__map_int32_t__uint64_t_() {
    std::map<int32_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__map_int32_t__bool_() {
    std::map<int32_t, bool> v;
    ar & v;
  }
  void serialize_std__map_int32_t__int8_t_() {
    std::map<int32_t, int8_t> v;
    ar & v;
  }
  void serialize_std__map_int32_t__std__string_() {
    std::map<int32_t, std::string> v;
    ar & v;
  }
  void serialize_std__map_int32_t__int32_t_() {
    std::map<int32_t, int32_t> v;
    ar & v;
  }
  void serialize_std__map_int32_t__float_() {
    std::map<int32_t, float> v;
    ar & v;
  }
  void serialize_std__map_float__uint64_t_() {
    std::map<float, uint64_t> v;
    ar & v;
  }
  void serialize_std__map_float__bool_() {
    std::map<float, bool> v;
    ar & v;
  }
  void serialize_std__map_float__int8_t_() {
    std::map<float, int8_t> v;
    ar & v;
  }
  void serialize_std__map_float__std__string_() {
    std::map<float, std::string> v;
    ar & v;
  }
  void serialize_std__map_float__int32_t_() {
    std::map<float, int32_t> v;
    ar & v;
  }
  void serialize_std__map_float__float_() {
    std::map<float, float> v;
    ar & v;
  }
  void serialize_std__multimap_uint64_t__uint64_t_() {
    std::multimap<uint64_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__multimap_uint64_t__bool_() {
    std::multimap<uint64_t, bool> v;
    ar & v;
  }
  void serialize_std__multimap_uint64_t__int8_t_() {
    std::multimap<uint64_t, int8_t> v;
    ar & v;
  }
  void serialize_std__multimap_uint64_t__std__string_() {
    std::multimap<uint64_t, std::string> v;
    ar & v;
  }
  void serialize_std__multimap_uint64_t__int32_t_() {
    std::multimap<uint64_t, int32_t> v;
    ar & v;
  }
  void serialize_std__multimap_uint64_t__float_() {
    std::multimap<uint64_t, float> v;
    ar & v;
  }
  void serialize_std__multimap_bool__uint64_t_() {
    std::multimap<bool, uint64_t> v;
    ar & v;
  }
  void serialize_std__multimap_bool__bool_() {
    std::multimap<bool, bool> v;
    ar & v;
  }
  void serialize_std__multimap_bool__int8_t_() {
    std::multimap<bool, int8_t> v;
    ar & v;
  }
  void serialize_std__multimap_bool__std__string_() {
    std::multimap<bool, std::string> v;
    ar & v;
  }
  void serialize_std__multimap_bool__int32_t_() {
    std::multimap<bool, int32_t> v;
    ar & v;
  }
  void serialize_std__multimap_bool__float_() {
    std::multimap<bool, float> v;
    ar & v;
  }
  void serialize_std__multimap_int8_t__uint64_t_() {
    std::multimap<int8_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__multimap_int8_t__bool_() {
    std::multimap<int8_t, bool> v;
    ar & v;
  }
  void serialize_std__multimap_int8_t__int8_t_() {
    std::multimap<int8_t, int8_t> v;
    ar & v;
  }
  void serialize_std__multimap_int8_t__std__string_() {
    std::multimap<int8_t, std::string> v;
    ar & v;
  }
  void serialize_std__multimap_int8_t__int32_t_() {
    std::multimap<int8_t, int32_t> v;
    ar & v;
  }
  void serialize_std__multimap_int8_t__float_() {
    std::multimap<int8_t, float> v;
    ar & v;
  }
  void serialize_std__multimap_std__string__uint64_t_() {
    std::multimap<std::string, uint64_t> v;
    ar & v;
  }
  void serialize_std__multimap_std__string__bool_() {
    std::multimap<std::string, bool> v;
    ar & v;
  }
  void serialize_std__multimap_std__string__int8_t_() {
    std::multimap<std::string, int8_t> v;
    ar & v;
  }
  void serialize_std__multimap_std__string__std__string_() {
    std::multimap<std::string, std::string> v;
    ar & v;
  }
  void serialize_std__multimap_std__string__int32_t_() {
    std::multimap<std::string, int32_t> v;
    ar & v;
  }
  void serialize_std__multimap_std__string__float_() {
    std::multimap<std::string, float> v;
    ar & v;
  }
  void serialize_std__multimap_int32_t__uint64_t_() {
    std::multimap<int32_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__multimap_int32_t__bool_() {
    std::multimap<int32_t, bool> v;
    ar & v;
  }
  void serialize_std__multimap_int32_t__int8_t_() {
    std::multimap<int32_t, int8_t> v;
    ar & v;
  }
  void serialize_std__multimap_int32_t__std__string_() {
    std::multimap<int32_t, std::string> v;
    ar & v;
  }
  void serialize_std__multimap_int32_t__int32_t_() {
    std::multimap<int32_t, int32_t> v;
    ar & v;
  }
  void serialize_std__multimap_int32_t__float_() {
    std::multimap<int32_t, float> v;
    ar & v;
  }
  void serialize_std__multimap_float__uint64_t_() {
    std::multimap<float, uint64_t> v;
    ar & v;
  }
  void serialize_std__multimap_float__bool_() {
    std::multimap<float, bool> v;
    ar & v;
  }
  void serialize_std__multimap_float__int8_t_() {
    std::multimap<float, int8_t> v;
    ar & v;
  }
  void serialize_std__multimap_float__std__string_() {
    std::multimap<float, std::string> v;
    ar & v;
  }
  void serialize_std__multimap_float__int32_t_() {
    std::multimap<float, int32_t> v;
    ar & v;
  }
  void serialize_std__multimap_float__float_() {
    std::multimap<float, float> v;
    ar & v;
  }
  void serialize_std__multiset_uint64_t_() {
    std::multiset<uint64_t> v;
    ar & v;
  }
  void serialize_std__multiset_bool_() {
    std::multiset<bool> v;
    ar & v;
  }
  void serialize_std__multiset_int8_t_() {
    std::multiset<int8_t> v;
    ar & v;
  }
  void serialize_std__multiset_std__string_() {
    std::multiset<std::string> v;
    ar & v;
  }
  void serialize_std__multiset_int32_t_() {
    std::multiset<int32_t> v;
    ar & v;
  }
  void serialize_std__multiset_float_() {
    std::multiset<float> v;
    ar & v;
  }
  void serialize_std__pair_uint64_t__uint64_t_() {
    std::pair<uint64_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__pair_uint64_t__bool_() {
    std::pair<uint64_t, bool> v;
    ar & v;
  }
  void serialize_std__pair_uint64_t__int8_t_() {
    std::pair<uint64_t, int8_t> v;
    ar & v;
  }
  void serialize_std__pair_uint64_t__std__string_() {
    std::pair<uint64_t, std::string> v;
    ar & v;
  }
  void serialize_std__pair_uint64_t__int32_t_() {
    std::pair<uint64_t, int32_t> v;
    ar & v;
  }
  void serialize_std__pair_uint64_t__float_() {
    std::pair<uint64_t, float> v;
    ar & v;
  }
  void serialize_std__pair_bool__uint64_t_() {
    std::pair<bool, uint64_t> v;
    ar & v;
  }
  void serialize_std__pair_bool__bool_() {
    std::pair<bool, bool> v;
    ar & v;
  }
  void serialize_std__pair_bool__int8_t_() {
    std::pair<bool, int8_t> v;
    ar & v;
  }
  void serialize_std__pair_bool__std__string_() {
    std::pair<bool, std::string> v;
    ar & v;
  }
  void serialize_std__pair_bool__int32_t_() {
    std::pair<bool, int32_t> v;
    ar & v;
  }
  void serialize_std__pair_bool__float_() {
    std::pair<bool, float> v;
    ar & v;
  }
  void serialize_std__pair_int8_t__uint64_t_() {
    std::pair<int8_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__pair_int8_t__bool_() {
    std::pair<int8_t, bool> v;
    ar & v;
  }
  void serialize_std__pair_int8_t__int8_t_() {
    std::pair<int8_t, int8_t> v;
    ar & v;
  }
  void serialize_std__pair_int8_t__std__string_() {
    std::pair<int8_t, std::string> v;
    ar & v;
  }
  void serialize_std__pair_int8_t__int32_t_() {
    std::pair<int8_t, int32_t> v;
    ar & v;
  }
  void serialize_std__pair_int8_t__float_() {
    std::pair<int8_t, float> v;
    ar & v;
  }
  void serialize_std__pair_std__string__uint64_t_() {
    std::pair<std::string, uint64_t> v;
    ar & v;
  }
  void serialize_std__pair_std__string__bool_() {
    std::pair<std::string, bool> v;
    ar & v;
  }
  void serialize_std__pair_std__string__int8_t_() {
    std::pair<std::string, int8_t> v;
    ar & v;
  }
  void serialize_std__pair_std__string__std__string_() {
    std::pair<std::string, std::string> v;
    ar & v;
  }
  void serialize_std__pair_std__string__int32_t_() {
    std::pair<std::string, int32_t> v;
    ar & v;
  }
  void serialize_std__pair_std__string__float_() {
    std::pair<std::string, float> v;
    ar & v;
  }
  void serialize_std__pair_int32_t__uint64_t_() {
    std::pair<int32_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__pair_int32_t__bool_() {
    std::pair<int32_t, bool> v;
    ar & v;
  }
  void serialize_std__pair_int32_t__int8_t_() {
    std::pair<int32_t, int8_t> v;
    ar & v;
  }
  void serialize_std__pair_int32_t__std__string_() {
    std::pair<int32_t, std::string> v;
    ar & v;
  }
  void serialize_std__pair_int32_t__int32_t_() {
    std::pair<int32_t, int32_t> v;
    ar & v;
  }
  void serialize_std__pair_int32_t__float_() {
    std::pair<int32_t, float> v;
    ar & v;
  }
  void serialize_std__pair_float__uint64_t_() {
    std::pair<float, uint64_t> v;
    ar & v;
  }
  void serialize_std__pair_float__bool_() {
    std::pair<float, bool> v;
    ar & v;
  }
  void serialize_std__pair_float__int8_t_() {
    std::pair<float, int8_t> v;
    ar & v;
  }
  void serialize_std__pair_float__std__string_() {
    std::pair<float, std::string> v;
    ar & v;
  }
  void serialize_std__pair_float__int32_t_() {
    std::pair<float, int32_t> v;
    ar & v;
  }
  void serialize_std__pair_float__float_() {
    std::pair<float, float> v;
    ar & v;
  }
  void serialize_std__set_uint64_t_() {
    std::set<uint64_t> v;
    ar & v;
  }
  void serialize_std__set_bool_() {
    std::set<bool> v;
    ar & v;
  }
  void serialize_std__set_int8_t_() {
    std::set<int8_t> v;
    ar & v;
  }
  void serialize_std__set_std__string_() {
    std::set<std::string> v;
    ar & v;
  }
  void serialize_std__set_int32_t_() {
    std::set<int32_t> v;
    ar & v;
  }
  void serialize_std__set_float_() {
    std::set<float> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__uint64_t_() {
    std::unordered_map<uint64_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__bool_() {
    std::unordered_map<uint64_t, bool> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__int8_t_() {
    std::unordered_map<uint64_t, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__std__string_() {
    std::unordered_map<uint64_t, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__int32_t_() {
    std::unordered_map<uint64_t, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_uint64_t__float_() {
    std::unordered_map<uint64_t, float> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__uint64_t_() {
    std::unordered_map<bool, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__bool_() {
    std::unordered_map<bool, bool> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__int8_t_() {
    std::unordered_map<bool, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__std__string_() {
    std::unordered_map<bool, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__int32_t_() {
    std::unordered_map<bool, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_bool__float_() {
    std::unordered_map<bool, float> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__uint64_t_() {
    std::unordered_map<int8_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__bool_() {
    std::unordered_map<int8_t, bool> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__int8_t_() {
    std::unordered_map<int8_t, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__std__string_() {
    std::unordered_map<int8_t, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__int32_t_() {
    std::unordered_map<int8_t, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_int8_t__float_() {
    std::unordered_map<int8_t, float> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__uint64_t_() {
    std::unordered_map<std::string, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__bool_() {
    std::unordered_map<std::string, bool> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__int8_t_() {
    std::unordered_map<std::string, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__std__string_() {
    std::unordered_map<std::string, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__int32_t_() {
    std::unordered_map<std::string, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_std__string__float_() {
    std::unordered_map<std::string, float> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__uint64_t_() {
    std::unordered_map<int32_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__bool_() {
    std::unordered_map<int32_t, bool> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__int8_t_() {
    std::unordered_map<int32_t, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__std__string_() {
    std::unordered_map<int32_t, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__int32_t_() {
    std::unordered_map<int32_t, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_int32_t__float_() {
    std::unordered_map<int32_t, float> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__uint64_t_() {
    std::unordered_map<float, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__bool_() {
    std::unordered_map<float, bool> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__int8_t_() {
    std::unordered_map<float, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__std__string_() {
    std::unordered_map<float, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__int32_t_() {
    std::unordered_map<float, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_map_float__float_() {
    std::unordered_map<float, float> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_uint64_t__uint64_t_() {
    std::unordered_multimap<uint64_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_uint64_t__bool_() {
    std::unordered_multimap<uint64_t, bool> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_uint64_t__int8_t_() {
    std::unordered_multimap<uint64_t, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_uint64_t__std__string_() {
    std::unordered_multimap<uint64_t, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_uint64_t__int32_t_() {
    std::unordered_multimap<uint64_t, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_uint64_t__float_() {
    std::unordered_multimap<uint64_t, float> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_bool__uint64_t_() {
    std::unordered_multimap<bool, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_bool__bool_() {
    std::unordered_multimap<bool, bool> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_bool__int8_t_() {
    std::unordered_multimap<bool, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_bool__std__string_() {
    std::unordered_multimap<bool, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_bool__int32_t_() {
    std::unordered_multimap<bool, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_bool__float_() {
    std::unordered_multimap<bool, float> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int8_t__uint64_t_() {
    std::unordered_multimap<int8_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int8_t__bool_() {
    std::unordered_multimap<int8_t, bool> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int8_t__int8_t_() {
    std::unordered_multimap<int8_t, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int8_t__std__string_() {
    std::unordered_multimap<int8_t, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int8_t__int32_t_() {
    std::unordered_multimap<int8_t, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int8_t__float_() {
    std::unordered_multimap<int8_t, float> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_std__string__uint64_t_() {
    std::unordered_multimap<std::string, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_std__string__bool_() {
    std::unordered_multimap<std::string, bool> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_std__string__int8_t_() {
    std::unordered_multimap<std::string, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_std__string__std__string_() {
    std::unordered_multimap<std::string, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_std__string__int32_t_() {
    std::unordered_multimap<std::string, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_std__string__float_() {
    std::unordered_multimap<std::string, float> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int32_t__uint64_t_() {
    std::unordered_multimap<int32_t, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int32_t__bool_() {
    std::unordered_multimap<int32_t, bool> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int32_t__int8_t_() {
    std::unordered_multimap<int32_t, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int32_t__std__string_() {
    std::unordered_multimap<int32_t, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int32_t__int32_t_() {
    std::unordered_multimap<int32_t, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_int32_t__float_() {
    std::unordered_multimap<int32_t, float> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_float__uint64_t_() {
    std::unordered_multimap<float, uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_float__bool_() {
    std::unordered_multimap<float, bool> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_float__int8_t_() {
    std::unordered_multimap<float, int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_float__std__string_() {
    std::unordered_multimap<float, std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_float__int32_t_() {
    std::unordered_multimap<float, int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multimap_float__float_() {
    std::unordered_multimap<float, float> v;
    ar & v;
  }
  void serialize_std__unordered_multiset_uint64_t_() {
    std::unordered_multiset<uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_multiset_bool_() {
    std::unordered_multiset<bool> v;
    ar & v;
  }
  void serialize_std__unordered_multiset_int8_t_() {
    std::unordered_multiset<int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_multiset_std__string_() {
    std::unordered_multiset<std::string> v;
    ar & v;
  }
  void serialize_std__unordered_multiset_int32_t_() {
    std::unordered_multiset<int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_multiset_float_() {
    std::unordered_multiset<float> v;
    ar & v;
  }
  void serialize_std__unordered_set_uint64_t_() {
    std::unordered_set<uint64_t> v;
    ar & v;
  }
  void serialize_std__unordered_set_bool_() {
    std::unordered_set<bool> v;
    ar & v;
  }
  void serialize_std__unordered_set_int8_t_() {
    std::unordered_set<int8_t> v;
    ar & v;
  }
  void serialize_std__unordered_set_std__string_() {
    std::unordered_set<std::string> v;
    ar & v;
  }
  void serialize_std__unordered_set_int32_t_() {
    std::unordered_set<int32_t> v;
    ar & v;
  }
  void serialize_std__unordered_set_float_() {
    std::unordered_set<float> v;
    ar & v;
  }
  void serialize_std__vector_uint64_t_() {
    std::vector<uint64_t> v;
    ar & v;
  }
  void serialize_std__vector_bool_() {
    std::vector<bool> v;
    ar & v;
  }
  void serialize_std__vector_int8_t_() {
    std::vector<int8_t> v;
    ar & v;
  }
  void serialize_std__vector_std__string_() {
    std::vector<std::string> v;
    ar & v;
  }
  void serialize_std__vector_int32_t_() {
    std::vector<int32_t> v;
    ar & v;
  }
  void serialize_std__vector_float_() {
    std::vector<float> v;
    ar & v;
  }

};
