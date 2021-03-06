
/* flicmenu.c generated by mm version 2 */

#include "flicker.h"
#include "flicmenu.h"

extern inverse_cursor(), black_block(), see_islidepot(),
	mmnext_frame(), mmlast_frame(),
	mmsee_slider(), mmfeel_slider(),
	mplay_forwards(), mplay_backwards(), mgo_first(), mgo_last(),
	mrewind(), mfast_forward(),
	mappend(), minsert(), madd_ten(),
	show_sel_mode(), toggle_sel_mode(),
	wbtext(), wbnumber(), white_slice();

extern struct cursor cdown, cleft, cright, csleft,
	cinsert, cappend, cright2, cleft2, csright, cup;

#define DOFF	47
#define MMDY	11

struct slidepot frame_sl =
	{
	0,
	7,
	4,
	};


struct flicmenu selmode_sel = 
	{
	NONEXT,
	NOCHILD,
	281+37-8-3, DOFF+139+1,	8+3, MMDY,
	NOTEXT,
	show_sel_mode,
	toggle_sel_mode,
	&select_mode, 1,
	'.',
	};
struct flicmenu frames_sel = 
	{
	&selmode_sel,
	NOCHILD,
	281-3, DOFF+139+1,	37-10, MMDY,
	(char *)&screen_ct,
	wbnumber,
	madd_ten,
	NOGROUP, 0,
	'\r',
	};
struct flicmenu mms_fa = 
	{
	&frames_sel,
	NOCHILD,
	266-2, DOFF+139+1,	13-1, MMDY,
	(char *)&cdown,
	inverse_cursor,
	mgo_last,
	NOGROUP, 0,
	0x4400,	/* F10 */
	};
struct flicmenu mms_f9 = 
	{
	&mms_fa,
	NOCHILD,
	248-2, DOFF+139+1,	16, MMDY,
	(char *)&cright2,
	inverse_cursor,
	mfast_forward,
	NOGROUP, 0,
	0x4300,	/* F9 */
	};
struct flicmenu mms_f8 = 
	{
	&mms_f9,
	NOCHILD,
	232-2, DOFF+139+1,	14, MMDY,
	(char *)&cright,
	inverse_cursor,
	mplay_forwards,
	NOGROUP, 0,
	0x4200,	/* F8 */
	};
struct flicmenu mms_f7 = 
	{
	&mms_f8,
	NOCHILD,
	214-2, DOFF+139+1,	16, MMDY,
	(char *)&cappend,
	inverse_cursor,
	mappend,
	NOGROUP, 0,
	0x4100,	/* F7 */
	};
struct flicmenu mms_f4 = 
	{
	&mms_f7,
	NOCHILD,
	196-2, DOFF+139+1,	16, MMDY,
	(char *)&csright,
	inverse_cursor,
	mmnext_frame,
	NOGROUP, 0,
	0x4000,	/* F6 */
	};
struct flicmenu mframe_sel = 
	{
	&mms_f4,
	NOCHILD,
	86-1, DOFF+139+1,	108-1, MMDY,
	(char *)&frame_sl,
	mmsee_slider,
	mmfeel_slider,
	NOGROUP, 0,
	};
struct flicmenu mms_f2 = 
	{
	&mframe_sel,
	NOCHILD,
	68-1, DOFF+139+1,	16, MMDY,
	(char *)&csleft,
	inverse_cursor,
	mmlast_frame,
	NOGROUP, 0,
	0x3f00,	/* F5 */
	};
struct flicmenu mms_f1 = 
	{
	&mms_f2,
	NOCHILD,
	50-1, DOFF+139+1,	16, MMDY,
	(char *)&cinsert,
	inverse_cursor,
	minsert,
	NOGROUP, 0,
	0x3e00,	/* F4 */
	};
struct flicmenu mms_f0 = 
	{
	&mms_f1,
	NOCHILD,
	34-1, DOFF+139+1,	14, MMDY,
	(char *)&cleft,
	inverse_cursor,
	mplay_backwards,
	NOGROUP, 0,
	0x3d00,	/* F3 */
	};
struct flicmenu mms_ef = 
	{
	&mms_f0,
	NOCHILD,
	16-1, DOFF+139+1,	16, MMDY,
	(char *)&cleft2,
	inverse_cursor,
	mrewind,
	NOGROUP, 0,
	0x3c00,	/* F2 */
	};
struct flicmenu mms_ee = 
	{
	&mms_ef,
	NOCHILD,
	1, DOFF+139+1,	12, MMDY,
	(char *)&cup,
	inverse_cursor,
	mgo_first,
	NOGROUP, 0,
	0x3b00,	/* F1 */
	};
struct flicmenu main_menu = 
	{
	NONEXT,
	&mms_ee,
	0, DOFF+139,	319, 60-DOFF,
	NOTEXT,
	white_slice,
	NOFEEL,
	NOGROUP, 0,
	};
