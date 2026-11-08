// igGamecubeVisualContext: removing a custom state and the custom fields that use it (0x800D9D00..0x800D9E54).
#include "igGamecubeVisualContext.h"

// A custom field (0x134 list): the custom state it belongs to is at 0x0C.
struct GcCustomField : Meta::igObject {
    unsigned int unknown08;
    unsigned int state;
};

static inline Meta::igDataList *customStates(GcVisualContext *self) { return reinterpret_cast<Meta::igDataList *>(self->_customStates); }
static inline Meta::igDataList *customFields(GcVisualContext *self) { return reinterpret_cast<Meta::igDataList *>(self->_customFields); }

extern "C" {
GcResult igGamecubeVisualContext_virtual430(GcVisualContext *self, int state)
{
    Meta::igDataList *states = customStates(self);
    if (state >= states->_count || !static_cast<Meta::igObject **>(states->_data)[state]) return kFailure__3Gap;
    for (int i = 0; i < customFields(self)->_count; i++) {
        Meta::igDataList *fields = customFields(self);
        GcCustomField *field = static_cast<GcCustomField **>(fields->_data)[i];
        if (field && state == field->state) {
            if (field) release(field);
            clearAt(fields, i);
        }
    }
    states = customStates(self);
    Meta::igObject *object = static_cast<Meta::igObject **>(states->_data)[state];
    if (object) release(object);
    clearAt(states, state);
    return kSuccess__3Gap;
}
}
