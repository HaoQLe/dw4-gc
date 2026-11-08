// igGamecubeVisualContext: the value at 0x440, returned as a handle (0x800ED5E4..0x800ED5F8).
#include "igGamecubeVisualContext.h"

// A one-word value returned through a hidden pointer (it has a copy constructor).
struct GcHandle {
    int value;
    inline GcHandle() : value(0) {}
    inline GcHandle(const GcHandle &other) : value(other.value) {}
};

extern "C" {
GcHandle igGamecubeVisualContext_virtual118(GcVisualContext *self)
{
    GcHandle handle;
    handle.value = self->unknown440;
    return handle;
}
}
