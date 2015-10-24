/*
 * Copyright © 2013 samsung
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that copyright
 * notice and this permission notice appear in supporting documentation, and
 * that the name of the copyright holders not be used in advertising or
 * publicity pertaining to distribution of the software without specific,
 * written prior permission.  The copyright holders make no representations
 * about the suitability of this software for any purpose.  It is provided "as
 * is" without express or implied warranty.
 *
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
 * EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
 * OF THIS SOFTWARE.
 */

#ifndef _HWC_TOKENS_H_
#define _HWC_TOKENS_H_

#define HWC_NAME			"HWC"
#define HWC_MAJOR			2
#define HWC_MINOR			0

#define HWCNumberErrors		0
#define HWCNumberEvents		0

/* Requests */
#define X_HWCQueryVersion		0
#define X_HWCOpen				1
#define X_HWCSetDrawables       2
#define X_HWCSelectInput        3

#define HWCNumberRequests		4

/* Events */
#define HWCConfigureNotify		0

/* Event Masks */
#define HWCConfigureNotifyMask      1

#define HWCAllEvents   (HWCConfigureNotifyMask)

/* new in 1.0 protocol */
typedef unsigned int  HWCCompositeMethod;

#define HWC_COMPOSITE_METHOD_DEFAULT       0   /*Default policy*/
#define HWC_COMPOSITE_METHOD_SCALE_FULL    1   /*Preserve the window’s aspect ratio and center on the crtc*/
#define HWC_COMPOSITE_METHOD_SCALE_TIGHT   2   /*Scale the window image to the destination region of hardware overlay.*/
#define HWC_COMPOSITE_METHOD_DRIVER        3   /*Switch crtc resolution to the smallest mode that can fit the window.
                                                 This mode is set only if the number of window is only one to set the drawable.*/
#define HWC_COMPOSITE_METHOD_FILL          4   /*No upscaling, center on output and add black borders to compensate size mismatch*/



/* Errors */

#endif
