// igGamecubeVisualContext: one statistic of the last interval (0x800FBE7C..0x800FC0C4), mostly per frame.
#include "igGamecubeVisualContext.h"

extern "C" {
extern GcFrameStats lbl_804F64E4;     // the current interval's statistics (set by slot 0x408)
extern GcFrameStats lbl_804F64A8;     // the previous interval's
extern long long lbl_80563560;        // memory held by the 0x144 records
extern long long lbl_80563480;        // counters reset when read
extern long long lbl_80563478;
extern const float lbl_805668CC;      // 0
extern const float lbl_80566928;      // the value when no frame passed
extern const float lbl_8056698C;
extern const float lbl_80566934;
// The runtime's long long to floating-point conversion. The original uses its result as a float with no
// rounding instruction, as if it were declared returning float.
float __cvt_sll_dbl(long long value);
}

extern "C" {
float igGamecubeVisualContext_virtual40C(GcVisualContext *self, int statistic)
{
    float frames = lbl_804F64E4.frames - lbl_804F64A8.frames;
    float result = lbl_80566928;
    if (frames > lbl_805668CC) {
        switch (statistic) {
        case 4:
            result = frames;
            break;
        case 0:
            result = (lbl_804F64E4.unknown08 - lbl_804F64A8.unknown08) / frames;
            break;
        case 1:
            result = (lbl_804F64E4.unknown0C - lbl_804F64A8.unknown0C) / frames;
            break;
        case 6:
            result = lbl_80566934 * ((lbl_804F64E4.unknown10 - lbl_804F64A8.unknown10) / lbl_8056698C) / frames;
            break;
        case 7:
            result = lbl_80566934 * (lbl_804F64E4.unknown14 / lbl_8056698C);
            break;
        case 8:
            result = lbl_80566934 * (lbl_804F64E4.unknown18 / lbl_8056698C);
            break;
        case 2:
            result = (lbl_804F64E4.unknown1C - lbl_804F64A8.unknown1C) / frames;
            break;
        case 3:
            result = __cvt_sll_dbl(lbl_80563560);
            break;
        case 0x3A:
            result = __cvt_sll_dbl(lbl_80563480) / frames;
            lbl_80563480 = 0;
            break;
        case 0x3B:
            result = __cvt_sll_dbl(lbl_80563478) / frames;
            lbl_80563478 = 0;
            break;
        case 0xBB:
            result = (lbl_804F64E4.unknown24 - lbl_804F64A8.unknown24) / frames;
            break;
        case 0xBC:
            result = (lbl_804F64E4.unknown28 - lbl_804F64A8.unknown28) / frames;
            break;
        case 0xBE:
            result = (lbl_804F64E4.unknown2C - lbl_804F64A8.unknown2C) / frames;
            break;
        case 0xBD:
            result = (lbl_804F64E4.unknown30 - lbl_804F64A8.unknown30) / frames;
            break;
        case 0xC0:
            result = (lbl_804F64E4.unknown38 - lbl_804F64A8.unknown38) / frames;
            break;
        case 0xBF:
            result = (lbl_804F64E4.unknown34 - lbl_804F64A8.unknown34) / frames;
            break;
        }
    }
    return result;
}
}
