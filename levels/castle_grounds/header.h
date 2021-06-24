#ifndef CASTLE_GROUNDS_HEADER_H
#define CASTLE_GROUNDS_HEADER_H

#include "types.h"
#include "game/moving_texture.h"
#include "game/paintings.h"

// geo
extern const GeoLayout castle_grounds_geo_000660[];
extern const GeoLayout castle_grounds_geo_0006F4[];
extern const GeoLayout castle_grounds_geo_00070C[];
extern const GeoLayout castle_grounds_geo_000724[];
extern const GeoLayout castle_grounds_geo_00073C[];

// leveldata
extern const Gfx castle_grounds_seg7_dl_07006D70[];
extern const Gfx castle_grounds_seg7_dl_070095F0[];
extern const Gfx castle_grounds_seg7_dl_0700A290[];
extern const Gfx castle_grounds_seg7_dl_0700A860[];
extern const Gfx castle_grounds_seg7_dl_0700B1D0[];
extern const Gfx castle_grounds_seg7_dl_0700BA20[];
extern const Gfx castle_grounds_seg7_dl_0700BB80[];
extern const Gfx castle_grounds_seg7_dl_0700BC68[];
extern const Gfx castle_grounds_seg7_dl_0700C210[];
extern const Gfx castle_grounds_seg7_dl_0700C430[];
extern const Gfx castle_grounds_seg7_dl_0700C670[];
extern const Gfx castle_grounds_seg7_dl_0700C6A8[];
extern const Gfx castle_grounds_seg7_dl_0700C6E8[];
extern const Gfx castle_grounds_seg7_dl_0700C728[];
extern const Gfx castle_grounds_seg7_dl_0700C768[];
extern const struct Animation *const castle_grounds_seg7_anims_flags[];
extern const Gfx castle_grounds_seg7_dl_0700EA58[];
extern const Gfx castle_grounds_seg7_us_dl_0700F2E8[];
extern const Collision castle_grounds_seg7_collision_level[];
extern const MacroObject castle_grounds_seg7_macro_objs[];
extern const Collision castle_grounds_seg7_collision_moat_grills[];
extern const Collision castle_grounds_seg7_collision_cannon_grill[];
extern const struct MovtexQuadCollection castle_grounds_movtex_water[];
extern Movtex castle_grounds_movtex_tris_waterfall[];
extern const Gfx castle_grounds_dl_waterfall[];

// script
extern const LevelScript level_castle_grounds_entry[];

#include "levels/castle_grounds/header.inc.h"


extern const Gfx castle_seg7_dl_070225D8[];
extern const Gfx castle_seg7_dl_07022610[];
extern const Gfx castle_seg7_dl_070234C0[];
extern const Gfx castle_seg7_dl_07023520[];
extern struct Painting c1_painting;
extern struct Painting c2_painting;
extern struct Painting c3_painting;

#include "levels/castle_grounds/portal_blocker/geo_header.h"

#include "levels/castle_grounds/portal_blocker/collision_header.h"

#include "levels/castle_grounds/rank_display/geo_header.h"

#endif
