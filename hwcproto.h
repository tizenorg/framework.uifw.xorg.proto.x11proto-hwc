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

#ifndef _HWC_PROTO_H_
#define _HWC_PROTO_H_

#include <X11/extensions/hwctokens.h>

/* Errors */

typedef struct {
    CARD8   reqType;
    CARD8   hwcReqType;
    CARD16  length B16;
    CARD32  majorVersion B32;
    CARD32  minorVersion B32;
} xHWCQueryVersionReq;
#define sz_xHWCQueryVersionReq   12

typedef struct {
    BYTE    type;   /* X_Reply */
    BYTE    pad1;
    CARD16  sequenceNumber B16;
    CARD32  length B32;
    CARD32  majorVersion B32;
    CARD32  minorVersion B32;
    CARD32  pad2 B32;
    CARD32  pad3 B32;
    CARD32  pad4 B32;
    CARD32  pad5 B32;
} xHWCQueryVersionReply;
#define sz_xHWCQueryVersionReply	32

typedef struct {
    CARD8   reqType;
    CARD8   hwcReqType;
    CARD16  length B16;
    CARD32  window B32;
    CARD32  pad B32;
} xHWCOpenReq;
#define sz_xHWCOpenReq	12

typedef struct {
    BYTE    type;   /* X_Reply */
    CARD8   pad1;
    CARD16  sequenceNumber B16;
    CARD32  length B32;
    CARD32  maxLayer B32;
    CARD32  pad2 B32;
    CARD32  pad3 B32;
    CARD32  pad4 B32;
    CARD32  pad5 B32;
    CARD32  pad6 B32;
} xHWCOpenReply;
#define sz_xHWCOpenReply	32

typedef struct {
    CARD8   reqType;
    CARD8   hwcReqType;
    CARD16  length B16;
    CARD32  window B32;
    CARD32  count B32;
} xHWCSetDrawablesReq;
#define sz_xHWCSetDrawablesReq     12

typedef struct {
    CARD8   reqType;
    CARD8   hwcReqType;
    CARD16  length B16;
    CARD32  window B32;
    CARD32  eventMask B32;
} xHWCSelectInputReq;
#define sz_xHWCSelectInputReq   12

/*
 * Events
 *
 * All HWC events are X Generic Events
 */
typedef struct {
    CARD8 type;
    CARD8 extension;
    CARD16 sequenceNumber B16;
    CARD32 length;
    CARD16 evtype B16;
    CARD16 pad2;
    CARD32 maxLayer B32;
    CARD32 pad3 B32;
    CARD32 pad4 B32;
    CARD32 pad5 B32;
    CARD32 pad6 B32;    
} xHWCConfigureNotify;
#define sz_xHWCConfigureNotify 32

#endif
