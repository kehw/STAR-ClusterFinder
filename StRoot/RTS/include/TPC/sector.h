#ifndef __MINMAXPADS_H
#define __MINMAXPADS_H

struct MINMAXPADS {
unsigned short row;
unsigned short min1;
unsigned short max1;
unsigned short min2;
unsigned short max2;
};

#endif
struct MINMAXPADS minmax[6][3][6]= {
/*RDO 1 */
{/*mezz 1 */
{{1,1,88,255,0},
{2,1,96,255,0},
{3,1,4,101,104},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0}},

/*mezz 2 */
{{3,5,100,255,0},
{4,1,112,255,0},
{5,4,115,255,0},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0}},

/*mezz 3 */
{{5,1,3,116,118},
{6,1,126,255,0},
{7,1,134,255,0},
{8,13,130,255,0},
{0,255,0,255,0},
{0,255,0,255,0}}},

/*RDO 2 */
{/*mezz 1 */
{{12,3,172,255,0},
{13,1,182,255,0},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0}},

/*mezz 2 */
{{11,6,161,255,0},
{12,1,2,173,174},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0}},

/*mezz 3 */
{{8,1,12,131,142},
{9,1,150,255,0},
{10,1,158,255,0},
{11,1,5,162,166},
{0,255,0,255,0},
{0,255,0,255,0}}},

/*RDO 3 */
{/*mezz 1 */
{{19,1,93,255,0},
{20,1,108,255,0},
{21,1,110,255,0},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0}},

/*mezz 2 */
{{14,1,1,255,0},
{15,1,2,255,0},
{16,1,43,255,0},
{17,1,104,255,0},
{18,1,106,255,0},
{19,94,106,255,0}},

/*mezz 3 */
{{14,2,98,255,0},
{15,3,100,255,0},
{16,44,102,255,0},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0}}},

/*RDO 4 */
{/*mezz 1 */
{{27,1,92,255,0},
{28,1,122,255,0},
{29,1,122,255,0},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0}},

/*mezz 2 */
{{24,1,49,114,114},
{25,1,116,255,0},
{26,1,118,255,0},
{27,93,120,255,0},
{0,255,0,255,0},
{0,255,0,255,0}},

/*mezz 3 */
{{22,1,112,255,0},
{23,1,112,255,0},
{24,50,113,255,0},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0}}},

/*RDO 5 */
{/*mezz 1 */
{{34,1,1,130,130},
{35,1,82,131,132},
{36,1,134,255,0},
{37,1,136,255,0},
{0,255,0,255,0},
{0,255,0,255,0}},

/*mezz 2 */
{{32,1,48,255,0},
{33,1,128,255,0},
{34,2,129,255,0},
{35,83,130,255,0},
{0,255,0,255,0},
{0,255,0,255,0}},

/*mezz 3 */
{{30,1,124,255,0},
{31,1,126,255,0},
{32,49,128,255,0},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0}}},

/*RDO 6 */
{/*mezz 1 */
{{43,1,96,255,0},
{44,1,144,255,0},
{45,1,144,255,0},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0}},

/*mezz 2 */
{{40,1,46,255,0},
{41,1,142,255,0},
{42,1,144,255,0},
{43,97,144,255,0},
{0,255,0,255,0},
{0,255,0,255,0}},

/*mezz 3 */
{{38,1,138,255,0},
{39,1,138,255,0},
{40,47,140,255,0},
{0,255,0,255,0},
{0,255,0,255,0},
{0,255,0,255,0}}}};
