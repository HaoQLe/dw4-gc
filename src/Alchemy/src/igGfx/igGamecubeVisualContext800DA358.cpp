// igGamecubeVisualContext: a custom state field's value (0x800DA358..0x800DA384).
#include "igGamecubeVisualContext.h"

struct GcCustomField {
    unsigned char unknown00[0xC];
    int unknown0C;
};

extern "C" {
// Fields from 47 on are custom fields; earlier ones have none (-1).
int igGamecubeVisualContext_virtual440(GcVisualContext *self, int field)
{
    if (field >= 47) return static_cast<GcCustomField **>(reinterpret_cast<Meta::igDataList *>(self->_customFields)->_data)[field - 47]->unknown0C;
    return -1;
}
}
