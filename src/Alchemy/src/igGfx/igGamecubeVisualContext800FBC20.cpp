// igGamecubeVisualContext: starting a statistics interval (0x800FBC20..0x800FBE7C). The frame statistics
// become the current interval's, and the current ones the previous interval's.
#include "igGamecubeVisualContext.h"

// This unit defines the driver's .bss block 0x804F5870..0x804F6520: the original addresses the statistics
// from one base register, which MWCC does only for objects its own unit defines. Only the three
// statistics blocks are used here; the others keep their sizes.
extern "C" {
char lbl_804F5870[0x150];
char lbl_804F59C0[0x150];
char lbl_804F5B10[0x150];
char lbl_804F5C60[0x520];
GcFrameStats lbl_804F6180;     // counted during the frame
char lbl_804F61BC[0x40];
char lbl_804F61FC[0x220];
char lbl_804F641C[0x30];
char lbl_804F644C[0x30];
char lbl_804F647C[0x1C];
char lbl_804F6498[0x10];
GcFrameStats lbl_804F64A8;     // the previous interval's statistics
GcFrameStats lbl_804F64E4;     // the current interval's statistics
}

extern "C" {
// Function-local statics in the original: the reset flag and its initialisation guard, two counters and
// their previous values.
extern int lbl_80563530;
extern signed char lbl_80563534;
extern int lbl_80563524;
extern int lbl_80563520;
extern int lbl_80563528;
extern int lbl_8056352C;
}

extern "C" {
void igGamecubeVisualContext_virtual408(GcVisualContext *self)
{
    if (!lbl_80563534) {
        lbl_80563530 = 1;
        lbl_80563534 = 1;
    }
    if (lbl_80563530) {
        memset(&lbl_804F64E4, 0, sizeof(GcFrameStats));
        lbl_80563524 = 0;
        lbl_80563520 = 0;
        lbl_80563530 = 0;
    }
    lbl_8056352C = lbl_80563524;
    lbl_80563528 = lbl_80563520;
    lbl_804F64A8 = lbl_804F64E4;
    lbl_804F64E4 = lbl_804F6180;
}
}
