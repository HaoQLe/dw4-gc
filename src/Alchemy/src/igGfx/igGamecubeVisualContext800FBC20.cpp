// igGamecubeVisualContext: starting a statistics interval (0x800FBC20..0x800FBE7C). The frame statistics
// become the current interval's, and the current ones the previous interval's.
#include "igGamecubeVisualContext.h"

// The driver's statistics area (lbl_804F5870). The original addresses all three blocks from its start.
struct GcStatsArea {
    unsigned char unknown000[0x910];
    GcFrameStats frame;      // 0x910: lbl_804F6180, counted during the frame
    unsigned char unknown94C[0xC38 - 0x94C];
    GcFrameStats previous;   // 0xC38: lbl_804F64A8
    GcFrameStats current;    // 0xC74: lbl_804F64E4
};

extern "C" {
extern GcStatsArea lbl_804F5870;
// Function-local statics in the original: the reset flag and its initialisation guard, two counters and
// their previous values.
extern int lbl_80563530;
extern signed char lbl_80563534;
extern int lbl_80563520;
extern int lbl_80563524;
extern int lbl_80563528;
extern int lbl_8056352C;
}

extern "C" {
void igGamecubeVisualContext_virtual408(GcVisualContext *self)
{
    GcStatsArea *area = &lbl_804F5870;
    if (!lbl_80563534) {
        lbl_80563530 = 1;
        lbl_80563534 = 1;
    }
    if (lbl_80563530) {
        memset(&area->current, 0, sizeof(GcFrameStats));
        lbl_80563524 = 0;
        lbl_80563520 = 0;
        lbl_80563530 = 0;
    }
    lbl_8056352C = lbl_80563524;
    lbl_80563528 = lbl_80563520;
    area->previous = area->current;
    area->current = area->frame;
}
}
