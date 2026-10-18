// Gap::Bec::beCri: volume ramps, the effect handles and muting effects.
#include "beCri.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Starts a volume ramp on the sound with a name.
void fn_802F6334(beCri *self, const char *name, float a, float b, float c)
{
    if (nameOf(self->_hdBGM) && strcmp(nameOf(self->_hdBGM), name) == 0) {
        fn_8031D5D0(self->_hdBGM->_volume, self->_baseVolume, a, b, c);
        return;
    }
    if (nameOf(self->_hdENV) && strcmp(nameOf(self->_hdENV), name) == 0) {
        fn_8031D5D0(self->_hdENV->_volume, self->_baseVolume, a, b, c);
        return;
    }
    for (int i = 0; i < self->_hdSEs->_count; i++) {
        beCriHandle *handle = item<beCriHandle>(self->_hdSEs, i);
        if (nameOf(handle) && strlen(nameOf(handle)) >= 1 && strcmp(name, nameOf(handle)) == 0)
            fn_8031D5D0(handle->_volume, self->_baseVolume, a, b, c);
    }
}

// Starts a volume ramp on the sound with a play ID.
void fn_802F64F0(beCri *self, long long id, float a, float b, float c)
{
    if (id == self->_hdBGM->_playID) {
        fn_8031D5D0(self->_hdBGM->_volume, self->_baseVolume, a, b, c);
        return;
    }
    if (id == self->_hdENV->_playID) {
        fn_8031D5D0(self->_hdENV->_volume, self->_baseVolume, a, b, c);
        return;
    }
    for (int i = 0; i < self->_hdSEs->_count; i++) {
        beCriHandle *handle = item<beCriHandle>(self->_hdSEs, i);
        if (id == handle->_playID) fn_8031D5D0(handle->_volume, self->_baseVolume, a, b, c);
    }
}

void fn_802F65F8(beCri *, void *a, void *b)
{
    fn_802A9200(a);
    fn_802A9670(b);
}

void fn_802F6630(beCri *, int index, int value)
{
    if (index < 0 || index >= lbl_80534324[0]) return;
    if (!fn_802A96E4(index, value, 0)) return;
}

void fn_802F667C(beCri *) { fn_802A9320(-1, 0); }

void fn_802F66A4(beCri *, void *a) { fn_802A97FC(a); }

// Creates the effect handles: 4 ADX streams and 48 sound-file sounds.
void fn_802F66C8(beCri *self)
{
    if (self->_hdSEs->_count > 0) fn_802F6824(self);
    for (int i = 0; i < 4; i++) {
        Ref<beCriHandle> handle(beCriHandle_create(poolFor(self, lbl_80562258)), Ref<beCriHandle>::adopt);
        fn_8031C99C(handle->_audio, 1);
        fn_80066490(handle, 0);
        fn_80069128(self->_hdSEs, handle);
    }
    for (int i = 0; i < 48; i++) {
        Ref<beCriHandle> handle(beCriHandle_create(poolFor(self, lbl_80562258)), Ref<beCriHandle>::adopt);
        fn_8031C99C(handle->_audio, -1);
        fn_80066490(handle, 0);
        fn_80069128(self->_hdSEs, handle);
    }
}

// Stops the effects and frees their handles.
void fn_802F6824(beCri *self)
{
    fn_802F60FC(self, 3);
    while (self->_hdSEs->_count > 0) {
        fn_8031CB84(item<beCriHandle>(self->_hdSEs, 0)->_audio);
        beCriHandleList *list = self->_hdSEs;
        beCriHandle *first = item<beCriHandle>(list, 0);
        if (first) release(first);
        fn_80041C10(list, 0);
        static_cast<igObject **>(list->_data)[list->_count] = 0;
    }
}

// Mutes (or restores) the effects of type 4 that are playing.
void fn_802F68D0(beCri *self, bool restore)
{
    for (int i = 0; i < self->_hdSEs->_count; i++) {
        beCriHandle *handle = item<beCriHandle>(self->_hdSEs, i);
        if (handle->_playID == 0) continue;
        if (handle->_type != 4) continue;
        beCriAudio *audio = handle->_audio;
        if (fn_8031D0F0(audio) != 1) continue;
        if (restore) fn_8031CF94(audio, audio->_audioType == 3 ? 0x7F : 0);
        else fn_8031CF94(audio, audio->_audioType == 3 ? 0 : -999);
    }
}

}
