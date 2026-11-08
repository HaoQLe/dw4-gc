// igGamecubeVisualContext: looking up custom states and fields by name.
#ifndef IGGFX_IGGAMECUBEVISUALCONTEXTNAMES_H
#define IGGFX_IGGAMECUBEVISUALCONTEXTNAMES_H
#include "igGamecubeVisualContext.h"
#include <igCore/igStringRef.h>

// The pooled name a lookup compares against (built from name with '_' characters removed).
extern "C" Gap::Core::igStringRef fn_800D965C(const char *name);

// A custom state (0x130 list): its pooled name is at 0x14.
struct GcCustomState : Meta::igObject {
    unsigned char unknown08[0xC];
    const char *name;   // 0x14
};

// A custom field (0x134 list): its pooled name (or none) is at 0x08.
struct GcNamedField : Meta::igObject {
    const char *name;
};

#endif
