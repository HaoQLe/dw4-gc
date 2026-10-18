// Gap::Bec::beCri: stopping sounds.
#include "beCri.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Stops a handle and resets its volume ramp.
void fn_802F5F98(beCri *, beCriHandle *handle)
{
    beCriAudio *audio = handle->_audio;
    beCriVolume *volume = handle->_volume;
    handle->_playID = 0;
    handle->_type = 0;
    volume->_isExec = 0;
    volume->_max = 0;
    volume->_current = lbl_80425438[0];
    volume->_sta = lbl_80425438[0];
    volume->_end = lbl_80425438[0];
    if (audio->_audioType == 3) fn_8031CF94(audio, 0);
    else fn_8031CF94(audio, -999);
    fn_8031CE14(audio);
    fn_80066490(handle, 0);
}

// Stops the sound with a play ID.
void fn_802F6038(beCri *self, long long id)
{
    if (id == self->_hdBGM->_playID) {
        fn_802F5F98(self, self->_hdBGM);
        return;
    }
    if (id == self->_hdENV->_playID) {
        fn_802F5F98(self, self->_hdENV);
        return;
    }
    for (int i = 0; i < self->_hdSEs->_count; i++) {
        beCriHandle *handle = item<beCriHandle>(self->_hdSEs, i);
        if (id == handle->_playID) fn_802F5F98(self, handle);
    }
}

// Stops the sounds of a kind: 1 the BGM, 2 the ambient sound, 3 and 4 the effects, any other all of them.
void fn_802F60FC(beCri *self, int kind)
{
    switch (kind) {
    case 1:
        fn_802F5F98(self, self->_hdBGM);
        break;
    case 2:
        fn_802F5F98(self, self->_hdENV);
        break;
    case 3:
    case 4:
        for (int i = 0; i < self->_hdSEs->_count; i++) fn_802F5F98(self, item<beCriHandle>(self->_hdSEs, i));
        break;
    case 5:
    default:
        fn_802F5F98(self, self->_hdBGM);
        fn_802F5F98(self, self->_hdENV);
        for (int i = 0; i < self->_hdSEs->_count; i++) fn_802F5F98(self, item<beCriHandle>(self->_hdSEs, i));
        break;
    }
}

}
