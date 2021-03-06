/* Common functions for the Freescale IPU device
 * Copyright (C) 2014  Carlos Rafael Giani
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#ifndef GST_IMX_IPU_DEVICE_H
#define GST_IMX_IPU_DEVICE_H

#include <gst/gst.h>


G_BEGIN_DECLS


gboolean gst_imx_ipu_open(void);
void gst_imx_ipu_close(void);
int gst_imx_ipu_get_fd(void);


G_END_DECLS


#endif

