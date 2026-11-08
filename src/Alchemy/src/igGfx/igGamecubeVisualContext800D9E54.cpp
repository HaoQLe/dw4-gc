// igGamecubeVisualContext: removing every custom field and state (0x800D9E54..0x800D9F80).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual434(GcVisualContext *self)
{
    Meta::igDataList *fields = reinterpret_cast<Meta::igDataList *>(self->_customFields);
    removeAll(fields);
    Meta::igDataList *states = reinterpret_cast<Meta::igDataList *>(self->_customStates);
    removeAll(states);
}
}
