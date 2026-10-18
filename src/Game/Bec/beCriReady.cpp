// Gap::Bec::beCri: whether streams are ready.
#include "beCri.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Whether the ADX streams with a name (or "ALL") are ready to play.
bool fn_802F6FB0(beCri *self, const char *name)
{
    if (strcmp(name, "ALL") == 0) {
        bool ready = true;
        fn_80069128(self->_hdSEs, self->_hdBGM);
        fn_80069128(self->_hdSEs, self->_hdENV);
        for (int i = 0; i < self->_hdSEs->_count; i++) {
            beCriHandle *handle = item<beCriHandle>(self->_hdSEs, i);
            if (handle->_playID == 0) continue;
            beCriAudio *audio = handle->_audio;
            if (audio->_audioType != 1) continue;
            if (fn_802A8C18(audio->_adxt) != 3) {
                ready = false;
                break;
            }
        }
        fn_800692E0(self->_hdSEs, self->_hdBGM, 0);
        fn_800692E0(self->_hdSEs, self->_hdENV, 0);
        return ready;
    }
    bool ready = true;
    if (nameOf(self->_hdBGM) && strcmp(nameOf(self->_hdBGM), name) == 0) {
        if (fn_802A8C18(self->_hdBGM->_audio->_adxt) != 3) ready = false;
    } else if (nameOf(self->_hdENV) && strcmp(nameOf(self->_hdENV), name) == 0) {
        if (fn_802A8C18(self->_hdENV->_audio->_adxt) != 3) ready = false;
    } else {
        for (int i = 0; i < self->_hdSEs->_count; i++) {
            beCriHandle *handle = item<beCriHandle>(self->_hdSEs, i);
            if (!nameOf(handle) || strlen(nameOf(handle)) < 1) continue;
            if (strcmp(name, nameOf(handle)) != 0) continue;
            if (handle->_playID == 0) continue;
            if (fn_802A8C18(handle->_audio->_adxt) != 3) {
                ready = false;
                break;
            }
        }
    }
    return ready;
}

}
