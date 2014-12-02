gstreamer-imx
=============

About
-----

This is a set of [GStreamer 1.0](http://gstreamer.freedesktop.org/) plugins for plugins for Freescale's
i.MX platform, with emphasis on video en/decoding using the i.MX VPU engine.

Currently, this software has been tested only with the i.MX6 SoC family.

The software as a whole is currently in beta stage.


License
-------

These plugins are licensed under the LGPL v2.


Available plugins
-----------------

* `imxvpudec` : video decoder plugin
* `imxvpuenc_h263` : h.263 encoder
* `imxvpuenc_h264` : h.264 baseline profile Annex.B encoder
* `imxvpuenc_mpeg4` : MPEG-4 encoder
* `imxvpuenc_mjpeg` : Motion JPEG encoder
* `imxipusink` : video sink using the IPU to output to Framebuffer (may not work well if X11 or Wayland are running)
* `imxipuvideotransform` : video transform element using the IPU, capable of scaling, deinterlacing, rotating (in 90 degree steps), flipping frames, and converting between color spaces
* `imxeglvivsink` : custom OpenGL ES 2.x based video sink; using the Vivante direct textures, which allow for smooth playback
* `imxv4l2src` : customized Video4Linux source with i.MX specific tweaks


Dependencies
------------

You'll need a GStreamer 1.2 installation, and Freescale's VPU wrapper library (at least version 1.0.45).


Building and installing
-----------------------

Au-Zone has replaced the original WAF build system with a standard CMake build system to allow Debian
packaging as WAF has numerous issues which make it unsupported by Debian.


KERNEL_HEADERS defines the path to the Linux kernel headers (where linux/ipu.h can be found).
It is currently unfortunately necessary to set this path if linux/ipu.h is not in the root filesystem's
include directory already. (Not to be confused with the ipu.h from the imx-lib.) Without this path,
the header is not found, and elements using the IPU will not be built.  By default CMake will attempt
to find linux/ipu.h using /usr/src/linux-headers-`uname -r`/include as a HINT.

