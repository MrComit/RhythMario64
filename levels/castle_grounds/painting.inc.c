#include "game/paintings.h"

// 0x0700A800 - 0x0700B800
ALIGNED8 static const Texture castle_seg7_texture_0700A800[] = {
#include "levels/castle_grounds/CUSTOM_painting1.rgba16.inc.c"
};

// 0x0700B800 - 0x0700C800
ALIGNED8 static const Texture castle_seg7_texture_0700B800[] = {
#include "levels/castle_grounds/CUSTOM_painting2.rgba16.inc.c"
};

// 0x0700C800 - 0x0700D800
ALIGNED8 static const Texture castle_seg7_texture_0700C800[] = {
#include "levels/castle_grounds/CUSTOM_painting3.rgba16.inc.c"
};

// 0x0700D800 - 0x0700E800
ALIGNED8 static const Texture castle_seg7_texture_0700D800[] = {
#include "levels/castle_grounds/CUSTOM_painting4.rgba16.inc.c"
};

// 0x0700E800 - 0x0700F800
ALIGNED8 static const Texture castle_seg7_texture_0700E800[] = {
#include "levels/castle_grounds/CUSTOM_painting5.rgba16.inc.c"
};

// 0x0700F800 - 0x07010800
ALIGNED8 static const Texture castle_seg7_texture_0700F800[] = {
#include "levels/castle_grounds/CUSTOM_painting6.rgba16.inc.c"
};


// 0x07021800 - 0x07021818
static const Lights1 castle_seg7_lights_07021800 = gdSPDefLights1(
    0x50, 0x50, 0x50,
    0xff, 0xff, 0xff, 0x32, 0x32, 0x32
);

// 0x07021818 - 0x07021898
static const Vtx castle_seg7_vertex_07021818[] = {
    {{{     0,      0,      0}, 0, {   -32,    992}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   614,      0,      0}, 0, {  2012,    992}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   614,    307,      0}, 0, {  2012,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{     0,    307,      0}, 0, {   -32,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{     0,    307,      0}, 0, {   -32,    992}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   614,    307,      0}, 0, {  2012,    992}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   614,    614,      0}, 0, {  2012,    -28}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{     0,    614,      0}, 0, {   -32,    -28}, {0x00, 0x00, 0x7f, 0xff}}},
};

// 0x07021898 - 0x07021918
static const Vtx castle_seg7_vertex_07021898[] = {
    {{{     0,      0,      0}, 0, {   -32,    992}, {0xdd, 0xdd, 0xdd, 0xff}}},
    {{{   614,      0,      0}, 0, {  2012,    992}, {0xdd, 0xdd, 0xdd, 0xff}}},
    {{{   614,    307,      0}, 0, {  2012,      0}, {0xdd, 0xdd, 0xdd, 0xff}}},
    {{{     0,    307,      0}, 0, {   -32,      0}, {0xdd, 0xdd, 0xdd, 0xff}}},
    {{{     0,    307,      0}, 0, {   -32,    992}, {0xdd, 0xdd, 0xdd, 0xff}}},
    {{{   614,    307,      0}, 0, {  2012,    992}, {0xdd, 0xdd, 0xdd, 0xff}}},
    {{{   614,    614,      0}, 0, {  2012,    -28}, {0xdd, 0xdd, 0xdd, 0xff}}},
    {{{     0,    614,      0}, 0, {   -32,    -28}, {0xdd, 0xdd, 0xdd, 0xff}}},
};

// 0x07021918 - 0x07021998
static const Vtx castle_seg7_vertex_07021918[] = {
    {{{ -3046,   -307,  -3724}, 0, {   -32,    992}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -2742,   -307,  -4258}, 0, {  2012,    992}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -2742,      0,  -4258}, 0, {  2012,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -3046,      0,  -3724}, 0, {   -32,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -3046,      0,  -3724}, 0, {   -32,    992}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -2742,      0,  -4258}, 0, {  2012,    992}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -2742,    307,  -4258}, 0, {  2012,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -3046,    307,  -3724}, 0, {   -32,      0}, {0x00, 0x00, 0x7f, 0xff}}},
};

// 0x07021998 - 0x07021A18
static const Vtx castle_seg7_vertex_07021998[] = {
    {{{ -1866,   -307,  -4258}, 0, {   -32,    992}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1562,   -307,  -3724}, 0, {  2012,    992}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1562,      0,  -3724}, 0, {  2012,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1866,      0,  -4258}, 0, {   -32,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1866,      0,  -4258}, 0, {   -32,    992}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1562,      0,  -3724}, 0, {  2012,    992}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1562,    307,  -3724}, 0, {  2012,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{ -1866,    307,  -4258}, 0, {   -32,      0}, {0x00, 0x00, 0x7f, 0xff}}},
};

// 0x07021A18 - 0x07021A30
static const Gfx castle_seg7_dl_07021A18[] = {
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x07021A30 - 0x07021A48
static const Gfx castle_seg7_dl_07021A30[] = {
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSPEndDisplayList(),
};

// 0x07021A48 - 0x07021AA0
static const Gfx castle_seg7_dl_07021A48[] = {
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_LIGHTING | G_SHADING_SMOOTH),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPLight(&castle_seg7_lights_07021800.l, 1),
    gsSPLight(&castle_seg7_lights_07021800.a, 2),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPEndDisplayList(),
};

// 0x07021AA0 - 0x07021AC0
static const Gfx castle_seg7_dl_07021AA0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

// 0x07021AC0 - 0x07021AE0
static const Gfx castle_seg7_painting_dl_07021AC0[] = {
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPEndDisplayList(),
};

// 0x07021AE0 - 0x07021FFA
static const PaintingData castle_seg7_painting_texture_map_bottom_07021AE0[] = {
    85, // num mappings
    // Format:
    // mesh vtx ID, texture X, texture Y
      49, 2016,  889,
      53, 2016,  685,
      55, 1843,  787,
      50, 2016,  992,
      51, 1843,  992,
      52, 1843,  583,
      75, 2016,  513,
      54, 1671,  889,
      59, 1671,  685,
      62, 1502,  787,
      56, 1502,  992,
      57, 1671,  992,
      58, 1502,  583,
      60, 1671,  513,
      61, 1330,  889,
      65, 1330,  685,
      63, 1162,  992,
      64, 1330,  992,
      66, 1162,  583,
      67, 1330,  513,
      69, 1162,  787,
      68,  989,  889,
      70,  821,  992,
      71,  989,  992,
      73,  989,  685,
      72,  821,  583,
      74,  989,  513,
      77, 2016,  308,
      78, 1843,  410,
      76, 1843,  204,
      81, 1502,  410,
      80, 1671,  308,
      47, 1671,  102,
      79, 1502,  204,
      46, 1330,  102,
      82, 1162,  204,
      83, 1330,  308,
      84, 1162,  410,
      86,  989,  308,
      85,  821,  204,
      48,  989,  102,
      25, 1502,    0,
      31, 1162,    0,
      19, 1843,    0,
      37,  821,    0,
     120,  821,  787,
     119,  649,  889,
     122,  481,  992,
     121,  649,  992,
     124,  649,  685,
     125,  481,  583,
     123,  649,  513,
     127,  481,  787,
     126,  308,  889,
     129,  140,  992,
     128,  308,  992,
     132,  308,  513,
     131,  308,  685,
     130,  140,  583,
     134,  140,  787,
     133,  -32,  889,
     135,  -32,  513,
     136,  821,  410,
     116,  649,  102,
     137,  649,  308,
     114,  481,  204,
     138,  481,  410,
     139,  308,  308,
     118,  140,  204,
     115,  308,  102,
     140,  140,  410,
     117,  -32,  102,
      99,  481,    0,
     105,  140,    0,
     143, 2016,  102,
     145, 1330,    0,
     144, 1671,    0,
     142, 2016,    0,
     146,  989,    0,
     155,  -32,  685,
     156,  -32,  992,
     154,  -32,  308,
     151,  308,    0,
     150,  649,    0,
     153,  -32,    0,

    132, // num groups
    // Grouped by 5 + one remainder group,
    // = 15 vertices per group + a few extra triangles
      13,    8,    5,
       0,    1,    2,
       3,    0,    4,
       4,    0,    2,
       5,    2,    1,
       1,    6,    5,
       7,    2,    8,
       5,    8,    2,
       2,    7,    4,
       7,    8,    9,
      10,    7,    9,
      11,    7,   10,
       7,   11,    4,
      12,    9,    8,
       8,   13,   12,
      21,   24,   45,
      14,    9,   15,
      12,   15,    9,
       9,   14,   10,
      16,   14,   20,
      17,   14,   16,
      14,   15,   20,
      14,   17,   10,
      15,   19,   18,
      18,   20,   15,
      19,   15,   12,
      20,   21,   16,
      18,   24,   20,
      21,   20,   24,
      22,   21,   45,
      23,   21,   22,
      21,   23,   16,
      24,   26,   25,
      25,   45,   24,
      26,   24,   18,
       6,   27,   28,
       5,    6,   28,
      29,   28,   27,
      27,   74,   29,
      29,   31,   28,
      13,   28,   31,
      28,   13,    5,
      36,   34,   35,
      12,   13,   30,
      13,   31,   30,
      31,   32,   33,
      32,   31,   29,
      33,   30,   31,
      33,   36,   30,
      30,   19,   12,
      19,   30,   36,
      18,   19,   37,
      19,   36,   37,
      34,   36,   33,
      35,   37,   36,
      37,   26,   18,
      35,   38,   37,
      26,   37,   38,
      25,   26,   62,
      26,   38,   62,
      38,   40,   39,
      39,   62,   38,
      40,   38,   35,
      41,   34,   33,
      33,   32,   41,
      42,   34,   75,
      34,   41,   75,
      35,   34,   42,
      32,   43,   76,
      41,   32,   76,
      43,   32,   29,
      29,   74,   43,
      43,   74,   77,
      46,   49,   52,
      42,   40,   35,
      39,   40,   44,
      40,   42,   78,
      44,   40,   78,
      25,   49,   45,
      45,   46,   22,
      46,   45,   49,
      47,   46,   52,
      48,   46,   47,
      46,   48,   22,
      58,   59,   57,
      49,   51,   50,
      50,   52,   49,
      51,   49,   25,
      50,   57,   52,
      52,   53,   47,
      53,   52,   57,
      53,   55,   47,
      54,   53,   59,
      55,   53,   54,
      53,   57,   59,
      56,   57,   50,
      57,   56,   58,
      58,   79,   59,
      59,   60,   54,
      60,   59,   79,
      60,   80,   54,
      61,   79,   58,
      62,   51,   25,
      39,   64,   62,
      51,   62,   64,
      50,   51,   66,
      51,   64,   66,
      63,   64,   39,
      64,   63,   65,
      65,   66,   64,
      66,   56,   50,
      56,   66,   67,
      65,   67,   66,
      58,   56,   70,
      56,   67,   70,
      67,   69,   68,
      68,   70,   67,
      69,   67,   65,
      70,   61,   58,
      68,   81,   70,
      61,   70,   81,
      71,   73,   84,
      71,   81,   68,
      72,   69,   65,
      65,   63,   72,
      68,   69,   73,
      69,   72,   82,
      73,   69,   82,
      44,   63,   39,
      63,   44,   83,
      72,   63,   83,
      73,   71,   68,
};


// 0x07021FFC - 0x07022516
static const PaintingData castle_seg7_painting_texture_map_top_07021FFC[] = {
    85, // num mappings
    // Format:
    // mesh vtx ID, texture X, texture Y
       0, 2016,   72,
       1, 2016,    0,
       2, 1843,    0,
       3, 1843,  174,
       4, 2016,  276,
       5, 1671,   72,
       6, 1671,    0,
       8,  989,   72,
       7,  989,    0,
      10,  821,    0,
       9, 1162,    0,
      11,  821,  174,
      12,  989,  276,
      13, 1162,  174,
      14, 1330,   72,
      15, 1502,    0,
      16, 1671,  276,
      17, 1502,  174,
      18, 1330,  276,
      19, 1843,  992,
      20, 2016,  889,
      22, 2016,  685,
      21, 1843,  583,
      23, 1843,  787,
      24, 1671,  889,
      25, 1502,  992,
      26, 1502,  583,
      27, 1671,  685,
      28, 1671,  481,
      30, 1502,  787,
      29, 1330,  889,
      31, 1162,  992,
      32, 1330,  481,
      33, 1162,  583,
      34, 1330,  685,
      35, 1162,  787,
      36,  989,  889,
      37,  821,  992,
      39,  821,  583,
      38,  989,  685,
      40,  989,  481,
      41, 2016,  481,
      42, 1843,  378,
      43, 1502,  378,
      44, 1162,  378,
      45,  821,  378,
      87,  649,   72,
      88,  -32,    0,
      90,  140,    0,
      89,  -32,   72,
      92,  308,   72,
      91,  140,  174,
      94,  481,  174,
      93,  649,  276,
      95,  481,    0,
      96,  308,  276,
      97,  821,  787,
      98,  649,  889,
      99,  481,  992,
     102,  649,  481,
     101,  649,  685,
     100,  481,  583,
     103,  481,  787,
     104,  308,  889,
     105,  140,  992,
     108,  308,  481,
     107,  308,  685,
     106,  140,  583,
     110,  -32,  889,
     109,  140,  787,
     111,  -32,  481,
     112,  481,  378,
     113,  140,  378,
     141, 1330,    0,
     142, 2016,  992,
     144, 1671,  992,
     145, 1330,  992,
     146,  989,  992,
     147,  649,    0,
     148,  -32,  276,
     149,  308,    0,
     150,  649,  992,
     151,  308,  992,
     152,  -32,  685,
     153,  -32,  992,

    132, // num groups
    // Grouped by 5 + one remainder group,
    // = 15 vertices per group + a few extra triangles
      10,    7,   13,
       0,    1,    2,
       3,    0,    2,
       4,    0,    3,
       5,    2,    6,
       2,    5,    3,
       7,    8,    9,
       8,    7,   10,
      11,    7,    9,
      12,    7,   11,
       7,   12,   13,
      13,   14,   10,
      14,   73,   10,
       5,    6,   15,
       5,   16,    3,
      16,    5,   17,
      17,    5,   15,
      14,   15,   73,
      15,   14,   17,
      18,   14,   13,
      14,   18,   17,
      19,   74,   20,
      19,   20,   23,
      28,   27,   22,
      21,   41,   22,
      22,   23,   21,
      20,   21,   23,
      23,   24,   19,
      22,   27,   23,
      24,   23,   27,
      19,   24,   75,
      25,   75,   24,
      25,   24,   29,
      24,   27,   29,
      26,   29,   27,
      27,   28,   26,
      31,   36,   77,
      26,   34,   29,
      29,   30,   25,
      30,   29,   34,
      25,   30,   76,
      31,   76,   30,
      31,   30,   35,
      30,   34,   35,
      32,   34,   26,
      33,   35,   34,
      34,   32,   33,
      35,   36,   31,
      33,   39,   35,
      36,   35,   39,
      37,   36,   56,
      36,   39,   56,
      37,   77,   36,
      28,   16,   43,
      38,   56,   39,
      39,   40,   38,
      40,   39,   33,
      22,   41,   42,
      41,    4,   42,
       3,   42,    4,
      42,   28,   22,
      28,   42,   16,
       3,   16,   42,
      26,   28,   43,
      17,   43,   16,
      43,   32,   26,
      32,   43,   18,
      17,   18,   43,
      33,   32,   44,
      32,   18,   44,
      13,   44,   18,
      13,   12,   44,
      44,   40,   33,
      40,   44,   12,
      38,   40,   45,
      40,   12,   45,
      11,   45,   12,
       9,   46,   11,
      46,    9,   78,
      47,   49,   48,
      48,   49,   51,
      49,   79,   51,
      50,   80,   48,
      51,   50,   48,
      57,   56,   60,
      46,   53,   11,
      52,   46,   54,
      53,   46,   52,
      46,   78,   54,
      54,   50,   52,
      50,   54,   80,
      50,   55,   52,
      55,   50,   51,
      38,   60,   56,
      56,   57,   37,
      58,   57,   62,
      57,   60,   62,
      58,   81,   57,
      37,   57,   81,
      59,   60,   38,
      60,   59,   61,
      61,   62,   60,
      62,   63,   58,
      63,   62,   66,
      61,   66,   62,
      63,   66,   69,
      58,   63,   82,
      64,   82,   63,
      64,   63,   69,
      45,   59,   38,
      65,   66,   61,
      66,   65,   67,
      67,   69,   66,
      68,   69,   83,
      69,   68,   64,
      67,   83,   69,
      64,   68,   84,
      70,   83,   67,
      11,   53,   45,
      59,   45,   53,
      59,   53,   71,
      61,   59,   71,
      52,   71,   53,
      52,   55,   71,
      65,   71,   55,
      71,   65,   61,
      65,   55,   72,
      67,   65,   72,
      51,   72,   55,
      70,   72,   79,
      51,   79,   72,
      72,   70,   67,
};


// 0x07022518
static const PaintingData *const castle_seg7_painting_texture_maps_07022518[] = {
    castle_seg7_painting_texture_map_bottom_07021AE0,
    castle_seg7_painting_texture_map_top_07021FFC,
};

UNUSED static const u64 castle_inside_unused_0 = 0x0;


// 0x07022528 - 0x07022540
static const Lights1 castle_seg7_lights_07022528 = gdSPDefLights1(
    0x50, 0x50, 0x50,
    0xff, 0xff, 0xff, 0x32, 0x32, 0x32
);

// 0x07022540 - 0x07022558
// No gdSPDefLights1 macro defined because of odd different light value (0xff and 0xfa)
static const Lights1 castle_seg7_lights_07022540 = {
    {{  {0x40, 0x40, 0x80}, 0, {0x40, 0x40, 0x80}, 0} },
    {{{ {0x64, 0x64, 0xff}, 0, {0x64, 0x64, 0xfa}, 0, {0x28, 0x28, 0x28},0} }} 
};

// 0x07022558 - 0x07022598
static const Vtx castle_seg7_vertex_07022558[] = {
    {{{     0,      0,      0}, 0, {   -32,    990}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   614,      0,      0}, 0, {  6100,    990}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   614,    614,      0}, 0, {  6100,  -5142}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{     0,    614,      0}, 0, {   -32,  -5142}, {0x00, 0x00, 0x7f, 0xff}}},
};

// 0x07022598 - 0x070225D8
static const Vtx castle_seg7_vertex_07022598[] = {
    {{{     0,      0,      0}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   614,      0,      0}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   614,    614,      0}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{     0,    614,      0}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
};

// TODO: this is unused
// 0x070225D8 - 0x07022610
const Gfx castle_seg7_dl_070225D8[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPLight(&castle_seg7_lights_07022528.l, 1),
    gsSPLight(&castle_seg7_lights_07022528.a, 2),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(castle_seg7_vertex_07022558, 4, 0),
    gsSPEndDisplayList(),
};

// TODO: this is unused
// 0x07022610 - 0x07022640
const Gfx castle_seg7_dl_07022610[] = {
    gsSP1Triangle( 0,  1,  2, 0x0),
    gsSP1Triangle( 0,  2,  3, 0x0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

// 0x07022640 - 0x07022660
static const Gfx castle_seg7_painting_dl_07022640[] = {
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPEndDisplayList(),
};

// 0x07022660 - 0x07023042
static const PaintingData castle_seg7_painting_env_map_texture_map_07022660[] = {
    157, // num mappings
    // Format:
    // mesh vtx ID, texture X, texture Y
       0, 6100, -4832,
       1, 6100, -5142,
       2, 5582, -5142,
       3, 5582, -4526,
       4, 6100, -4218,
       5, 5070, -4832,
       6, 5070, -5142,
       7, 3030, -5142,
       8, 3030, -4832,
       9, 3540, -5142,
      10, 2520, -5142,
      11, 2520, -4526,
      12, 3030, -4218,
      13, 3540, -4526,
      14, 4050, -4832,
      15, 4560, -5142,
      16, 5070, -4218,
      17, 4560, -4526,
      18, 4050, -4218,
      19, 5582, -2074,
      20, 6100, -2380,
      21, 5582, -3300,
      22, 6100, -2994,
      23, 5582, -2686,
      24, 5070, -2380,
      25, 4560, -2074,
      26, 4560, -3300,
      27, 5070, -2994,
      28, 5070, -3606,
      29, 4050, -2380,
      30, 4560, -2686,
      31, 3540, -2074,
      32, 4050, -3606,
      33, 3540, -3300,
      34, 4050, -2994,
      35, 3540, -2686,
      36, 3030, -2380,
      37, 2520, -2074,
      38, 3030, -2994,
      39, 2520, -3300,
      40, 3030, -3606,
      41, 6100, -3606,
      42, 5582, -3912,
      43, 4560, -3912,
      44, 3540, -3912,
      45, 2520, -3912,
      46, 4050, -1768,
      47, 5070, -1768,
      48, 3030, -1768,
      49, 6100,  684,
      50, 6100,  990,
      51, 5582,  990,
      52, 5582, -236,
      53, 6100,   70,
      54, 5070,  684,
      55, 5582,  378,
      56, 4560,  990,
      57, 5070,  990,
      58, 4560, -236,
      59, 5070,   70,
      60, 5070, -542,
      61, 4050,  684,
      62, 4560,  378,
      63, 3540,  990,
      64, 4050,  990,
      65, 4050,   70,
      66, 3540, -236,
      67, 4050, -542,
      68, 3030,  684,
      69, 3540,  378,
      70, 2520,  990,
      71, 3030,  990,
      72, 2520, -236,
      73, 3030,   70,
      74, 3030, -542,
      75, 6100, -542,
      76, 5582, -1462,
      77, 6100, -1154,
      78, 5582, -848,
      79, 4560, -1462,
      80, 5070, -1154,
      81, 4560, -848,
      82, 3540, -1462,
      83, 4050, -1154,
      84, 3540, -848,
      85, 2520, -1462,
      86, 3030, -1154,
      87, 2010, -4832,
      88,    0, -5142,
      89,    0, -4832,
      90,  478, -5142,
      91,  478, -4526,
      92,  988, -4832,
      93, 2010, -4218,
      94, 1498, -4526,
      95, 1498, -5142,
      96,  988, -4218,
      97, 2520, -2686,
      98, 2010, -2380,
      99, 1498, -2074,
     100, 1498, -3300,
     101, 2010, -2994,
     102, 2010, -3606,
     103, 1498, -2686,
     104,  988, -2380,
     105,  478, -2074,
     106,  478, -3300,
     107,  988, -2994,
     108,  988, -3606,
     109,  478, -2686,
     110,    0, -2380,
     111,    0, -3606,
     112, 1498, -3912,
     113,  478, -3912,
     114, 1498, -1462,
     115,  988, -1768,
     116, 2010, -1768,
     117,    0, -1768,
     118,  478, -1462,
     119, 2010,  684,
     120, 2520,  378,
     121, 2010,  990,
     122, 1498,  990,
     123, 2010, -542,
     124, 2010,   70,
     125, 1498, -236,
     126,  988,  684,
     127, 1498,  378,
     128,  988,  990,
     129,  478,  990,
     130,  478, -236,
     131,  988,   70,
     132,  988, -542,
     133,    0,  684,
     134,  478,  378,
     135,    0, -542,
     136, 2520, -848,
     137, 2010, -1154,
     138, 1498, -848,
     139,  988, -1154,
     140,  478, -848,
     141, 4050, -5142,
     142, 6100, -2074,
     143, 6100, -1768,
     144, 5070, -2074,
     145, 4050, -2074,
     146, 3030, -2074,
     147, 2010, -5142,
     148,    0, -4218,
     149,  988, -5142,
     150, 2010, -2074,
     151,  988, -2074,
     152,    0, -2994,
     153,    0, -2074,
     154,    0, -1154,
     155,    0,   70,
     156,    0,  990,

// castle_seg7_painting_triangles_07022A10:
    264, // num groups
    // Grouped by 5 + one remainder group,
    // = 15 vertices per group + a few extra triangles
       8,   12,   13,
       0,    1,    2,
       3,    0,    2,
       4,    0,    3,
       5,    2,    6,
       2,    5,    3,
       7,    8,    9,
       8,    7,   10,
      11,    8,   10,
      12,    8,   11,
       9,    8,   13,
      13,   14,    9,
      14,  141,    9,
       5,    6,   15,
       5,   16,    3,
      16,    5,   17,
      17,    5,   15,
      14,   15,  141,
      15,   14,   17,
      18,   14,   13,
      14,   18,   17,
      19,  142,   20,
      19,   20,   23,
      28,   27,   21,
      21,   23,   22,
      22,   41,   21,
      20,   22,   23,
      23,   24,   19,
      21,   27,   23,
      24,   23,   27,
      25,  144,   24,
      19,   24,  144,
      24,   27,   30,
      25,   24,   30,
      26,   30,   27,
      27,   28,   26,
      36,   38,   97,
      26,   34,   30,
      29,   30,   34,
      30,   29,   25,
      25,   29,  145,
      31,  145,   29,
      31,   29,   35,
      29,   34,   35,
      32,   34,   26,
      33,   35,   34,
      34,   32,   33,
      33,   38,   35,
      35,   36,   31,
      36,   35,   38,
      37,   36,   97,
      37,  146,   36,
      31,   36,  146,
      28,   16,   43,
      38,   40,   39,
      39,   97,   38,
      40,   38,   33,
      21,   41,   42,
      41,    4,   42,
       3,   42,    4,
      42,   28,   21,
      28,   42,   16,
       3,   16,   42,
      26,   28,   43,
      17,   43,   16,
      43,   32,   26,
      32,   43,   18,
      17,   18,   43,
      33,   32,   44,
      32,   18,   44,
      13,   44,   18,
      44,   40,   33,
      13,   12,   44,
      40,   44,   12,
      39,   40,   45,
      40,   12,   45,
      48,   31,  146,
      11,   45,   12,
      25,   47,  144,
      46,   25,  145,
      47,   19,  144,
      19,  143,  142,
      31,   46,  145,
      60,   59,   52,
      49,   53,   55,
      50,   49,   51,
      51,   49,   55,
      52,   55,   53,
      53,   75,   52,
      54,   55,   59,
      52,   59,   55,
      55,   54,   51,
      54,   59,   62,
      56,   54,   62,
      57,   54,   56,
      54,   57,   51,
      58,   62,   59,
      59,   60,   58,
      68,   71,   63,
      61,   62,   65,
      58,   65,   62,
      62,   61,   56,
      61,   65,   69,
      63,   61,   69,
      64,   61,   63,
      61,   64,   56,
      65,   67,   66,
      66,   69,   65,
      67,   65,   58,
      68,   69,   73,
      69,   68,   63,
      66,   73,   69,
      68,   73,  120,
      70,   68,  120,
      71,   68,   70,
      72,  120,   73,
      73,   74,   72,
      74,   73,   66,
      75,   77,   78,
      52,   75,   78,
      76,   78,   77,
      77,  143,   76,
      76,   80,   78,
      60,   78,   80,
      78,   60,   52,
      46,   83,   79,
      58,   60,   81,
      60,   80,   81,
      79,   81,   80,
      80,   47,   79,
      47,   80,   76,
      81,   67,   58,
      67,   81,   83,
      79,   83,   81,
      66,   67,   84,
      67,   83,   84,
      82,   84,   83,
      83,   46,   82,
      84,   74,   66,
      82,   86,   84,
      74,   84,   86,
      74,   86,  136,
      72,   74,  136,
      85,  136,   86,
      86,   48,   85,
      48,   86,   82,
      25,   46,   79,
      79,   47,   25,
      82,   46,   31,
      19,   47,   76,
      76,  143,   19,
      31,   48,   82,
      37,   48,  146,
      85,   48,   37,
      10,   87,   11,
      87,   10,  147,
      92,   95,  149,
      88,   89,   90,
      89,  148,   91,
      90,   89,   91,
      91,   92,   90,
      92,  149,   90,
      93,   87,   94,
      87,   93,   11,
      94,   87,   95,
      87,  147,   95,
      95,   92,   94,
      96,   92,   91,
      92,   96,   94,
      39,  101,   97,
      97,   98,   37,
      98,   97,  101,
      99,   98,  103,
      99,  150,   98,
      37,   98,  150,
      98,  101,  103,
     100,  103,  101,
     101,  102,  100,
     102,  101,   39,
     100,  107,  103,
     103,  104,   99,
     104,  103,  107,
     105,  104,  109,
     105,  151,  104,
      99,  104,  151,
     104,  107,  109,
     106,  109,  107,
     107,  108,  106,
     108,  107,  100,
     109,  110,  105,
     106,  152,  109,
     110,  109,  152,
     105,  110,  153,
     111,  152,  106,
      11,   93,   45,
     102,   45,   93,
      45,  102,   39,
     102,   93,  112,
     100,  102,  112,
      94,  112,   93,
     112,  108,  100,
     108,  112,   96,
      94,   96,  112,
     106,  108,  113,
     108,   96,  113,
      91,  113,   96,
      91,  148,  113,
     113,  111,  106,
     111,  113,  148,
     114,  116,   99,
      99,  115,  114,
     115,   99,  151,
      99,  116,  150,
      72,  124,  120,
     116,   37,  150,
      37,  116,   85,
     117,  105,  153,
     105,  115,  151,
     105,  117,  118,
     118,  115,  105,
     119,  120,  124,
     120,  119,   70,
     119,  124,  127,
     119,  121,   70,
     121,  119,  122,
     122,  119,  127,
     123,  124,   72,
     124,  123,  125,
     125,  127,  124,
     126,  127,  131,
     127,  126,  122,
     125,  131,  127,
     126,  131,  134,
     128,  126,  129,
     129,  126,  134,
     126,  128,  122,
     136,  123,   72,
     130,  134,  131,
     131,  132,  130,
     132,  131,  125,
     133,  134,  155,
     134,  133,  129,
     130,  155,  134,
     133,  156,  129,
     135,  155,  130,
     123,  136,  137,
      85,  137,  136,
     139,  115,  118,
     123,  137,  138,
     125,  123,  138,
     114,  138,  137,
     137,  116,  114,
     116,  137,   85,
     114,  139,  138,
     132,  138,  139,
     138,  132,  125,
     132,  139,  140,
     130,  132,  140,
     115,  139,  114,
     118,  140,  139,
     135,  140,  154,
     118,  154,  140,
     140,  135,  130,
     117,  154,  118,
};


// 0x07023044 - 0x07023048
static const PaintingData *const castle_seg7_painting_env_map_texture_maps_07023044[] = {
    castle_seg7_painting_env_map_texture_map_07022660,
};

UNUSED static const u64 castle_inside_unused_1 = 0x0;


// 0x07023050 - 0x070230B0
static const Gfx castle_seg7_painting_dl_07023050[] = {
    gsSPDisplayList(castle_seg7_dl_07021A48),
    gsSPVertex(castle_seg7_vertex_07021818, 8, 0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, castle_seg7_texture_0700B800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(castle_seg7_dl_07021A18),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, castle_seg7_texture_0700A800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(castle_seg7_dl_07021A30),
    gsSPDisplayList(castle_seg7_dl_07021AA0),
    gsSPEndDisplayList(),
};

// 0x070230B0 - 0x07023110
static const Gfx castle_seg7_painting_dl_070230B0[] = {
    gsSPDisplayList(castle_seg7_dl_07021A48),
    gsSPVertex(castle_seg7_vertex_07021818, 8, 0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, castle_seg7_texture_0700D800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(castle_seg7_dl_07021A18),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, castle_seg7_texture_0700C800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(castle_seg7_dl_07021A30),
    gsSPDisplayList(castle_seg7_dl_07021AA0),
    gsSPEndDisplayList(),
};

// 0x07023110 - 0x07023170
static const Gfx castle_seg7_painting_dl_07023110[] = {
    gsSPDisplayList(castle_seg7_dl_07021A48),
    gsSPVertex(castle_seg7_vertex_07021818, 8, 0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, castle_seg7_texture_0700F800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(castle_seg7_dl_07021A18),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, castle_seg7_texture_0700E800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(castle_seg7_dl_07021A30),
    gsSPDisplayList(castle_seg7_dl_07021AA0),
    gsSPEndDisplayList(),
};



// 0x070234C0 - 0x07023520
const Gfx castle_seg7_dl_070234C0[] = {
    gsSPDisplayList(castle_seg7_dl_07021A48),
    gsSPVertex(castle_seg7_vertex_07021918, 8, 0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, castle_seg7_texture_0700D800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(castle_seg7_dl_07021A18),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, castle_seg7_texture_0700C800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(castle_seg7_dl_07021A30),
    gsSPDisplayList(castle_seg7_dl_07021AA0),
    gsSPEndDisplayList(),
};

// 0x07023520 - 0x07023580
const Gfx castle_seg7_dl_07023520[] = {
    gsSPDisplayList(castle_seg7_dl_07021A48),
    gsSPVertex(castle_seg7_vertex_07021998, 8, 0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, castle_seg7_texture_0700D800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(castle_seg7_dl_07021A18),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, castle_seg7_texture_0700C800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(castle_seg7_dl_07021A30),
    gsSPDisplayList(castle_seg7_dl_07021AA0),
    gsSPEndDisplayList(),
};

// 0x07023580 - 0x070235B8
static const Gfx castle_seg7_painting_dl_07023580[] = {
    gsDPPipeSync(),
    gsSPLight(&castle_seg7_lights_07022540.l, 1),
    gsSPLight(&castle_seg7_lights_07022540.a, 2),
    gsSPVertex(castle_seg7_vertex_07022598, 4, 0),
    gsSP1Triangle( 0,  1,  2, 0x0),
    gsSP1Triangle( 0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x070235B8 - 0x070235C0
static const Gfx castle_seg7_painting_dl_070235B8[] = {
    gsSPBranchList(castle_seg7_painting_dl_07023580),
};

ALIGNED8 static const Texture *const castle_seg7_painting_textures_070235C0[] = {
    castle_seg7_texture_0700B800, castle_seg7_texture_0700A800,
};

ALIGNED8 static const Texture *const castle_seg7_painting_textures_070235C8[] = {
    castle_seg7_texture_0700D800, castle_seg7_texture_0700C800,
};

ALIGNED8 static const Texture *const castle_seg7_painting_textures_070235D0[] = {
    castle_seg7_texture_0700F800, castle_seg7_texture_0700E800,
};

// 0x07023620 - 0x07023698
struct Painting c1_painting = {
    /* id */ 0x0000,
    /* Image Count */ 0x02,
    /* Texture Type */ PAINTING_IMAGE,
    /* Floor Status */ 0x00, 0x00, 0x00 /* which of the painting's nearby special floors Mario's on */,
    /* Ripple Status */ 0x00,
    /* Rotation */     0.0f,    90.0f,
    /* Position */ 0.0f,   0.0f,   0.0f,
    /*                         curr   passive     entry */
    /* Ripple Magnitude */     0.0f,    20.0f,    80.0f,
    /* Ripple Decay */         1.0f,  0.9608f,  0.9524f,
    /* Ripple Rate */          0.0f,    0.24f,    0.14f,
    /* Ripple Dispersion */    0.0f,    40.0f,    30.0f,
    /* Curr Ripple Timer */    0.0f,
    /* Curr Ripple x, y */     0.0f,    0.0f,
    /* Normal DList */ castle_seg7_painting_dl_07023050,
    /* Texture Maps */ castle_seg7_painting_texture_maps_07022518,
    /* Textures */     castle_seg7_painting_textures_070235C0,
    /* Texture w, h */ 64, 32,
    /* Ripple DList */ castle_seg7_painting_dl_07021AC0,
    /* Ripple Trigger */ RIPPLE_TRIGGER_PROXIMITY,
    /* Alpha */ 0xFF,
    /* Mario Below */  0x00, 0x00, 0x00, /* Whether or not Mario is below the painting */
    /* Size */  614.0f,
};

// 0x07023698 - 0x07023710
struct Painting c2_painting = {
    /* id */ 0x0001,
    /* Image Count */ 0x02,
    /* Texture Type */ PAINTING_IMAGE,
    /* Floor Status */ 0x00, 0x00, 0x00 /* which of the painting's nearby special floors Mario's on */,
    /* Ripple Status */ 0x00,
    /* Rotation */     0.0f,     0.0f,
    /* Position */ 1000.0f,  0.0f, 0.0f,
    /*                         curr   passive     entry */
    /* Ripple Magnitude */     0.0f,    20.0f,    80.0f,
    /* Ripple Decay */         1.0f,  0.9608f,  0.9524f,
    /* Ripple Rate */          0.0f,    0.24f,    0.14f,
    /* Ripple Dispersion */    0.0f,    40.0f,    30.0f,
    /* Curr Ripple Timer */    0.0f,
    /* Curr Ripple x, y */     0.0f,     0.0f,
    /* Normal DList */ castle_seg7_painting_dl_070230B0,
    /* Texture Maps */ castle_seg7_painting_texture_maps_07022518,
    /* Textures */     castle_seg7_painting_textures_070235C8,
    /* Texture w, h */ 64, 32,
    /* Ripple DList */ castle_seg7_painting_dl_07021AC0,
    /* Ripple Trigger */ RIPPLE_TRIGGER_PROXIMITY,
    /* Alpha */ 0xFF,
    /* Mario Below */  0x00, 0x00, 0x00, /* Whether or not Mario is below the painting */
    /* Size */  614.0f,
};

// 0x07023710 - 0x07023788
struct Painting c3_painting = {
    /* id */ 0x0002,
    /* Image Count */ 0x02,
    /* Texture Type */ PAINTING_IMAGE,
    /* Floor Status */ 0x00, 0x00, 0x00 /* which of the painting's nearby special floors Mario's on */,
    /* Ripple Status */ 0x00,
    /* Rotation */     0.0f,     0.0f,
    /* Position */   2000.0f,  0.0f, 0.0f,
    /*                         curr   passive     entry */
    /* Ripple Magnitude */     0.0f,    20.0f,    80.0f,
    /* Ripple Decay */         1.0f,  0.9608f,  0.9524f,
    /* Ripple Rate */          0.0f,    0.24f,    0.14f,
    /* Ripple Dispersion */    0.0f,    40.0f,    30.0f,
    /* Curr Ripple Timer */    0.0f,
    /* Curr Ripple x, y */     0.0f,     0.0f,
    /* Normal DList */ castle_seg7_painting_dl_07023110,
    /* Texture Maps */ castle_seg7_painting_texture_maps_07022518,
    /* Textures */     castle_seg7_painting_textures_070235D0,
    /* Texture w, h */ 64, 32,
    /* Ripple DList */ castle_seg7_painting_dl_07021AC0,
    /* Ripple Trigger */ RIPPLE_TRIGGER_PROXIMITY,
    /* Alpha */ 0xFF,
    /* Mario Below */  0x00, 0x00, 0x00, /* Whether or not Mario is below the painting */
    /* Size */  614.0f,
};