// Gap::Bec::beCri: the per-frame update and playing sounds.
#include "beCri.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Pauses the sounds while the system reports a DVD error, and resumes them after; otherwise updates volumes.
void beCri_virtual74(beCri *self)
{
    fn_802A91DC(1);
    if (self->_execDvdErr > 0) {
        if (self->_system->_execDvdErr == 0) {
            fn_80069128(self->_hdSEs, self->_hdBGM);
            fn_80069128(self->_hdSEs, self->_hdENV);
            for (int i = 0; i < self->_hdSEs->_count; i++) {
                beCriHandle *handle = item<beCriHandle>(self->_hdSEs, i);
                if (handle->_playID != 0) fn_8031D4F4(handle->_audio);
            }
            fn_800692E0(self->_hdSEs, self->_hdBGM, 0);
            fn_800692E0(self->_hdSEs, self->_hdENV, 0);
            self->_execDvdErr = 0;
        }
    } else if (self->_system->_execDvdErr > 0) {
        fn_80069128(self->_hdSEs, self->_hdBGM);
        fn_80069128(self->_hdSEs, self->_hdENV);
        for (int i = 0; i < self->_hdSEs->_count; i++) {
            beCriHandle *handle = item<beCriHandle>(self->_hdSEs, i);
            if (handle->_playID != 0) fn_8031D3F0(handle->_audio);
        }
        fn_800692E0(self->_hdSEs, self->_hdBGM, 0);
        fn_800692E0(self->_hdSEs, self->_hdENV, 0);
        self->_execDvdErr = 1;
    } else {
        fn_80069128(self->_hdSEs, self->_hdBGM);
        fn_80069128(self->_hdSEs, self->_hdENV);
        for (int i = 0; i < self->_hdSEs->_count; i++) {
            beCriHandle *handle = item<beCriHandle>(self->_hdSEs, i);
            if (handle->_playID == 0) continue;
            beCriAudio *audio = handle->_audio;
            beCriVolume *volume = handle->_volume;
            switch (fn_8031D0F0(audio)) {
            case 1:
                if (fn_8031D33C(audio) != 0) break;
                switch (volume->_isExec) {
                case 3: {
                    int value;
                    if (audio->_audioType == 3) value = fn_8031DDB8(volume, self->_baseVolume);
                    else value = fn_8031DCB0(volume, self->_baseVolume);
                    fn_8031CF94(audio, value);
                    if (0.0f == volume->_end) {
                        if (audio->_audioType == 3) {
                            if (value <= 12) fn_802F5F98(self, handle);
                        } else if (value <= -210) fn_802F5F98(self, handle);
                    }
                    break;
                }
                }
                break;
            case -1:
            case 0:
                fn_802F5F98(self, handle);
                break;
            }
        }
        fn_800692E0(self->_hdSEs, self->_hdBGM, 0);
        fn_800692E0(self->_hdSEs, self->_hdENV, 0);
    }
}

// Finds a free sound-effect handle of a kind (true: an ADX stream, false: a sound file); if none is free,
// stops the oldest playing one of no higher priority. Returns its index (the original leaves the result
// unset when every handle has a higher priority).
int fn_802F56B0(beCri *self, bool stream, short priority)
{
    beCriHandleList *list = self->_hdSEs;
    for (int i = 0; i < list->_count; i++) {
        beCriHandle *handle = item<beCriHandle>(list, i);
        beCriAudio *audio = handle->_audio;
        if (stream == true && !audio->_adxt) continue;
        if (!stream && !audio->_sndf) continue;
        if (handle->_playID == 0) return i;
    }
    int found;
    long long oldest = self->_request;
    short lowest = 0x7FFF;
    for (int i = 0; i < list->_count; i++) {
        beCriHandle *handle = item<beCriHandle>(list, i);
        beCriAudio *audio = handle->_audio;
        if (stream == true && !audio->_adxt) continue;
        if (!stream && !audio->_sndf) continue;
        short p = handle->_priority;
        if (p > priority) continue;
        if (handle->_playID >= oldest) continue;
        if (p > lowest) continue;
        oldest = handle->_playID;
        lowest = p;
        found = i;
    }
    if (found != -1) fn_802F5F98(self, item<beCriHandle>(list, found));
    return found;
}

// Plays the BGM (type 1) or the ambient sound (type 2) of a sound entry; returns its play ID, or 0.
long long fn_802F5828(beCri *self, igNamedObjectList *names, beSoundData *data)
{
    if (data->_memoryIdx != -1) return 0;
    beCriHandle *handle = 0;
    beCriAudio *audio = 0;
    beCriVolume *volume = 0;
    switch (data->_type) {
    case 3:
    case 4:
        return 0;
    case 1:
        { beCriHandle *h = self->_hdBGM; audio = h->_audio; handle = h; volume = h->_volume; }
        break;
    case 2:
        { beCriHandle *h = self->_hdENV; audio = h->_audio; handle = h; volume = h->_volume; }
        break;
    }
    if (fn_8031D0F0(audio) == 1) {
        if (volume->_isExec == 0) fn_8031D5D0(volume, self->_baseVolume, 1.0f, 0.0f, 10.0f);
        return 0;
    }
    volume->_max = data->_volume;
    const char *name = item<igNamedObject>(names, data->_fnameIdx)->_name;
    const char *file = name ? name : lbl_805672E8;
    fn_8031D294(audio, 1);
    fn_8031CF94(audio, volume->_max + self->_baseVolume);
    if (fn_8031CC1C(audio, file)) {
        if (self->_pauseOnetime) self->_pauseOnetime = false;
        else fn_8031D294(audio, 0);
        long long id = ++self->_request;
        handle->_playID = id;
        handle->_type = data->_type;
        fn_80066490(handle, data->_name ? data->_name : lbl_805672E8);
        return id;
    }
    return 0;
}

// Plays a sound effect (types 3 and 4) of a sound entry; returns its play ID, 0 if it cannot play, or -1 when
// there are no effect handles. Entries without a memory index are ADX streams; the others are binary
// objects found by file name, played as ACX data (data type 0) or from a sound-file port (data type 1).
long long fn_802F5A04(beCri *self, igNamedObjectList *names, beSoundData *data)
{
    if (self->_hdSEs->_count < 1) return -1;
    switch (data->_type) {
    case 1:
        return 0;
    case 2:
        return 0;
    }
    bool played = false;
    beCriHandle *handle = 0;
    if (data->_memoryIdx == -1) {
        int index = fn_802F56B0(self, true, data->_priority);
        if (index < 0 || index >= self->_hdSEs->_count) return 0;
        handle = item<beCriHandle>(self->_hdSEs, index);
        beCriAudio *audio = handle->_audio;
        beCriVolume *volume = handle->_volume;
        volume->_max = data->_volume;
        const char *file = nameOf(item<igNamedObject>(names, data->_fnameIdx));
        audio->_audioType = 1;
        fn_8031D294(audio, 1);
        fn_8031CF94(audio, volume->_max + self->_baseVolume);
        played = fn_8031CC1C(audio, file);
        if (played) {
            if (self->_pauseOnetime) self->_pauseOnetime = false;
            else fn_8031D294(audio, 0);
        }
    } else {
        if (self->_lsBinObjs->_count < 1) return 0;
        const char *file = nameOf(item<igNamedObject>(names, data->_fnameIdx));
        Ref<igStringObj> name(self->_system->_globalStrObj);
        fn_80071F9C(name, file);
        fn_80072608(name);
        fn_80072164(name);
        int found = -1;
        for (int i = 0; i < self->_lsBinObjs->_count; i++) {
            const char *objectName = nameOf(item<igNamedObject>(self->_lsBinObjs, i));
            const char *text = name->_buffer ? static_cast<const char *>(name->_buffer) : lbl_8055DC4C[0];
            if (strcmp(text, objectName) == 0) {
                found = i;
                break;
            }
        }
        if (found == -1) return 0;
        switch (self->_dataType) {
        case 0: {
            beCriSfpData *acx = item<beCriSfpData>(self->_lsBinObjs, found);
            if (!acx->_dataBuffer) return 0;
            int index = fn_802F56B0(self, true, data->_priority);
            if (index < 0 || index >= self->_hdSEs->_count) return 0;
            handle = item<beCriHandle>(self->_hdSEs, index);
            beCriAudio *audio = handle->_audio;
            beCriVolume *volume = handle->_volume;
            volume->_max = data->_volume;
            audio->_audioType = 2;
            fn_8031D294(audio, 1);
            fn_8031CF94(audio, volume->_max + self->_baseVolume);
            played = fn_8031CC9C(audio, acx->_dataBuffer, data->_memoryIdx);
            if (self->_pauseOnetime) self->_pauseOnetime = false;
            fn_8031D294(audio, 0);
            break;
        }
        case 1: {
            beCriSfpData *sfp = item<beCriSfpData>(self->_lsBinObjs, found);
            if (!sfp->_isTransfer) return 0;
            int index = fn_802F56B0(self, false, data->_priority);
            if (index < 0 || index >= self->_hdSEs->_count) return 0;
            handle = item<beCriHandle>(self->_hdSEs, index);
            beCriAudio *audio = handle->_audio;
            handle->_volume->_max = data->_volume;
            played = fn_8031CCFC(audio, index, data->_memoryIdx);
            if (played) fn_8031CF94(audio, 0x7F);
            if (self->_pauseOnetime) self->_pauseOnetime = false;
            break;
        }
        }
    }
    if (played) {
        long long id = ++self->_request;
        handle->_playID = id;
        handle->_type = data->_type;
        fn_80066490(handle, nameOf(data));
        handle->_priority = data->_priority;
        return id;
    }
    return 0;
}

}
