/*
 *  PrBoom: a Doom port merged with LxDoom and LSDLDoom
 *  based on BOOM, a modified and improved DOOM engine
 *  Copyright (C) 1999 by
 *  id Software, Chi Hoang, Lee Killough, Jim Flynn, Rand Phares, Ty Halderman
 *  Copyright (C) 1999-2000 by
 *  Jess Haas, Nicolas Kalkhof, Colin Phipps, Florian Schulze
 *  Copyright 2005, 2006 by
 *  Florian Schulze, Colin Phipps, Neil Stevens, Andrey Budko
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 *  02111-1307, USA.
 *
 * DESCRIPTION:
 *  mus2mid.c supports conversion of MUS format music in memory
 *  to MIDI format 1 music in memory.
 */

#ifndef MUS2MID_H
#define MUS2MID_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef char byte;
#define MAX(a,b) (((a>b)?(a):(b)))

/*
#include "doomtype.h"
#include "doomdef.h"
*/
typedef enum
{
  MUS_OK = 0,
  MUS_INVALID,      // MUS data invalid
  MUS_TOOMCHAN,     // Too many channels
  MUS_MEMALLOC,     // Memory allocation error
  MUS_BADEVENT,     // Unexpected event data
  MUS_BADLENGTH,    // MUS data too long
} mus_err_t;

#ifdef __cplusplus
extern "C" {
#endif
mus_err_t mus2mid(byte const *mus, size_t muslen, byte **mid, size_t *midlen, int division);
#ifdef __cplusplus
}
#endif

#endif
