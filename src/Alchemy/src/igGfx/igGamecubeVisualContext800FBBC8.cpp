// igGamecubeVisualContext: whether a value is one of a fixed set (0x800FBBC8..0x800FBC18).
#include "igGamecubeVisualContext.h"

extern "C" {
bool igGamecubeVisualContext_virtual404(GcVisualContext *self, int value)
{
    bool result = false;
    switch (value) {
    case 0x00: case 0x01: case 0x02: case 0x03: case 0x04:
    case 0x2A:
    case 0x3A: case 0x3B:
    case 0xBB: case 0xBC: case 0xBD: case 0xBE: case 0xBF: case 0xC0:
        result = true;
        break;
    }
    return result;
}
}
