// igGamecubeVisualContext: a custom state's index by name (0x800D9F80..0x800DA130).
#include "igGamecubeVisualContextNames.h"

extern "C" {
// Returns the index of the custom state with the given name, or -1.
int igGamecubeVisualContext_virtual438(GcVisualContext *self, const char *name)
{
    Gap::Core::igStringRef key = fn_800D965C(name);
    if (reinterpret_cast<Meta::igDataList *>(self->_customStates)->_count > 0) {
        for (int i = 0; i < reinterpret_cast<Meta::igDataList *>(self->_customStates)->_count; i++) {
            GcRef<GcCustomState> state(static_cast<GcCustomState **>(reinterpret_cast<Meta::igDataList *>(self->_customStates)->_data)[i]);
            if (!state.object) continue;
            if (state.object->name == key.getString()) return i;
        }
    }
    return -1;
}
}
