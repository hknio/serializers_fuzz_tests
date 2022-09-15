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
      case 261: return input_261();
      case 262: return input_262();
      case 263: return input_263();
      case 264: return input_264();
      case 265: return input_265();
      case 266: return input_266();
      case 267: return input_267();
      case 268: return input_268();
      case 269: return input_269();
      case 270: return input_270();
      case 271: return input_271();
      case 272: return input_272();
      case 273: return input_273();
      case 274: return input_274();
      case 275: return input_275();
      case 276: return input_276();
      case 277: return input_277();
      case 278: return input_278();
      case 279: return input_279();
      case 280: return input_280();
      case 281: return input_281();
      case 282: return input_282();
      case 283: return input_283();
      case 284: return input_284();
      case 285: return input_285();
      case 286: return input_286();
      case 287: return input_287();
      case 288: return input_288();
      case 289: return input_289();
      case 290: return input_290();
      case 291: return input_291();
      case 292: return input_292();
      case 293: return input_293();
      case 294: return input_294();
      case 295: return input_295();
      case 296: return input_296();
      case 297: return input_297();
      case 298: return input_298();
      case 299: return input_299();
      case 300: return input_300();
      case 301: return input_301();
      case 302: return input_302();
      case 303: return input_303();
      case 304: return input_304();
      case 305: return input_305();
      case 306: return input_306();
      case 307: return input_307();
      case 308: return input_308();
      case 309: return input_309();
      case 310: return input_310();
      case 311: return input_311();
      case 312: return input_312();
      case 313: return input_313();
      case 314: return input_314();
      case 315: return input_315();
      case 316: return input_316();
      case 317: return input_317();
      case 318: return input_318();
      case 319: return input_319();
      case 320: return input_320();
      case 321: return input_321();
      case 322: return input_322();
      case 323: return input_323();
      case 324: return input_324();
      case 325: return input_325();
      case 326: return input_326();
      case 327: return input_327();
      case 328: return input_328();
      case 329: return input_329();
      case 330: return input_330();
      case 331: return input_331();
      case 332: return input_332();
      case 333: return input_333();
      case 334: return input_334();
      case 335: return input_335();
      case 336: return input_336();
      case 337: return input_337();
      case 338: return input_338();
      case 339: return input_339();
      case 340: return input_340();
      case 341: return input_341();
      case 342: return input_342();
      case 343: return input_343();
      case 344: return input_344();
      case 345: return input_345();
      case 346: return input_346();
      case 347: return input_347();
      case 348: return input_348();
      case 349: return input_349();
      case 350: return input_350();
      case 351: return input_351();
      case 352: return input_352();
      case 353: return input_353();
      case 354: return input_354();
      case 355: return input_355();
      case 356: return input_356();
      case 357: return input_357();
      case 358: return input_358();
      case 359: return input_359();
      case 360: return input_360();
      case 361: return input_361();
      case 362: return input_362();
      case 363: return input_363();
      case 364: return input_364();
      case 365: return input_365();
      case 366: return input_366();
      case 367: return input_367();
      case 368: return input_368();
      case 369: return input_369();
      case 370: return input_370();
      case 371: return input_371();
      case 372: return input_372();
      case 373: return input_373();
      case 374: return input_374();
      case 375: return input_375();
      case 376: return input_376();
      case 377: return input_377();
      case 378: return input_378();
      case 379: return input_379();
      case 380: return input_380();
      case 381: return input_381();
      case 382: return input_382();
      case 383: return input_383();
      case 384: return input_384();
      case 385: return input_385();
      case 386: return input_386();
      case 387: return input_387();
      case 388: return input_388();
      case 389: return input_389();
      case 390: return input_390();
      case 391: return input_391();
      case 392: return input_392();
      case 393: return input_393();
      case 394: return input_394();
      case 395: return input_395();
      case 396: return input_396();
      case 397: return input_397();
      case 398: return input_398();
      case 399: return input_399();
      case 400: return input_400();
      case 401: return input_401();
      case 402: return input_402();
      case 403: return input_403();
      case 404: return input_404();
      case 405: return input_405();
      case 406: return input_406();
      case 407: return input_407();
      case 408: return input_408();
      case 409: return input_409();
      case 410: return input_410();
      case 411: return input_411();
      case 412: return input_412();
      case 413: return input_413();
      case 414: return input_414();
      case 415: return input_415();
      case 416: return input_416();
      case 417: return input_417();
      case 418: return input_418();
      case 419: return input_419();
      case 420: return input_420();
      case 421: return input_421();
      case 422: return input_422();
      case 423: return input_423();
      case 424: return input_424();
      case 425: return input_425();
      case 426: return input_426();
      case 427: return input_427();
      case 428: return input_428();
      case 429: return input_429();
      case 430: return input_430();
      case 431: return input_431();
      case 432: return input_432();
      case 433: return input_433();
      case 434: return input_434();
      case 435: return input_435();
      case 436: return input_436();
      case 437: return input_437();
      case 438: return input_438();
      case 439: return input_439();
      case 440: return input_440();
      case 441: return input_441();
      case 442: return input_442();
      case 443: return input_443();
      case 444: return input_444();
      case 445: return input_445();
      case 446: return input_446();
      case 447: return input_447();
      case 448: return input_448();
      case 449: return input_449();
      case 450: return input_450();
      case 451: return input_451();
      case 452: return input_452();
      case 453: return input_453();
      case 454: return input_454();
      case 455: return input_455();
      case 456: return input_456();
      case 457: return input_457();
      case 458: return input_458();
      case 459: return input_459();
      case 460: return input_460();
      case 461: return input_461();
      case 462: return input_462();
      case 463: return input_463();
      case 464: return input_464();
      case 465: return input_465();
      case 466: return input_466();
      case 467: return input_467();
      case 468: return input_468();
      case 469: return input_469();
      case 470: return input_470();
      case 471: return input_471();
      case 472: return input_472();
      case 473: return input_473();
      case 474: return input_474();
      case 475: return input_475();
      case 476: return input_476();
      case 477: return input_477();
      case 478: return input_478();
      case 479: return input_479();
      case 480: return input_480();
      case 481: return input_481();
      case 482: return input_482();
      case 483: return input_483();
      case 484: return input_484();
      case 485: return input_485();
      case 486: return input_486();
      case 487: return input_487();
      case 488: return input_488();
      case 489: return input_489();
      case 490: return input_490();
      case 491: return input_491();
      case 492: return input_492();
      case 493: return input_493();
      case 494: return input_494();
      case 495: return input_495();
      case 496: return input_496();
      case 497: return input_497();
      case 498: return input_498();
      case 499: return input_499();
      case 500: return input_500();
      case 501: return input_501();
      case 502: return input_502();
      case 503: return input_503();
      case 504: return input_504();
      case 505: return input_505();
      case 506: return input_506();
      case 507: return input_507();
      case 508: return input_508();
      case 509: return input_509();
      case 510: return input_510();
      case 511: return input_511();
      case 512: return input_512();
      case 513: return input_513();
      case 514: return input_514();
      case 515: return input_515();
      case 516: return input_516();
      case 517: return input_517();
      case 518: return input_518();
      case 519: return input_519();
      case 520: return input_520();
      case 521: return input_521();
      case 522: return input_522();
      case 523: return input_523();
      case 524: return input_524();
      case 525: return input_525();
      case 526: return input_526();
      case 527: return input_527();
      case 528: return input_528();
      case 529: return input_529();
      case 530: return input_530();
      case 531: return input_531();
      case 532: return input_532();
      case 533: return input_533();
      case 534: return input_534();
      case 535: return input_535();
      case 536: return input_536();
      case 537: return input_537();
      case 538: return input_538();
      case 539: return input_539();
      case 540: return input_540();
      case 541: return input_541();
      case 542: return input_542();
      case 543: return input_543();
      case 544: return input_544();
      case 545: return input_545();
      case 546: return input_546();
      case 547: return input_547();
      case 548: return input_548();
      case 549: return input_549();
      case 550: return input_550();
      case 551: return input_551();
      case 552: return input_552();
      case 553: return input_553();
      case 554: return input_554();
      case 555: return input_555();
      case 556: return input_556();
      case 557: return input_557();
      case 558: return input_558();
      case 559: return input_559();
      case 560: return input_560();
      case 561: return input_561();
      case 562: return input_562();
      case 563: return input_563();
      case 564: return input_564();
      case 565: return input_565();
      case 566: return input_566();
      case 567: return input_567();
      case 568: return input_568();
      case 569: return input_569();
      case 570: return input_570();
      case 571: return input_571();
      case 572: return input_572();
      case 573: return input_573();
      case 574: return input_574();
      case 575: return input_575();
      case 576: return input_576();
      case 577: return input_577();
      case 578: return input_578();
      case 579: return input_579();
      case 580: return input_580();
      case 581: return input_581();
      case 582: return input_582();
      case 583: return input_583();
      case 584: return input_584();
      case 585: return input_585();
      case 586: return input_586();
      case 587: return input_587();
      case 588: return input_588();
      case 589: return input_589();
      case 590: return input_590();
      case 591: return input_591();
      case 592: return input_592();
      case 593: return input_593();
      case 594: return input_594();
      case 595: return input_595();
      case 596: return input_596();
      case 597: return input_597();
      case 598: return input_598();
      case 599: return input_599();
      case 600: return input_600();
      case 601: return input_601();
      case 602: return input_602();
      case 603: return input_603();
      case 604: return input_604();
      case 605: return input_605();
      case 606: return input_606();
      case 607: return input_607();
      case 608: return input_608();
      case 609: return input_609();
      case 610: return input_610();
      case 611: return input_611();
      case 612: return input_612();
      case 613: return input_613();
      case 614: return input_614();
      case 615: return input_615();
      case 616: return input_616();
      case 617: return input_617();
      case 618: return input_618();
      case 619: return input_619();
      case 620: return input_620();
      case 621: return input_621();
      case 622: return input_622();
      case 623: return input_623();
      case 624: return input_624();
      case 625: return input_625();
      case 626: return input_626();
      case 627: return input_627();
      case 628: return input_628();
      case 629: return input_629();
      case 630: return input_630();
      case 631: return input_631();
      case 632: return input_632();
      case 633: return input_633();
      case 634: return input_634();
      case 635: return input_635();
      case 636: return input_636();
      case 637: return input_637();
      case 638: return input_638();
      case 639: return input_639();
      case 640: return input_640();
      case 641: return input_641();
      case 642: return input_642();
      case 643: return input_643();
      case 644: return input_644();
      case 645: return input_645();
      case 646: return input_646();
      case 647: return input_647();
      case 648: return input_648();
      case 649: return input_649();
      case 650: return input_650();
      case 651: return input_651();
      case 652: return input_652();
      case 653: return input_653();
      case 654: return input_654();
      case 655: return input_655();
      case 656: return input_656();
      case 657: return input_657();
      case 658: return input_658();
      case 659: return input_659();
      case 660: return input_660();
      case 661: return input_661();
      case 662: return input_662();
      case 663: return input_663();
      case 664: return input_664();
      case 665: return input_665();
      case 666: return input_666();
      case 667: return input_667();
      case 668: return input_668();
      case 669: return input_669();
      case 670: return input_670();
      case 671: return input_671();
      case 672: return input_672();
      case 673: return input_673();
      case 674: return input_674();
      case 675: return input_675();
      case 676: return input_676();
      case 677: return input_677();
      case 678: return input_678();
      case 679: return input_679();
      case 680: return input_680();
      case 681: return input_681();
      case 682: return input_682();
      case 683: return input_683();
      case 684: return input_684();
      case 685: return input_685();
      case 686: return input_686();
      case 687: return input_687();
      case 688: return input_688();
      case 689: return input_689();
      case 690: return input_690();
      case 691: return input_691();
      case 692: return input_692();
      case 693: return input_693();
      case 694: return input_694();
      case 695: return input_695();
      case 696: return input_696();
      case 697: return input_697();
      case 698: return input_698();
      case 699: return input_699();
      case 700: return input_700();
      case 701: return input_701();
      case 702: return input_702();
      case 703: return input_703();
      case 704: return input_704();
      case 705: return input_705();
      case 706: return input_706();
      case 707: return input_707();
      case 708: return input_708();
      case 709: return input_709();
      case 710: return input_710();
      case 711: return input_711();
      case 712: return input_712();
      case 713: return input_713();
      case 714: return input_714();
      case 715: return input_715();
      case 716: return input_716();
      case 717: return input_717();
      case 718: return input_718();
      case 719: return input_719();
      case 720: return input_720();
      case 721: return input_721();
      case 722: return input_722();
      case 723: return input_723();
      case 724: return input_724();
      case 725: return input_725();
      case 726: return input_726();
      case 727: return input_727();
      case 728: return input_728();
      case 729: return input_729();
      case 730: return input_730();
      case 731: return input_731();
      case 732: return input_732();
      case 733: return input_733();
      case 734: return input_734();
      case 735: return input_735();
      case 736: return input_736();
      case 737: return input_737();
      case 738: return input_738();
      case 739: return input_739();
      case 740: return input_740();
      case 741: return input_741();
      case 742: return input_742();
      case 743: return input_743();
      case 744: return input_744();
      case 745: return input_745();
      case 746: return input_746();
      case 747: return input_747();
      case 748: return input_748();
      case 749: return input_749();
      case 750: return input_750();
      case 751: return input_751();
      case 752: return input_752();
      case 753: return input_753();
      case 754: return input_754();
      case 755: return input_755();
      case 756: return input_756();
      case 757: return input_757();
      case 758: return input_758();
      case 759: return input_759();
      case 760: return input_760();
      case 761: return input_761();
      case 762: return input_762();
      case 763: return input_763();
      case 764: return input_764();
      case 765: return input_765();
      case 766: return input_766();
      case 767: return input_767();
      case 768: return input_768();
      case 769: return input_769();
      case 770: return input_770();
      case 771: return input_771();
      case 772: return input_772();
      case 773: return input_773();
      case 774: return input_774();
      case 775: return input_775();
      case 776: return input_776();
      case 777: return input_777();
      case 778: return input_778();
      case 779: return input_779();
      case 780: return input_780();
      case 781: return input_781();
      case 782: return input_782();
      case 783: return input_783();
      case 784: return input_784();
      case 785: return input_785();
      case 786: return input_786();
      case 787: return input_787();
      case 788: return input_788();
      case 789: return input_789();
      case 790: return input_790();
      case 791: return input_791();
      case 792: return input_792();
      case 793: return input_793();
      case 794: return input_794();
      case 795: return input_795();
      case 796: return input_796();
      case 797: return input_797();
      case 798: return input_798();
      case 799: return input_799();
      case 800: return input_800();
      case 801: return input_801();
      case 802: return input_802();
      case 803: return input_803();
      case 804: return input_804();
      case 805: return input_805();
      case 806: return input_806();
      case 807: return input_807();
      case 808: return input_808();
      case 809: return input_809();
      case 810: return input_810();
      case 811: return input_811();
      case 812: return input_812();
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
    std::array<float, 1> v = {std::numeric_limits<float>::min()};
    ar & v;
    return 12;
  }
  uint16_t input_13() {
    std::array<float, 32> v = {std::numeric_limits<float>::min()};
    ar & v;
    return 13;
  }
  uint16_t input_14() {
    std::array<float, 1023> v = {std::numeric_limits<float>::min()};
    ar & v;
    return 14;
  }
  uint16_t input_15() {
    std::array<int8_t, 1> v = {0};
    ar & v;
    return 15;
  }
  uint16_t input_16() {
    std::array<int8_t, 32> v = {0};
    ar & v;
    return 16;
  }
  uint16_t input_17() {
    std::array<int8_t, 1023> v = {0};
    ar & v;
    return 17;
  }
  uint16_t input_18() {
    std::array<bool, 1> v = {true};
    ar & v;
    return 18;
  }
  uint16_t input_19() {
    std::array<bool, 32> v = {true};
    ar & v;
    return 19;
  }
  uint16_t input_20() {
    std::array<bool, 1023> v = {true};
    ar & v;
    return 20;
  }
  uint16_t input_21() {
    std::array<int32_t, 1> v = {-2147483648};
    ar & v;
    return 21;
  }
  uint16_t input_22() {
    std::array<int32_t, 32> v = {-2147483648};
    ar & v;
    return 22;
  }
  uint16_t input_23() {
    std::array<int32_t, 1023> v = {-2147483648};
    ar & v;
    return 23;
  }
  uint16_t input_24() {
    std::array<std::string, 1> v = {"\1\2\3\4\5\0\1\2\3\4"};
    ar & v;
    return 24;
  }
  uint16_t input_25() {
    std::array<std::string, 32> v = {"\1\2\3\4\5\0\1\2\3\4"};
    ar & v;
    return 25;
  }
  uint16_t input_26() {
    std::array<std::string, 1023> v = {"\1\2\3\4\5\0\1\2\3\4"};
    ar & v;
    return 26;
  }
  uint16_t input_27() {
    std::array<uint64_t, 1> v = {std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 27;
  }
  uint16_t input_28() {
    std::array<uint64_t, 32> v = {std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 28;
  }
  uint16_t input_29() {
    std::array<uint64_t, 1023> v = {std::numeric_limits<uint64_t>::max()};
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
    std::deque<float> v = {std::numeric_limits<float>::infinity()};
    ar & v;
    return 33;
  }
  uint16_t input_34() {
    std::deque<int8_t> v = {-1};
    ar & v;
    return 34;
  }
  uint16_t input_35() {
    std::deque<bool> v = {false};
    ar & v;
    return 35;
  }
  uint16_t input_36() {
    std::deque<int32_t> v = {-2147483648};
    ar & v;
    return 36;
  }
  uint16_t input_37() {
    std::deque<std::string> v = {"\1\2\3\4\5\0\1\2\3\4"};
    ar & v;
    return 37;
  }
  uint16_t input_38() {
    std::deque<uint64_t> v = {1};
    ar & v;
    return 38;
  }
  uint16_t input_39() {
    std::forward_list<float> v = {std::numeric_limits<float>::max()};
    ar & v;
    return 39;
  }
  uint16_t input_40() {
    std::forward_list<int8_t> v = {127};
    ar & v;
    return 40;
  }
  uint16_t input_41() {
    std::forward_list<bool> v = {true};
    ar & v;
    return 41;
  }
  uint16_t input_42() {
    std::forward_list<int32_t> v = {0};
    ar & v;
    return 42;
  }
  uint16_t input_43() {
    std::forward_list<std::string> v = {"!@#$%^&*( !@$$%&*("};
    ar & v;
    return 43;
  }
  uint16_t input_44() {
    std::forward_list<uint64_t> v = {std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 44;
  }
  uint16_t input_45() {
    std::list<float> v = {std::numeric_limits<float>::infinity()};
    ar & v;
    return 45;
  }
  uint16_t input_46() {
    std::list<int8_t> v = {-1};
    ar & v;
    return 46;
  }
  uint16_t input_47() {
    std::list<bool> v = {false};
    ar & v;
    return 47;
  }
  uint16_t input_48() {
    std::list<int32_t> v = {0};
    ar & v;
    return 48;
  }
  uint16_t input_49() {
    std::list<std::string> v = {"\1\2\3\4\5\0\1\2\3\4"};
    ar & v;
    return 49;
  }
  uint16_t input_50() {
    std::list<uint64_t> v = {std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 50;
  }
  uint16_t input_51() {
    std::map<float, float> v = {{-5.2e26,std::numeric_limits<float>::infinity()}};
    ar & v;
    return 51;
  }
  uint16_t input_52() {
    std::map<float, int8_t> v = {{-5.2e26,-128}};
    ar & v;
    return 52;
  }
  uint16_t input_53() {
    std::map<float, bool> v = {{-5.2e26,true}};
    ar & v;
    return 53;
  }
  uint16_t input_54() {
    std::map<float, int32_t> v = {{-5.2e26,2147483647}};
    ar & v;
    return 54;
  }
  uint16_t input_55() {
    std::map<float, std::string> v = {{-5.2e26,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 55;
  }
  uint16_t input_56() {
    std::map<float, uint64_t> v = {{-5.2e26,1}};
    ar & v;
    return 56;
  }
  uint16_t input_57() {
    std::map<int8_t, float> v = {{127,std::numeric_limits<float>::max()}};
    ar & v;
    return 57;
  }
  uint16_t input_58() {
    std::map<int8_t, int8_t> v = {{127,-1}};
    ar & v;
    return 58;
  }
  uint16_t input_59() {
    std::map<int8_t, bool> v = {{127,false}};
    ar & v;
    return 59;
  }
  uint16_t input_60() {
    std::map<int8_t, int32_t> v = {{127,2147483647}};
    ar & v;
    return 60;
  }
  uint16_t input_61() {
    std::map<int8_t, std::string> v = {{127,""}};
    ar & v;
    return 61;
  }
  uint16_t input_62() {
    std::map<int8_t, uint64_t> v = {{127,1}};
    ar & v;
    return 62;
  }
  uint16_t input_63() {
    std::map<bool, float> v = {{true,std::numeric_limits<float>::min()}};
    ar & v;
    return 63;
  }
  uint16_t input_64() {
    std::map<bool, int8_t> v = {{true,-1}};
    ar & v;
    return 64;
  }
  uint16_t input_65() {
    std::map<bool, bool> v = {{true,false}};
    ar & v;
    return 65;
  }
  uint16_t input_66() {
    std::map<bool, int32_t> v = {{true,-2147483648}};
    ar & v;
    return 66;
  }
  uint16_t input_67() {
    std::map<bool, std::string> v = {{true,""}};
    ar & v;
    return 67;
  }
  uint16_t input_68() {
    std::map<bool, uint64_t> v = {{true,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 68;
  }
  uint16_t input_69() {
    std::map<int32_t, float> v = {{2147483647,std::numeric_limits<float>::quiet_NaN()}};
    ar & v;
    return 69;
  }
  uint16_t input_70() {
    std::map<int32_t, int8_t> v = {{2147483647,-128}};
    ar & v;
    return 70;
  }
  uint16_t input_71() {
    std::map<int32_t, bool> v = {{2147483647,false}};
    ar & v;
    return 71;
  }
  uint16_t input_72() {
    std::map<int32_t, int32_t> v = {{2147483647,2147483647}};
    ar & v;
    return 72;
  }
  uint16_t input_73() {
    std::map<int32_t, std::string> v = {{2147483647,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 73;
  }
  uint16_t input_74() {
    std::map<int32_t, uint64_t> v = {{2147483647,1}};
    ar & v;
    return 74;
  }
  uint16_t input_75() {
    std::map<std::string, float> v = {{"\1\2\3\4\5\0\1\2\3\4",std::numeric_limits<float>::max()}};
    ar & v;
    return 75;
  }
  uint16_t input_76() {
    std::map<std::string, int8_t> v = {{"\1\2\3\4\5\0\1\2\3\4",-1}};
    ar & v;
    return 76;
  }
  uint16_t input_77() {
    std::map<std::string, bool> v = {{"\1\2\3\4\5\0\1\2\3\4",false}};
    ar & v;
    return 77;
  }
  uint16_t input_78() {
    std::map<std::string, int32_t> v = {{"\1\2\3\4\5\0\1\2\3\4",0}};
    ar & v;
    return 78;
  }
  uint16_t input_79() {
    std::map<std::string, std::string> v = {{"\1\2\3\4\5\0\1\2\3\4",""}};
    ar & v;
    return 79;
  }
  uint16_t input_80() {
    std::map<std::string, uint64_t> v = {{"\1\2\3\4\5\0\1\2\3\4",std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 80;
  }
  uint16_t input_81() {
    std::map<uint64_t, float> v = {{std::numeric_limits<uint64_t>::max(),std::numeric_limits<float>::infinity()}};
    ar & v;
    return 81;
  }
  uint16_t input_82() {
    std::map<uint64_t, int8_t> v = {{std::numeric_limits<uint64_t>::max(),-1}};
    ar & v;
    return 82;
  }
  uint16_t input_83() {
    std::map<uint64_t, bool> v = {{std::numeric_limits<uint64_t>::max(),false}};
    ar & v;
    return 83;
  }
  uint16_t input_84() {
    std::map<uint64_t, int32_t> v = {{std::numeric_limits<uint64_t>::max(),-2147483648}};
    ar & v;
    return 84;
  }
  uint16_t input_85() {
    std::map<uint64_t, std::string> v = {{std::numeric_limits<uint64_t>::max(),""}};
    ar & v;
    return 85;
  }
  uint16_t input_86() {
    std::map<uint64_t, uint64_t> v = {{std::numeric_limits<uint64_t>::max(),1}};
    ar & v;
    return 86;
  }
  uint16_t input_87() {
    std::multimap<float, float> v = {{-5.2e26,std::numeric_limits<float>::infinity()}};
    ar & v;
    return 87;
  }
  uint16_t input_88() {
    std::multimap<float, int8_t> v = {{-5.2e26,0}};
    ar & v;
    return 88;
  }
  uint16_t input_89() {
    std::multimap<float, bool> v = {{-5.2e26,false}};
    ar & v;
    return 89;
  }
  uint16_t input_90() {
    std::multimap<float, int32_t> v = {{-5.2e26,-2147483648}};
    ar & v;
    return 90;
  }
  uint16_t input_91() {
    std::multimap<float, std::string> v = {{-5.2e26,""}};
    ar & v;
    return 91;
  }
  uint16_t input_92() {
    std::multimap<float, uint64_t> v = {{-5.2e26,1}};
    ar & v;
    return 92;
  }
  uint16_t input_93() {
    std::multimap<int8_t, float> v = {{-1,-5.2e26}};
    ar & v;
    return 93;
  }
  uint16_t input_94() {
    std::multimap<int8_t, int8_t> v = {{-1,-128}};
    ar & v;
    return 94;
  }
  uint16_t input_95() {
    std::multimap<int8_t, bool> v = {{-1,false}};
    ar & v;
    return 95;
  }
  uint16_t input_96() {
    std::multimap<int8_t, int32_t> v = {{-1,2147483647}};
    ar & v;
    return 96;
  }
  uint16_t input_97() {
    std::multimap<int8_t, std::string> v = {{-1,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 97;
  }
  uint16_t input_98() {
    std::multimap<int8_t, uint64_t> v = {{-1,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 98;
  }
  uint16_t input_99() {
    std::multimap<bool, float> v = {{true,std::numeric_limits<float>::min()}};
    ar & v;
    return 99;
  }
  uint16_t input_100() {
    std::multimap<bool, int8_t> v = {{true,127}};
    ar & v;
    return 100;
  }
  uint16_t input_101() {
    std::multimap<bool, bool> v = {{true,false}};
    ar & v;
    return 101;
  }
  uint16_t input_102() {
    std::multimap<bool, int32_t> v = {{true,0}};
    ar & v;
    return 102;
  }
  uint16_t input_103() {
    std::multimap<bool, std::string> v = {{true,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 103;
  }
  uint16_t input_104() {
    std::multimap<bool, uint64_t> v = {{true,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 104;
  }
  uint16_t input_105() {
    std::multimap<int32_t, float> v = {{-2147483648,std::numeric_limits<float>::max()}};
    ar & v;
    return 105;
  }
  uint16_t input_106() {
    std::multimap<int32_t, int8_t> v = {{-2147483648,-128}};
    ar & v;
    return 106;
  }
  uint16_t input_107() {
    std::multimap<int32_t, bool> v = {{-2147483648,false}};
    ar & v;
    return 107;
  }
  uint16_t input_108() {
    std::multimap<int32_t, int32_t> v = {{-2147483648,2147483647}};
    ar & v;
    return 108;
  }
  uint16_t input_109() {
    std::multimap<int32_t, std::string> v = {{-2147483648,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 109;
  }
  uint16_t input_110() {
    std::multimap<int32_t, uint64_t> v = {{-2147483648,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 110;
  }
  uint16_t input_111() {
    std::multimap<std::string, float> v = {{"",std::numeric_limits<float>::min()}};
    ar & v;
    return 111;
  }
  uint16_t input_112() {
    std::multimap<std::string, int8_t> v = {{"",-128}};
    ar & v;
    return 112;
  }
  uint16_t input_113() {
    std::multimap<std::string, bool> v = {{"",false}};
    ar & v;
    return 113;
  }
  uint16_t input_114() {
    std::multimap<std::string, int32_t> v = {{"",-2147483648}};
    ar & v;
    return 114;
  }
  uint16_t input_115() {
    std::multimap<std::string, std::string> v = {{"","\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 115;
  }
  uint16_t input_116() {
    std::multimap<std::string, uint64_t> v = {{"",1}};
    ar & v;
    return 116;
  }
  uint16_t input_117() {
    std::multimap<uint64_t, float> v = {{std::numeric_limits<uint64_t>::max(),std::numeric_limits<float>::min()}};
    ar & v;
    return 117;
  }
  uint16_t input_118() {
    std::multimap<uint64_t, int8_t> v = {{std::numeric_limits<uint64_t>::max(),0}};
    ar & v;
    return 118;
  }
  uint16_t input_119() {
    std::multimap<uint64_t, bool> v = {{std::numeric_limits<uint64_t>::max(),false}};
    ar & v;
    return 119;
  }
  uint16_t input_120() {
    std::multimap<uint64_t, int32_t> v = {{std::numeric_limits<uint64_t>::max(),-2147483648}};
    ar & v;
    return 120;
  }
  uint16_t input_121() {
    std::multimap<uint64_t, std::string> v = {{std::numeric_limits<uint64_t>::max(),""}};
    ar & v;
    return 121;
  }
  uint16_t input_122() {
    std::multimap<uint64_t, uint64_t> v = {{std::numeric_limits<uint64_t>::max(),1}};
    ar & v;
    return 122;
  }
  uint16_t input_123() {
    std::multiset<float> v = {std::numeric_limits<float>::min()};
    ar & v;
    return 123;
  }
  uint16_t input_124() {
    std::multiset<int8_t> v = {-128};
    ar & v;
    return 124;
  }
  uint16_t input_125() {
    std::multiset<bool> v = {true};
    ar & v;
    return 125;
  }
  uint16_t input_126() {
    std::multiset<int32_t> v = {-2147483648};
    ar & v;
    return 126;
  }
  uint16_t input_127() {
    std::multiset<std::string> v = {""};
    ar & v;
    return 127;
  }
  uint16_t input_128() {
    std::multiset<uint64_t> v = {1};
    ar & v;
    return 128;
  }
  uint16_t input_129() {
    std::pair<float, float> v = {std::numeric_limits<float>::infinity(),std::numeric_limits<float>::infinity()};
    ar & v;
    return 129;
  }
  uint16_t input_130() {
    std::pair<float, int8_t> v = {std::numeric_limits<float>::infinity(),-128};
    ar & v;
    return 130;
  }
  uint16_t input_131() {
    std::pair<float, bool> v = {std::numeric_limits<float>::infinity(),false};
    ar & v;
    return 131;
  }
  uint16_t input_132() {
    std::pair<float, int32_t> v = {std::numeric_limits<float>::infinity(),-2147483648};
    ar & v;
    return 132;
  }
  uint16_t input_133() {
    std::pair<float, std::string> v = {std::numeric_limits<float>::infinity(),"!@#$%^&*( !@$$%&*("};
    ar & v;
    return 133;
  }
  uint16_t input_134() {
    std::pair<float, uint64_t> v = {std::numeric_limits<float>::infinity(),1};
    ar & v;
    return 134;
  }
  uint16_t input_135() {
    std::pair<int8_t, float> v = {-128,std::numeric_limits<float>::infinity()};
    ar & v;
    return 135;
  }
  uint16_t input_136() {
    std::pair<int8_t, int8_t> v = {-128,-128};
    ar & v;
    return 136;
  }
  uint16_t input_137() {
    std::pair<int8_t, bool> v = {-128,true};
    ar & v;
    return 137;
  }
  uint16_t input_138() {
    std::pair<int8_t, int32_t> v = {-128,-2147483648};
    ar & v;
    return 138;
  }
  uint16_t input_139() {
    std::pair<int8_t, std::string> v = {-128,"\1\2\3\4\5\0\1\2\3\4"};
    ar & v;
    return 139;
  }
  uint16_t input_140() {
    std::pair<int8_t, uint64_t> v = {-128,1};
    ar & v;
    return 140;
  }
  uint16_t input_141() {
    std::pair<bool, float> v = {false,std::numeric_limits<float>::min()};
    ar & v;
    return 141;
  }
  uint16_t input_142() {
    std::pair<bool, int8_t> v = {false,-128};
    ar & v;
    return 142;
  }
  uint16_t input_143() {
    std::pair<bool, bool> v = {false,true};
    ar & v;
    return 143;
  }
  uint16_t input_144() {
    std::pair<bool, int32_t> v = {false,2147483647};
    ar & v;
    return 144;
  }
  uint16_t input_145() {
    std::pair<bool, std::string> v = {false,"!@#$%^&*( !@$$%&*("};
    ar & v;
    return 145;
  }
  uint16_t input_146() {
    std::pair<bool, uint64_t> v = {false,1};
    ar & v;
    return 146;
  }
  uint16_t input_147() {
    std::pair<int32_t, float> v = {0,-5.2e26};
    ar & v;
    return 147;
  }
  uint16_t input_148() {
    std::pair<int32_t, int8_t> v = {0,-1};
    ar & v;
    return 148;
  }
  uint16_t input_149() {
    std::pair<int32_t, bool> v = {0,true};
    ar & v;
    return 149;
  }
  uint16_t input_150() {
    std::pair<int32_t, int32_t> v = {0,2147483647};
    ar & v;
    return 150;
  }
  uint16_t input_151() {
    std::pair<int32_t, std::string> v = {0,"!@#$%^&*( !@$$%&*("};
    ar & v;
    return 151;
  }
  uint16_t input_152() {
    std::pair<int32_t, uint64_t> v = {0,std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 152;
  }
  uint16_t input_153() {
    std::pair<std::string, float> v = {"!@#$%^&*( !@$$%&*(",std::numeric_limits<float>::min()};
    ar & v;
    return 153;
  }
  uint16_t input_154() {
    std::pair<std::string, int8_t> v = {"!@#$%^&*( !@$$%&*(",-128};
    ar & v;
    return 154;
  }
  uint16_t input_155() {
    std::pair<std::string, bool> v = {"!@#$%^&*( !@$$%&*(",false};
    ar & v;
    return 155;
  }
  uint16_t input_156() {
    std::pair<std::string, int32_t> v = {"!@#$%^&*( !@$$%&*(",-2147483648};
    ar & v;
    return 156;
  }
  uint16_t input_157() {
    std::pair<std::string, std::string> v = {"!@#$%^&*( !@$$%&*(","\1\2\3\4\5\0\1\2\3\4"};
    ar & v;
    return 157;
  }
  uint16_t input_158() {
    std::pair<std::string, uint64_t> v = {"!@#$%^&*( !@$$%&*(",1};
    ar & v;
    return 158;
  }
  uint16_t input_159() {
    std::pair<uint64_t, float> v = {std::numeric_limits<uint64_t>::max(),std::numeric_limits<float>::min()};
    ar & v;
    return 159;
  }
  uint16_t input_160() {
    std::pair<uint64_t, int8_t> v = {std::numeric_limits<uint64_t>::max(),0};
    ar & v;
    return 160;
  }
  uint16_t input_161() {
    std::pair<uint64_t, bool> v = {std::numeric_limits<uint64_t>::max(),false};
    ar & v;
    return 161;
  }
  uint16_t input_162() {
    std::pair<uint64_t, int32_t> v = {std::numeric_limits<uint64_t>::max(),2147483647};
    ar & v;
    return 162;
  }
  uint16_t input_163() {
    std::pair<uint64_t, std::string> v = {std::numeric_limits<uint64_t>::max(),"!@#$%^&*( !@$$%&*("};
    ar & v;
    return 163;
  }
  uint16_t input_164() {
    std::pair<uint64_t, uint64_t> v = {std::numeric_limits<uint64_t>::max(),1};
    ar & v;
    return 164;
  }
  uint16_t input_165() {
    std::set<float> v = {std::numeric_limits<float>::min()};
    ar & v;
    return 165;
  }
  uint16_t input_166() {
    std::set<int8_t> v = {-128};
    ar & v;
    return 166;
  }
  uint16_t input_167() {
    std::set<bool> v = {true};
    ar & v;
    return 167;
  }
  uint16_t input_168() {
    std::set<int32_t> v = {-2147483648};
    ar & v;
    return 168;
  }
  uint16_t input_169() {
    std::set<std::string> v = {"!@#$%^&*( !@$$%&*("};
    ar & v;
    return 169;
  }
  uint16_t input_170() {
    std::set<uint64_t> v = {std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 170;
  }
  uint16_t input_171() {
    std::unordered_map<float, float> v = {{-5.2e26,std::numeric_limits<float>::infinity()}};
    ar & v;
    return 171;
  }
  uint16_t input_172() {
    std::unordered_map<float, int8_t> v = {{-5.2e26,127}};
    ar & v;
    return 172;
  }
  uint16_t input_173() {
    std::unordered_map<float, bool> v = {{-5.2e26,true}};
    ar & v;
    return 173;
  }
  uint16_t input_174() {
    std::unordered_map<float, int32_t> v = {{-5.2e26,-2147483648}};
    ar & v;
    return 174;
  }
  uint16_t input_175() {
    std::unordered_map<float, std::string> v = {{-5.2e26,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 175;
  }
  uint16_t input_176() {
    std::unordered_map<float, uint64_t> v = {{-5.2e26,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 176;
  }
  uint16_t input_177() {
    std::unordered_map<int8_t, float> v = {{0,std::numeric_limits<float>::max()}};
    ar & v;
    return 177;
  }
  uint16_t input_178() {
    std::unordered_map<int8_t, int8_t> v = {{0,127}};
    ar & v;
    return 178;
  }
  uint16_t input_179() {
    std::unordered_map<int8_t, bool> v = {{0,false}};
    ar & v;
    return 179;
  }
  uint16_t input_180() {
    std::unordered_map<int8_t, int32_t> v = {{0,-2147483648}};
    ar & v;
    return 180;
  }
  uint16_t input_181() {
    std::unordered_map<int8_t, std::string> v = {{0,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 181;
  }
  uint16_t input_182() {
    std::unordered_map<int8_t, uint64_t> v = {{0,1}};
    ar & v;
    return 182;
  }
  uint16_t input_183() {
    std::unordered_map<bool, float> v = {{false,-5.2e26}};
    ar & v;
    return 183;
  }
  uint16_t input_184() {
    std::unordered_map<bool, int8_t> v = {{false,0}};
    ar & v;
    return 184;
  }
  uint16_t input_185() {
    std::unordered_map<bool, bool> v = {{false,true}};
    ar & v;
    return 185;
  }
  uint16_t input_186() {
    std::unordered_map<bool, int32_t> v = {{false,2147483647}};
    ar & v;
    return 186;
  }
  uint16_t input_187() {
    std::unordered_map<bool, std::string> v = {{false,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 187;
  }
  uint16_t input_188() {
    std::unordered_map<bool, uint64_t> v = {{false,1}};
    ar & v;
    return 188;
  }
  uint16_t input_189() {
    std::unordered_map<int32_t, float> v = {{-2147483648,std::numeric_limits<float>::quiet_NaN()}};
    ar & v;
    return 189;
  }
  uint16_t input_190() {
    std::unordered_map<int32_t, int8_t> v = {{-2147483648,0}};
    ar & v;
    return 190;
  }
  uint16_t input_191() {
    std::unordered_map<int32_t, bool> v = {{-2147483648,false}};
    ar & v;
    return 191;
  }
  uint16_t input_192() {
    std::unordered_map<int32_t, int32_t> v = {{-2147483648,2147483647}};
    ar & v;
    return 192;
  }
  uint16_t input_193() {
    std::unordered_map<int32_t, std::string> v = {{-2147483648,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 193;
  }
  uint16_t input_194() {
    std::unordered_map<int32_t, uint64_t> v = {{-2147483648,1}};
    ar & v;
    return 194;
  }
  uint16_t input_195() {
    std::unordered_map<std::string, float> v = {{"\1\2\3\4\5\0\1\2\3\4",std::numeric_limits<float>::max()}};
    ar & v;
    return 195;
  }
  uint16_t input_196() {
    std::unordered_map<std::string, int8_t> v = {{"\1\2\3\4\5\0\1\2\3\4",127}};
    ar & v;
    return 196;
  }
  uint16_t input_197() {
    std::unordered_map<std::string, bool> v = {{"\1\2\3\4\5\0\1\2\3\4",false}};
    ar & v;
    return 197;
  }
  uint16_t input_198() {
    std::unordered_map<std::string, int32_t> v = {{"\1\2\3\4\5\0\1\2\3\4",2147483647}};
    ar & v;
    return 198;
  }
  uint16_t input_199() {
    std::unordered_map<std::string, std::string> v = {{"\1\2\3\4\5\0\1\2\3\4",""}};
    ar & v;
    return 199;
  }
  uint16_t input_200() {
    std::unordered_map<std::string, uint64_t> v = {{"\1\2\3\4\5\0\1\2\3\4",1}};
    ar & v;
    return 200;
  }
  uint16_t input_201() {
    std::unordered_map<uint64_t, float> v = {{1,std::numeric_limits<float>::max()}};
    ar & v;
    return 201;
  }
  uint16_t input_202() {
    std::unordered_map<uint64_t, int8_t> v = {{1,-1}};
    ar & v;
    return 202;
  }
  uint16_t input_203() {
    std::unordered_map<uint64_t, bool> v = {{1,true}};
    ar & v;
    return 203;
  }
  uint16_t input_204() {
    std::unordered_map<uint64_t, int32_t> v = {{1,-2147483648}};
    ar & v;
    return 204;
  }
  uint16_t input_205() {
    std::unordered_map<uint64_t, std::string> v = {{1,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 205;
  }
  uint16_t input_206() {
    std::unordered_map<uint64_t, uint64_t> v = {{1,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 206;
  }
  uint16_t input_207() {
    std::unordered_multimap<float, float> v = {{std::numeric_limits<float>::quiet_NaN(),std::numeric_limits<float>::infinity()}};
    ar & v;
    return 207;
  }
  uint16_t input_208() {
    std::unordered_multimap<float, int8_t> v = {{std::numeric_limits<float>::quiet_NaN(),127}};
    ar & v;
    return 208;
  }
  uint16_t input_209() {
    std::unordered_multimap<float, bool> v = {{std::numeric_limits<float>::quiet_NaN(),true}};
    ar & v;
    return 209;
  }
  uint16_t input_210() {
    std::unordered_multimap<float, int32_t> v = {{std::numeric_limits<float>::quiet_NaN(),0}};
    ar & v;
    return 210;
  }
  uint16_t input_211() {
    std::unordered_multimap<float, std::string> v = {{std::numeric_limits<float>::quiet_NaN(),"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 211;
  }
  uint16_t input_212() {
    std::unordered_multimap<float, uint64_t> v = {{std::numeric_limits<float>::quiet_NaN(),std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 212;
  }
  uint16_t input_213() {
    std::unordered_multimap<int8_t, float> v = {{-128,std::numeric_limits<float>::min()}};
    ar & v;
    return 213;
  }
  uint16_t input_214() {
    std::unordered_multimap<int8_t, int8_t> v = {{-128,127}};
    ar & v;
    return 214;
  }
  uint16_t input_215() {
    std::unordered_multimap<int8_t, bool> v = {{-128,true}};
    ar & v;
    return 215;
  }
  uint16_t input_216() {
    std::unordered_multimap<int8_t, int32_t> v = {{-128,0}};
    ar & v;
    return 216;
  }
  uint16_t input_217() {
    std::unordered_multimap<int8_t, std::string> v = {{-128,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 217;
  }
  uint16_t input_218() {
    std::unordered_multimap<int8_t, uint64_t> v = {{-128,1}};
    ar & v;
    return 218;
  }
  uint16_t input_219() {
    std::unordered_multimap<bool, float> v = {{false,std::numeric_limits<float>::infinity()}};
    ar & v;
    return 219;
  }
  uint16_t input_220() {
    std::unordered_multimap<bool, int8_t> v = {{false,127}};
    ar & v;
    return 220;
  }
  uint16_t input_221() {
    std::unordered_multimap<bool, bool> v = {{false,true}};
    ar & v;
    return 221;
  }
  uint16_t input_222() {
    std::unordered_multimap<bool, int32_t> v = {{false,-2147483648}};
    ar & v;
    return 222;
  }
  uint16_t input_223() {
    std::unordered_multimap<bool, std::string> v = {{false,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 223;
  }
  uint16_t input_224() {
    std::unordered_multimap<bool, uint64_t> v = {{false,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 224;
  }
  uint16_t input_225() {
    std::unordered_multimap<int32_t, float> v = {{0,std::numeric_limits<float>::quiet_NaN()}};
    ar & v;
    return 225;
  }
  uint16_t input_226() {
    std::unordered_multimap<int32_t, int8_t> v = {{0,-128}};
    ar & v;
    return 226;
  }
  uint16_t input_227() {
    std::unordered_multimap<int32_t, bool> v = {{0,false}};
    ar & v;
    return 227;
  }
  uint16_t input_228() {
    std::unordered_multimap<int32_t, int32_t> v = {{0,-2147483648}};
    ar & v;
    return 228;
  }
  uint16_t input_229() {
    std::unordered_multimap<int32_t, std::string> v = {{0,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 229;
  }
  uint16_t input_230() {
    std::unordered_multimap<int32_t, uint64_t> v = {{0,1}};
    ar & v;
    return 230;
  }
  uint16_t input_231() {
    std::unordered_multimap<std::string, float> v = {{"\1\2\3\4\5\0\1\2\3\4",std::numeric_limits<float>::min()}};
    ar & v;
    return 231;
  }
  uint16_t input_232() {
    std::unordered_multimap<std::string, int8_t> v = {{"\1\2\3\4\5\0\1\2\3\4",-128}};
    ar & v;
    return 232;
  }
  uint16_t input_233() {
    std::unordered_multimap<std::string, bool> v = {{"\1\2\3\4\5\0\1\2\3\4",false}};
    ar & v;
    return 233;
  }
  uint16_t input_234() {
    std::unordered_multimap<std::string, int32_t> v = {{"\1\2\3\4\5\0\1\2\3\4",2147483647}};
    ar & v;
    return 234;
  }
  uint16_t input_235() {
    std::unordered_multimap<std::string, std::string> v = {{"\1\2\3\4\5\0\1\2\3\4","!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 235;
  }
  uint16_t input_236() {
    std::unordered_multimap<std::string, uint64_t> v = {{"\1\2\3\4\5\0\1\2\3\4",std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 236;
  }
  uint16_t input_237() {
    std::unordered_multimap<uint64_t, float> v = {{1,std::numeric_limits<float>::min()}};
    ar & v;
    return 237;
  }
  uint16_t input_238() {
    std::unordered_multimap<uint64_t, int8_t> v = {{1,-128}};
    ar & v;
    return 238;
  }
  uint16_t input_239() {
    std::unordered_multimap<uint64_t, bool> v = {{1,true}};
    ar & v;
    return 239;
  }
  uint16_t input_240() {
    std::unordered_multimap<uint64_t, int32_t> v = {{1,2147483647}};
    ar & v;
    return 240;
  }
  uint16_t input_241() {
    std::unordered_multimap<uint64_t, std::string> v = {{1,"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 241;
  }
  uint16_t input_242() {
    std::unordered_multimap<uint64_t, uint64_t> v = {{1,1}};
    ar & v;
    return 242;
  }
  uint16_t input_243() {
    std::unordered_multiset<float> v = {std::numeric_limits<float>::min()};
    ar & v;
    return 243;
  }
  uint16_t input_244() {
    std::unordered_multiset<int8_t> v = {-128};
    ar & v;
    return 244;
  }
  uint16_t input_245() {
    std::unordered_multiset<bool> v = {true};
    ar & v;
    return 245;
  }
  uint16_t input_246() {
    std::unordered_multiset<int32_t> v = {0};
    ar & v;
    return 246;
  }
  uint16_t input_247() {
    std::unordered_multiset<std::string> v = {"!@#$%^&*( !@$$%&*("};
    ar & v;
    return 247;
  }
  uint16_t input_248() {
    std::unordered_multiset<uint64_t> v = {1};
    ar & v;
    return 248;
  }
  uint16_t input_249() {
    std::unordered_set<float> v = {-5.2e26};
    ar & v;
    return 249;
  }
  uint16_t input_250() {
    std::unordered_set<int8_t> v = {127};
    ar & v;
    return 250;
  }
  uint16_t input_251() {
    std::unordered_set<bool> v = {false};
    ar & v;
    return 251;
  }
  uint16_t input_252() {
    std::unordered_set<int32_t> v = {2147483647};
    ar & v;
    return 252;
  }
  uint16_t input_253() {
    std::unordered_set<std::string> v = {""};
    ar & v;
    return 253;
  }
  uint16_t input_254() {
    std::unordered_set<uint64_t> v = {1};
    ar & v;
    return 254;
  }
  uint16_t input_255() {
    std::vector<float> v = {std::numeric_limits<float>::max()};
    ar & v;
    return 255;
  }
  uint16_t input_256() {
    std::vector<int8_t> v = {127};
    ar & v;
    return 256;
  }
  uint16_t input_257() {
    std::vector<bool> v = {true};
    ar & v;
    return 257;
  }
  uint16_t input_258() {
    std::vector<int32_t> v = {0};
    ar & v;
    return 258;
  }
  uint16_t input_259() {
    std::vector<std::string> v = {""};
    ar & v;
    return 259;
  }
  uint16_t input_260() {
    std::vector<uint64_t> v = {std::numeric_limits<uint64_t>::max()};
    ar & v;
    return 260;
  }
  uint16_t input_261() {
    std::vector<std::vector<float>> v = {{-5.2e26}};
    ar & v;
    return 261;
  }
  uint16_t input_262() {
    std::vector<std::vector<int8_t>> v = {{-1}};
    ar & v;
    return 262;
  }
  uint16_t input_263() {
    std::vector<std::vector<bool>> v = {{false}};
    ar & v;
    return 263;
  }
  uint16_t input_264() {
    std::vector<std::vector<int32_t>> v = {{-2147483648}};
    ar & v;
    return 264;
  }
  uint16_t input_265() {
    std::vector<std::vector<std::string>> v = {{""}};
    ar & v;
    return 265;
  }
  uint16_t input_266() {
    std::vector<std::vector<uint64_t>> v = {{1}};
    ar & v;
    return 266;
  }
  uint16_t input_267() {
    std::map<float, std::map<float, float>> v = {{std::numeric_limits<float>::min(),{{std::numeric_limits<float>::max(),std::numeric_limits<float>::infinity()}}}};
    ar & v;
    return 267;
  }
  uint16_t input_268() {
    std::map<float, std::map<float, int8_t>> v = {{std::numeric_limits<float>::min(),{{std::numeric_limits<float>::max(),0}}}};
    ar & v;
    return 268;
  }
  uint16_t input_269() {
    std::map<float, std::map<float, bool>> v = {{std::numeric_limits<float>::min(),{{std::numeric_limits<float>::max(),false}}}};
    ar & v;
    return 269;
  }
  uint16_t input_270() {
    std::map<float, std::map<float, int32_t>> v = {{std::numeric_limits<float>::min(),{{std::numeric_limits<float>::max(),2147483647}}}};
    ar & v;
    return 270;
  }
  uint16_t input_271() {
    std::map<float, std::map<float, std::string>> v = {{std::numeric_limits<float>::min(),{{std::numeric_limits<float>::max(),""}}}};
    ar & v;
    return 271;
  }
  uint16_t input_272() {
    std::map<float, std::map<float, uint64_t>> v = {{std::numeric_limits<float>::min(),{{std::numeric_limits<float>::max(),std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 272;
  }
  uint16_t input_273() {
    std::map<float, std::map<int8_t, float>> v = {{std::numeric_limits<float>::min(),{{127,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 273;
  }
  uint16_t input_274() {
    std::map<float, std::map<int8_t, int8_t>> v = {{std::numeric_limits<float>::min(),{{127,0}}}};
    ar & v;
    return 274;
  }
  uint16_t input_275() {
    std::map<float, std::map<int8_t, bool>> v = {{std::numeric_limits<float>::min(),{{127,true}}}};
    ar & v;
    return 275;
  }
  uint16_t input_276() {
    std::map<float, std::map<int8_t, int32_t>> v = {{std::numeric_limits<float>::min(),{{127,-2147483648}}}};
    ar & v;
    return 276;
  }
  uint16_t input_277() {
    std::map<float, std::map<int8_t, std::string>> v = {{std::numeric_limits<float>::min(),{{127,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 277;
  }
  uint16_t input_278() {
    std::map<float, std::map<int8_t, uint64_t>> v = {{std::numeric_limits<float>::min(),{{127,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 278;
  }
  uint16_t input_279() {
    std::map<float, std::map<bool, float>> v = {{std::numeric_limits<float>::min(),{{true,std::numeric_limits<float>::min()}}}};
    ar & v;
    return 279;
  }
  uint16_t input_280() {
    std::map<float, std::map<bool, int8_t>> v = {{std::numeric_limits<float>::min(),{{true,-1}}}};
    ar & v;
    return 280;
  }
  uint16_t input_281() {
    std::map<float, std::map<bool, bool>> v = {{std::numeric_limits<float>::min(),{{true,false}}}};
    ar & v;
    return 281;
  }
  uint16_t input_282() {
    std::map<float, std::map<bool, int32_t>> v = {{std::numeric_limits<float>::min(),{{true,0}}}};
    ar & v;
    return 282;
  }
  uint16_t input_283() {
    std::map<float, std::map<bool, std::string>> v = {{std::numeric_limits<float>::min(),{{true,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 283;
  }
  uint16_t input_284() {
    std::map<float, std::map<bool, uint64_t>> v = {{std::numeric_limits<float>::min(),{{true,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 284;
  }
  uint16_t input_285() {
    std::map<float, std::map<int32_t, float>> v = {{std::numeric_limits<float>::min(),{{2147483647,-5.2e26}}}};
    ar & v;
    return 285;
  }
  uint16_t input_286() {
    std::map<float, std::map<int32_t, int8_t>> v = {{std::numeric_limits<float>::min(),{{2147483647,0}}}};
    ar & v;
    return 286;
  }
  uint16_t input_287() {
    std::map<float, std::map<int32_t, bool>> v = {{std::numeric_limits<float>::min(),{{2147483647,true}}}};
    ar & v;
    return 287;
  }
  uint16_t input_288() {
    std::map<float, std::map<int32_t, int32_t>> v = {{std::numeric_limits<float>::min(),{{2147483647,-2147483648}}}};
    ar & v;
    return 288;
  }
  uint16_t input_289() {
    std::map<float, std::map<int32_t, std::string>> v = {{std::numeric_limits<float>::min(),{{2147483647,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 289;
  }
  uint16_t input_290() {
    std::map<float, std::map<int32_t, uint64_t>> v = {{std::numeric_limits<float>::min(),{{2147483647,1}}}};
    ar & v;
    return 290;
  }
  uint16_t input_291() {
    std::map<float, std::map<std::string, float>> v = {{std::numeric_limits<float>::min(),{{"",std::numeric_limits<float>::infinity()}}}};
    ar & v;
    return 291;
  }
  uint16_t input_292() {
    std::map<float, std::map<std::string, int8_t>> v = {{std::numeric_limits<float>::min(),{{"",0}}}};
    ar & v;
    return 292;
  }
  uint16_t input_293() {
    std::map<float, std::map<std::string, bool>> v = {{std::numeric_limits<float>::min(),{{"",false}}}};
    ar & v;
    return 293;
  }
  uint16_t input_294() {
    std::map<float, std::map<std::string, int32_t>> v = {{std::numeric_limits<float>::min(),{{"",0}}}};
    ar & v;
    return 294;
  }
  uint16_t input_295() {
    std::map<float, std::map<std::string, std::string>> v = {{std::numeric_limits<float>::min(),{{"","\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 295;
  }
  uint16_t input_296() {
    std::map<float, std::map<std::string, uint64_t>> v = {{std::numeric_limits<float>::min(),{{"",1}}}};
    ar & v;
    return 296;
  }
  uint16_t input_297() {
    std::map<float, std::map<uint64_t, float>> v = {{std::numeric_limits<float>::min(),{{std::numeric_limits<uint64_t>::max(),-5.2e26}}}};
    ar & v;
    return 297;
  }
  uint16_t input_298() {
    std::map<float, std::map<uint64_t, int8_t>> v = {{std::numeric_limits<float>::min(),{{std::numeric_limits<uint64_t>::max(),127}}}};
    ar & v;
    return 298;
  }
  uint16_t input_299() {
    std::map<float, std::map<uint64_t, bool>> v = {{std::numeric_limits<float>::min(),{{std::numeric_limits<uint64_t>::max(),true}}}};
    ar & v;
    return 299;
  }
  uint16_t input_300() {
    std::map<float, std::map<uint64_t, int32_t>> v = {{std::numeric_limits<float>::min(),{{std::numeric_limits<uint64_t>::max(),-2147483648}}}};
    ar & v;
    return 300;
  }
  uint16_t input_301() {
    std::map<float, std::map<uint64_t, std::string>> v = {{std::numeric_limits<float>::min(),{{std::numeric_limits<uint64_t>::max(),"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 301;
  }
  uint16_t input_302() {
    std::map<float, std::map<uint64_t, uint64_t>> v = {{std::numeric_limits<float>::min(),{{std::numeric_limits<uint64_t>::max(),1}}}};
    ar & v;
    return 302;
  }
  uint16_t input_303() {
    std::map<int8_t, std::map<float, float>> v = {{-128,{{std::numeric_limits<float>::max(),std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 303;
  }
  uint16_t input_304() {
    std::map<int8_t, std::map<float, int8_t>> v = {{-128,{{std::numeric_limits<float>::max(),0}}}};
    ar & v;
    return 304;
  }
  uint16_t input_305() {
    std::map<int8_t, std::map<float, bool>> v = {{-128,{{std::numeric_limits<float>::max(),false}}}};
    ar & v;
    return 305;
  }
  uint16_t input_306() {
    std::map<int8_t, std::map<float, int32_t>> v = {{-128,{{std::numeric_limits<float>::max(),0}}}};
    ar & v;
    return 306;
  }
  uint16_t input_307() {
    std::map<int8_t, std::map<float, std::string>> v = {{-128,{{std::numeric_limits<float>::max(),""}}}};
    ar & v;
    return 307;
  }
  uint16_t input_308() {
    std::map<int8_t, std::map<float, uint64_t>> v = {{-128,{{std::numeric_limits<float>::max(),1}}}};
    ar & v;
    return 308;
  }
  uint16_t input_309() {
    std::map<int8_t, std::map<int8_t, float>> v = {{-128,{{127,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 309;
  }
  uint16_t input_310() {
    std::map<int8_t, std::map<int8_t, int8_t>> v = {{-128,{{127,0}}}};
    ar & v;
    return 310;
  }
  uint16_t input_311() {
    std::map<int8_t, std::map<int8_t, bool>> v = {{-128,{{127,false}}}};
    ar & v;
    return 311;
  }
  uint16_t input_312() {
    std::map<int8_t, std::map<int8_t, int32_t>> v = {{-128,{{127,-2147483648}}}};
    ar & v;
    return 312;
  }
  uint16_t input_313() {
    std::map<int8_t, std::map<int8_t, std::string>> v = {{-128,{{127,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 313;
  }
  uint16_t input_314() {
    std::map<int8_t, std::map<int8_t, uint64_t>> v = {{-128,{{127,1}}}};
    ar & v;
    return 314;
  }
  uint16_t input_315() {
    std::map<int8_t, std::map<bool, float>> v = {{-128,{{false,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 315;
  }
  uint16_t input_316() {
    std::map<int8_t, std::map<bool, int8_t>> v = {{-128,{{false,-128}}}};
    ar & v;
    return 316;
  }
  uint16_t input_317() {
    std::map<int8_t, std::map<bool, bool>> v = {{-128,{{false,false}}}};
    ar & v;
    return 317;
  }
  uint16_t input_318() {
    std::map<int8_t, std::map<bool, int32_t>> v = {{-128,{{false,0}}}};
    ar & v;
    return 318;
  }
  uint16_t input_319() {
    std::map<int8_t, std::map<bool, std::string>> v = {{-128,{{false,"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 319;
  }
  uint16_t input_320() {
    std::map<int8_t, std::map<bool, uint64_t>> v = {{-128,{{false,1}}}};
    ar & v;
    return 320;
  }
  uint16_t input_321() {
    std::map<int8_t, std::map<int32_t, float>> v = {{-128,{{-2147483648,std::numeric_limits<float>::infinity()}}}};
    ar & v;
    return 321;
  }
  uint16_t input_322() {
    std::map<int8_t, std::map<int32_t, int8_t>> v = {{-128,{{-2147483648,127}}}};
    ar & v;
    return 322;
  }
  uint16_t input_323() {
    std::map<int8_t, std::map<int32_t, bool>> v = {{-128,{{-2147483648,true}}}};
    ar & v;
    return 323;
  }
  uint16_t input_324() {
    std::map<int8_t, std::map<int32_t, int32_t>> v = {{-128,{{-2147483648,-2147483648}}}};
    ar & v;
    return 324;
  }
  uint16_t input_325() {
    std::map<int8_t, std::map<int32_t, std::string>> v = {{-128,{{-2147483648,""}}}};
    ar & v;
    return 325;
  }
  uint16_t input_326() {
    std::map<int8_t, std::map<int32_t, uint64_t>> v = {{-128,{{-2147483648,1}}}};
    ar & v;
    return 326;
  }
  uint16_t input_327() {
    std::map<int8_t, std::map<std::string, float>> v = {{-128,{{"\1\2\3\4\5\0\1\2\3\4",std::numeric_limits<float>::min()}}}};
    ar & v;
    return 327;
  }
  uint16_t input_328() {
    std::map<int8_t, std::map<std::string, int8_t>> v = {{-128,{{"\1\2\3\4\5\0\1\2\3\4",-128}}}};
    ar & v;
    return 328;
  }
  uint16_t input_329() {
    std::map<int8_t, std::map<std::string, bool>> v = {{-128,{{"\1\2\3\4\5\0\1\2\3\4",false}}}};
    ar & v;
    return 329;
  }
  uint16_t input_330() {
    std::map<int8_t, std::map<std::string, int32_t>> v = {{-128,{{"\1\2\3\4\5\0\1\2\3\4",-2147483648}}}};
    ar & v;
    return 330;
  }
  uint16_t input_331() {
    std::map<int8_t, std::map<std::string, std::string>> v = {{-128,{{"\1\2\3\4\5\0\1\2\3\4",""}}}};
    ar & v;
    return 331;
  }
  uint16_t input_332() {
    std::map<int8_t, std::map<std::string, uint64_t>> v = {{-128,{{"\1\2\3\4\5\0\1\2\3\4",std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 332;
  }
  uint16_t input_333() {
    std::map<int8_t, std::map<uint64_t, float>> v = {{-128,{{std::numeric_limits<uint64_t>::max(),std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 333;
  }
  uint16_t input_334() {
    std::map<int8_t, std::map<uint64_t, int8_t>> v = {{-128,{{std::numeric_limits<uint64_t>::max(),127}}}};
    ar & v;
    return 334;
  }
  uint16_t input_335() {
    std::map<int8_t, std::map<uint64_t, bool>> v = {{-128,{{std::numeric_limits<uint64_t>::max(),true}}}};
    ar & v;
    return 335;
  }
  uint16_t input_336() {
    std::map<int8_t, std::map<uint64_t, int32_t>> v = {{-128,{{std::numeric_limits<uint64_t>::max(),0}}}};
    ar & v;
    return 336;
  }
  uint16_t input_337() {
    std::map<int8_t, std::map<uint64_t, std::string>> v = {{-128,{{std::numeric_limits<uint64_t>::max(),""}}}};
    ar & v;
    return 337;
  }
  uint16_t input_338() {
    std::map<int8_t, std::map<uint64_t, uint64_t>> v = {{-128,{{std::numeric_limits<uint64_t>::max(),std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 338;
  }
  uint16_t input_339() {
    std::map<bool, std::map<float, float>> v = {{true,{{std::numeric_limits<float>::max(),std::numeric_limits<float>::infinity()}}}};
    ar & v;
    return 339;
  }
  uint16_t input_340() {
    std::map<bool, std::map<float, int8_t>> v = {{true,{{std::numeric_limits<float>::max(),-1}}}};
    ar & v;
    return 340;
  }
  uint16_t input_341() {
    std::map<bool, std::map<float, bool>> v = {{true,{{std::numeric_limits<float>::max(),false}}}};
    ar & v;
    return 341;
  }
  uint16_t input_342() {
    std::map<bool, std::map<float, int32_t>> v = {{true,{{std::numeric_limits<float>::max(),-2147483648}}}};
    ar & v;
    return 342;
  }
  uint16_t input_343() {
    std::map<bool, std::map<float, std::string>> v = {{true,{{std::numeric_limits<float>::max(),"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 343;
  }
  uint16_t input_344() {
    std::map<bool, std::map<float, uint64_t>> v = {{true,{{std::numeric_limits<float>::max(),1}}}};
    ar & v;
    return 344;
  }
  uint16_t input_345() {
    std::map<bool, std::map<int8_t, float>> v = {{true,{{-128,-5.2e26}}}};
    ar & v;
    return 345;
  }
  uint16_t input_346() {
    std::map<bool, std::map<int8_t, int8_t>> v = {{true,{{-128,127}}}};
    ar & v;
    return 346;
  }
  uint16_t input_347() {
    std::map<bool, std::map<int8_t, bool>> v = {{true,{{-128,true}}}};
    ar & v;
    return 347;
  }
  uint16_t input_348() {
    std::map<bool, std::map<int8_t, int32_t>> v = {{true,{{-128,-2147483648}}}};
    ar & v;
    return 348;
  }
  uint16_t input_349() {
    std::map<bool, std::map<int8_t, std::string>> v = {{true,{{-128,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 349;
  }
  uint16_t input_350() {
    std::map<bool, std::map<int8_t, uint64_t>> v = {{true,{{-128,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 350;
  }
  uint16_t input_351() {
    std::map<bool, std::map<bool, float>> v = {{true,{{false,std::numeric_limits<float>::min()}}}};
    ar & v;
    return 351;
  }
  uint16_t input_352() {
    std::map<bool, std::map<bool, int8_t>> v = {{true,{{false,-128}}}};
    ar & v;
    return 352;
  }
  uint16_t input_353() {
    std::map<bool, std::map<bool, bool>> v = {{true,{{false,true}}}};
    ar & v;
    return 353;
  }
  uint16_t input_354() {
    std::map<bool, std::map<bool, int32_t>> v = {{true,{{false,2147483647}}}};
    ar & v;
    return 354;
  }
  uint16_t input_355() {
    std::map<bool, std::map<bool, std::string>> v = {{true,{{false,""}}}};
    ar & v;
    return 355;
  }
  uint16_t input_356() {
    std::map<bool, std::map<bool, uint64_t>> v = {{true,{{false,1}}}};
    ar & v;
    return 356;
  }
  uint16_t input_357() {
    std::map<bool, std::map<int32_t, float>> v = {{true,{{-2147483648,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 357;
  }
  uint16_t input_358() {
    std::map<bool, std::map<int32_t, int8_t>> v = {{true,{{-2147483648,127}}}};
    ar & v;
    return 358;
  }
  uint16_t input_359() {
    std::map<bool, std::map<int32_t, bool>> v = {{true,{{-2147483648,false}}}};
    ar & v;
    return 359;
  }
  uint16_t input_360() {
    std::map<bool, std::map<int32_t, int32_t>> v = {{true,{{-2147483648,2147483647}}}};
    ar & v;
    return 360;
  }
  uint16_t input_361() {
    std::map<bool, std::map<int32_t, std::string>> v = {{true,{{-2147483648,""}}}};
    ar & v;
    return 361;
  }
  uint16_t input_362() {
    std::map<bool, std::map<int32_t, uint64_t>> v = {{true,{{-2147483648,1}}}};
    ar & v;
    return 362;
  }
  uint16_t input_363() {
    std::map<bool, std::map<std::string, float>> v = {{true,{{"\1\2\3\4\5\0\1\2\3\4",std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 363;
  }
  uint16_t input_364() {
    std::map<bool, std::map<std::string, int8_t>> v = {{true,{{"\1\2\3\4\5\0\1\2\3\4",-1}}}};
    ar & v;
    return 364;
  }
  uint16_t input_365() {
    std::map<bool, std::map<std::string, bool>> v = {{true,{{"\1\2\3\4\5\0\1\2\3\4",false}}}};
    ar & v;
    return 365;
  }
  uint16_t input_366() {
    std::map<bool, std::map<std::string, int32_t>> v = {{true,{{"\1\2\3\4\5\0\1\2\3\4",2147483647}}}};
    ar & v;
    return 366;
  }
  uint16_t input_367() {
    std::map<bool, std::map<std::string, std::string>> v = {{true,{{"\1\2\3\4\5\0\1\2\3\4","\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 367;
  }
  uint16_t input_368() {
    std::map<bool, std::map<std::string, uint64_t>> v = {{true,{{"\1\2\3\4\5\0\1\2\3\4",std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 368;
  }
  uint16_t input_369() {
    std::map<bool, std::map<uint64_t, float>> v = {{true,{{std::numeric_limits<uint64_t>::max(),std::numeric_limits<float>::max()}}}};
    ar & v;
    return 369;
  }
  uint16_t input_370() {
    std::map<bool, std::map<uint64_t, int8_t>> v = {{true,{{std::numeric_limits<uint64_t>::max(),127}}}};
    ar & v;
    return 370;
  }
  uint16_t input_371() {
    std::map<bool, std::map<uint64_t, bool>> v = {{true,{{std::numeric_limits<uint64_t>::max(),false}}}};
    ar & v;
    return 371;
  }
  uint16_t input_372() {
    std::map<bool, std::map<uint64_t, int32_t>> v = {{true,{{std::numeric_limits<uint64_t>::max(),2147483647}}}};
    ar & v;
    return 372;
  }
  uint16_t input_373() {
    std::map<bool, std::map<uint64_t, std::string>> v = {{true,{{std::numeric_limits<uint64_t>::max(),"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 373;
  }
  uint16_t input_374() {
    std::map<bool, std::map<uint64_t, uint64_t>> v = {{true,{{std::numeric_limits<uint64_t>::max(),1}}}};
    ar & v;
    return 374;
  }
  uint16_t input_375() {
    std::map<int32_t, std::map<float, float>> v = {{2147483647,{{std::numeric_limits<float>::infinity(),std::numeric_limits<float>::min()}}}};
    ar & v;
    return 375;
  }
  uint16_t input_376() {
    std::map<int32_t, std::map<float, int8_t>> v = {{2147483647,{{std::numeric_limits<float>::infinity(),-128}}}};
    ar & v;
    return 376;
  }
  uint16_t input_377() {
    std::map<int32_t, std::map<float, bool>> v = {{2147483647,{{std::numeric_limits<float>::infinity(),false}}}};
    ar & v;
    return 377;
  }
  uint16_t input_378() {
    std::map<int32_t, std::map<float, int32_t>> v = {{2147483647,{{std::numeric_limits<float>::infinity(),2147483647}}}};
    ar & v;
    return 378;
  }
  uint16_t input_379() {
    std::map<int32_t, std::map<float, std::string>> v = {{2147483647,{{std::numeric_limits<float>::infinity(),"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 379;
  }
  uint16_t input_380() {
    std::map<int32_t, std::map<float, uint64_t>> v = {{2147483647,{{std::numeric_limits<float>::infinity(),std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 380;
  }
  uint16_t input_381() {
    std::map<int32_t, std::map<int8_t, float>> v = {{2147483647,{{0,-5.2e26}}}};
    ar & v;
    return 381;
  }
  uint16_t input_382() {
    std::map<int32_t, std::map<int8_t, int8_t>> v = {{2147483647,{{0,-1}}}};
    ar & v;
    return 382;
  }
  uint16_t input_383() {
    std::map<int32_t, std::map<int8_t, bool>> v = {{2147483647,{{0,false}}}};
    ar & v;
    return 383;
  }
  uint16_t input_384() {
    std::map<int32_t, std::map<int8_t, int32_t>> v = {{2147483647,{{0,2147483647}}}};
    ar & v;
    return 384;
  }
  uint16_t input_385() {
    std::map<int32_t, std::map<int8_t, std::string>> v = {{2147483647,{{0,""}}}};
    ar & v;
    return 385;
  }
  uint16_t input_386() {
    std::map<int32_t, std::map<int8_t, uint64_t>> v = {{2147483647,{{0,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 386;
  }
  uint16_t input_387() {
    std::map<int32_t, std::map<bool, float>> v = {{2147483647,{{false,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 387;
  }
  uint16_t input_388() {
    std::map<int32_t, std::map<bool, int8_t>> v = {{2147483647,{{false,-128}}}};
    ar & v;
    return 388;
  }
  uint16_t input_389() {
    std::map<int32_t, std::map<bool, bool>> v = {{2147483647,{{false,true}}}};
    ar & v;
    return 389;
  }
  uint16_t input_390() {
    std::map<int32_t, std::map<bool, int32_t>> v = {{2147483647,{{false,2147483647}}}};
    ar & v;
    return 390;
  }
  uint16_t input_391() {
    std::map<int32_t, std::map<bool, std::string>> v = {{2147483647,{{false,""}}}};
    ar & v;
    return 391;
  }
  uint16_t input_392() {
    std::map<int32_t, std::map<bool, uint64_t>> v = {{2147483647,{{false,1}}}};
    ar & v;
    return 392;
  }
  uint16_t input_393() {
    std::map<int32_t, std::map<int32_t, float>> v = {{2147483647,{{-2147483648,std::numeric_limits<float>::min()}}}};
    ar & v;
    return 393;
  }
  uint16_t input_394() {
    std::map<int32_t, std::map<int32_t, int8_t>> v = {{2147483647,{{-2147483648,-128}}}};
    ar & v;
    return 394;
  }
  uint16_t input_395() {
    std::map<int32_t, std::map<int32_t, bool>> v = {{2147483647,{{-2147483648,false}}}};
    ar & v;
    return 395;
  }
  uint16_t input_396() {
    std::map<int32_t, std::map<int32_t, int32_t>> v = {{2147483647,{{-2147483648,-2147483648}}}};
    ar & v;
    return 396;
  }
  uint16_t input_397() {
    std::map<int32_t, std::map<int32_t, std::string>> v = {{2147483647,{{-2147483648,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 397;
  }
  uint16_t input_398() {
    std::map<int32_t, std::map<int32_t, uint64_t>> v = {{2147483647,{{-2147483648,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 398;
  }
  uint16_t input_399() {
    std::map<int32_t, std::map<std::string, float>> v = {{2147483647,{{"",std::numeric_limits<float>::min()}}}};
    ar & v;
    return 399;
  }
  uint16_t input_400() {
    std::map<int32_t, std::map<std::string, int8_t>> v = {{2147483647,{{"",127}}}};
    ar & v;
    return 400;
  }
  uint16_t input_401() {
    std::map<int32_t, std::map<std::string, bool>> v = {{2147483647,{{"",false}}}};
    ar & v;
    return 401;
  }
  uint16_t input_402() {
    std::map<int32_t, std::map<std::string, int32_t>> v = {{2147483647,{{"",2147483647}}}};
    ar & v;
    return 402;
  }
  uint16_t input_403() {
    std::map<int32_t, std::map<std::string, std::string>> v = {{2147483647,{{"","!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 403;
  }
  uint16_t input_404() {
    std::map<int32_t, std::map<std::string, uint64_t>> v = {{2147483647,{{"",1}}}};
    ar & v;
    return 404;
  }
  uint16_t input_405() {
    std::map<int32_t, std::map<uint64_t, float>> v = {{2147483647,{{1,std::numeric_limits<float>::infinity()}}}};
    ar & v;
    return 405;
  }
  uint16_t input_406() {
    std::map<int32_t, std::map<uint64_t, int8_t>> v = {{2147483647,{{1,-128}}}};
    ar & v;
    return 406;
  }
  uint16_t input_407() {
    std::map<int32_t, std::map<uint64_t, bool>> v = {{2147483647,{{1,false}}}};
    ar & v;
    return 407;
  }
  uint16_t input_408() {
    std::map<int32_t, std::map<uint64_t, int32_t>> v = {{2147483647,{{1,-2147483648}}}};
    ar & v;
    return 408;
  }
  uint16_t input_409() {
    std::map<int32_t, std::map<uint64_t, std::string>> v = {{2147483647,{{1,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 409;
  }
  uint16_t input_410() {
    std::map<int32_t, std::map<uint64_t, uint64_t>> v = {{2147483647,{{1,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 410;
  }
  uint16_t input_411() {
    std::map<std::string, std::map<float, float>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<float>::quiet_NaN(),std::numeric_limits<float>::infinity()}}}};
    ar & v;
    return 411;
  }
  uint16_t input_412() {
    std::map<std::string, std::map<float, int8_t>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<float>::quiet_NaN(),-1}}}};
    ar & v;
    return 412;
  }
  uint16_t input_413() {
    std::map<std::string, std::map<float, bool>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<float>::quiet_NaN(),true}}}};
    ar & v;
    return 413;
  }
  uint16_t input_414() {
    std::map<std::string, std::map<float, int32_t>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<float>::quiet_NaN(),2147483647}}}};
    ar & v;
    return 414;
  }
  uint16_t input_415() {
    std::map<std::string, std::map<float, std::string>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<float>::quiet_NaN(),""}}}};
    ar & v;
    return 415;
  }
  uint16_t input_416() {
    std::map<std::string, std::map<float, uint64_t>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<float>::quiet_NaN(),1}}}};
    ar & v;
    return 416;
  }
  uint16_t input_417() {
    std::map<std::string, std::map<int8_t, float>> v = {{"!@#$%^&*( !@$$%&*(",{{0,std::numeric_limits<float>::infinity()}}}};
    ar & v;
    return 417;
  }
  uint16_t input_418() {
    std::map<std::string, std::map<int8_t, int8_t>> v = {{"!@#$%^&*( !@$$%&*(",{{0,0}}}};
    ar & v;
    return 418;
  }
  uint16_t input_419() {
    std::map<std::string, std::map<int8_t, bool>> v = {{"!@#$%^&*( !@$$%&*(",{{0,false}}}};
    ar & v;
    return 419;
  }
  uint16_t input_420() {
    std::map<std::string, std::map<int8_t, int32_t>> v = {{"!@#$%^&*( !@$$%&*(",{{0,-2147483648}}}};
    ar & v;
    return 420;
  }
  uint16_t input_421() {
    std::map<std::string, std::map<int8_t, std::string>> v = {{"!@#$%^&*( !@$$%&*(",{{0,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 421;
  }
  uint16_t input_422() {
    std::map<std::string, std::map<int8_t, uint64_t>> v = {{"!@#$%^&*( !@$$%&*(",{{0,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 422;
  }
  uint16_t input_423() {
    std::map<std::string, std::map<bool, float>> v = {{"!@#$%^&*( !@$$%&*(",{{false,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 423;
  }
  uint16_t input_424() {
    std::map<std::string, std::map<bool, int8_t>> v = {{"!@#$%^&*( !@$$%&*(",{{false,127}}}};
    ar & v;
    return 424;
  }
  uint16_t input_425() {
    std::map<std::string, std::map<bool, bool>> v = {{"!@#$%^&*( !@$$%&*(",{{false,false}}}};
    ar & v;
    return 425;
  }
  uint16_t input_426() {
    std::map<std::string, std::map<bool, int32_t>> v = {{"!@#$%^&*( !@$$%&*(",{{false,-2147483648}}}};
    ar & v;
    return 426;
  }
  uint16_t input_427() {
    std::map<std::string, std::map<bool, std::string>> v = {{"!@#$%^&*( !@$$%&*(",{{false,""}}}};
    ar & v;
    return 427;
  }
  uint16_t input_428() {
    std::map<std::string, std::map<bool, uint64_t>> v = {{"!@#$%^&*( !@$$%&*(",{{false,1}}}};
    ar & v;
    return 428;
  }
  uint16_t input_429() {
    std::map<std::string, std::map<int32_t, float>> v = {{"!@#$%^&*( !@$$%&*(",{{-2147483648,std::numeric_limits<float>::max()}}}};
    ar & v;
    return 429;
  }
  uint16_t input_430() {
    std::map<std::string, std::map<int32_t, int8_t>> v = {{"!@#$%^&*( !@$$%&*(",{{-2147483648,0}}}};
    ar & v;
    return 430;
  }
  uint16_t input_431() {
    std::map<std::string, std::map<int32_t, bool>> v = {{"!@#$%^&*( !@$$%&*(",{{-2147483648,true}}}};
    ar & v;
    return 431;
  }
  uint16_t input_432() {
    std::map<std::string, std::map<int32_t, int32_t>> v = {{"!@#$%^&*( !@$$%&*(",{{-2147483648,-2147483648}}}};
    ar & v;
    return 432;
  }
  uint16_t input_433() {
    std::map<std::string, std::map<int32_t, std::string>> v = {{"!@#$%^&*( !@$$%&*(",{{-2147483648,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 433;
  }
  uint16_t input_434() {
    std::map<std::string, std::map<int32_t, uint64_t>> v = {{"!@#$%^&*( !@$$%&*(",{{-2147483648,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 434;
  }
  uint16_t input_435() {
    std::map<std::string, std::map<std::string, float>> v = {{"!@#$%^&*( !@$$%&*(",{{"",std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 435;
  }
  uint16_t input_436() {
    std::map<std::string, std::map<std::string, int8_t>> v = {{"!@#$%^&*( !@$$%&*(",{{"",-128}}}};
    ar & v;
    return 436;
  }
  uint16_t input_437() {
    std::map<std::string, std::map<std::string, bool>> v = {{"!@#$%^&*( !@$$%&*(",{{"",true}}}};
    ar & v;
    return 437;
  }
  uint16_t input_438() {
    std::map<std::string, std::map<std::string, int32_t>> v = {{"!@#$%^&*( !@$$%&*(",{{"",0}}}};
    ar & v;
    return 438;
  }
  uint16_t input_439() {
    std::map<std::string, std::map<std::string, std::string>> v = {{"!@#$%^&*( !@$$%&*(",{{"","!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 439;
  }
  uint16_t input_440() {
    std::map<std::string, std::map<std::string, uint64_t>> v = {{"!@#$%^&*( !@$$%&*(",{{"",1}}}};
    ar & v;
    return 440;
  }
  uint16_t input_441() {
    std::map<std::string, std::map<uint64_t, float>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<uint64_t>::max(),std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 441;
  }
  uint16_t input_442() {
    std::map<std::string, std::map<uint64_t, int8_t>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<uint64_t>::max(),127}}}};
    ar & v;
    return 442;
  }
  uint16_t input_443() {
    std::map<std::string, std::map<uint64_t, bool>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<uint64_t>::max(),true}}}};
    ar & v;
    return 443;
  }
  uint16_t input_444() {
    std::map<std::string, std::map<uint64_t, int32_t>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<uint64_t>::max(),-2147483648}}}};
    ar & v;
    return 444;
  }
  uint16_t input_445() {
    std::map<std::string, std::map<uint64_t, std::string>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<uint64_t>::max(),"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 445;
  }
  uint16_t input_446() {
    std::map<std::string, std::map<uint64_t, uint64_t>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<uint64_t>::max(),1}}}};
    ar & v;
    return 446;
  }
  uint16_t input_447() {
    std::map<uint64_t, std::map<float, float>> v = {{1,{{-5.2e26,std::numeric_limits<float>::infinity()}}}};
    ar & v;
    return 447;
  }
  uint16_t input_448() {
    std::map<uint64_t, std::map<float, int8_t>> v = {{1,{{-5.2e26,-1}}}};
    ar & v;
    return 448;
  }
  uint16_t input_449() {
    std::map<uint64_t, std::map<float, bool>> v = {{1,{{-5.2e26,false}}}};
    ar & v;
    return 449;
  }
  uint16_t input_450() {
    std::map<uint64_t, std::map<float, int32_t>> v = {{1,{{-5.2e26,-2147483648}}}};
    ar & v;
    return 450;
  }
  uint16_t input_451() {
    std::map<uint64_t, std::map<float, std::string>> v = {{1,{{-5.2e26,"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 451;
  }
  uint16_t input_452() {
    std::map<uint64_t, std::map<float, uint64_t>> v = {{1,{{-5.2e26,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 452;
  }
  uint16_t input_453() {
    std::map<uint64_t, std::map<int8_t, float>> v = {{1,{{-1,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 453;
  }
  uint16_t input_454() {
    std::map<uint64_t, std::map<int8_t, int8_t>> v = {{1,{{-1,127}}}};
    ar & v;
    return 454;
  }
  uint16_t input_455() {
    std::map<uint64_t, std::map<int8_t, bool>> v = {{1,{{-1,true}}}};
    ar & v;
    return 455;
  }
  uint16_t input_456() {
    std::map<uint64_t, std::map<int8_t, int32_t>> v = {{1,{{-1,-2147483648}}}};
    ar & v;
    return 456;
  }
  uint16_t input_457() {
    std::map<uint64_t, std::map<int8_t, std::string>> v = {{1,{{-1,"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 457;
  }
  uint16_t input_458() {
    std::map<uint64_t, std::map<int8_t, uint64_t>> v = {{1,{{-1,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 458;
  }
  uint16_t input_459() {
    std::map<uint64_t, std::map<bool, float>> v = {{1,{{false,-5.2e26}}}};
    ar & v;
    return 459;
  }
  uint16_t input_460() {
    std::map<uint64_t, std::map<bool, int8_t>> v = {{1,{{false,0}}}};
    ar & v;
    return 460;
  }
  uint16_t input_461() {
    std::map<uint64_t, std::map<bool, bool>> v = {{1,{{false,true}}}};
    ar & v;
    return 461;
  }
  uint16_t input_462() {
    std::map<uint64_t, std::map<bool, int32_t>> v = {{1,{{false,0}}}};
    ar & v;
    return 462;
  }
  uint16_t input_463() {
    std::map<uint64_t, std::map<bool, std::string>> v = {{1,{{false,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 463;
  }
  uint16_t input_464() {
    std::map<uint64_t, std::map<bool, uint64_t>> v = {{1,{{false,1}}}};
    ar & v;
    return 464;
  }
  uint16_t input_465() {
    std::map<uint64_t, std::map<int32_t, float>> v = {{1,{{2147483647,std::numeric_limits<float>::min()}}}};
    ar & v;
    return 465;
  }
  uint16_t input_466() {
    std::map<uint64_t, std::map<int32_t, int8_t>> v = {{1,{{2147483647,-128}}}};
    ar & v;
    return 466;
  }
  uint16_t input_467() {
    std::map<uint64_t, std::map<int32_t, bool>> v = {{1,{{2147483647,false}}}};
    ar & v;
    return 467;
  }
  uint16_t input_468() {
    std::map<uint64_t, std::map<int32_t, int32_t>> v = {{1,{{2147483647,0}}}};
    ar & v;
    return 468;
  }
  uint16_t input_469() {
    std::map<uint64_t, std::map<int32_t, std::string>> v = {{1,{{2147483647,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 469;
  }
  uint16_t input_470() {
    std::map<uint64_t, std::map<int32_t, uint64_t>> v = {{1,{{2147483647,1}}}};
    ar & v;
    return 470;
  }
  uint16_t input_471() {
    std::map<uint64_t, std::map<std::string, float>> v = {{1,{{"!@#$%^&*( !@$$%&*(",std::numeric_limits<float>::max()}}}};
    ar & v;
    return 471;
  }
  uint16_t input_472() {
    std::map<uint64_t, std::map<std::string, int8_t>> v = {{1,{{"!@#$%^&*( !@$$%&*(",-128}}}};
    ar & v;
    return 472;
  }
  uint16_t input_473() {
    std::map<uint64_t, std::map<std::string, bool>> v = {{1,{{"!@#$%^&*( !@$$%&*(",true}}}};
    ar & v;
    return 473;
  }
  uint16_t input_474() {
    std::map<uint64_t, std::map<std::string, int32_t>> v = {{1,{{"!@#$%^&*( !@$$%&*(",-2147483648}}}};
    ar & v;
    return 474;
  }
  uint16_t input_475() {
    std::map<uint64_t, std::map<std::string, std::string>> v = {{1,{{"!@#$%^&*( !@$$%&*(","!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 475;
  }
  uint16_t input_476() {
    std::map<uint64_t, std::map<std::string, uint64_t>> v = {{1,{{"!@#$%^&*( !@$$%&*(",std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 476;
  }
  uint16_t input_477() {
    std::map<uint64_t, std::map<uint64_t, float>> v = {{1,{{1,std::numeric_limits<float>::infinity()}}}};
    ar & v;
    return 477;
  }
  uint16_t input_478() {
    std::map<uint64_t, std::map<uint64_t, int8_t>> v = {{1,{{1,-1}}}};
    ar & v;
    return 478;
  }
  uint16_t input_479() {
    std::map<uint64_t, std::map<uint64_t, bool>> v = {{1,{{1,true}}}};
    ar & v;
    return 479;
  }
  uint16_t input_480() {
    std::map<uint64_t, std::map<uint64_t, int32_t>> v = {{1,{{1,-2147483648}}}};
    ar & v;
    return 480;
  }
  uint16_t input_481() {
    std::map<uint64_t, std::map<uint64_t, std::string>> v = {{1,{{1,"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 481;
  }
  uint16_t input_482() {
    std::map<uint64_t, std::map<uint64_t, uint64_t>> v = {{1,{{1,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 482;
  }
  uint16_t input_483() {
    std::deque<std::set<float>> v = {{std::numeric_limits<float>::infinity()}};
    ar & v;
    return 483;
  }
  uint16_t input_484() {
    std::deque<std::set<int8_t>> v = {{0}};
    ar & v;
    return 484;
  }
  uint16_t input_485() {
    std::deque<std::set<bool>> v = {{true}};
    ar & v;
    return 485;
  }
  uint16_t input_486() {
    std::deque<std::set<int32_t>> v = {{-2147483648}};
    ar & v;
    return 486;
  }
  uint16_t input_487() {
    std::deque<std::set<std::string>> v = {{"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 487;
  }
  uint16_t input_488() {
    std::deque<std::set<uint64_t>> v = {{std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 488;
  }
  uint16_t input_489() {
    std::unordered_map<float, std::unordered_multimap<float, float>> v = {{-5.2e26,{{-5.2e26,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 489;
  }
  uint16_t input_490() {
    std::unordered_map<float, std::unordered_multimap<float, int8_t>> v = {{-5.2e26,{{-5.2e26,-128}}}};
    ar & v;
    return 490;
  }
  uint16_t input_491() {
    std::unordered_map<float, std::unordered_multimap<float, bool>> v = {{-5.2e26,{{-5.2e26,true}}}};
    ar & v;
    return 491;
  }
  uint16_t input_492() {
    std::unordered_map<float, std::unordered_multimap<float, int32_t>> v = {{-5.2e26,{{-5.2e26,0}}}};
    ar & v;
    return 492;
  }
  uint16_t input_493() {
    std::unordered_map<float, std::unordered_multimap<float, std::string>> v = {{-5.2e26,{{-5.2e26,""}}}};
    ar & v;
    return 493;
  }
  uint16_t input_494() {
    std::unordered_map<float, std::unordered_multimap<float, uint64_t>> v = {{-5.2e26,{{-5.2e26,1}}}};
    ar & v;
    return 494;
  }
  uint16_t input_495() {
    std::unordered_map<float, std::unordered_multimap<int8_t, float>> v = {{-5.2e26,{{127,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 495;
  }
  uint16_t input_496() {
    std::unordered_map<float, std::unordered_multimap<int8_t, int8_t>> v = {{-5.2e26,{{127,127}}}};
    ar & v;
    return 496;
  }
  uint16_t input_497() {
    std::unordered_map<float, std::unordered_multimap<int8_t, bool>> v = {{-5.2e26,{{127,true}}}};
    ar & v;
    return 497;
  }
  uint16_t input_498() {
    std::unordered_map<float, std::unordered_multimap<int8_t, int32_t>> v = {{-5.2e26,{{127,0}}}};
    ar & v;
    return 498;
  }
  uint16_t input_499() {
    std::unordered_map<float, std::unordered_multimap<int8_t, std::string>> v = {{-5.2e26,{{127,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 499;
  }
  uint16_t input_500() {
    std::unordered_map<float, std::unordered_multimap<int8_t, uint64_t>> v = {{-5.2e26,{{127,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 500;
  }
  uint16_t input_501() {
    std::unordered_map<float, std::unordered_multimap<bool, float>> v = {{-5.2e26,{{true,std::numeric_limits<float>::max()}}}};
    ar & v;
    return 501;
  }
  uint16_t input_502() {
    std::unordered_map<float, std::unordered_multimap<bool, int8_t>> v = {{-5.2e26,{{true,-128}}}};
    ar & v;
    return 502;
  }
  uint16_t input_503() {
    std::unordered_map<float, std::unordered_multimap<bool, bool>> v = {{-5.2e26,{{true,true}}}};
    ar & v;
    return 503;
  }
  uint16_t input_504() {
    std::unordered_map<float, std::unordered_multimap<bool, int32_t>> v = {{-5.2e26,{{true,0}}}};
    ar & v;
    return 504;
  }
  uint16_t input_505() {
    std::unordered_map<float, std::unordered_multimap<bool, std::string>> v = {{-5.2e26,{{true,"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 505;
  }
  uint16_t input_506() {
    std::unordered_map<float, std::unordered_multimap<bool, uint64_t>> v = {{-5.2e26,{{true,1}}}};
    ar & v;
    return 506;
  }
  uint16_t input_507() {
    std::unordered_map<float, std::unordered_multimap<int32_t, float>> v = {{-5.2e26,{{0,std::numeric_limits<float>::max()}}}};
    ar & v;
    return 507;
  }
  uint16_t input_508() {
    std::unordered_map<float, std::unordered_multimap<int32_t, int8_t>> v = {{-5.2e26,{{0,-1}}}};
    ar & v;
    return 508;
  }
  uint16_t input_509() {
    std::unordered_map<float, std::unordered_multimap<int32_t, bool>> v = {{-5.2e26,{{0,true}}}};
    ar & v;
    return 509;
  }
  uint16_t input_510() {
    std::unordered_map<float, std::unordered_multimap<int32_t, int32_t>> v = {{-5.2e26,{{0,-2147483648}}}};
    ar & v;
    return 510;
  }
  uint16_t input_511() {
    std::unordered_map<float, std::unordered_multimap<int32_t, std::string>> v = {{-5.2e26,{{0,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 511;
  }
  uint16_t input_512() {
    std::unordered_map<float, std::unordered_multimap<int32_t, uint64_t>> v = {{-5.2e26,{{0,1}}}};
    ar & v;
    return 512;
  }
  uint16_t input_513() {
    std::unordered_map<float, std::unordered_multimap<std::string, float>> v = {{-5.2e26,{{"\1\2\3\4\5\0\1\2\3\4",std::numeric_limits<float>::min()}}}};
    ar & v;
    return 513;
  }
  uint16_t input_514() {
    std::unordered_map<float, std::unordered_multimap<std::string, int8_t>> v = {{-5.2e26,{{"\1\2\3\4\5\0\1\2\3\4",-1}}}};
    ar & v;
    return 514;
  }
  uint16_t input_515() {
    std::unordered_map<float, std::unordered_multimap<std::string, bool>> v = {{-5.2e26,{{"\1\2\3\4\5\0\1\2\3\4",true}}}};
    ar & v;
    return 515;
  }
  uint16_t input_516() {
    std::unordered_map<float, std::unordered_multimap<std::string, int32_t>> v = {{-5.2e26,{{"\1\2\3\4\5\0\1\2\3\4",-2147483648}}}};
    ar & v;
    return 516;
  }
  uint16_t input_517() {
    std::unordered_map<float, std::unordered_multimap<std::string, std::string>> v = {{-5.2e26,{{"\1\2\3\4\5\0\1\2\3\4","\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 517;
  }
  uint16_t input_518() {
    std::unordered_map<float, std::unordered_multimap<std::string, uint64_t>> v = {{-5.2e26,{{"\1\2\3\4\5\0\1\2\3\4",1}}}};
    ar & v;
    return 518;
  }
  uint16_t input_519() {
    std::unordered_map<float, std::unordered_multimap<uint64_t, float>> v = {{-5.2e26,{{1,std::numeric_limits<float>::max()}}}};
    ar & v;
    return 519;
  }
  uint16_t input_520() {
    std::unordered_map<float, std::unordered_multimap<uint64_t, int8_t>> v = {{-5.2e26,{{1,0}}}};
    ar & v;
    return 520;
  }
  uint16_t input_521() {
    std::unordered_map<float, std::unordered_multimap<uint64_t, bool>> v = {{-5.2e26,{{1,true}}}};
    ar & v;
    return 521;
  }
  uint16_t input_522() {
    std::unordered_map<float, std::unordered_multimap<uint64_t, int32_t>> v = {{-5.2e26,{{1,2147483647}}}};
    ar & v;
    return 522;
  }
  uint16_t input_523() {
    std::unordered_map<float, std::unordered_multimap<uint64_t, std::string>> v = {{-5.2e26,{{1,""}}}};
    ar & v;
    return 523;
  }
  uint16_t input_524() {
    std::unordered_map<float, std::unordered_multimap<uint64_t, uint64_t>> v = {{-5.2e26,{{1,1}}}};
    ar & v;
    return 524;
  }
  uint16_t input_525() {
    std::unordered_map<int8_t, std::unordered_multimap<float, float>> v = {{-1,{{std::numeric_limits<float>::quiet_NaN(),-5.2e26}}}};
    ar & v;
    return 525;
  }
  uint16_t input_526() {
    std::unordered_map<int8_t, std::unordered_multimap<float, int8_t>> v = {{-1,{{std::numeric_limits<float>::quiet_NaN(),127}}}};
    ar & v;
    return 526;
  }
  uint16_t input_527() {
    std::unordered_map<int8_t, std::unordered_multimap<float, bool>> v = {{-1,{{std::numeric_limits<float>::quiet_NaN(),false}}}};
    ar & v;
    return 527;
  }
  uint16_t input_528() {
    std::unordered_map<int8_t, std::unordered_multimap<float, int32_t>> v = {{-1,{{std::numeric_limits<float>::quiet_NaN(),2147483647}}}};
    ar & v;
    return 528;
  }
  uint16_t input_529() {
    std::unordered_map<int8_t, std::unordered_multimap<float, std::string>> v = {{-1,{{std::numeric_limits<float>::quiet_NaN(),"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 529;
  }
  uint16_t input_530() {
    std::unordered_map<int8_t, std::unordered_multimap<float, uint64_t>> v = {{-1,{{std::numeric_limits<float>::quiet_NaN(),1}}}};
    ar & v;
    return 530;
  }
  uint16_t input_531() {
    std::unordered_map<int8_t, std::unordered_multimap<int8_t, float>> v = {{-1,{{-128,std::numeric_limits<float>::min()}}}};
    ar & v;
    return 531;
  }
  uint16_t input_532() {
    std::unordered_map<int8_t, std::unordered_multimap<int8_t, int8_t>> v = {{-1,{{-128,0}}}};
    ar & v;
    return 532;
  }
  uint16_t input_533() {
    std::unordered_map<int8_t, std::unordered_multimap<int8_t, bool>> v = {{-1,{{-128,false}}}};
    ar & v;
    return 533;
  }
  uint16_t input_534() {
    std::unordered_map<int8_t, std::unordered_multimap<int8_t, int32_t>> v = {{-1,{{-128,0}}}};
    ar & v;
    return 534;
  }
  uint16_t input_535() {
    std::unordered_map<int8_t, std::unordered_multimap<int8_t, std::string>> v = {{-1,{{-128,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 535;
  }
  uint16_t input_536() {
    std::unordered_map<int8_t, std::unordered_multimap<int8_t, uint64_t>> v = {{-1,{{-128,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 536;
  }
  uint16_t input_537() {
    std::unordered_map<int8_t, std::unordered_multimap<bool, float>> v = {{-1,{{false,std::numeric_limits<float>::min()}}}};
    ar & v;
    return 537;
  }
  uint16_t input_538() {
    std::unordered_map<int8_t, std::unordered_multimap<bool, int8_t>> v = {{-1,{{false,-128}}}};
    ar & v;
    return 538;
  }
  uint16_t input_539() {
    std::unordered_map<int8_t, std::unordered_multimap<bool, bool>> v = {{-1,{{false,true}}}};
    ar & v;
    return 539;
  }
  uint16_t input_540() {
    std::unordered_map<int8_t, std::unordered_multimap<bool, int32_t>> v = {{-1,{{false,2147483647}}}};
    ar & v;
    return 540;
  }
  uint16_t input_541() {
    std::unordered_map<int8_t, std::unordered_multimap<bool, std::string>> v = {{-1,{{false,"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 541;
  }
  uint16_t input_542() {
    std::unordered_map<int8_t, std::unordered_multimap<bool, uint64_t>> v = {{-1,{{false,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 542;
  }
  uint16_t input_543() {
    std::unordered_map<int8_t, std::unordered_multimap<int32_t, float>> v = {{-1,{{-2147483648,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 543;
  }
  uint16_t input_544() {
    std::unordered_map<int8_t, std::unordered_multimap<int32_t, int8_t>> v = {{-1,{{-2147483648,-1}}}};
    ar & v;
    return 544;
  }
  uint16_t input_545() {
    std::unordered_map<int8_t, std::unordered_multimap<int32_t, bool>> v = {{-1,{{-2147483648,true}}}};
    ar & v;
    return 545;
  }
  uint16_t input_546() {
    std::unordered_map<int8_t, std::unordered_multimap<int32_t, int32_t>> v = {{-1,{{-2147483648,-2147483648}}}};
    ar & v;
    return 546;
  }
  uint16_t input_547() {
    std::unordered_map<int8_t, std::unordered_multimap<int32_t, std::string>> v = {{-1,{{-2147483648,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 547;
  }
  uint16_t input_548() {
    std::unordered_map<int8_t, std::unordered_multimap<int32_t, uint64_t>> v = {{-1,{{-2147483648,1}}}};
    ar & v;
    return 548;
  }
  uint16_t input_549() {
    std::unordered_map<int8_t, std::unordered_multimap<std::string, float>> v = {{-1,{{"",std::numeric_limits<float>::min()}}}};
    ar & v;
    return 549;
  }
  uint16_t input_550() {
    std::unordered_map<int8_t, std::unordered_multimap<std::string, int8_t>> v = {{-1,{{"",0}}}};
    ar & v;
    return 550;
  }
  uint16_t input_551() {
    std::unordered_map<int8_t, std::unordered_multimap<std::string, bool>> v = {{-1,{{"",false}}}};
    ar & v;
    return 551;
  }
  uint16_t input_552() {
    std::unordered_map<int8_t, std::unordered_multimap<std::string, int32_t>> v = {{-1,{{"",0}}}};
    ar & v;
    return 552;
  }
  uint16_t input_553() {
    std::unordered_map<int8_t, std::unordered_multimap<std::string, std::string>> v = {{-1,{{"","\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 553;
  }
  uint16_t input_554() {
    std::unordered_map<int8_t, std::unordered_multimap<std::string, uint64_t>> v = {{-1,{{"",1}}}};
    ar & v;
    return 554;
  }
  uint16_t input_555() {
    std::unordered_map<int8_t, std::unordered_multimap<uint64_t, float>> v = {{-1,{{1,std::numeric_limits<float>::infinity()}}}};
    ar & v;
    return 555;
  }
  uint16_t input_556() {
    std::unordered_map<int8_t, std::unordered_multimap<uint64_t, int8_t>> v = {{-1,{{1,-128}}}};
    ar & v;
    return 556;
  }
  uint16_t input_557() {
    std::unordered_map<int8_t, std::unordered_multimap<uint64_t, bool>> v = {{-1,{{1,false}}}};
    ar & v;
    return 557;
  }
  uint16_t input_558() {
    std::unordered_map<int8_t, std::unordered_multimap<uint64_t, int32_t>> v = {{-1,{{1,-2147483648}}}};
    ar & v;
    return 558;
  }
  uint16_t input_559() {
    std::unordered_map<int8_t, std::unordered_multimap<uint64_t, std::string>> v = {{-1,{{1,"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 559;
  }
  uint16_t input_560() {
    std::unordered_map<int8_t, std::unordered_multimap<uint64_t, uint64_t>> v = {{-1,{{1,1}}}};
    ar & v;
    return 560;
  }
  uint16_t input_561() {
    std::unordered_map<bool, std::unordered_multimap<float, float>> v = {{true,{{std::numeric_limits<float>::quiet_NaN(),std::numeric_limits<float>::max()}}}};
    ar & v;
    return 561;
  }
  uint16_t input_562() {
    std::unordered_map<bool, std::unordered_multimap<float, int8_t>> v = {{true,{{std::numeric_limits<float>::quiet_NaN(),127}}}};
    ar & v;
    return 562;
  }
  uint16_t input_563() {
    std::unordered_map<bool, std::unordered_multimap<float, bool>> v = {{true,{{std::numeric_limits<float>::quiet_NaN(),true}}}};
    ar & v;
    return 563;
  }
  uint16_t input_564() {
    std::unordered_map<bool, std::unordered_multimap<float, int32_t>> v = {{true,{{std::numeric_limits<float>::quiet_NaN(),2147483647}}}};
    ar & v;
    return 564;
  }
  uint16_t input_565() {
    std::unordered_map<bool, std::unordered_multimap<float, std::string>> v = {{true,{{std::numeric_limits<float>::quiet_NaN(),"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 565;
  }
  uint16_t input_566() {
    std::unordered_map<bool, std::unordered_multimap<float, uint64_t>> v = {{true,{{std::numeric_limits<float>::quiet_NaN(),std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 566;
  }
  uint16_t input_567() {
    std::unordered_map<bool, std::unordered_multimap<int8_t, float>> v = {{true,{{0,-5.2e26}}}};
    ar & v;
    return 567;
  }
  uint16_t input_568() {
    std::unordered_map<bool, std::unordered_multimap<int8_t, int8_t>> v = {{true,{{0,-1}}}};
    ar & v;
    return 568;
  }
  uint16_t input_569() {
    std::unordered_map<bool, std::unordered_multimap<int8_t, bool>> v = {{true,{{0,false}}}};
    ar & v;
    return 569;
  }
  uint16_t input_570() {
    std::unordered_map<bool, std::unordered_multimap<int8_t, int32_t>> v = {{true,{{0,2147483647}}}};
    ar & v;
    return 570;
  }
  uint16_t input_571() {
    std::unordered_map<bool, std::unordered_multimap<int8_t, std::string>> v = {{true,{{0,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 571;
  }
  uint16_t input_572() {
    std::unordered_map<bool, std::unordered_multimap<int8_t, uint64_t>> v = {{true,{{0,1}}}};
    ar & v;
    return 572;
  }
  uint16_t input_573() {
    std::unordered_map<bool, std::unordered_multimap<bool, float>> v = {{true,{{false,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 573;
  }
  uint16_t input_574() {
    std::unordered_map<bool, std::unordered_multimap<bool, int8_t>> v = {{true,{{false,-128}}}};
    ar & v;
    return 574;
  }
  uint16_t input_575() {
    std::unordered_map<bool, std::unordered_multimap<bool, bool>> v = {{true,{{false,false}}}};
    ar & v;
    return 575;
  }
  uint16_t input_576() {
    std::unordered_map<bool, std::unordered_multimap<bool, int32_t>> v = {{true,{{false,2147483647}}}};
    ar & v;
    return 576;
  }
  uint16_t input_577() {
    std::unordered_map<bool, std::unordered_multimap<bool, std::string>> v = {{true,{{false,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 577;
  }
  uint16_t input_578() {
    std::unordered_map<bool, std::unordered_multimap<bool, uint64_t>> v = {{true,{{false,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 578;
  }
  uint16_t input_579() {
    std::unordered_map<bool, std::unordered_multimap<int32_t, float>> v = {{true,{{-2147483648,std::numeric_limits<float>::max()}}}};
    ar & v;
    return 579;
  }
  uint16_t input_580() {
    std::unordered_map<bool, std::unordered_multimap<int32_t, int8_t>> v = {{true,{{-2147483648,0}}}};
    ar & v;
    return 580;
  }
  uint16_t input_581() {
    std::unordered_map<bool, std::unordered_multimap<int32_t, bool>> v = {{true,{{-2147483648,false}}}};
    ar & v;
    return 581;
  }
  uint16_t input_582() {
    std::unordered_map<bool, std::unordered_multimap<int32_t, int32_t>> v = {{true,{{-2147483648,-2147483648}}}};
    ar & v;
    return 582;
  }
  uint16_t input_583() {
    std::unordered_map<bool, std::unordered_multimap<int32_t, std::string>> v = {{true,{{-2147483648,""}}}};
    ar & v;
    return 583;
  }
  uint16_t input_584() {
    std::unordered_map<bool, std::unordered_multimap<int32_t, uint64_t>> v = {{true,{{-2147483648,1}}}};
    ar & v;
    return 584;
  }
  uint16_t input_585() {
    std::unordered_map<bool, std::unordered_multimap<std::string, float>> v = {{true,{{"!@#$%^&*( !@$$%&*(",-5.2e26}}}};
    ar & v;
    return 585;
  }
  uint16_t input_586() {
    std::unordered_map<bool, std::unordered_multimap<std::string, int8_t>> v = {{true,{{"!@#$%^&*( !@$$%&*(",-1}}}};
    ar & v;
    return 586;
  }
  uint16_t input_587() {
    std::unordered_map<bool, std::unordered_multimap<std::string, bool>> v = {{true,{{"!@#$%^&*( !@$$%&*(",false}}}};
    ar & v;
    return 587;
  }
  uint16_t input_588() {
    std::unordered_map<bool, std::unordered_multimap<std::string, int32_t>> v = {{true,{{"!@#$%^&*( !@$$%&*(",0}}}};
    ar & v;
    return 588;
  }
  uint16_t input_589() {
    std::unordered_map<bool, std::unordered_multimap<std::string, std::string>> v = {{true,{{"!@#$%^&*( !@$$%&*(",""}}}};
    ar & v;
    return 589;
  }
  uint16_t input_590() {
    std::unordered_map<bool, std::unordered_multimap<std::string, uint64_t>> v = {{true,{{"!@#$%^&*( !@$$%&*(",std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 590;
  }
  uint16_t input_591() {
    std::unordered_map<bool, std::unordered_multimap<uint64_t, float>> v = {{true,{{std::numeric_limits<uint64_t>::max(),std::numeric_limits<float>::min()}}}};
    ar & v;
    return 591;
  }
  uint16_t input_592() {
    std::unordered_map<bool, std::unordered_multimap<uint64_t, int8_t>> v = {{true,{{std::numeric_limits<uint64_t>::max(),-1}}}};
    ar & v;
    return 592;
  }
  uint16_t input_593() {
    std::unordered_map<bool, std::unordered_multimap<uint64_t, bool>> v = {{true,{{std::numeric_limits<uint64_t>::max(),false}}}};
    ar & v;
    return 593;
  }
  uint16_t input_594() {
    std::unordered_map<bool, std::unordered_multimap<uint64_t, int32_t>> v = {{true,{{std::numeric_limits<uint64_t>::max(),0}}}};
    ar & v;
    return 594;
  }
  uint16_t input_595() {
    std::unordered_map<bool, std::unordered_multimap<uint64_t, std::string>> v = {{true,{{std::numeric_limits<uint64_t>::max(),"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 595;
  }
  uint16_t input_596() {
    std::unordered_map<bool, std::unordered_multimap<uint64_t, uint64_t>> v = {{true,{{std::numeric_limits<uint64_t>::max(),1}}}};
    ar & v;
    return 596;
  }
  uint16_t input_597() {
    std::unordered_map<int32_t, std::unordered_multimap<float, float>> v = {{0,{{std::numeric_limits<float>::quiet_NaN(),-5.2e26}}}};
    ar & v;
    return 597;
  }
  uint16_t input_598() {
    std::unordered_map<int32_t, std::unordered_multimap<float, int8_t>> v = {{0,{{std::numeric_limits<float>::quiet_NaN(),127}}}};
    ar & v;
    return 598;
  }
  uint16_t input_599() {
    std::unordered_map<int32_t, std::unordered_multimap<float, bool>> v = {{0,{{std::numeric_limits<float>::quiet_NaN(),true}}}};
    ar & v;
    return 599;
  }
  uint16_t input_600() {
    std::unordered_map<int32_t, std::unordered_multimap<float, int32_t>> v = {{0,{{std::numeric_limits<float>::quiet_NaN(),0}}}};
    ar & v;
    return 600;
  }
  uint16_t input_601() {
    std::unordered_map<int32_t, std::unordered_multimap<float, std::string>> v = {{0,{{std::numeric_limits<float>::quiet_NaN(),""}}}};
    ar & v;
    return 601;
  }
  uint16_t input_602() {
    std::unordered_map<int32_t, std::unordered_multimap<float, uint64_t>> v = {{0,{{std::numeric_limits<float>::quiet_NaN(),std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 602;
  }
  uint16_t input_603() {
    std::unordered_map<int32_t, std::unordered_multimap<int8_t, float>> v = {{0,{{127,-5.2e26}}}};
    ar & v;
    return 603;
  }
  uint16_t input_604() {
    std::unordered_map<int32_t, std::unordered_multimap<int8_t, int8_t>> v = {{0,{{127,-1}}}};
    ar & v;
    return 604;
  }
  uint16_t input_605() {
    std::unordered_map<int32_t, std::unordered_multimap<int8_t, bool>> v = {{0,{{127,false}}}};
    ar & v;
    return 605;
  }
  uint16_t input_606() {
    std::unordered_map<int32_t, std::unordered_multimap<int8_t, int32_t>> v = {{0,{{127,-2147483648}}}};
    ar & v;
    return 606;
  }
  uint16_t input_607() {
    std::unordered_map<int32_t, std::unordered_multimap<int8_t, std::string>> v = {{0,{{127,"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 607;
  }
  uint16_t input_608() {
    std::unordered_map<int32_t, std::unordered_multimap<int8_t, uint64_t>> v = {{0,{{127,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 608;
  }
  uint16_t input_609() {
    std::unordered_map<int32_t, std::unordered_multimap<bool, float>> v = {{0,{{true,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 609;
  }
  uint16_t input_610() {
    std::unordered_map<int32_t, std::unordered_multimap<bool, int8_t>> v = {{0,{{true,127}}}};
    ar & v;
    return 610;
  }
  uint16_t input_611() {
    std::unordered_map<int32_t, std::unordered_multimap<bool, bool>> v = {{0,{{true,true}}}};
    ar & v;
    return 611;
  }
  uint16_t input_612() {
    std::unordered_map<int32_t, std::unordered_multimap<bool, int32_t>> v = {{0,{{true,2147483647}}}};
    ar & v;
    return 612;
  }
  uint16_t input_613() {
    std::unordered_map<int32_t, std::unordered_multimap<bool, std::string>> v = {{0,{{true,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 613;
  }
  uint16_t input_614() {
    std::unordered_map<int32_t, std::unordered_multimap<bool, uint64_t>> v = {{0,{{true,1}}}};
    ar & v;
    return 614;
  }
  uint16_t input_615() {
    std::unordered_map<int32_t, std::unordered_multimap<int32_t, float>> v = {{0,{{2147483647,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 615;
  }
  uint16_t input_616() {
    std::unordered_map<int32_t, std::unordered_multimap<int32_t, int8_t>> v = {{0,{{2147483647,0}}}};
    ar & v;
    return 616;
  }
  uint16_t input_617() {
    std::unordered_map<int32_t, std::unordered_multimap<int32_t, bool>> v = {{0,{{2147483647,true}}}};
    ar & v;
    return 617;
  }
  uint16_t input_618() {
    std::unordered_map<int32_t, std::unordered_multimap<int32_t, int32_t>> v = {{0,{{2147483647,-2147483648}}}};
    ar & v;
    return 618;
  }
  uint16_t input_619() {
    std::unordered_map<int32_t, std::unordered_multimap<int32_t, std::string>> v = {{0,{{2147483647,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 619;
  }
  uint16_t input_620() {
    std::unordered_map<int32_t, std::unordered_multimap<int32_t, uint64_t>> v = {{0,{{2147483647,1}}}};
    ar & v;
    return 620;
  }
  uint16_t input_621() {
    std::unordered_map<int32_t, std::unordered_multimap<std::string, float>> v = {{0,{{"",std::numeric_limits<float>::max()}}}};
    ar & v;
    return 621;
  }
  uint16_t input_622() {
    std::unordered_map<int32_t, std::unordered_multimap<std::string, int8_t>> v = {{0,{{"",127}}}};
    ar & v;
    return 622;
  }
  uint16_t input_623() {
    std::unordered_map<int32_t, std::unordered_multimap<std::string, bool>> v = {{0,{{"",false}}}};
    ar & v;
    return 623;
  }
  uint16_t input_624() {
    std::unordered_map<int32_t, std::unordered_multimap<std::string, int32_t>> v = {{0,{{"",0}}}};
    ar & v;
    return 624;
  }
  uint16_t input_625() {
    std::unordered_map<int32_t, std::unordered_multimap<std::string, std::string>> v = {{0,{{"",""}}}};
    ar & v;
    return 625;
  }
  uint16_t input_626() {
    std::unordered_map<int32_t, std::unordered_multimap<std::string, uint64_t>> v = {{0,{{"",std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 626;
  }
  uint16_t input_627() {
    std::unordered_map<int32_t, std::unordered_multimap<uint64_t, float>> v = {{0,{{std::numeric_limits<uint64_t>::max(),std::numeric_limits<float>::max()}}}};
    ar & v;
    return 627;
  }
  uint16_t input_628() {
    std::unordered_map<int32_t, std::unordered_multimap<uint64_t, int8_t>> v = {{0,{{std::numeric_limits<uint64_t>::max(),-1}}}};
    ar & v;
    return 628;
  }
  uint16_t input_629() {
    std::unordered_map<int32_t, std::unordered_multimap<uint64_t, bool>> v = {{0,{{std::numeric_limits<uint64_t>::max(),true}}}};
    ar & v;
    return 629;
  }
  uint16_t input_630() {
    std::unordered_map<int32_t, std::unordered_multimap<uint64_t, int32_t>> v = {{0,{{std::numeric_limits<uint64_t>::max(),-2147483648}}}};
    ar & v;
    return 630;
  }
  uint16_t input_631() {
    std::unordered_map<int32_t, std::unordered_multimap<uint64_t, std::string>> v = {{0,{{std::numeric_limits<uint64_t>::max(),""}}}};
    ar & v;
    return 631;
  }
  uint16_t input_632() {
    std::unordered_map<int32_t, std::unordered_multimap<uint64_t, uint64_t>> v = {{0,{{std::numeric_limits<uint64_t>::max(),std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 632;
  }
  uint16_t input_633() {
    std::unordered_map<std::string, std::unordered_multimap<float, float>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<float>::infinity(),std::numeric_limits<float>::max()}}}};
    ar & v;
    return 633;
  }
  uint16_t input_634() {
    std::unordered_map<std::string, std::unordered_multimap<float, int8_t>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<float>::infinity(),-128}}}};
    ar & v;
    return 634;
  }
  uint16_t input_635() {
    std::unordered_map<std::string, std::unordered_multimap<float, bool>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<float>::infinity(),true}}}};
    ar & v;
    return 635;
  }
  uint16_t input_636() {
    std::unordered_map<std::string, std::unordered_multimap<float, int32_t>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<float>::infinity(),-2147483648}}}};
    ar & v;
    return 636;
  }
  uint16_t input_637() {
    std::unordered_map<std::string, std::unordered_multimap<float, std::string>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<float>::infinity(),""}}}};
    ar & v;
    return 637;
  }
  uint16_t input_638() {
    std::unordered_map<std::string, std::unordered_multimap<float, uint64_t>> v = {{"!@#$%^&*( !@$$%&*(",{{std::numeric_limits<float>::infinity(),std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 638;
  }
  uint16_t input_639() {
    std::unordered_map<std::string, std::unordered_multimap<int8_t, float>> v = {{"!@#$%^&*( !@$$%&*(",{{0,std::numeric_limits<float>::max()}}}};
    ar & v;
    return 639;
  }
  uint16_t input_640() {
    std::unordered_map<std::string, std::unordered_multimap<int8_t, int8_t>> v = {{"!@#$%^&*( !@$$%&*(",{{0,-1}}}};
    ar & v;
    return 640;
  }
  uint16_t input_641() {
    std::unordered_map<std::string, std::unordered_multimap<int8_t, bool>> v = {{"!@#$%^&*( !@$$%&*(",{{0,true}}}};
    ar & v;
    return 641;
  }
  uint16_t input_642() {
    std::unordered_map<std::string, std::unordered_multimap<int8_t, int32_t>> v = {{"!@#$%^&*( !@$$%&*(",{{0,2147483647}}}};
    ar & v;
    return 642;
  }
  uint16_t input_643() {
    std::unordered_map<std::string, std::unordered_multimap<int8_t, std::string>> v = {{"!@#$%^&*( !@$$%&*(",{{0,""}}}};
    ar & v;
    return 643;
  }
  uint16_t input_644() {
    std::unordered_map<std::string, std::unordered_multimap<int8_t, uint64_t>> v = {{"!@#$%^&*( !@$$%&*(",{{0,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 644;
  }
  uint16_t input_645() {
    std::unordered_map<std::string, std::unordered_multimap<bool, float>> v = {{"!@#$%^&*( !@$$%&*(",{{false,std::numeric_limits<float>::max()}}}};
    ar & v;
    return 645;
  }
  uint16_t input_646() {
    std::unordered_map<std::string, std::unordered_multimap<bool, int8_t>> v = {{"!@#$%^&*( !@$$%&*(",{{false,0}}}};
    ar & v;
    return 646;
  }
  uint16_t input_647() {
    std::unordered_map<std::string, std::unordered_multimap<bool, bool>> v = {{"!@#$%^&*( !@$$%&*(",{{false,false}}}};
    ar & v;
    return 647;
  }
  uint16_t input_648() {
    std::unordered_map<std::string, std::unordered_multimap<bool, int32_t>> v = {{"!@#$%^&*( !@$$%&*(",{{false,0}}}};
    ar & v;
    return 648;
  }
  uint16_t input_649() {
    std::unordered_map<std::string, std::unordered_multimap<bool, std::string>> v = {{"!@#$%^&*( !@$$%&*(",{{false,"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 649;
  }
  uint16_t input_650() {
    std::unordered_map<std::string, std::unordered_multimap<bool, uint64_t>> v = {{"!@#$%^&*( !@$$%&*(",{{false,1}}}};
    ar & v;
    return 650;
  }
  uint16_t input_651() {
    std::unordered_map<std::string, std::unordered_multimap<int32_t, float>> v = {{"!@#$%^&*( !@$$%&*(",{{-2147483648,-5.2e26}}}};
    ar & v;
    return 651;
  }
  uint16_t input_652() {
    std::unordered_map<std::string, std::unordered_multimap<int32_t, int8_t>> v = {{"!@#$%^&*( !@$$%&*(",{{-2147483648,-128}}}};
    ar & v;
    return 652;
  }
  uint16_t input_653() {
    std::unordered_map<std::string, std::unordered_multimap<int32_t, bool>> v = {{"!@#$%^&*( !@$$%&*(",{{-2147483648,false}}}};
    ar & v;
    return 653;
  }
  uint16_t input_654() {
    std::unordered_map<std::string, std::unordered_multimap<int32_t, int32_t>> v = {{"!@#$%^&*( !@$$%&*(",{{-2147483648,0}}}};
    ar & v;
    return 654;
  }
  uint16_t input_655() {
    std::unordered_map<std::string, std::unordered_multimap<int32_t, std::string>> v = {{"!@#$%^&*( !@$$%&*(",{{-2147483648,"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 655;
  }
  uint16_t input_656() {
    std::unordered_map<std::string, std::unordered_multimap<int32_t, uint64_t>> v = {{"!@#$%^&*( !@$$%&*(",{{-2147483648,std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 656;
  }
  uint16_t input_657() {
    std::unordered_map<std::string, std::unordered_multimap<std::string, float>> v = {{"!@#$%^&*( !@$$%&*(",{{"",std::numeric_limits<float>::infinity()}}}};
    ar & v;
    return 657;
  }
  uint16_t input_658() {
    std::unordered_map<std::string, std::unordered_multimap<std::string, int8_t>> v = {{"!@#$%^&*( !@$$%&*(",{{"",0}}}};
    ar & v;
    return 658;
  }
  uint16_t input_659() {
    std::unordered_map<std::string, std::unordered_multimap<std::string, bool>> v = {{"!@#$%^&*( !@$$%&*(",{{"",false}}}};
    ar & v;
    return 659;
  }
  uint16_t input_660() {
    std::unordered_map<std::string, std::unordered_multimap<std::string, int32_t>> v = {{"!@#$%^&*( !@$$%&*(",{{"",2147483647}}}};
    ar & v;
    return 660;
  }
  uint16_t input_661() {
    std::unordered_map<std::string, std::unordered_multimap<std::string, std::string>> v = {{"!@#$%^&*( !@$$%&*(",{{"","!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 661;
  }
  uint16_t input_662() {
    std::unordered_map<std::string, std::unordered_multimap<std::string, uint64_t>> v = {{"!@#$%^&*( !@$$%&*(",{{"",std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 662;
  }
  uint16_t input_663() {
    std::unordered_map<std::string, std::unordered_multimap<uint64_t, float>> v = {{"!@#$%^&*( !@$$%&*(",{{1,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 663;
  }
  uint16_t input_664() {
    std::unordered_map<std::string, std::unordered_multimap<uint64_t, int8_t>> v = {{"!@#$%^&*( !@$$%&*(",{{1,127}}}};
    ar & v;
    return 664;
  }
  uint16_t input_665() {
    std::unordered_map<std::string, std::unordered_multimap<uint64_t, bool>> v = {{"!@#$%^&*( !@$$%&*(",{{1,false}}}};
    ar & v;
    return 665;
  }
  uint16_t input_666() {
    std::unordered_map<std::string, std::unordered_multimap<uint64_t, int32_t>> v = {{"!@#$%^&*( !@$$%&*(",{{1,0}}}};
    ar & v;
    return 666;
  }
  uint16_t input_667() {
    std::unordered_map<std::string, std::unordered_multimap<uint64_t, std::string>> v = {{"!@#$%^&*( !@$$%&*(",{{1,"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 667;
  }
  uint16_t input_668() {
    std::unordered_map<std::string, std::unordered_multimap<uint64_t, uint64_t>> v = {{"!@#$%^&*( !@$$%&*(",{{1,1}}}};
    ar & v;
    return 668;
  }
  uint16_t input_669() {
    std::unordered_map<uint64_t, std::unordered_multimap<float, float>> v = {{std::numeric_limits<uint64_t>::max(),{{std::numeric_limits<float>::max(),std::numeric_limits<float>::min()}}}};
    ar & v;
    return 669;
  }
  uint16_t input_670() {
    std::unordered_map<uint64_t, std::unordered_multimap<float, int8_t>> v = {{std::numeric_limits<uint64_t>::max(),{{std::numeric_limits<float>::max(),127}}}};
    ar & v;
    return 670;
  }
  uint16_t input_671() {
    std::unordered_map<uint64_t, std::unordered_multimap<float, bool>> v = {{std::numeric_limits<uint64_t>::max(),{{std::numeric_limits<float>::max(),true}}}};
    ar & v;
    return 671;
  }
  uint16_t input_672() {
    std::unordered_map<uint64_t, std::unordered_multimap<float, int32_t>> v = {{std::numeric_limits<uint64_t>::max(),{{std::numeric_limits<float>::max(),2147483647}}}};
    ar & v;
    return 672;
  }
  uint16_t input_673() {
    std::unordered_map<uint64_t, std::unordered_multimap<float, std::string>> v = {{std::numeric_limits<uint64_t>::max(),{{std::numeric_limits<float>::max(),""}}}};
    ar & v;
    return 673;
  }
  uint16_t input_674() {
    std::unordered_map<uint64_t, std::unordered_multimap<float, uint64_t>> v = {{std::numeric_limits<uint64_t>::max(),{{std::numeric_limits<float>::max(),1}}}};
    ar & v;
    return 674;
  }
  uint16_t input_675() {
    std::unordered_map<uint64_t, std::unordered_multimap<int8_t, float>> v = {{std::numeric_limits<uint64_t>::max(),{{0,std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 675;
  }
  uint16_t input_676() {
    std::unordered_map<uint64_t, std::unordered_multimap<int8_t, int8_t>> v = {{std::numeric_limits<uint64_t>::max(),{{0,127}}}};
    ar & v;
    return 676;
  }
  uint16_t input_677() {
    std::unordered_map<uint64_t, std::unordered_multimap<int8_t, bool>> v = {{std::numeric_limits<uint64_t>::max(),{{0,true}}}};
    ar & v;
    return 677;
  }
  uint16_t input_678() {
    std::unordered_map<uint64_t, std::unordered_multimap<int8_t, int32_t>> v = {{std::numeric_limits<uint64_t>::max(),{{0,2147483647}}}};
    ar & v;
    return 678;
  }
  uint16_t input_679() {
    std::unordered_map<uint64_t, std::unordered_multimap<int8_t, std::string>> v = {{std::numeric_limits<uint64_t>::max(),{{0,""}}}};
    ar & v;
    return 679;
  }
  uint16_t input_680() {
    std::unordered_map<uint64_t, std::unordered_multimap<int8_t, uint64_t>> v = {{std::numeric_limits<uint64_t>::max(),{{0,1}}}};
    ar & v;
    return 680;
  }
  uint16_t input_681() {
    std::unordered_map<uint64_t, std::unordered_multimap<bool, float>> v = {{std::numeric_limits<uint64_t>::max(),{{false,-5.2e26}}}};
    ar & v;
    return 681;
  }
  uint16_t input_682() {
    std::unordered_map<uint64_t, std::unordered_multimap<bool, int8_t>> v = {{std::numeric_limits<uint64_t>::max(),{{false,0}}}};
    ar & v;
    return 682;
  }
  uint16_t input_683() {
    std::unordered_map<uint64_t, std::unordered_multimap<bool, bool>> v = {{std::numeric_limits<uint64_t>::max(),{{false,true}}}};
    ar & v;
    return 683;
  }
  uint16_t input_684() {
    std::unordered_map<uint64_t, std::unordered_multimap<bool, int32_t>> v = {{std::numeric_limits<uint64_t>::max(),{{false,-2147483648}}}};
    ar & v;
    return 684;
  }
  uint16_t input_685() {
    std::unordered_map<uint64_t, std::unordered_multimap<bool, std::string>> v = {{std::numeric_limits<uint64_t>::max(),{{false,"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 685;
  }
  uint16_t input_686() {
    std::unordered_map<uint64_t, std::unordered_multimap<bool, uint64_t>> v = {{std::numeric_limits<uint64_t>::max(),{{false,1}}}};
    ar & v;
    return 686;
  }
  uint16_t input_687() {
    std::unordered_map<uint64_t, std::unordered_multimap<int32_t, float>> v = {{std::numeric_limits<uint64_t>::max(),{{0,std::numeric_limits<float>::max()}}}};
    ar & v;
    return 687;
  }
  uint16_t input_688() {
    std::unordered_map<uint64_t, std::unordered_multimap<int32_t, int8_t>> v = {{std::numeric_limits<uint64_t>::max(),{{0,-1}}}};
    ar & v;
    return 688;
  }
  uint16_t input_689() {
    std::unordered_map<uint64_t, std::unordered_multimap<int32_t, bool>> v = {{std::numeric_limits<uint64_t>::max(),{{0,true}}}};
    ar & v;
    return 689;
  }
  uint16_t input_690() {
    std::unordered_map<uint64_t, std::unordered_multimap<int32_t, int32_t>> v = {{std::numeric_limits<uint64_t>::max(),{{0,2147483647}}}};
    ar & v;
    return 690;
  }
  uint16_t input_691() {
    std::unordered_map<uint64_t, std::unordered_multimap<int32_t, std::string>> v = {{std::numeric_limits<uint64_t>::max(),{{0,"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 691;
  }
  uint16_t input_692() {
    std::unordered_map<uint64_t, std::unordered_multimap<int32_t, uint64_t>> v = {{std::numeric_limits<uint64_t>::max(),{{0,1}}}};
    ar & v;
    return 692;
  }
  uint16_t input_693() {
    std::unordered_map<uint64_t, std::unordered_multimap<std::string, float>> v = {{std::numeric_limits<uint64_t>::max(),{{"",std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 693;
  }
  uint16_t input_694() {
    std::unordered_map<uint64_t, std::unordered_multimap<std::string, int8_t>> v = {{std::numeric_limits<uint64_t>::max(),{{"",127}}}};
    ar & v;
    return 694;
  }
  uint16_t input_695() {
    std::unordered_map<uint64_t, std::unordered_multimap<std::string, bool>> v = {{std::numeric_limits<uint64_t>::max(),{{"",false}}}};
    ar & v;
    return 695;
  }
  uint16_t input_696() {
    std::unordered_map<uint64_t, std::unordered_multimap<std::string, int32_t>> v = {{std::numeric_limits<uint64_t>::max(),{{"",0}}}};
    ar & v;
    return 696;
  }
  uint16_t input_697() {
    std::unordered_map<uint64_t, std::unordered_multimap<std::string, std::string>> v = {{std::numeric_limits<uint64_t>::max(),{{"",""}}}};
    ar & v;
    return 697;
  }
  uint16_t input_698() {
    std::unordered_map<uint64_t, std::unordered_multimap<std::string, uint64_t>> v = {{std::numeric_limits<uint64_t>::max(),{{"",std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 698;
  }
  uint16_t input_699() {
    std::unordered_map<uint64_t, std::unordered_multimap<uint64_t, float>> v = {{std::numeric_limits<uint64_t>::max(),{{std::numeric_limits<uint64_t>::max(),std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 699;
  }
  uint16_t input_700() {
    std::unordered_map<uint64_t, std::unordered_multimap<uint64_t, int8_t>> v = {{std::numeric_limits<uint64_t>::max(),{{std::numeric_limits<uint64_t>::max(),-1}}}};
    ar & v;
    return 700;
  }
  uint16_t input_701() {
    std::unordered_map<uint64_t, std::unordered_multimap<uint64_t, bool>> v = {{std::numeric_limits<uint64_t>::max(),{{std::numeric_limits<uint64_t>::max(),false}}}};
    ar & v;
    return 701;
  }
  uint16_t input_702() {
    std::unordered_map<uint64_t, std::unordered_multimap<uint64_t, int32_t>> v = {{std::numeric_limits<uint64_t>::max(),{{std::numeric_limits<uint64_t>::max(),2147483647}}}};
    ar & v;
    return 702;
  }
  uint16_t input_703() {
    std::unordered_map<uint64_t, std::unordered_multimap<uint64_t, std::string>> v = {{std::numeric_limits<uint64_t>::max(),{{std::numeric_limits<uint64_t>::max(),""}}}};
    ar & v;
    return 703;
  }
  uint16_t input_704() {
    std::unordered_map<uint64_t, std::unordered_multimap<uint64_t, uint64_t>> v = {{std::numeric_limits<uint64_t>::max(),{{std::numeric_limits<uint64_t>::max(),std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 704;
  }
  uint16_t input_705() {
    std::vector<std::unordered_set<float>> v = {{std::numeric_limits<float>::min()}};
    ar & v;
    return 705;
  }
  uint16_t input_706() {
    std::vector<std::unordered_set<int8_t>> v = {{-1}};
    ar & v;
    return 706;
  }
  uint16_t input_707() {
    std::vector<std::unordered_set<bool>> v = {{true}};
    ar & v;
    return 707;
  }
  uint16_t input_708() {
    std::vector<std::unordered_set<int32_t>> v = {{0}};
    ar & v;
    return 708;
  }
  uint16_t input_709() {
    std::vector<std::unordered_set<std::string>> v = {{"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 709;
  }
  uint16_t input_710() {
    std::vector<std::unordered_set<uint64_t>> v = {{std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 710;
  }
  uint16_t input_711() {
    std::list<std::vector<float>> v = {{std::numeric_limits<float>::quiet_NaN()}};
    ar & v;
    return 711;
  }
  uint16_t input_712() {
    std::list<std::vector<int8_t>> v = {{127}};
    ar & v;
    return 712;
  }
  uint16_t input_713() {
    std::list<std::vector<bool>> v = {{false}};
    ar & v;
    return 713;
  }
  uint16_t input_714() {
    std::list<std::vector<int32_t>> v = {{2147483647}};
    ar & v;
    return 714;
  }
  uint16_t input_715() {
    std::list<std::vector<std::string>> v = {{""}};
    ar & v;
    return 715;
  }
  uint16_t input_716() {
    std::list<std::vector<uint64_t>> v = {{1}};
    ar & v;
    return 716;
  }
  uint16_t input_717() {
    std::list<std::forward_list<std::set<float>>> v = {{{std::numeric_limits<float>::quiet_NaN()}}};
    ar & v;
    return 717;
  }
  uint16_t input_718() {
    std::list<std::forward_list<std::set<int8_t>>> v = {{{-1}}};
    ar & v;
    return 718;
  }
  uint16_t input_719() {
    std::list<std::forward_list<std::set<bool>>> v = {{{true}}};
    ar & v;
    return 719;
  }
  uint16_t input_720() {
    std::list<std::forward_list<std::set<int32_t>>> v = {{{0}}};
    ar & v;
    return 720;
  }
  uint16_t input_721() {
    std::list<std::forward_list<std::set<std::string>>> v = {{{""}}};
    ar & v;
    return 721;
  }
  uint16_t input_722() {
    std::list<std::forward_list<std::set<uint64_t>>> v = {{{1}}};
    ar & v;
    return 722;
  }
  uint16_t input_723() {
    std::forward_list<std::map<float, std::list<float>>> v = {{{-5.2e26,{std::numeric_limits<float>::min()}}}};
    ar & v;
    return 723;
  }
  uint16_t input_724() {
    std::forward_list<std::map<float, std::list<int8_t>>> v = {{{-5.2e26,{0}}}};
    ar & v;
    return 724;
  }
  uint16_t input_725() {
    std::forward_list<std::map<float, std::list<bool>>> v = {{{-5.2e26,{true}}}};
    ar & v;
    return 725;
  }
  uint16_t input_726() {
    std::forward_list<std::map<float, std::list<int32_t>>> v = {{{-5.2e26,{2147483647}}}};
    ar & v;
    return 726;
  }
  uint16_t input_727() {
    std::forward_list<std::map<float, std::list<std::string>>> v = {{{-5.2e26,{"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 727;
  }
  uint16_t input_728() {
    std::forward_list<std::map<float, std::list<uint64_t>>> v = {{{-5.2e26,{1}}}};
    ar & v;
    return 728;
  }
  uint16_t input_729() {
    std::forward_list<std::map<int8_t, std::list<float>>> v = {{{-1,{std::numeric_limits<float>::infinity()}}}};
    ar & v;
    return 729;
  }
  uint16_t input_730() {
    std::forward_list<std::map<int8_t, std::list<int8_t>>> v = {{{-1,{0}}}};
    ar & v;
    return 730;
  }
  uint16_t input_731() {
    std::forward_list<std::map<int8_t, std::list<bool>>> v = {{{-1,{true}}}};
    ar & v;
    return 731;
  }
  uint16_t input_732() {
    std::forward_list<std::map<int8_t, std::list<int32_t>>> v = {{{-1,{2147483647}}}};
    ar & v;
    return 732;
  }
  uint16_t input_733() {
    std::forward_list<std::map<int8_t, std::list<std::string>>> v = {{{-1,{"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 733;
  }
  uint16_t input_734() {
    std::forward_list<std::map<int8_t, std::list<uint64_t>>> v = {{{-1,{std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 734;
  }
  uint16_t input_735() {
    std::forward_list<std::map<bool, std::list<float>>> v = {{{false,{std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 735;
  }
  uint16_t input_736() {
    std::forward_list<std::map<bool, std::list<int8_t>>> v = {{{false,{127}}}};
    ar & v;
    return 736;
  }
  uint16_t input_737() {
    std::forward_list<std::map<bool, std::list<bool>>> v = {{{false,{true}}}};
    ar & v;
    return 737;
  }
  uint16_t input_738() {
    std::forward_list<std::map<bool, std::list<int32_t>>> v = {{{false,{2147483647}}}};
    ar & v;
    return 738;
  }
  uint16_t input_739() {
    std::forward_list<std::map<bool, std::list<std::string>>> v = {{{false,{"\1\2\3\4\5\0\1\2\3\4"}}}};
    ar & v;
    return 739;
  }
  uint16_t input_740() {
    std::forward_list<std::map<bool, std::list<uint64_t>>> v = {{{false,{std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 740;
  }
  uint16_t input_741() {
    std::forward_list<std::map<int32_t, std::list<float>>> v = {{{2147483647,{std::numeric_limits<float>::quiet_NaN()}}}};
    ar & v;
    return 741;
  }
  uint16_t input_742() {
    std::forward_list<std::map<int32_t, std::list<int8_t>>> v = {{{2147483647,{127}}}};
    ar & v;
    return 742;
  }
  uint16_t input_743() {
    std::forward_list<std::map<int32_t, std::list<bool>>> v = {{{2147483647,{false}}}};
    ar & v;
    return 743;
  }
  uint16_t input_744() {
    std::forward_list<std::map<int32_t, std::list<int32_t>>> v = {{{2147483647,{2147483647}}}};
    ar & v;
    return 744;
  }
  uint16_t input_745() {
    std::forward_list<std::map<int32_t, std::list<std::string>>> v = {{{2147483647,{"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 745;
  }
  uint16_t input_746() {
    std::forward_list<std::map<int32_t, std::list<uint64_t>>> v = {{{2147483647,{1}}}};
    ar & v;
    return 746;
  }
  uint16_t input_747() {
    std::forward_list<std::map<std::string, std::list<float>>> v = {{{"!@#$%^&*( !@$$%&*(",{std::numeric_limits<float>::max()}}}};
    ar & v;
    return 747;
  }
  uint16_t input_748() {
    std::forward_list<std::map<std::string, std::list<int8_t>>> v = {{{"!@#$%^&*( !@$$%&*(",{-128}}}};
    ar & v;
    return 748;
  }
  uint16_t input_749() {
    std::forward_list<std::map<std::string, std::list<bool>>> v = {{{"!@#$%^&*( !@$$%&*(",{true}}}};
    ar & v;
    return 749;
  }
  uint16_t input_750() {
    std::forward_list<std::map<std::string, std::list<int32_t>>> v = {{{"!@#$%^&*( !@$$%&*(",{-2147483648}}}};
    ar & v;
    return 750;
  }
  uint16_t input_751() {
    std::forward_list<std::map<std::string, std::list<std::string>>> v = {{{"!@#$%^&*( !@$$%&*(",{""}}}};
    ar & v;
    return 751;
  }
  uint16_t input_752() {
    std::forward_list<std::map<std::string, std::list<uint64_t>>> v = {{{"!@#$%^&*( !@$$%&*(",{std::numeric_limits<uint64_t>::max()}}}};
    ar & v;
    return 752;
  }
  uint16_t input_753() {
    std::forward_list<std::map<uint64_t, std::list<float>>> v = {{{1,{std::numeric_limits<float>::max()}}}};
    ar & v;
    return 753;
  }
  uint16_t input_754() {
    std::forward_list<std::map<uint64_t, std::list<int8_t>>> v = {{{1,{-128}}}};
    ar & v;
    return 754;
  }
  uint16_t input_755() {
    std::forward_list<std::map<uint64_t, std::list<bool>>> v = {{{1,{true}}}};
    ar & v;
    return 755;
  }
  uint16_t input_756() {
    std::forward_list<std::map<uint64_t, std::list<int32_t>>> v = {{{1,{-2147483648}}}};
    ar & v;
    return 756;
  }
  uint16_t input_757() {
    std::forward_list<std::map<uint64_t, std::list<std::string>>> v = {{{1,{"!@#$%^&*( !@$$%&*("}}}};
    ar & v;
    return 757;
  }
  uint16_t input_758() {
    std::forward_list<std::map<uint64_t, std::list<uint64_t>>> v = {{{1,{1}}}};
    ar & v;
    return 758;
  }
  uint16_t input_759() {
    std::vector<std::array<float, 1>> v = {{std::numeric_limits<float>::infinity()}};
    ar & v;
    return 759;
  }
  uint16_t input_760() {
    std::vector<std::array<float, 32>> v = {{std::numeric_limits<float>::infinity()}};
    ar & v;
    return 760;
  }
  uint16_t input_761() {
    std::vector<std::array<float, 1023>> v = {{std::numeric_limits<float>::infinity()}};
    ar & v;
    return 761;
  }
  uint16_t input_762() {
    std::vector<std::array<int8_t, 1>> v = {{127}};
    ar & v;
    return 762;
  }
  uint16_t input_763() {
    std::vector<std::array<int8_t, 32>> v = {{127}};
    ar & v;
    return 763;
  }
  uint16_t input_764() {
    std::vector<std::array<int8_t, 1023>> v = {{127}};
    ar & v;
    return 764;
  }
  uint16_t input_765() {
    std::vector<std::array<bool, 1>> v = {{true}};
    ar & v;
    return 765;
  }
  uint16_t input_766() {
    std::vector<std::array<bool, 32>> v = {{true}};
    ar & v;
    return 766;
  }
  uint16_t input_767() {
    std::vector<std::array<bool, 1023>> v = {{true}};
    ar & v;
    return 767;
  }
  uint16_t input_768() {
    std::vector<std::array<int32_t, 1>> v = {{0}};
    ar & v;
    return 768;
  }
  uint16_t input_769() {
    std::vector<std::array<int32_t, 32>> v = {{0}};
    ar & v;
    return 769;
  }
  uint16_t input_770() {
    std::vector<std::array<int32_t, 1023>> v = {{0}};
    ar & v;
    return 770;
  }
  uint16_t input_771() {
    std::vector<std::array<std::string, 1>> v = {{""}};
    ar & v;
    return 771;
  }
  uint16_t input_772() {
    std::vector<std::array<std::string, 32>> v = {{""}};
    ar & v;
    return 772;
  }
  uint16_t input_773() {
    std::vector<std::array<std::string, 1023>> v = {{""}};
    ar & v;
    return 773;
  }
  uint16_t input_774() {
    std::vector<std::array<uint64_t, 1>> v = {{std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 774;
  }
  uint16_t input_775() {
    std::vector<std::array<uint64_t, 32>> v = {{std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 775;
  }
  uint16_t input_776() {
    std::vector<std::array<uint64_t, 1023>> v = {{std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 776;
  }
  uint16_t input_777() {
    std::set<std::pair<float, float>> v = {{std::numeric_limits<float>::infinity(),-5.2e26}};
    ar & v;
    return 777;
  }
  uint16_t input_778() {
    std::set<std::pair<float, int8_t>> v = {{std::numeric_limits<float>::infinity(),-128}};
    ar & v;
    return 778;
  }
  uint16_t input_779() {
    std::set<std::pair<float, bool>> v = {{std::numeric_limits<float>::infinity(),false}};
    ar & v;
    return 779;
  }
  uint16_t input_780() {
    std::set<std::pair<float, int32_t>> v = {{std::numeric_limits<float>::infinity(),0}};
    ar & v;
    return 780;
  }
  uint16_t input_781() {
    std::set<std::pair<float, std::string>> v = {{std::numeric_limits<float>::infinity(),"\1\2\3\4\5\0\1\2\3\4"}};
    ar & v;
    return 781;
  }
  uint16_t input_782() {
    std::set<std::pair<float, uint64_t>> v = {{std::numeric_limits<float>::infinity(),std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 782;
  }
  uint16_t input_783() {
    std::set<std::pair<int8_t, float>> v = {{0,std::numeric_limits<float>::max()}};
    ar & v;
    return 783;
  }
  uint16_t input_784() {
    std::set<std::pair<int8_t, int8_t>> v = {{0,-128}};
    ar & v;
    return 784;
  }
  uint16_t input_785() {
    std::set<std::pair<int8_t, bool>> v = {{0,true}};
    ar & v;
    return 785;
  }
  uint16_t input_786() {
    std::set<std::pair<int8_t, int32_t>> v = {{0,-2147483648}};
    ar & v;
    return 786;
  }
  uint16_t input_787() {
    std::set<std::pair<int8_t, std::string>> v = {{0,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 787;
  }
  uint16_t input_788() {
    std::set<std::pair<int8_t, uint64_t>> v = {{0,1}};
    ar & v;
    return 788;
  }
  uint16_t input_789() {
    std::set<std::pair<bool, float>> v = {{true,std::numeric_limits<float>::infinity()}};
    ar & v;
    return 789;
  }
  uint16_t input_790() {
    std::set<std::pair<bool, int8_t>> v = {{true,0}};
    ar & v;
    return 790;
  }
  uint16_t input_791() {
    std::set<std::pair<bool, bool>> v = {{true,true}};
    ar & v;
    return 791;
  }
  uint16_t input_792() {
    std::set<std::pair<bool, int32_t>> v = {{true,-2147483648}};
    ar & v;
    return 792;
  }
  uint16_t input_793() {
    std::set<std::pair<bool, std::string>> v = {{true,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 793;
  }
  uint16_t input_794() {
    std::set<std::pair<bool, uint64_t>> v = {{true,std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 794;
  }
  uint16_t input_795() {
    std::set<std::pair<int32_t, float>> v = {{0,std::numeric_limits<float>::infinity()}};
    ar & v;
    return 795;
  }
  uint16_t input_796() {
    std::set<std::pair<int32_t, int8_t>> v = {{0,127}};
    ar & v;
    return 796;
  }
  uint16_t input_797() {
    std::set<std::pair<int32_t, bool>> v = {{0,false}};
    ar & v;
    return 797;
  }
  uint16_t input_798() {
    std::set<std::pair<int32_t, int32_t>> v = {{0,0}};
    ar & v;
    return 798;
  }
  uint16_t input_799() {
    std::set<std::pair<int32_t, std::string>> v = {{0,"!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 799;
  }
  uint16_t input_800() {
    std::set<std::pair<int32_t, uint64_t>> v = {{0,1}};
    ar & v;
    return 800;
  }
  uint16_t input_801() {
    std::set<std::pair<std::string, float>> v = {{"",std::numeric_limits<float>::max()}};
    ar & v;
    return 801;
  }
  uint16_t input_802() {
    std::set<std::pair<std::string, int8_t>> v = {{"",-128}};
    ar & v;
    return 802;
  }
  uint16_t input_803() {
    std::set<std::pair<std::string, bool>> v = {{"",true}};
    ar & v;
    return 803;
  }
  uint16_t input_804() {
    std::set<std::pair<std::string, int32_t>> v = {{"",0}};
    ar & v;
    return 804;
  }
  uint16_t input_805() {
    std::set<std::pair<std::string, std::string>> v = {{"","!@#$%^&*( !@$$%&*("}};
    ar & v;
    return 805;
  }
  uint16_t input_806() {
    std::set<std::pair<std::string, uint64_t>> v = {{"",std::numeric_limits<uint64_t>::max()}};
    ar & v;
    return 806;
  }
  uint16_t input_807() {
    std::set<std::pair<uint64_t, float>> v = {{1,std::numeric_limits<float>::quiet_NaN()}};
    ar & v;
    return 807;
  }
  uint16_t input_808() {
    std::set<std::pair<uint64_t, int8_t>> v = {{1,127}};
    ar & v;
    return 808;
  }
  uint16_t input_809() {
    std::set<std::pair<uint64_t, bool>> v = {{1,false}};
    ar & v;
    return 809;
  }
  uint16_t input_810() {
    std::set<std::pair<uint64_t, int32_t>> v = {{1,0}};
    ar & v;
    return 810;
  }
  uint16_t input_811() {
    std::set<std::pair<uint64_t, std::string>> v = {{1,""}};
    ar & v;
    return 811;
  }
  uint16_t input_812() {
    std::set<std::pair<uint64_t, uint64_t>> v = {{1,1}};
    ar & v;
    return 812;
  }

};

size_t get_inputs_count() { return 813; }
