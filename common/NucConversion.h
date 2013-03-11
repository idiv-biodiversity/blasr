#ifndef NUC_CONVERSION_H_
#define NUC_CONVERSION_H_

//
// Map from ascii to 2 bit representation.
//
static int TwoBit[] = {
  	0,  1,  2,  3,  0,  1,  2,  3,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,  0,255,  1,255,255,255,  2,
  255,255,255,255,255,255,255,255,
  255,255,255,255,  3,255,255,255,
  255,255,255,255,255,255,255,255,
  255,  0,255,  1,255,255,255,  2,
  255,255,255,255,255,255,255,255,
  255,255,255,255,  3,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255
};


//
// Map from charcter to 3 bit.  Treat all non ACGT IUPAC as N
// IPUAC: ACGT U M R W S Y K V H D N
// 

static int ThreeBit[] = {
  	0,  1,  2,  3,    4,255,255,255, // 0..3 are native nucletides, 4
																		 // is an 'N', which is
																		 // represented just fine in the 3
																		 // bit mode.
		255,255,255,255,255,255,255,255, // 8
		255,255,255,255,255,255,255,255, // 16
		255,255,255,255,255,255,255,255, // 24
		255,255,255,255,  5,255,255,255, // 32  define '$' for bwt.
		255,255,255,255,255,255,255,255, // 40
		255,255,255,255,255,255,255,255, // 48
		255,255,255,255,255,255,255,255, // 56
		255,  0,  4,  1,  4,255,255,  2, // 64
		  4,255,255,  4,255,  4,  4,255, // 72
		255,255,  4,  4,  3,  4,  4,  4, // 80
		255,  4,255,255,255,255,255,  4, // 88
		255,  0,  4,  1,  4,255,255,  2, // 96
		  4,255,255,  4,255,  4,  4,255, // 104
		255,255,  4,  4,  3,  4,  4,  4, // 112
		  4,  4,255,255,255,255,255,255, // 120
		255,255,255,255,255,255,255,255, // 128
		255,255,255,255,255,255,255,255, // 136
		255,255,255,255,255,255,255,255, // 144
		255,255,255,255,255,255,255,255, // 152
		255,255,255,255,255,255,255,255, // 160
		255,255,255,255,255,255,255,255, // 168
		255,255,255,255,255,255,255,255, // 176
		255,255,255,255,255,255,255,255, // 184
		255,255,255,255,255,255,255,255, // 192
		255,255,255,255,255,255,255,255, // 200
		255,255,255,255,255,255,255,255, // 208
		255,255,255,255,255,255,255,255, // 216
		255,255,255,255,255,255,255,255, // 224
		255,255,255,255,255,255,255,255, // 232
		255,255,255,255,255,255,255,255, // 240
		255,255,255,255,255,255,255,255  // 248
};

static int IsACTG[] = {
   	1,  1,  1,  1,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  1,  0,  1,  0,  0,  0,  1,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  1,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  1,  0,  1,  0,  0,  0,  1,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  1,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0
};

static int IsLowerCase[] = {
   	0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  1,  0,  1,  0,  0,  0,  1,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  1,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0
};


static int FourBit[] = {
   	0,  1,  2,  3,  4,  5,  6,  7,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,  0,255,  1,255,255,255,  2,
  255,255,255,255,255,255,  8,255,
  255,255,255,255,  3,255,255,255,
  255,255,255,255,255,255,255,255,
  255,  4,255,  5,255,255,255,  6,
  255,255,255,255,255,255,  8,255,
  255,255,255,255,  7,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255
};

static int FourBitToAscii[]  = {'A', 'C', 'G', 'T', 'a', 'c', 'g', 't', 'N', 'X'};
static int ThreeBitToAscii[] = {'A', 'C', 'G', 'T', 'N', '$'};

static int MaskedFourBit[] = {
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,0,9,1,9,9,9,2,
  9,9,9,9,9,9,8,9,
  9,9,9,9,3,9,9,9,
  9,9,9,9,9,9,9,9,
  9,4,9,5,9,9,9,6,
  9,9,9,9,9,9,8,9,
  9,9,9,9,7,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9,
  9,9,9,9,9,9,9,9
};

static char AllToUpper[] = {
	'A','C','G','T','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','A','N','C','N','N','N','G',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','T','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','A','N','C','N','N','N','G',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','T','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N'
};
static char AllToLower[] = {
	'a','c','g','t','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','a','N','c','N','N','N','g',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','t','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','a','N','c','N','N','N','g',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','t','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N',
  'N','N','N','N','N','N','N','N'
};

static char PreserveCase[] = {
0,1,2,3,4,5,6,7,
8,9,10,11,12,13,14,15,
16,17,18,19,20,21,22,23,
24,25,26,27,28,29,30,31,
32,33,34,35,36,37,38,39,
40,41,42,43,44,45,46,47,
48,49,50,51,52,53,54,55,
56,57,58,59,60,61,62,63,
64,65,66,67,68,69,70,71,
72,73,74,75,76,77,78,79,
80,81,82,83,84,85,86,87,
88,89,90,91,92,93,94,95,
96,97,98,99,100,101,102,103,
104,105,106,107,108,109,110,111,
112,113,114,115,116,117,118,119,
120,121,122,123,124,125,126,127,
128,129,130,131,132,133,134,135,
136,137,138,139,140,141,142,143,
144,145,146,147,148,149,150,151,
152,153,154,155,156,157,158,159,
160,161,162,163,164,165,166,167,
168,169,170,171,172,173,174,175,
176,177,178,179,180,181,182,183,
184,185,186,187,188,189,190,191,
192,193,194,195,196,197,198,199,
200,201,202,203,204,205,206,207,
208,209,210,211,212,213,214,215,
216,217,218,219,220,221,222,223,
224,225,226,227,228,229,230,231,
232,233,234,235,236,237,238,239,
240,241,242,243,244,245,246,247,
248,249,250,251,252,253,254,255};


static char TwoBitToAscii[] = {'A', 'C', 'G', 'T'};


static unsigned char ReverseComplementNuc[] = {
    3,  2,  1,  0,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,'T',127,'G',127,127,127,'C',
	127,127,127,127,127,127,'N',127,
  127,127,127,127,'A',127,127,127,
  127,127,127,127,127,127,127,127,
  127,'t',127,'g',127,127,127,'c',
  127,127,127,127,127,127,'n',127,
  127,127,127,127,'a',127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127,
  127,127,127,127,127,127,127,127
};

//
// HDF Column Orders: GTAC
// A - column 2; C - column 3;
// G - column 0; T - column 1;
// Ascii code:
// A=65, C=67, G=71,  T=84
// a=97, c=99, g=116, t=103
//
static int NucToHdfColumnOrder[] = {
  	2,  3,  1,  0,  2,  3,  1,  0,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,  2,255,  3,255,255,255,  1,
  255,255,255,255,255,255,255,255,
  255,255,255,255,  0,255,255,255,
  255,255,255,255,255,255,255,255,
  255,  2,255,  3,255,255,255,  1,
  255,255,255,255,255,255,255,255,
  255,255,255,255,  0,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255,
  255,255,255,255,255,255,255,255
};

#endif
