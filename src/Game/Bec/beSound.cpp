// Gap::Bec::beSound: finding beCri when the manager starts.
#include "beSound.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Finds beCri, then empties the effect list.
void beSound_virtual88(beSound *self)
{
    if (!self->_cri) {
        beCri *cri = static_cast<beCri *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beCri_meta)));
        if (cri) addRef(cri);
        if (self->_cri) release(self->_cri);
        self->_cri = cri;
    }
    removeAll(reinterpret_cast<igObjectList *>(self->_playSEs));
    if (self->_playSEs->_count <= 0) fn_8004155C(self->_playSEs, 0, 4);
}

}
