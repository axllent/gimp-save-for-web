/*
 * This is a plug-in for the GIMP.
 *
 * Generates clickable image maps.
 *
 * Copyright (C) 1998-2005 Maurits Rijk  m.rijk@chello.nl
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 */

#ifndef WEBX_PREFS_H
#define WEBX_PREFS_H

typedef struct
{
  gint          dlg_x;
  gint          dlg_y;
  gint          dlg_width;
  gint          dlg_height;
  gint          dlg_splitpos;
} WebxPrefs;

gboolean        webx_prefs_load (WebxPrefs     *prefs);
void            webx_prefs_save (WebxPrefs     *prefs);

#endif /* WEBX_PREFS_H */
