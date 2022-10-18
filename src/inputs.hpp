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
struct InputsGenerator {
  Serializer& ar;

  InputsGenerator(Serializer& ar) : ar(ar) {}

  uint16_t generate(size_t id) {
    switch(id) {
      case 0: return input_0();
      case 1: return input_1();
      case 2: return input_2();
      case 3: return input_3();
      case 4: return input_4();
      case 5: return input_5();
      case 6: return input_6();
      case 7: return input_7();
      case 8: return input_8();
      case 9: return input_9();
      case 10: return input_10();
      case 11: return input_11();
      case 12: return input_12();
      case 13: return input_13();
      case 14: return input_14();
      case 15: return input_15();
      case 16: return input_16();
      case 17: return input_17();
      case 18: return input_18();
      case 19: return input_19();
      case 20: return input_20();
      case 21: return input_21();
      case 22: return input_22();
      case 23: return input_23();
      case 24: return input_24();
      case 25: return input_25();
      case 26: return input_26();
      case 27: return input_27();
      case 28: return input_28();
      case 29: return input_29();
      case 30: return input_30();
      case 31: return input_31();
      case 32: return input_32();
      case 33: return input_33();
      case 34: return input_34();
      case 35: return input_35();
      case 36: return input_36();
      case 37: return input_37();
      case 38: return input_38();
      case 39: return input_39();
      case 40: return input_40();
      case 41: return input_41();
      case 42: return input_42();
      case 43: return input_43();
      case 44: return input_44();
      case 45: return input_45();
      case 46: return input_46();
      case 47: return input_47();
      case 48: return input_48();
      case 49: return input_49();
      case 50: return input_50();
      case 51: return input_51();
      case 52: return input_52();
      case 53: return input_53();
      case 54: return input_54();
      case 55: return input_55();
      case 56: return input_56();
      case 57: return input_57();
      case 58: return input_58();
      case 59: return input_59();
      case 60: return input_60();
      case 61: return input_61();
      case 62: return input_62();
      case 63: return input_63();
      case 64: return input_64();
      case 65: return input_65();
      case 66: return input_66();
      case 67: return input_67();
      case 68: return input_68();
      case 69: return input_69();
      case 70: return input_70();
      case 71: return input_71();
      case 72: return input_72();
      case 73: return input_73();
      case 74: return input_74();
      case 75: return input_75();
      case 76: return input_76();
      case 77: return input_77();
      case 78: return input_78();
      case 79: return input_79();
      case 80: return input_80();
      case 81: return input_81();
      case 82: return input_82();
      case 83: return input_83();
      case 84: return input_84();
      case 85: return input_85();
      case 86: return input_86();
      case 87: return input_87();
      case 88: return input_88();
      case 89: return input_89();
      case 90: return input_90();
      case 91: return input_91();
      case 92: return input_92();
      case 93: return input_93();
      case 94: return input_94();
      case 95: return input_95();
      case 96: return input_96();
      case 97: return input_97();
      case 98: return input_98();
      case 99: return input_99();
      case 100: return input_100();
      case 101: return input_101();
      case 102: return input_102();
      case 103: return input_103();
      case 104: return input_104();
      case 105: return input_105();
      case 106: return input_106();
      case 107: return input_107();
      case 108: return input_108();
      case 109: return input_109();
      case 110: return input_110();
      case 111: return input_111();
      case 112: return input_112();
      case 113: return input_113();
      case 114: return input_114();
      case 115: return input_115();
      case 116: return input_116();
      case 117: return input_117();
      case 118: return input_118();
      case 119: return input_119();
      case 120: return input_120();
      case 121: return input_121();
      case 122: return input_122();
      case 123: return input_123();
      case 124: return input_124();
      case 125: return input_125();
      case 126: return input_126();
      case 127: return input_127();
      case 128: return input_128();
      case 129: return input_129();
      case 130: return input_130();
      case 131: return input_131();
      case 132: return input_132();
      case 133: return input_133();
      case 134: return input_134();
      case 135: return input_135();
      case 136: return input_136();
      case 137: return input_137();
      case 138: return input_138();
      case 139: return input_139();
      case 140: return input_140();
      case 141: return input_141();
      case 142: return input_142();
      case 143: return input_143();
      case 144: return input_144();
      case 145: return input_145();
      case 146: return input_146();
      case 147: return input_147();
      case 148: return input_148();
      case 149: return input_149();
      case 150: return input_150();
      case 151: return input_151();
      case 152: return input_152();
      case 153: return input_153();
      case 154: return input_154();
      case 155: return input_155();
      case 156: return input_156();
      case 157: return input_157();
      case 158: return input_158();
      case 159: return input_159();
      case 160: return input_160();
      case 161: return input_161();
      case 162: return input_162();
      case 163: return input_163();
      case 164: return input_164();
      case 165: return input_165();
      case 166: return input_166();
      case 167: return input_167();
      case 168: return input_168();
      case 169: return input_169();
      case 170: return input_170();
      case 171: return input_171();
      case 172: return input_172();
      case 173: return input_173();
      case 174: return input_174();
      case 175: return input_175();
      case 176: return input_176();
      case 177: return input_177();
      case 178: return input_178();
      case 179: return input_179();
      case 180: return input_180();
      case 181: return input_181();
      case 182: return input_182();
      case 183: return input_183();
      case 184: return input_184();
      case 185: return input_185();
      case 186: return input_186();
      case 187: return input_187();
      case 188: return input_188();
      case 189: return input_189();
      case 190: return input_190();
      case 191: return input_191();
      case 192: return input_192();
      case 193: return input_193();
      case 194: return input_194();
      case 195: return input_195();
      case 196: return input_196();
      case 197: return input_197();
      case 198: return input_198();
      case 199: return input_199();
      case 200: return input_200();
      case 201: return input_201();
      case 202: return input_202();
      case 203: return input_203();
      case 204: return input_204();
      case 205: return input_205();
      case 206: return input_206();
      case 207: return input_207();
      case 208: return input_208();
      case 209: return input_209();
      case 210: return input_210();
      case 211: return input_211();
      case 212: return input_212();
      case 213: return input_213();
      case 214: return input_214();
      case 215: return input_215();
      case 216: return input_216();
      case 217: return input_217();
      case 218: return input_218();
      case 219: return input_219();
      case 220: return input_220();
      case 221: return input_221();
      case 222: return input_222();
      case 223: return input_223();
      case 224: return input_224();
      case 225: return input_225();
      case 226: return input_226();
      case 227: return input_227();
      case 228: return input_228();
      case 229: return input_229();
      case 230: return input_230();
      case 231: return input_231();
      case 232: return input_232();
      case 233: return input_233();
      case 234: return input_234();
      case 235: return input_235();
      case 236: return input_236();
      case 237: return input_237();
      case 238: return input_238();
      case 239: return input_239();
      case 240: return input_240();
      case 241: return input_241();
      case 242: return input_242();
      case 243: return input_243();
      case 244: return input_244();
      case 245: return input_245();
      case 246: return input_246();
      case 247: return input_247();
      case 248: return input_248();
      case 249: return input_249();
      case 250: return input_250();
      case 251: return input_251();
      case 252: return input_252();
      case 253: return input_253();
      case 254: return input_254();
      case 255: return input_255();
      case 256: return input_256();
      case 257: return input_257();
      case 258: return input_258();
      case 259: return input_259();
      case 260: return input_260();
    }

    return 0;
  }

  uint16_t input_0() {
    bool v = false;
    ar & v;
    return 0;
  }
  uint16_t input_1() {
    int8_t v = 127;
    ar & v;
    return 1;
  }
  uint16_t input_2() {
    uint8_t v = 0;
    ar & v;
    return 2;
  }
  uint16_t input_3() {
    int16_t v = 0;
    ar & v;
    return 3;
  }
  uint16_t input_4() {
    uint16_t v = 65535;
    ar & v;
    return 4;
  }
  uint16_t input_5() {
    int32_t v = 0;
    ar & v;
    return 5;
  }
  uint16_t input_6() {
    uint32_t v = 4294967295;
    ar & v;
    return 6;
  }
  uint16_t input_7() {
    int64_t v = 0;
    ar & v;
    return 7;
  }
  uint16_t input_8() {
    uint64_t v = std::numeric_limits<uint64_t>::max();
    ar & v;
    return 8;
  }
  uint16_t input_9() {
    float v = std::numeric_limits<float>::infinity();
    ar & v;
    return 9;
  }
  uint16_t input_10() {
    double v = std::numeric_limits<double>::min();
    ar & v;
    return 10;
  }
  uint16_t input_11() {
    std::string v = "\1\2\3\4\5\0\1\2\3\4";
    ar & v;
    return 11;
  }
  uint16_t input_12() {
    std::array<uint64_t, 1> v = {1};
    ar & v;
    return 12;
  }
  uint16_t input_13() {
    std::array<uint64_t, 32> v = {1};
    ar & v;
    return 13;
  }
  uint16_t input_14() {
    std::array<uint64_t, 1023> v = {1};
    ar & v;
    return 14;
  }
  uint16_t input_15() {
    std::array<bool, 1> v = {false};
    ar & v;
    return 15;
  }
  uint16_t input_16() {
    std::array<bool, 32> v = {false};
    ar & v;
    return 16;
  }
  uint16_t input_17() {
    std::array<bool, 1023> v = {false};
    ar & v;
    return 17;
  }
  uint16_t input_18() {
    std::array<int8_t, 1> v = {-1};
    ar & v;
    return 18;
  }
  uint16_t input_19() {
    std::array<int8_t, 32> v = {-1};
    ar & v;
    return 19;
  }
  uint16_t input_20() {
    std::array<int8_t, 1023> v = {-1};
    ar & v;
    return 20;
  }
  uint16_t input_21() {
    std::array<std::string, 1> v = {""};
    ar & v;
    return 21;
  }
  uint16_t input_22() {
    std::array<std::string, 32> v = {""};
    ar & v;
    return 22;
  }
  uint16_t input_23() {
    std::array<std::string, 1023> v = {""};
    ar & v;
    return 23;
  }
  uint16_t input_24() {
    std::array<int32_t, 1> v = {2147483647};
    ar & v;
    return 24;
  }
  uint16_t input_25() {
    std::array<int32_t, 32> v = {2147483647};
    ar & v;
    return 25;
  }
  uint16_t input_26() {
    std::array<int32_t, 1023> v = {2147483647};
    ar & v;
    return 26;
  }
  uint16_t input_27() {
    std::array<float, 1> v = {std::numeric_limits<float>::max()};
    ar & v;
    return 27;
  }
  uint16_t input_28() {
    std::array<float, 32> v = {std::numeric_limits<float>::max()};
    ar & v;
    return 28;
  }
  uint16_t input_29() {
    std::array<float, 1023> v = {std::numeric_limits<float>::max()};
    ar & v;
    return 29;
  }
  uint16_t input_30() {
    std::bitset<1> v = {};
    ar & v;
    return 30;
  }
  uint16_t input_31() {
    std::bitset<32> v = {};
    ar & v;
    return 31;
  }
  uint16_t input_32() {
    std::bitset<1023> v = {};
    ar & v;
    return 32;
  }
  uint16_t input_33() {
    std::deque<uint64_t> v = {1};
    ar & v;
    return 33;
  }
  uint16_t input_34() {
    std::deque<bool> v = {false};
    ar & v;
    return 34;
  }
  uint16_t input_35() {
    std::deque<int8_t> v = {-128};
    ar & v;
    return 35;
  }
  uint16_t input_36() {
    std::deque<std::string> v = {"\1\2\3\4\5\0\1\2\3\4"};
    ar & v;
    return 36;
  }
  uint16_t input_37() {
    std::deque<int32_t> v = {-2147483648};
    ar & v;
    return 37;
  }
  uint16_t input_38() {
    std::deque<float> v = {std::numeric_limits<float>::max()};
    ar & v;
    return 38;
  }
  uint16_t input_39() {
    std::forward_list<uint64_t> v = {std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 39;
  }
  uint16_t input_40() {
    std::forward_list<bool> v = {true};
    ar & v;
    return 40;
  }
  uint16_t input_41() {
    std::forward_list<int8_t> v = {0};
    ar & v;
    return 41;
  }
  uint16_t input_42() {
    std::forward_list<std::string> v = {"!@#$%^&*( !@$$%&*("};
    ar & v;
    return 42;
  }
  uint16_t input_43() {
    std::forward_list<int32_t> v = {0};
    ar & v;
    return 43;
  }
  uint16_t input_44() {
    std::forward_list<float> v = {std::numeric_limits<float>::infinity()};
    ar & v;
    return 44;
  }
  uint16_t input_45() {
    std::list<uint64_t> v = {1};
    ar & v;
    return 45;
  }
  uint16_t input_46() {
    std::list<bool> v = {false};
    ar & v;
    return 46;
  }
  uint16_t input_47() {
    std::list<int8_t> v = {127};
    ar & v;
    return 47;
  }
  uint16_t input_48() {
    std::list<std::string> v = {"\1\2\3\4\5\0\1\2\3\4"};
    ar & v;
    return 48;
  }
  uint16_t input_49() {
    std::list<int32_t> v = {0};
    ar & v;
    return 49;
  }
  uint16_t input_50() {
    std::list<float> v = {-5.2e26};
    ar & v;
    return 50;
  }
  uint16_t input_51() {
    std::map<uint64_t, uint64_t> v = {{1,1}};
    ar & v;
    return 51;
  }
  uint16_t input_52() {
    std::map<uint64_t, bool> v = {{1,false}};
    ar & v;
    return 52;
  }
  uint16_t input_53() {
    std::map<uint64_t, int8_t> v = {{1,-128}};
    ar & v;
    return 53;
  }
  uint16_t input_54() {
    std::map<uint64_t, std::string> v = {{1,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 54;
  }
  uint16_t input_55() {
    std::map<uint64_t, int32_t> v = {{1,0}};
    ar & v;
    return 55;
  }
  uint16_t input_56() {
    std::map<uint64_t, float> v = {{1,std::numeric_limits<float>::max()}};
    ar & v;
    return 56;
  }
  uint16_t input_57() {
    std::map<bool, uint64_t> v = {{true,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 57;
  }
  uint16_t input_58() {
    std::map<bool, bool> v = {{true,true}};
    ar & v;
    return 58;
  }
  uint16_t input_59() {
    std::map<bool, int8_t> v = {{true,-1}};
    ar & v;
    return 59;
  }
  uint16_t input_60() {
    std::map<bool, std::string> v = {{true,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 60;
  }
  uint16_t input_61() {
    std::map<bool, int32_t> v = {{true,-2147483648}};
    ar & v;
    return 61;
  }
  uint16_t input_62() {
    std::map<bool, float> v = {{true,std::numeric_limits<float>::min()}};
    ar & v;
    return 62;
  }
  uint16_t input_63() {
    std::map<int8_t, uint64_t> v = {{-1,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 63;
  }
  uint16_t input_64() {
    std::map<int8_t, bool> v = {{-1,true}};
    ar & v;
    return 64;
  }
  uint16_t input_65() {
    std::map<int8_t, int8_t> v = {{-1,-128}};
    ar & v;
    return 65;
  }
  uint16_t input_66() {
    std::map<int8_t, std::string> v = {{-1,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 66;
  }
  uint16_t input_67() {
    std::map<int8_t, int32_t> v = {{-1,2147483647}};
    ar & v;
    return 67;
  }
  uint16_t input_68() {
    std::map<int8_t, float> v = {{-1,std::numeric_limits<float>::quiet_NaN()}};
    ar & v;
    return 68;
  }
  uint16_t input_69() {
    std::map<std::string, uint64_t> v = {{"",std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 69;
  }
  uint16_t input_70() {
    std::map<std::string, bool> v = {{"",false}};
    ar & v;
    return 70;
  }
  uint16_t input_71() {
    std::map<std::string, int8_t> v = {{"",-128}};
    ar & v;
    return 71;
  }
  uint16_t input_72() {
    std::map<std::string, std::string> v = {{"","\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 72;
  }
  uint16_t input_73() {
    std::map<std::string, int32_t> v = {{"",0}};
    ar & v;
    return 73;
  }
  uint16_t input_74() {
    std::map<std::string, float> v = {{"",std::numeric_limits<float>::infinity()}};
    ar & v;
    return 74;
  }
  uint16_t input_75() {
    std::map<int32_t, uint64_t> v = {{-2147483648,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 75;
  }
  uint16_t input_76() {
    std::map<int32_t, bool> v = {{-2147483648,false}};
    ar & v;
    return 76;
  }
  uint16_t input_77() {
    std::map<int32_t, int8_t> v = {{-2147483648,-128}};
    ar & v;
    return 77;
  }
  uint16_t input_78() {
    std::map<int32_t, std::string> v = {{-2147483648,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 78;
  }
  uint16_t input_79() {
    std::map<int32_t, int32_t> v = {{-2147483648,0}};
    ar & v;
    return 79;
  }
  uint16_t input_80() {
    std::map<int32_t, float> v = {{-2147483648,std::numeric_limits<float>::max()}};
    ar & v;
    return 80;
  }
  uint16_t input_81() {
    std::map<float, uint64_t> v = {{std::numeric_limits<float>::infinity(),1}};
    ar & v;
    return 81;
  }
  uint16_t input_82() {
    std::map<float, bool> v = {{std::numeric_limits<float>::infinity(),false}};
    ar & v;
    return 82;
  }
  uint16_t input_83() {
    std::map<float, int8_t> v = {{std::numeric_limits<float>::infinity(),-1}};
    ar & v;
    return 83;
  }
  uint16_t input_84() {
    std::map<float, std::string> v = {{std::numeric_limits<float>::infinity(),""}};
    ar & v;
    return 84;
  }
  uint16_t input_85() {
    std::map<float, int32_t> v = {{std::numeric_limits<float>::infinity(),-2147483648}};
    ar & v;
    return 85;
  }
  uint16_t input_86() {
    std::map<float, float> v = {{std::numeric_limits<float>::infinity(),-5.2e26}};
    ar & v;
    return 86;
  }
  uint16_t input_87() {
    std::multimap<uint64_t, uint64_t> v = {{std::numeric_limits<uint64_t>::max(),std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 87;
  }
  uint16_t input_88() {
    std::multimap<uint64_t, bool> v = {{std::numeric_limits<uint64_t>::max(),true}};
    ar & v;
    return 88;
  }
  uint16_t input_89() {
    std::multimap<uint64_t, int8_t> v = {{std::numeric_limits<uint64_t>::max(),-128}};
    ar & v;
    return 89;
  }
  uint16_t input_90() {
    std::multimap<uint64_t, std::string> v = {{std::numeric_limits<uint64_t>::max(),"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 90;
  }
  uint16_t input_91() {
    std::multimap<uint64_t, int32_t> v = {{std::numeric_limits<uint64_t>::max(),-2147483648}};
    ar & v;
    return 91;
  }
  uint16_t input_92() {
    std::multimap<uint64_t, float> v = {{std::numeric_limits<uint64_t>::max(),std::numeric_limits<float>::min()}};
    ar & v;
    return 92;
  }
  uint16_t input_93() {
    std::multimap<bool, uint64_t> v = {{true,1}};
    ar & v;
    return 93;
  }
  uint16_t input_94() {
    std::multimap<bool, bool> v = {{true,false}};
    ar & v;
    return 94;
  }
  uint16_t input_95() {
    std::multimap<bool, int8_t> v = {{true,0}};
    ar & v;
    return 95;
  }
  uint16_t input_96() {
    std::multimap<bool, std::string> v = {{true,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 96;
  }
  uint16_t input_97() {
    std::multimap<bool, int32_t> v = {{true,-2147483648}};
    ar & v;
    return 97;
  }
  uint16_t input_98() {
    std::multimap<bool, float> v = {{true,std::numeric_limits<float>::min()}};
    ar & v;
    return 98;
  }
  uint16_t input_99() {
    std::multimap<int8_t, uint64_t> v = {{127,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 99;
  }
  uint16_t input_100() {
    std::multimap<int8_t, bool> v = {{127,false}};
    ar & v;
    return 100;
  }
  uint16_t input_101() {
    std::multimap<int8_t, int8_t> v = {{127,127}};
    ar & v;
    return 101;
  }
  uint16_t input_102() {
    std::multimap<int8_t, std::string> v = {{127,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 102;
  }
  uint16_t input_103() {
    std::multimap<int8_t, int32_t> v = {{127,2147483647}};
    ar & v;
    return 103;
  }
  uint16_t input_104() {
    std::multimap<int8_t, float> v = {{127,std::numeric_limits<float>::max()}};
    ar & v;
    return 104;
  }
  uint16_t input_105() {
    std::multimap<std::string, uint64_t> v = {{"",std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 105;
  }
  uint16_t input_106() {
    std::multimap<std::string, bool> v = {{"",true}};
    ar & v;
    return 106;
  }
  uint16_t input_107() {
    std::multimap<std::string, int8_t> v = {{"",127}};
    ar & v;
    return 107;
  }
  uint16_t input_108() {
    std::multimap<std::string, std::string> v = {{"","\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 108;
  }
  uint16_t input_109() {
    std::multimap<std::string, int32_t> v = {{"",2147483647}};
    ar & v;
    return 109;
  }
  uint16_t input_110() {
    std::multimap<std::string, float> v = {{"",std::numeric_limits<float>::max()}};
    ar & v;
    return 110;
  }
  uint16_t input_111() {
    std::multimap<int32_t, uint64_t> v = {{-2147483648,1}};
    ar & v;
    return 111;
  }
  uint16_t input_112() {
    std::multimap<int32_t, bool> v = {{-2147483648,true}};
    ar & v;
    return 112;
  }
  uint16_t input_113() {
    std::multimap<int32_t, int8_t> v = {{-2147483648,0}};
    ar & v;
    return 113;
  }
  uint16_t input_114() {
    std::multimap<int32_t, std::string> v = {{-2147483648,""}};
    ar & v;
    return 114;
  }
  uint16_t input_115() {
    std::multimap<int32_t, int32_t> v = {{-2147483648,2147483647}};
    ar & v;
    return 115;
  }
  uint16_t input_116() {
    std::multimap<int32_t, float> v = {{-2147483648,std::numeric_limits<float>::min()}};
    ar & v;
    return 116;
  }
  uint16_t input_117() {
    std::multimap<float, uint64_t> v = {{std::numeric_limits<float>::max(),1}};
    ar & v;
    return 117;
  }
  uint16_t input_118() {
    std::multimap<float, bool> v = {{std::numeric_limits<float>::max(),false}};
    ar & v;
    return 118;
  }
  uint16_t input_119() {
    std::multimap<float, int8_t> v = {{std::numeric_limits<float>::max(),127}};
    ar & v;
    return 119;
  }
  uint16_t input_120() {
    std::multimap<float, std::string> v = {{std::numeric_limits<float>::max(),""}};
    ar & v;
    return 120;
  }
  uint16_t input_121() {
    std::multimap<float, int32_t> v = {{std::numeric_limits<float>::max(),-2147483648}};
    ar & v;
    return 121;
  }
  uint16_t input_122() {
    std::multimap<float, float> v = {{std::numeric_limits<float>::max(),std::numeric_limits<float>::min()}};
    ar & v;
    return 122;
  }
  uint16_t input_123() {
    std::multiset<uint64_t> v = {1};
    ar & v;
    return 123;
  }
  uint16_t input_124() {
    std::multiset<bool> v = {true};
    ar & v;
    return 124;
  }
  uint16_t input_125() {
    std::multiset<int8_t> v = {-128};
    ar & v;
    return 125;
  }
  uint16_t input_126() {
    std::multiset<std::string> v = {""};
    ar & v;
    return 126;
  }
  uint16_t input_127() {
    std::multiset<int32_t> v = {-2147483648};
    ar & v;
    return 127;
  }
  uint16_t input_128() {
    std::multiset<float> v = {std::numeric_limits<float>::min()};
    ar & v;
    return 128;
  }
  uint16_t input_129() {
    std::pair<uint64_t, uint64_t> v = {1,std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 129;
  }
  uint16_t input_130() {
    std::pair<uint64_t, bool> v = {1,true};
    ar & v;
    return 130;
  }
  uint16_t input_131() {
    std::pair<uint64_t, int8_t> v = {1,0};
    ar & v;
    return 131;
  }
  uint16_t input_132() {
    std::pair<uint64_t, std::string> v = {1,""};
    ar & v;
    return 132;
  }
  uint16_t input_133() {
    std::pair<uint64_t, int32_t> v = {1,-2147483648};
    ar & v;
    return 133;
  }
  uint16_t input_134() {
    std::pair<uint64_t, float> v = {1,std::numeric_limits<float>::infinity()};
    ar & v;
    return 134;
  }
  uint16_t input_135() {
    std::pair<bool, uint64_t> v = {true,1};
    ar & v;
    return 135;
  }
  uint16_t input_136() {
    std::pair<bool, bool> v = {true,true};
    ar & v;
    return 136;
  }
  uint16_t input_137() {
    std::pair<bool, int8_t> v = {true,-128};
    ar & v;
    return 137;
  }
  uint16_t input_138() {
    std::pair<bool, std::string> v = {true,"!@#$%^&*( !@$$%&*("};
    ar & v;
    return 138;
  }
  uint16_t input_139() {
    std::pair<bool, int32_t> v = {true,-2147483648};
    ar & v;
    return 139;
  }
  uint16_t input_140() {
    std::pair<bool, float> v = {true,-5.2e26};
    ar & v;
    return 140;
  }
  uint16_t input_141() {
    std::pair<int8_t, uint64_t> v = {-128,std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 141;
  }
  uint16_t input_142() {
    std::pair<int8_t, bool> v = {-128,true};
    ar & v;
    return 142;
  }
  uint16_t input_143() {
    std::pair<int8_t, int8_t> v = {-128,0};
    ar & v;
    return 143;
  }
  uint16_t input_144() {
    std::pair<int8_t, std::string> v = {-128,""};
    ar & v;
    return 144;
  }
  uint16_t input_145() {
    std::pair<int8_t, int32_t> v = {-128,-2147483648};
    ar & v;
    return 145;
  }
  uint16_t input_146() {
    std::pair<int8_t, float> v = {-128,-5.2e26};
    ar & v;
    return 146;
  }
  uint16_t input_147() {
    std::pair<std::string, uint64_t> v = {"\1\2\3\4\5\0\1\2\3\4",std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 147;
  }
  uint16_t input_148() {
    std::pair<std::string, bool> v = {"\1\2\3\4\5\0\1\2\3\4",false};
    ar & v;
    return 148;
  }
  uint16_t input_149() {
    std::pair<std::string, int8_t> v = {"\1\2\3\4\5\0\1\2\3\4",127};
    ar & v;
    return 149;
  }
  uint16_t input_150() {
    std::pair<std::string, std::string> v = {"\1\2\3\4\5\0\1\2\3\4",""};
    ar & v;
    return 150;
  }
  uint16_t input_151() {
    std::pair<std::string, int32_t> v = {"\1\2\3\4\5\0\1\2\3\4",-2147483648};
    ar & v;
    return 151;
  }
  uint16_t input_152() {
    std::pair<std::string, float> v = {"\1\2\3\4\5\0\1\2\3\4",std::numeric_limits<float>::infinity()};
    ar & v;
    return 152;
  }
  uint16_t input_153() {
    std::pair<int32_t, uint64_t> v = {0,1};
    ar & v;
    return 153;
  }
  uint16_t input_154() {
    std::pair<int32_t, bool> v = {0,true};
    ar & v;
    return 154;
  }
  uint16_t input_155() {
    std::pair<int32_t, int8_t> v = {0,127};
    ar & v;
    return 155;
  }
  uint16_t input_156() {
    std::pair<int32_t, std::string> v = {0,""};
    ar & v;
    return 156;
  }
  uint16_t input_157() {
    std::pair<int32_t, int32_t> v = {0,0};
    ar & v;
    return 157;
  }
  uint16_t input_158() {
    std::pair<int32_t, float> v = {0,std::numeric_limits<float>::max()};
    ar & v;
    return 158;
  }
  uint16_t input_159() {
    std::pair<float, uint64_t> v = {std::numeric_limits<float>::quiet_NaN(),1};
    ar & v;
    return 159;
  }
  uint16_t input_160() {
    std::pair<float, bool> v = {std::numeric_limits<float>::quiet_NaN(),true};
    ar & v;
    return 160;
  }
  uint16_t input_161() {
    std::pair<float, int8_t> v = {std::numeric_limits<float>::quiet_NaN(),-128};
    ar & v;
    return 161;
  }
  uint16_t input_162() {
    std::pair<float, std::string> v = {std::numeric_limits<float>::quiet_NaN(),"\1\2\3\4\5\0\1\2\3\4"};
    ar & v;
    return 162;
  }
  uint16_t input_163() {
    std::pair<float, int32_t> v = {std::numeric_limits<float>::quiet_NaN(),-2147483648};
    ar & v;
    return 163;
  }
  uint16_t input_164() {
    std::pair<float, float> v = {std::numeric_limits<float>::quiet_NaN(),std::numeric_limits<float>::min()};
    ar & v;
    return 164;
  }
  uint16_t input_165() {
    std::set<uint64_t> v = {std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 165;
  }
  uint16_t input_166() {
    std::set<bool> v = {false};
    ar & v;
    return 166;
  }
  uint16_t input_167() {
    std::set<int8_t> v = {-128};
    ar & v;
    return 167;
  }
  uint16_t input_168() {
    std::set<std::string> v = {"\1\2\3\4\5\0\1\2\3\4"};
    ar & v;
    return 168;
  }
  uint16_t input_169() {
    std::set<int32_t> v = {0};
    ar & v;
    return 169;
  }
  uint16_t input_170() {
    std::set<float> v = {std::numeric_limits<float>::min()};
    ar & v;
    return 170;
  }
  uint16_t input_171() {
    std::unordered_map<uint64_t, uint64_t> v = {{1,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 171;
  }
  uint16_t input_172() {
    std::unordered_map<uint64_t, bool> v = {{1,false}};
    ar & v;
    return 172;
  }
  uint16_t input_173() {
    std::unordered_map<uint64_t, int8_t> v = {{1,0}};
    ar & v;
    return 173;
  }
  uint16_t input_174() {
    std::unordered_map<uint64_t, std::string> v = {{1,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 174;
  }
  uint16_t input_175() {
    std::unordered_map<uint64_t, int32_t> v = {{1,0}};
    ar & v;
    return 175;
  }
  uint16_t input_176() {
    std::unordered_map<uint64_t, float> v = {{1,std::numeric_limits<float>::quiet_NaN()}};
    ar & v;
    return 176;
  }
  uint16_t input_177() {
    std::unordered_map<bool, uint64_t> v = {{false,1}};
    ar & v;
    return 177;
  }
  uint16_t input_178() {
    std::unordered_map<bool, bool> v = {{false,true}};
    ar & v;
    return 178;
  }
  uint16_t input_179() {
    std::unordered_map<bool, int8_t> v = {{false,127}};
    ar & v;
    return 179;
  }
  uint16_t input_180() {
    std::unordered_map<bool, std::string> v = {{false,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 180;
  }
  uint16_t input_181() {
    std::unordered_map<bool, int32_t> v = {{false,-2147483648}};
    ar & v;
    return 181;
  }
  uint16_t input_182() {
    std::unordered_map<bool, float> v = {{false,std::numeric_limits<float>::max()}};
    ar & v;
    return 182;
  }
  uint16_t input_183() {
    std::unordered_map<int8_t, uint64_t> v = {{-128,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 183;
  }
  uint16_t input_184() {
    std::unordered_map<int8_t, bool> v = {{-128,true}};
    ar & v;
    return 184;
  }
  uint16_t input_185() {
    std::unordered_map<int8_t, int8_t> v = {{-128,-1}};
    ar & v;
    return 185;
  }
  uint16_t input_186() {
    std::unordered_map<int8_t, std::string> v = {{-128,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 186;
  }
  uint16_t input_187() {
    std::unordered_map<int8_t, int32_t> v = {{-128,0}};
    ar & v;
    return 187;
  }
  uint16_t input_188() {
    std::unordered_map<int8_t, float> v = {{-128,std::numeric_limits<float>::infinity()}};
    ar & v;
    return 188;
  }
  uint16_t input_189() {
    std::unordered_map<std::string, uint64_t> v = {{"!@#$%^&*( !@$$%&*(",std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 189;
  }
  uint16_t input_190() {
    std::unordered_map<std::string, bool> v = {{"!@#$%^&*( !@$$%&*(",true}};
    ar & v;
    return 190;
  }
  uint16_t input_191() {
    std::unordered_map<std::string, int8_t> v = {{"!@#$%^&*( !@$$%&*(",0}};
    ar & v;
    return 191;
  }
  uint16_t input_192() {
    std::unordered_map<std::string, std::string> v = {{"!@#$%^&*( !@$$%&*(","!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 192;
  }
  uint16_t input_193() {
    std::unordered_map<std::string, int32_t> v = {{"!@#$%^&*( !@$$%&*(",2147483647}};
    ar & v;
    return 193;
  }
  uint16_t input_194() {
    std::unordered_map<std::string, float> v = {{"!@#$%^&*( !@$$%&*(",std::numeric_limits<float>::quiet_NaN()}};
    ar & v;
    return 194;
  }
  uint16_t input_195() {
    std::unordered_map<int32_t, uint64_t> v = {{2147483647,1}};
    ar & v;
    return 195;
  }
  uint16_t input_196() {
    std::unordered_map<int32_t, bool> v = {{2147483647,true}};
    ar & v;
    return 196;
  }
  uint16_t input_197() {
    std::unordered_map<int32_t, int8_t> v = {{2147483647,-1}};
    ar & v;
    return 197;
  }
  uint16_t input_198() {
    std::unordered_map<int32_t, std::string> v = {{2147483647,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 198;
  }
  uint16_t input_199() {
    std::unordered_map<int32_t, int32_t> v = {{2147483647,0}};
    ar & v;
    return 199;
  }
  uint16_t input_200() {
    std::unordered_map<int32_t, float> v = {{2147483647,std::numeric_limits<float>::min()}};
    ar & v;
    return 200;
  }
  uint16_t input_201() {
    std::unordered_map<float, uint64_t> v = {{std::numeric_limits<float>::min(),1}};
    ar & v;
    return 201;
  }
  uint16_t input_202() {
    std::unordered_map<float, bool> v = {{std::numeric_limits<float>::min(),false}};
    ar & v;
    return 202;
  }
  uint16_t input_203() {
    std::unordered_map<float, int8_t> v = {{std::numeric_limits<float>::min(),127}};
    ar & v;
    return 203;
  }
  uint16_t input_204() {
    std::unordered_map<float, std::string> v = {{std::numeric_limits<float>::min(),"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 204;
  }
  uint16_t input_205() {
    std::unordered_map<float, int32_t> v = {{std::numeric_limits<float>::min(),2147483647}};
    ar & v;
    return 205;
  }
  uint16_t input_206() {
    std::unordered_map<float, float> v = {{std::numeric_limits<float>::min(),std::numeric_limits<float>::infinity()}};
    ar & v;
    return 206;
  }
  uint16_t input_207() {
    std::unordered_multimap<uint64_t, uint64_t> v = {{std::numeric_limits<uint64_t>::max(),1}};
    ar & v;
    return 207;
  }
  uint16_t input_208() {
    std::unordered_multimap<uint64_t, bool> v = {{std::numeric_limits<uint64_t>::max(),false}};
    ar & v;
    return 208;
  }
  uint16_t input_209() {
    std::unordered_multimap<uint64_t, int8_t> v = {{std::numeric_limits<uint64_t>::max(),127}};
    ar & v;
    return 209;
  }
  uint16_t input_210() {
    std::unordered_multimap<uint64_t, std::string> v = {{std::numeric_limits<uint64_t>::max(),"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 210;
  }
  uint16_t input_211() {
    std::unordered_multimap<uint64_t, int32_t> v = {{std::numeric_limits<uint64_t>::max(),2147483647}};
    ar & v;
    return 211;
  }
  uint16_t input_212() {
    std::unordered_multimap<uint64_t, float> v = {{std::numeric_limits<uint64_t>::max(),-5.2e26}};
    ar & v;
    return 212;
  }
  uint16_t input_213() {
    std::unordered_multimap<bool, uint64_t> v = {{true,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 213;
  }
  uint16_t input_214() {
    std::unordered_multimap<bool, bool> v = {{true,true}};
    ar & v;
    return 214;
  }
  uint16_t input_215() {
    std::unordered_multimap<bool, int8_t> v = {{true,0}};
    ar & v;
    return 215;
  }
  uint16_t input_216() {
    std::unordered_multimap<bool, std::string> v = {{true,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 216;
  }
  uint16_t input_217() {
    std::unordered_multimap<bool, int32_t> v = {{true,-2147483648}};
    ar & v;
    return 217;
  }
  uint16_t input_218() {
    std::unordered_multimap<bool, float> v = {{true,std::numeric_limits<float>::quiet_NaN()}};
    ar & v;
    return 218;
  }
  uint16_t input_219() {
    std::unordered_multimap<int8_t, uint64_t> v = {{127,1}};
    ar & v;
    return 219;
  }
  uint16_t input_220() {
    std::unordered_multimap<int8_t, bool> v = {{127,true}};
    ar & v;
    return 220;
  }
  uint16_t input_221() {
    std::unordered_multimap<int8_t, int8_t> v = {{127,127}};
    ar & v;
    return 221;
  }
  uint16_t input_222() {
    std::unordered_multimap<int8_t, std::string> v = {{127,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 222;
  }
  uint16_t input_223() {
    std::unordered_multimap<int8_t, int32_t> v = {{127,0}};
    ar & v;
    return 223;
  }
  uint16_t input_224() {
    std::unordered_multimap<int8_t, float> v = {{127,std::numeric_limits<float>::quiet_NaN()}};
    ar & v;
    return 224;
  }
  uint16_t input_225() {
    std::unordered_multimap<std::string, uint64_t> v = {{"",std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 225;
  }
  uint16_t input_226() {
    std::unordered_multimap<std::string, bool> v = {{"",true}};
    ar & v;
    return 226;
  }
  uint16_t input_227() {
    std::unordered_multimap<std::string, int8_t> v = {{"",-128}};
    ar & v;
    return 227;
  }
  uint16_t input_228() {
    std::unordered_multimap<std::string, std::string> v = {{"","\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 228;
  }
  uint16_t input_229() {
    std::unordered_multimap<std::string, int32_t> v = {{"",-2147483648}};
    ar & v;
    return 229;
  }
  uint16_t input_230() {
    std::unordered_multimap<std::string, float> v = {{"",-5.2e26}};
    ar & v;
    return 230;
  }
  uint16_t input_231() {
    std::unordered_multimap<int32_t, uint64_t> v = {{0,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 231;
  }
  uint16_t input_232() {
    std::unordered_multimap<int32_t, bool> v = {{0,false}};
    ar & v;
    return 232;
  }
  uint16_t input_233() {
    std::unordered_multimap<int32_t, int8_t> v = {{0,-128}};
    ar & v;
    return 233;
  }
  uint16_t input_234() {
    std::unordered_multimap<int32_t, std::string> v = {{0,""}};
    ar & v;
    return 234;
  }
  uint16_t input_235() {
    std::unordered_multimap<int32_t, int32_t> v = {{0,-2147483648}};
    ar & v;
    return 235;
  }
  uint16_t input_236() {
    std::unordered_multimap<int32_t, float> v = {{0,-5.2e26}};
    ar & v;
    return 236;
  }
  uint16_t input_237() {
    std::unordered_multimap<float, uint64_t> v = {{std::numeric_limits<float>::infinity(),1}};
    ar & v;
    return 237;
  }
  uint16_t input_238() {
    std::unordered_multimap<float, bool> v = {{std::numeric_limits<float>::infinity(),true}};
    ar & v;
    return 238;
  }
  uint16_t input_239() {
    std::unordered_multimap<float, int8_t> v = {{std::numeric_limits<float>::infinity(),-128}};
    ar & v;
    return 239;
  }
  uint16_t input_240() {
    std::unordered_multimap<float, std::string> v = {{std::numeric_limits<float>::infinity(),"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 240;
  }
  uint16_t input_241() {
    std::unordered_multimap<float, int32_t> v = {{std::numeric_limits<float>::infinity(),2147483647}};
    ar & v;
    return 241;
  }
  uint16_t input_242() {
    std::unordered_multimap<float, float> v = {{std::numeric_limits<float>::infinity(),std::numeric_limits<float>::min()}};
    ar & v;
    return 242;
  }
  uint16_t input_243() {
    std::unordered_multiset<uint64_t> v = {std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 243;
  }
  uint16_t input_244() {
    std::unordered_multiset<bool> v = {false};
    ar & v;
    return 244;
  }
  uint16_t input_245() {
    std::unordered_multiset<int8_t> v = {-1};
    ar & v;
    return 245;
  }
  uint16_t input_246() {
    std::unordered_multiset<std::string> v = {""};
    ar & v;
    return 246;
  }
  uint16_t input_247() {
    std::unordered_multiset<int32_t> v = {0};
    ar & v;
    return 247;
  }
  uint16_t input_248() {
    std::unordered_multiset<float> v = {std::numeric_limits<float>::quiet_NaN()};
    ar & v;
    return 248;
  }
  uint16_t input_249() {
    std::unordered_set<uint64_t> v = {1};
    ar & v;
    return 249;
  }
  uint16_t input_250() {
    std::unordered_set<bool> v = {true};
    ar & v;
    return 250;
  }
  uint16_t input_251() {
    std::unordered_set<int8_t> v = {0};
    ar & v;
    return 251;
  }
  uint16_t input_252() {
    std::unordered_set<std::string> v = {"!@#$%^&*( !@$$%&*("};
    ar & v;
    return 252;
  }
  uint16_t input_253() {
    std::unordered_set<int32_t> v = {-2147483648};
    ar & v;
    return 253;
  }
  uint16_t input_254() {
    std::unordered_set<float> v = {std::numeric_limits<float>::max()};
    ar & v;
    return 254;
  }
  uint16_t input_255() {
    std::vector<uint64_t> v = {1};
    ar & v;
    return 255;
  }
  uint16_t input_256() {
    std::vector<bool> v = {false};
    ar & v;
    return 256;
  }
  uint16_t input_257() {
    std::vector<int8_t> v = {-128};
    ar & v;
    return 257;
  }
  uint16_t input_258() {
    std::vector<std::string> v = {""};
    ar & v;
    return 258;
  }
  uint16_t input_259() {
    std::vector<int32_t> v = {0};
    ar & v;
    return 259;
  }
  uint16_t input_260() {
    std::vector<float> v = {-5.2e26};
    ar & v;
    return 260;
  }

};

size_t get_inputs_count() { return 261; }
