/////////////////////////////////////////////////////////////////////////////
//
//  This file is Copyright 1992,1993 by Warwick W. Allison.
//  This file is part of the gem++ library.
//  You are free to copy and modify these sources, provided you acknowledge
//  the origin by retaining this notice, and adhere to the conditions
//  described in the file COPYING.LIB.
//
/////////////////////////////////////////////////////////////////////////////

#include <aesbind.h>
#include "geme.h"

GEMevent::GEMevent() :
	ev_which (MU_BUTTON),
	btn_clicks (1),
	btn_state (0), btn_mask (3), btn_not (true), // Wait for not-both to be 0... ie. either.
	interval (-1),
	clicks (1)
{
	graf_mkstate (&mx, &my, &btn, &meta);
}

GEMevent::GEMevent(int x, int y, int b=1, int n=1) :
	ev_which (MU_BUTTON),
	btn_clicks (n),
	btn_state (0), btn_mask (3), btn_not (true), // Wait for not-both to be 0... ie. either.
	interval (-1),
	mx (x), my (y),
	btn (b),
	clicks (n)
{
	int j;
	graf_mkstate (&j, &j, &j, &meta);
}

GEMevent::GEMevent(int k) :
	ev_which(MU_KEYBD),
	btn_clicks(1),
	btn_state (0), btn_mask (3), btn_not (true), // Wait for not-both to be 0... ie. either.
	interval (-1),
	key (k)
{
	graf_mkstate (&mx, &my, &btn, &meta);
}

void GEMevent::Get(int ev_flags)
{
	ev_which=evnt_multi (ev_flags,
			btn_clicks | (btn_not ? 256 : 0),
			btn_mask,
			btn_state,
			rf[0], r[0][0], r[0][1], r[0][2], r[0][3],
			rf[1], r[1][0], r[1][1], r[1][2], r[1][3],
			msg, interval, &mx, &my, &btn, &meta, &key, &clicks
		);
}
