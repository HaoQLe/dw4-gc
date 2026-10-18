// Gap::Bec::beCri: resuming a sound by name.
#include "beCri.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Resumes the sound with a name.
void fn_802F61F8(beCri *self, const char *name)
{
    if (strcmp(nameOf(self->_hdBGM), name) == 0) {
        fn_8031D294(self->_hdBGM->_audio, 0);
        return;
    }
    if (strcmp(nameOf(self->_hdENV), name) == 0) {
        fn_8031D294(self->_hdENV->_audio, 0);
        return;
    }
    for (int i = 0; i < self->_hdSEs->_count; i++) {
        beCriHandle *handle = item<beCriHandle>(self->_hdSEs, i);
        if (nameOf(handle) && strlen(nameOf(handle)) >= 1 && strcmp(nameOf(handle), name) == 0)
            fn_8031D294(handle->_audio, 0);
    }
}

}
