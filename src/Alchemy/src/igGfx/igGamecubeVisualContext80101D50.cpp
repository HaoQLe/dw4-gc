// igGamecubeVisualContext: setting a vertex-array slot (0x80101D50..0x80101DE8).
#include "igGamecubeVisualContext.h"

extern "C" {
void igGamecubeVisualContext_virtual414(GcVisualContext *self, Meta::igObject *array, int slot)
{
    if (array) addRef(array);
    if (self->_vertexArray2[slot]) release(static_cast<Meta::igObject *>(self->_vertexArray2[slot]));
    self->_vertexArray2[slot] = array;
    if (array) virtuals(self)->slot0EC(0);
}
}
