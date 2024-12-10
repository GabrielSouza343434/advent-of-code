#ifndef VETORES_H
#define VETORES_H

#include <iostream>
#include <vector>

using namespace std;

/*vector<int> lista_esquerda = {12823,
74540,
  37687,
  83750,
  43380,
  25542,
  82191,
  93287,
  20054,
  21769,
  77367,
  16570,
  26289,
  80405,
  38985,
  33507,
  78135,
  29782,
  52972,
  37251,
  86302,
  55698,
  11884,
  14203,
  86556,
  92768,
  23528,
  76772,
  96066,
  29967,
  45832,
  71411,
  82438,
  40512,
  19236,
  48739,
  40697,
  32715,
  23920,
  86163,
  71324,
  94448,
  70651,
  60362,
  63567,
  43893,
  92105,
  98994,
  53618,
  24942,
  29346,
  32212,
  54509,
  23312,
  63771,
  38440,
  21816,
  71068,
  14609,
  72011,
  76020,
  48211,
  96092,
  36555,
  22030,
  36465,
  88296,
  36187,
  83500,
  65799,
  46450,
  86793,
  50695,
  65118,
  32787,
  21102,
  92131,
  43798,
  93295,
  56130,
  24670,
  90131,
  41483,
  23843,
  74526,
  55839,
  94207,
  61338,
  31666,
  66759,
  29722,
  22134,
  19270,
  27053,
  45607,
  86346,
  34136,
  39445,
  68166,
  56499,
  12580,
  64981,
  90943,
  80049,
  77875,
  54424,
  81207,
  34414,
  79187,
  79346,
  21513,
  15053,
  71310,
  93889,
  12261,
  57278,
  72612,
  34775,
  38466,
  66141,
  33759,
  23508,
  22658,
  46137,
  74240,
  46323,
  29267,
  61682,
  16246,
  64833,
  73449,
  62582,
  29963,
  37974,
  17782,
  82282,
  15291,
  83471,
  51148,
  28497,
  93661,
  52360,
  19563,
  49131,
  82638,
  71749,
  73375,
  22422,
  96517,
  16499,
  99194,
  81566,
  91031,
  39388,
  13545,
  11979,
  61595,
  34228,
  55043,
  95357,
  37082,
  37273,
  42656,
  92506,
  41866,
  35492,
  42148,
  59819,
  78615,
  48003,
  48120,
  23470,
  92290,
  78534,
  72064,
  69219,
  92793,
  57426,
  39836,
  39861,
  32392,
  55837,
  87360,
  62336,
  10582,
  72887,
  57048,
  63586,
  34767,
  66407,
  45550,
  17625,
  10410,
  64946,
  87598,
  16102,
  14876,
  23095,
  86353,
  73654,
  22354,
  41772,
  69998,
  44106,
  28581,
  34682,
  43448,
  26948,
  82482,
  54701,
  18922,
  64395,
  43509,
  19177,
  71169,
  50214,
  32348,
  71943,
  47564,
  84539,
  28303,
  80955,
  82358,
  17552,
  60419,
  56250,
  71200,
  43301,
  23512,
  13712,
  98354,
  63702,
  75354,
  24304,
  99181,
  41856,
  48236,
  30623,
  24467,
  40537,
  91888,
  70968,
  23744,
  56536,
  94739,
  65273,
  49147,
  55705,
  15517,
  82815,
  63974,
  98269,
  65774,
  86130,
  47706,
  88818,
  99823,
  58198,
  71859,
  18878,
  29955,
  72262,
  79061,
  71591,
  69367,
  26570,
  78497,
  61128,
  66101,
  10443,
  29154,
  68366,
  94940,
  21614,
  47019,
  29836,
  97089,
  31180,
  18692,
  34377,
  16206,
  19568,
  82230,
  36957,
  11625,
  89751,
  88264,
  73202,
  21389,
  94699,
  30321,
  22159,
  76341,
  20287,
  75921,
  88878,
  78703,
  34581,
  31498,
  37178,
  50526,
  15667,
  48472,
  68025,
  18152,
  92997,
  45194,
  35792,
  43913,
  72309,
  77240,
  89083,
  82310,
  12555,
  98925,
  74420,
  24589,
  34708,
  85722,
  62893,
  21691,
  73322,
  11492,
  12490,
  13166,
  88705,
  67301,
  72198,
  24874,
  76487,
  62948,
  59865,
  53676,
  92741,
  20860,
  88028,
  45201,
  23667,
  10581,
  77520,
  84566,
  51687,
  19781,
  97491,
  47531,
  68156,
  73324,
  78968,
  21596,
  15448,
  31170,
  87856,
  16001,
  30641,
  20379,
  34736,
  53290,
  72642,
  59344,
  68199,
  52460,
  55008,
  17539,
  46571,
  23893,
  10902,
  71961,
  47252,
  34801,
  54575,
  88121,
  78637,
  39213,
  98141,
  57963,
  98480,
  71147,
  43578,
  31681,
  33700,
  66228,
  78032,
  88321,
  42531,
  26035,
  60429,
  91612,
  58120,
  89407,
  51440,
  74970,
  27277,
  27465,
  46755,
  61113,
  48174,
  92842,
  37889,
  46193,
  17838,
  41317,
  91203,
  56700,
  92225,
  14042,
  28888,
  42409,
  43742,
  47950,
  60012,
  22784,
  56646,
  71287,
  67068,
  56344,
  84576,
  55332,
  39659,
  15449,
  18435,
  29432,
  15665,
  32310,
  12187,
  91607,
  56064,
  19785,
  59910,
  66450,
  82386,
  18764,
  65692,
  84784,
  62951,
  99050,
  45731,
  48470,
  39324,
  94800,
  68808,
  82573,
  47088,
  13951,
  27500,
  84585,
  69048,
  27780,
  80590,
  55370,
  23451,
  27191,
  26100,
  90293,
  50078,
  19137,
  27737,
  22569,
  48902,
  36815,
  24284,
  98928,
  70871,
  35712,
  89228,
  94986,
  76950,
  40752,
  85746,
  47474,
  83603,
  49261,
  44969,
  16958,
  59433,
  71578,
  94375,
  99614,
  89622,
  51129,
  11156,
  78767,
  63554,
  45860,
  15810,
  74771,
  35428,
  30052,
  18150,
  68986,
  34820,
  50201,
  22996,
  56297,
  99260,
  64688,
  55665,
  97956,
  47097,
  58688,
  79583,
  55063,
  31835,
  15371,
  27844,
  18991,
  44786,
  52280,
  65427,
  33385,
  50750,
  74193,
  37598,
  57331,
  27243,
  51656,
  42413,
  96608,
  36579,
  63733,
  84536,
  79453,
  30983,
  94593,
  79422,
  82346,
  53011,
  65714,
  60573,
  51630,
  38941,
  89753,
  42939,
  60575,
  82800,
  57035,
  87371,
  64061,
  69851,
  98809,
  59834,
  18835,
  33278,
  36041,
  89750,
  33377,
  71745,
  37615,
  22986,
  78993,
  98887,
  91495,
  55009,
  65088,
  61107,
  86850,
  24409,
  41647,
  30341,
  13360,
  94119,
  60874,
  94681,
  12294,
  31270,
  67169,
  69982,
  82546,
  45548,
  68981,
  56539,
  46787,
  41640,
  17244,
  76548,
  80347,
  84619,
  65047,
  32440,
  19858,
  93947,
  34433,
  59800,
  87150,
  61593,
  45059,
  50520,
  43404,
  89153,
  75276,
  73975,
  34721,
  27022,
  95168,
  10562,
  87285,
  85124,
  47645,
  40814,
  17256,
  36758,
  81972,
  42533,
  80579,
  62777,
  33567,
  55729,
  46613,
  73688,
  89566,
  77156,
  28195,
  55581,
  89915,
  20696,
  65015,
  72302,
  91965,
  23577,
  22461,
  90346,
  64595,
  56289,
  31184,
  47349,
  54200,
  12174,
  73040,
  62683,
  97890,
  21601,
  50505,
  54550,
  66662,
  40887,
  41179,
  73871,
  99728,
  86319,
  28466,
  30688,
  14670,
  30371,
  48181,
  76745,
  49779,
  89394,
  75451,
  55547,
  44988,
  84043,
  93713,
  31694,
  72390,
  71964,
  22241,
  18282,
  17656,
  38157,
  81358,
  34819,
  45875,
  94156,
  14920,
  82795,
  80301,
  30755,
  28592,
  91455,
  31513,
  44618,
  48624,
  85008,
  69604,
  10980,
  74651,
  93201,
  54330,
  33989,
  72222,
  76785,
  69869,
  31444,
  58717,
  64974,
  18089,
  22555,
  38811,
  49910,
  57919,
  18217,
  78980,
  27451,
  78501,
  19069,
  75640,
  87479,
  41487,
  70904,
  21143,
  86138,
  87503,
  22997,
  71054,
  55242,
  24796,
  30921,
  73901,
  78719,
  73668,
  40062,
  35543,
  55260,
  13994,
  86199,
  19950,
  84417,
  84692,
  72516,
  73062,
  42339,
  11175,
  72962,
  87900,
  86061,
  87216,
  23397,
  30171,
  68984,
  40889,
  72952,
  14335,
  45886,
  93935,
  26858,
  58806,
  88530,
  51385,
  82517,
  17888,
  33574,
  38099,
  35615,
  40717,
  92891,
  10071,
  24679,
  64001,
  50189,
  75901,
  19520,
  57337,
  15914,
  55533,
  74365,
  96604,
  95480,
  45043,
  64043,
  36479,
  39565,
  30729,
  19592,
  26575,
  96389,
  70446,
  18115,
  36896,
  46417,
  28955,
  95051,
  93673,
  78658,
  75363,
  59940,
  40027,
  38318,
  50269,
  25217,
  69573,
  53784,
  17175,
  70773,
  89981,
  17683,
  10680,
  88622,
  56828,
  71454,
  59613,
  93410,
  30592,
  15125,
  85953,
  79266,
  49278,
  12848,
  63339,
  50598,
  16139,
  77235,
  78026,
  47079,
  56200,
  47450,
  25045,
  91763,
  67107,
  49768,
  10521,
  16496,
  51163,
  57687,
  95222,
  43170,
  97168,
  71573,
  56432,
  25242,
  46595,
  32896,
  48197,
  75971,
  28619,
  94122,
  87681,
  60991,
  71377,
  61971,
  57550,
  57301,
  27464,
  83664,
  71107,
  61718,
  87707,
  11237,
  26115,
  20429,
  56169,
  69274,
  70566,
  47104,
  17710,
  92830,
  56054,
  16340,
  10392,
  62500,
  99320,
  56618,
  42612,
  37193,
  67800,
  57447,
  42054,
  81285,
  56698,
  60682,
  94833,
  11001,
  13344,
  26492,
  77913,
  27127,
  89373,
  84245,
  93176,
  75068,
  64691,
  74682,
  50985,
  22840,
  65569,
  49536,
  47009,
  56625,
  49670,
  98701,
  90721,
  90568,
  34398,
  40654,
  55254,
  30820,
  42973,
  79937,
  19796,
  39676,
  51100,
  49955,
  26946,
  58367,
  94451,
  86596,
  15417,
  49413,
  67099,
  68239,
  71586,
  86204,
  64235,
  63186,
  17587,
  99477,
  92932,
  79794,
  45968,
  97597,
  18098,
  22937,
  62634,
  60948,
  42836,
  22355,
  91739,
  64123,
  64181,
  33245,
  77922,
  84133,
  48885,
  70613,
  83117,
  58707,
  12185,
  60020,
  14029,
  18414,
  60903,
  87438,
  65638,
  88259,
  99038,
  68699,
  21850,
  62281,
  87797,
  63846,
  64314,
  52539,
  83073,
  26743,
  52779,
  32981,
  51090,
  39533,
  44432,
  31692,
  25549,
  92429,
  99835,
  44128,
  88115,
  39366,
  61773,
  45953,
  43635,
  18349,
  72541,
  97794,
  64562,
  44098,
  93431,
  74605,
  79186,
  47291,
  37794,
  33349,
  79910,
  67576,
  11875,
  94186,
  32249,
  31261,
  29272,
  86184,
  73999,
  72117,
  62639,
  83988,
  56794,
  15112,
  71467,
  44399,
  45068,
  51866,
  53229,
  78623,
  40054,
  41884,
  35923,
  22363,
  71817,
  40307,
  38911,
  72191,
  91448,
  60833,
  48061,
  31899
  };*/
//exemplo
//este array precisa ser ordenado

//este é o array2
//exemplo


vector<int> lista_esquerda = {
  12823,
  74540,
  37687,
  83750,
  43380,
  25542,
  82191,
  93287,
  20054,
  21769,
  77367,
  16570,
  26289,
  80405,
  38985,
  33507,
  78135,
  29782,
  52972,
  37251,
  86302,
  55698,
  11884,
  14203,
  86556,
  92768,
  23528,
  76772,
  96066,
  29967,
  45832,
  71411,
  82438,
  40512,
  19236,
  48739,
  40697,
  32715,
  23920,
  86163,
  71324,
  94448,
  70651,
  60362,
  63567,
  43893,
  92105,
  98994,
  53618,
  24942,
  29346,
  32212,
  54509,
  23312,
  63771,
  38440,
  21816,
  71068,
  14609,
  72011,
  76020,
  48211,
  96092,
  36555,
  22030,
  36465,
  88296,
  36187,
  83500,
  65799,
  46450,
  86793,
  50695,
  65118,
  32787,
  21102,
  92131,
  43798,
  93295,
  56130,
  24670,
  90131,
  41483,
  23843,
  74526,
  55839,
  94207,
  61338,
  31666,
  66759,
  29722,
  22134,
  19270,
  27053,
  45607,
  86346,
  34136,
  39445,
  68166,
  56499,
  12580,
  64981,
  90943,
  80049,
  77875,
  54424,
  81207,
  34414,
  79187,
  79346,
  21513,
  15053,
  71310,
  93889,
  12261,
  57278,
  72612,
  34775,
  38466,
  66141,
  33759,
  23508,
  22658,
  46137,
  74240,
  46323,
  29267,
  61682,
  16246,
  64833,
  73449,
  62582,
  29963,
  37974,
  17782,
  82282,
  15291,
  83471,
  51148,
  28497,
  93661,
  52360,
  19563,
  49131,
  82638,
  71749,
  73375,
  22422,
  96517,
  16499,
  99194,
  81566,
  91031,
  39388,
  13545,
  11979,
  61595,
  34228,
  55043,
  95357,
  37082,
  37273,
  42656,
  92506,
  41866,
  35492,
  42148,
  59819,
  78615,
  48003,
  48120,
  23470,
  92290,
  78534,
  72064,
  69219,
  92793,
  57426,
  39836,
  39861,
  32392,
  55837,
  87360,
  62336,
  10582,
  72887,
  57048,
  63586,
  34767,
  66407,
  45550,
  17625,
  10410,
  64946,
  87598,
  16102,
  14876,
  23095,
  86353,
  73654,
  22354,
  41772,
  69998,
  44106,
  28581,
  34682,
  43448,
  26948,
  82482,
  54701,
  18922,
  64395,
  43509,
  19177,
  71169,
  50214,
  32348,
  71943,
  47564,
  84539,
  28303,
  80955,
  82358,
  17552,
  60419,
  56250,
  71200,
  43301,
  23512,
  13712,
  98354,
  63702,
  75354,
  24304,
  99181,
  41856,
  48236,
  30623,
  24467,
  40537,
  91888,
  70968,
  23744,
  56536,
  94739,
  65273,
  49147,
  55705,
  15517,
  82815,
  63974,
  98269,
  65774,
  86130,
  47706,
  88818,
  99823,
  58198,
  71859,
  18878,
  29955,
  72262,
  79061,
  71591,
  69367,
  26570,
  78497,
  61128,
  66101,
  10443,
  29154,
  68366,
  94940,
  21614,
  47019,
  29836,
  97089,
  31180,
  18692,
  34377,
  16206,
  19568,
  82230,
  36957,
  11625,
  89751,
  88264,
  73202,
  21389,
  94699,
  30321,
  22159,
  76341,
  20287,
  75921,
  88878,
  78703,
  34581,
  31498,
  37178,
  50526,
  15667,
  48472,
  68025,
  18152,
  92997,
  45194,
  35792,
  43913,
  72309,
  77240,
  89083,
  82310,
  12555,
  98925,
  74420,
  24589,
  34708,
  85722,
  62893,
  21691,
  73322,
  11492,
  12490,
  13166,
  88705,
  67301,
  72198,
  24874,
  76487,
  62948,
  59865,
  53676,
  92741,
  20860,
  88028,
  45201,
  23667,
  10581,
  77520,
  84566,
  51687,
  19781,
  97491,
  47531,
  68156,
  73324,
  78968,
  21596,
  15448,
  31170,
  87856,
  16001,
  30641,
  20379,
  34736,
  53290,
  72642,
  59344,
  68199,
  52460,
  55008,
  17539,
  46571,
  23893,
  10902,
  71961,
  47252,
  34801,
  54575,
  88121,
  78637,
  39213,
  98141,
  57963,
  98480,
  71147,
  43578,
  31681,
  33700,
  66228,
  78032,
  88321,
  42531,
  26035,
  60429,
  91612,
  58120,
  89407,
  51440,
  74970,
  27277,
  27465,
  46755,
  61113,
  48174,
  92842,
  37889,
  46193,
  17838,
  41317,
  91203,
  56700,
  92225,
  14042,
  28888,
  42409,
  43742,
  47950,
  60012,
  22784,
  56646,
  71287,
  67068,
  56344,
  84576,
  55332,
  39659,
  15449,
  18435,
  29432,
  15665,
  32310,
  12187,
  91607,
  56064,
  19785,
  59910,
  66450,
  82386,
  18764,
  65692,
  84784,
  62951,
  99050,
  45731,
  48470,
  39324,
  94800,
  68808,
  82573,
  47088,
  13951,
  27500,
  84585,
  69048,
  27780,
  80590,
  55370,
  23451,
  27191,
  26100,
  90293,
  50078,
  19137,
  27737,
  22569,
  48902,
  36815,
  24284,
  98928,
  70871,
  35712,
  89228,
  94986,
  76950,
  40752,
  85746,
  47474,
  83603,
  49261,
  44969,
  16958,
  59433,
  71578,
  94375,
  99614,
  89622,
  51129,
  11156,
  78767,
  63554,
  45860,
  15810,
  74771,
  35428,
  30052,
  18150,
  68986,
  34820,
  50201,
  22996,
  56297,
  99260,
  64688,
  55665,
  97956,
  47097,
  58688,
  79583,
  55063,
  31835,
  15371,
  27844,
  18991,
  44786,
  52280,
  65427,
  33385,
  50750,
  74193,
  37598,
  57331,
  27243,
  51656,
  42413,
  96608,
  36579,
  63733,
  84536,
  79453,
  30983,
  94593,
  79422,
  82346,
  53011,
  65714,
  60573,
  51630,
  38941,
  89753,
  42939,
  60575,
  82800,
  57035,
  87371,
  64061,
  69851,
  98809,
  59834,
  18835,
  33278,
  36041,
  89750,
  33377,
  71745,
  37615,
  22986,
  78993,
  98887,
  91495,
  55009,
  65088,
  61107,
  86850,
  24409,
  41647,
  30341,
  13360,
  94119,
  60874,
  94681,
  12294,
  31270,
  67169,
  69982,
  82546,
  45548,
  68981,
  56539,
  46787,
  41640,
  17244,
  76548,
  80347,
  84619,
  65047,
  32440,
  19858,
  93947,
  34433,
  59800,
  87150,
  61593,
  45059,
  50520,
  43404,
  89153,
  75276,
  73975,
  34721,
  27022,
  95168,
  10562,
  87285,
  85124,
  47645,
  40814,
  17256,
  36758,
  81972,
  42533,
  80579,
  62777,
  33567,
  55729,
  46613,
  73688,
  89566,
  77156,
  28195,
  55581,
  89915,
  20696,
  65015,
  72302,
  91965,
  23577,
  22461,
  90346,
  64595,
  56289,
  31184,
  47349,
  54200,
  12174,
  73040,
  62683,
  97890,
  21601,
  50505,
  54550,
  66662,
  40887,
  41179,
  73871,
  99728,
  86319,
  28466,
  30688,
  14670,
  30371,
  48181,
  76745,
  49779,
  89394,
  75451,
  55547,
  44988,
  84043,
  93713,
  31694,
  72390,
  71964,
  22241,
  18282,
  17656,
  38157,
  81358,
  34819,
  45875,
  94156,
  14920,
  82795,
  80301,
  30755,
  28592,
  91455,
  31513,
  44618,
  48624,
  85008,
  69604,
  10980,
  74651,
  93201,
  54330,
  33989,
  72222,
  76785,
  69869,
  31444,
  58717,
  64974,
  18089,
  22555,
  38811,
  49910,
  57919,
  18217,
  78980,
  27451,
  78501,
  19069,
  75640,
  87479,
  41487,
  70904,
  21143,
  86138,
  87503,
  22997,
  71054,
  55242,
  24796,
  30921,
  73901,
  78719,
  73668,
  40062,
  35543,
  55260,
  13994,
  86199,
  19950,
  84417,
  84692,
  72516,
  73062,
  42339,
  11175,
  72962,
  87900,
  86061,
  87216,
  23397,
  30171,
  68984,
  40889,
  72952,
  14335,
  45886,
  93935,
  26858,
  58806,
  88530,
  51385,
  82517,
  17888,
  33574,
  38099,
  35615,
  40717,
  92891,
  10071,
  24679,
  64001,
  50189,
  75901,
  19520,
  57337,
  15914,
  55533,
  74365,
  96604,
  95480,
  45043,
  64043,
  36479,
  39565,
  30729,
  19592,
  26575,
  96389,
  70446,
  18115,
  36896,
  46417,
  28955,
  95051,
  93673,
  78658,
  75363,
  59940,
  40027,
  38318,
  50269,
  25217,
  69573,
  53784,
  17175,
  70773,
  89981,
  17683,
  10680,
  88622,
  56828,
  71454,
  59613,
  93410,
  30592,
  15125,
  85953,
  79266,
  49278,
  12848,
  63339,
  50598,
  16139,
  77235,
  78026,
  47079,
  56200,
  47450,
  25045,
  91763,
  67107,
  49768,
  10521,
  16496,
  51163,
  57687,
  95222,
  43170,
  97168,
  71573,
  56432,
  25242,
  46595,
  32896,
  48197,
  75971,
  28619,
  94122,
  87681,
  60991,
  71377,
  61971,
  57550,
  57301,
  27464,
  83664,
  71107,
  61718,
  87707,
  11237,
  26115,
  20429,
  56169,
  69274,
  70566,
  47104,
  17710,
  92830,
  56054,
  16340,
  10392,
  62500,
  99320,
  56618,
  42612,
  37193,
  67800,
  57447,
  42054,
  81285,
  56698,
  60682,
  94833,
  11001,
  13344,
  26492,
  77913,
  27127,
  89373,
  84245,
  93176,
  75068,
  64691,
  74682,
  50985,
  22840,
  65569,
  49536,
  47009,
  56625,
  49670,
  98701,
  90721,
  90568,
  34398,
  40654,
  55254,
  30820,
  42973,
  79937,
  19796,
  39676,
  51100,
  49955,
  26946,
  58367,
  94451,
  86596,
  15417,
  49413,
  67099,
  68239,
  71586,
  86204,
  64235,
  63186,
  17587,
  99477,
  92932,
  79794,
  45968,
  97597,
  18098,
  22937,
  62634,
  60948,
  42836,
  22355,
  91739,
  64123,
  64181,
  33245,
  77922,
  84133,
  48885,
  70613,
  83117,
  58707,
  12185,
  60020,
  14029,
  18414,
  60903,
  87438,
  65638,
  88259,
  99038,
  68699,
  21850,
  62281,
  87797,
  63846,
  64314,
  52539,
  83073,
  26743,
  52779,
  32981,
  51090,
  39533,
  44432,
  31692,
  25549,
  92429,
  99835,
  44128,
  88115,
  39366,
  61773,
  45953,
  43635,
  18349,
  72541,
  97794,
  64562,
  44098,
  93431,
  74605,
  79186,
  47291,
  37794,
  33349,
  79910,
  67576,
  11875,
  94186,
  32249,
  31261,
  29272,
  86184,
  73999,
  72117,
  62639,
  83988,
  56794,
  15112,
  71467,
  44399,
  45068,
  51866,
  53229,
  78623,
  40054,
  41884,
  35923,
  22363,
  71817,
  40307,
  38911,
  72191,
  91448,
  60833,
  48061,
  31899};
vector<int> lista_direita = {
  12823,
  88907,
  50218,
  57255,
  59171,
  37895,
  69869,
  63605,
  26570,
  12823,
  67099,
  82288,
  87436,
  62160,
  84570,
  70651,
  12823,
  72675,
  60020,
  13360,
  11091,
  99302,
  23170,
  42793,
  92216,
  98887,
  57963,
  28514,
  46571,
  49394,
  53891,
  57963,
  48120,
  35506,
  46571,
  79955,
  15914,
  27573,
  36285,
  69869,
  39817,
  27540,
  73871,
  15914,
  12823,
  46571,
  21816,
  67099,
  84742,
  39565,
  67184,
  19642,
  82050,
  64628,
  21691,
  26724,
  95925,
  65860,
  55618,
  48120,
  84229,
  33989,
  33989,
  23920,
  48211,
  99481,
  67099,
  77758,
  67485,
  74354,
  23920,
  29963,
  44098,
  14670,
  44098,
  97142,
  29662,
  67099,
  66944,
  15566,
  87249,
  74584,
  16531,
  73292,
  29963,
  14212,
  49334,
  73170,
  39565,
  97543,
  74520,
  35306,
  23920,
  44098,
  42425,
  89135,
  69485,
  70651,
  98707,
  36545,
  48211,
  44098,
  39974,
  39565,
  48990,
  57426,
  68150,
  98023,
  52901,
  23869,
  46571,
  40401,
  38780,
  68025,
  69729,
  25004,
  92105,
  29963,
  70408,
  71462,
  28157,
  80622,
  68025,
  51837,
  68025,
  88730,
  44098,
  13360,
  33989,
  21816,
  92615,
  20616,
  15914,
  60020,
  45096,
  23920,
  60020,
  92371,
  75901,
  23861,
  22470,
  44098,
  39565,
  59613,
  21691,
  21634,
  39565,
  98262,
  42860,
  70651,
  74365,
  21816,
  69001,
  67099,
  23920,
  51219,
  13636,
  61662,
  69869,
  70397,
  57426,
  44706,
  51161,
  98779,
  89323,
  10452,
  57426,
  34819,
  13427,
  85632,
  46571,
  48211,
  97410,
  29963,
  39565,
  57426,
  69278,
  43882,
  79670,
  33989,
  49744,
  87513,
  76393,
  20641,
  85481,
  51687,
  29021,
  29963,
  41921,
  21691,
  62286,
  48345,
  33482,
  61098,
  64264,
  60485,
  37318,
  24531,
  85448,
  15914,
  23329,
  62251,
  79585,
  15400,
  31886,
  11345,
  50338,
  29963,
  68276,
  12823,
  51687,
  29985,
  99202,
  74365,
  39565,
  46571,
  14042,
  23920,
  48211,
  53239,
  40447,
  10137,
  71499,
  12823,
  86898,
  77850,
  67409,
  15914,
  49536,
  84205,
  98887,
  22888,
  46571,
  68025,
  20195,
  23920,
  23920,
  69869,
  48962,
  48211,
  61088,
  23920,
  46571,
  13360,
  23339,
  32896,
  23040,
  98887,
  26570,
  99647,
  33989,
  72091,
  62028,
  88830,
  52189,
  96935,
  12836,
  44429,
  74365,
  21691,
  91508,
  44098,
  90293,
  46571,
  57426,
  30757,
  83175,
  46571,
  99459,
  59613,
  39565,
  46799,
  78937,
  91666,
  34953,
  51687,
  14752,
  77674,
  33989,
  15914,
  67099,
  46858,
  98833,
  15914,
  21816,
  14670,
  44098,
  21816,
  91653,
  63019,
  29963,
  28581,
  85552,
  48211,
  83341,
  60020,
  92672,
  68025,
  67099,
  46571,
  34670,
  12823,
  61917,
  19843,
  84990,
  57426,
  17337,
  90923,
  58323,
  68025,
  87169,
  59613,
  62531,
  10424,
  10257,
  52083,
  85673,
  61492,
  38721,
  51687,
  74365,
  12823,
  54857,
  18361,
  48211,
  39565,
  82886,
  67099,
  28002,
  67099,
  31200,
  63220,
  26314,
  67099,
  13360,
  59613,
  85967,
  32896,
  26570,
  34819,
  59613,
  29963,
  68938,
  97700,
  14042,
  96185,
  49536,
  79510,
  33989,
  80613,
  56186,
  44899,
  92938,
  13360,
  94681,
  81157,
  15914,
  16629,
  51437,
  93242,
  90743,
  36367,
  68234,
  20804,
  13360,
  14670,
  61714,
  90538,
  85443,
  44098,
  10292,
  91423,
  67915,
  78421,
  14042,
  23920,
  57422,
  51687,
  50491,
  17355,
  41600,
  74365,
  21816,
  48660,
  94016,
  15939,
  17451,
  23920,
  75901,
  74365,
  28186,
  57157,
  34087,
  14042,
  99926,
  29963,
  92627,
  35772,
  31448,
  13360,
  92105,
  74595,
  21841,
  23685,
  29963,
  43645,
  29963,
  28322,
  56420,
  32357,
  59353,
  70651,
  33989,
  81828,
  60024,
  33771,
  86106,
  17918,
  94351,
  45157,
  53238,
  23920,
  57963,
  13426,
  19931,
  23200,
  88382,
  80963,
  98887,
  16004,
  94352,
  77191,
  20164,
  74365,
  48120,
  39696,
  21816,
  53921,
  46976,
  97405,
  14670,
  21691,
  68025,
  39776,
  38027,
  13360,
  90293,
  11936,
  75925,
  97204,
  92346,
  14670,
  12505,
  88870,
  39565,
  90293,
  29963,
  69869,
  74365,
  21816,
  87900,
  17597,
  60185,
  48211,
  39565,
  54205,
  57426,
  39829,
  57121,
  69971,
  69869,
  13360,
  74365,
  57963,
  18842,
  62791,
  13360,
  69869,
  56771,
  51276,
  33989,
  40385,
  34819,
  47662,
  47240,
  80330,
  81082,
  41916,
  93799,
  88196,
  56619,
  59613,
  67099,
  58078,
  21816,
  28824,
  37259,
  21691,
  33107,
  48120,
  45256,
  32896,
  14670,
  46413,
  40292,
  32306,
  81741,
  46740,
  43108,
  57509,
  75901,
  59014,
  39565,
  26144,
  23277,
  70530,
  18903,
  24670,
  21090,
  20737,
  35604,
  29016,
  15346,
  50694,
  70651,
  70651,
  47190,
  46571,
  13153,
  69869,
  12823,
  13360,
  88841,
  48120,
  41389,
  87900,
  65441,
  84299,
  65624,
  27020,
  51900,
  14048,
  34994,
  90878,
  57426,
  79525,
  56520,
  15914,
  32234,
  53280,
  57476,
  83614,
  13360,
  55377,
  69869,
  39565,
  20300,
  98013,
  83709,
  39786,
  69563,
  90293,
  93733,
  44098,
  48120,
  25424,
  46331,
  75901,
  59613,
  19459,
  76063,
  70651,
  69785,
  67707,
  75901,
  62909,
  21816,
  21816,
  47222,
  46571,
  25060,
  87922,
  11813,
  12823,
  45597,
  48120,
  70651,
  14042,
  63196,
  59613,
  85100,
  29317,
  46178,
  48211,
  21048,
  73523,
  74365,
  29963,
  28745,
  39144,
  51687,
  71291,
  67961,
  44098,
  73871,
  33616,
  83768,
  15914,
  48120,
  38783,
  76020,
  57426,
  73871,
  78053,
  56772,
  14042,
  94445,
  21814,
  47256,
  58704,
  45253,
  56251,
  28040,
  82756,
  15914,
  67099,
  15914,
  39298,
  93681,
  74323,
  86613,
  67099,
  44098,
  69869,
  21691,
  69869,
  97754,
  65104,
  28968,
  39565,
  83817,
  10006,
  15914,
  57426,
  96138,
  39565,
  39454,
  26570,
  57122,
  33579,
  50715,
  59613,
  50633,
  73871,
  33767,
  69869,
  76562,
  50300,
  39565,
  50804,
  78072,
  40549,
  27935,
  73906,
  92362,
  26231,
  74531,
  48120,
  49437,
  74365,
  33714,
  23920,
  23920,
  22705,
  43754,
  48180,
  68025,
  31277,
  46571,
  86114,
  13360,
  70651,
  49312,
  46571,
  93072,
  58689,
  50986,
  28581,
  96399,
  65989,
  25085,
  99626,
  41132,
  56502,
  14042,
  84318,
  13360,
  41282,
  67099,
  66970,
  50453,
  30279,
  30416,
  63291,
  26570,
  12193,
  71881,
  70651,
  21644,
  50325,
  23920,
  44098,
  62561,
  55342,
  24292,
  41010,
  23359,
  17950,
  33989,
  93099,
  12823,
  15914,
  47702,
  21816,
  19093,
  59613,
  23605,
  57537,
  25577,
  70651,
  45810,
  90293,
  90169,
  57426,
  57426,
  90854,
  70651,
  48120,
  13360,
  89201,
  13453,
  76655,
  21691,
  21816,
  55881,
  60020,
  64186,
  70651,
  28208,
  10579,
  81798,
  14670,
  24670,
  29963,
  14822,
  47666,
  21816,
  59798,
  44719,
  45563,
  21816,
  51687,
  57426,
  30827,
  86987,
  46908,
  46571,
  48146,
  66308,
  96077,
  70651,
  67099,
  86412,
  22584,
  40113,
  48120,
  57426,
  20768,
  99624,
  24670,
  53310,
  43530,
  21816,
  80473,
  43906,
  95505,
  34115,
  92105,
  76020,
  39537,
  57426,
  28581,
  67099,
  12823,
  28786,
  74190,
  48120,
  34834,
  39353,
  74365,
  44098,
  70651,
  98726,
  70651,
  24670,
  68025,
  91601,
  67099,
  88700,
  21816,
  37436,
  67871,
  46855,
  46745,
  79787,
  70165,
  15604,
  14670,
  96449,
  12823,
  29963,
  24670,
  42517,
  81320,
  92105,
  56609,
  50018,
  56175,
  16562,
  90293,
  39627,
  69869,
  26421,
  59613,
  98887,
  24670,
  77368,
  48211,
  85808,
  32416,
  39565,
  64253,
  68025,
  76162,
  73660,
  70651,
  34986,
  19456,
  19994,
  29963,
  22192,
  50294,
  77943,
  34819,
  57426,
  20316,
  14042,
  25485,
  33989,
  56123,
  38104,
  37666,
  34819,
  67099,
  14670,
  23275,
  57426,
  44098,
  37231,
  96693,
  14670,
  28581,
  39692,
  25963,
  87650,
  76613,
  59613,
  28404,
  74642,
  90293,
  38135,
  58061,
  57426,
  69869,
  53638,
  98595,
  46811,
  48211,
  68621,
  13124,
  13360,
  29193,
  48120,
  16163,
  98887,
  74365,
  13360,
  98887,
  65467,
  68483,
  94569,
  87472,
  97916,
  44436,
  87900,
  55739,
  74365,
  58915,
  97117,
  38639,
  90293,
  14042,
  64451,
  12823,
  21816,
  14670,
  60020,
  47506,
  74118,
  75901,
  53070,
  92283,
  12823,
  75350,
  92946,
  28566,
  41875,
  49550,
  26570,
  39565,
  57325,
  12823,
  86394,
  10243,
  42389,
  21542,
  12690,
  15367,
  15223,
  89174,
  48187,
  35622,
  19988,
  55779,
  34819,
  35299,
  57426,
  44098,
  51846,
  67099,
  18335,
  32196,
  21691,
  18923,
  74286,
  60436,
  88029,
  13511,
  92837,
  69329,
  29954,
  13984,
  81159,
  15914,
  96684,
  23920,
  36179,
  98887,
  57426,
  34819,
  37633,
  46273,
  59613,
  70651,
  46571,
  74545,
  30507,
  46571,
  60020,
  72916,
  73328,
  39680,
  61678,
  71302,
  21816,
  46571,
  47539,
  57963,
  14670,
  91788,
  57772,
  74365,
  46571,
  92314,
  13095,
  21857,
  59613,
  44098,
  21816,
  33989};




//<int> lista_esquerda = {3, 4, 2, 1, 3, 3};
//vector<int> lista_direita = {4, 3, 5, 3, 9, 3};

vector<int> ordenado_comparado = {};
//este array também precisa ser ordenado

///este

#endif // VETORES_H
