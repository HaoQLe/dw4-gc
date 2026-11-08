// igGamecubeVisualContext: the 14 fixed presets of the per-index settings at 0x2C0..0x3E0 (lbl_80414A88).
#ifndef IGGFX_IGGAMECUBEVISUALCONTEXTPRESETS_H
#define IGGFX_IGGAMECUBEVISUALCONTEXTPRESETS_H
#include "igGamecubeVisualContext.h"

// One preset (0x44 bytes): the arguments of slots 0x450, 0x460, 0x468, 0x470, 0x478 and 0x480.
struct GcPreset {
    int unknown00, unknown04, unknown08, unknown0C;   // slot 0x450 (settings 0x2C0..0x2F0)
    int unknown10, unknown14, unknown18, unknown1C;   // 0x10, 0x14, 0x1C: slot 0x460 (0x310, 0x330, 0x300); 0x18: slot 0x478
    int unknown20, unknown24, unknown28, unknown2C;   // slot 0x468 (0x360..0x390)
    int unknown30, unknown34, unknown38, unknown3C;   // 0x30, 0x34, 0x3C: slot 0x470 (0x3B0, 0x3D0, 0x3A0); 0x38: slot 0x480
    bool unknown40;                                   // slot 0x460's flag
    bool unknown41;                                   // slot 0x470's flag
    unsigned char unknown42[2];
};

extern "C" GcPreset lbl_80414A88[14];

#endif
