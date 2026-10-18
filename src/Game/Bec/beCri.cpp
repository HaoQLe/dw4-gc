// Gap::Bec::beCri: the game's layer over the CRI audio library: the BGM and ambient-sound handles, sound
// effects, volumes and the DVD-error pause (0x802F4EF4..0x802F7C58).
#include <meta/beCri.h>
#include <meta/beCriHandle.h>
#include <meta/beCriHandleList.h>
#include <meta/beCriAudio.h>
#include <meta/beCriVolume.h>
#include <meta/beSystem.h>
#include <meta/igInfoList.h>
#include <meta/igMetaObject.h>
#include <meta/beSoundData.h>
#include <meta/igNamedObjectList.h>
#include <meta/beCriSfpData.h>
#include <meta/igObjectList.h>
#include <meta/beCriFxInfo.h>
#include <meta/igAdxAudio.h>
#include <game/List.h>
#include <game/Ref.h>
#include <game/Pool.h>
#include <game/Virtual.h>

using namespace Meta;

// The original calls every function of this file; none is inlined.
#pragma auto_inline off

extern "C" {
igObject *fn_8028A730(igInsightCore *insight, void *meta);   // the manager of a class
void fn_8028A398(igInsightCore *insight, igObject *manager);  // registers a manager
void fn_8028A400(igInsightCore *insight, igObject *manager);  // unregisters a manager
extern char beSystem_meta[];
extern char beCri_meta[];
extern char beCriFxInfo_meta[];
extern char igFile_meta[];
extern char lbl_80562258[];                 // this file's pool source
extern void *lbl_80535A68[];                // igFile's creation callback, while beCri replaces it
extern unsigned int lbl_80535A6C[2][16];      // each port's table and data sizes
extern int lbl_80535AEC[16];
extern int lbl_80534324[];                  // the number of entries fn_802A96E4 takes
beCriHandle *beCriHandle_create(void *pool);
void *fn_802F4F48(void *pool);
void fn_802A9148(int);
void fn_802A91DC(int);
bool fn_802A96E4(int index, int value, int);
void fn_8031C99C(beCriAudio *audio, int);
void fn_8031D4F4(beCriAudio *audio);   // pauses
void fn_8031D3F0(beCriAudio *audio);   // resumes
int fn_8031D0F0(beCriAudio *audio);    // play state
int fn_8031D33C(beCriAudio *audio);
int fn_8031DDB8(beCriVolume *volume, int base);
int fn_8031DCB0(beCriVolume *volume, int base);
void fn_8031CF94(beCriAudio *audio, int volume);   // sets the volume
void fn_803C2734(int handle, unsigned int parameter, int value);   // CRI: sets a parameter
void fn_8031CE14(beCriAudio *audio);     // stops
void fn_8031D294(beCriAudio *audio, int);
bool fn_8031CC1C(beCriAudio *audio, const char *name);   // starts a sound file
void fn_8031D5D0(beCriVolume *volume, int base, float, float, float);
void fn_80066490(igObject *named, const char *name);   // sets an igNamedObject's name
void fn_802F5F98(beCri *self, beCriHandle *handle);
void fn_802F66C8(beCri *self);
void fn_802F6824(beCri *self);
void fn_802F60FC(beCri *self, int kind);
bool fn_802F6BAC(beCri *self, bool all);
void fn_802F6F10(beCri *self, const char *name);
void fn_8031CB84(beCriAudio *audio);       // frees the audio
void fn_803C1CC4(int port);                 // CRI: releases a port
int fn_803C1DD0(unsigned int *sizes);                // CRI: sets up the ports
int fn_803C2418(int port, void *data);      // CRI: transfers sound data to a port
void fn_80056378(void *memory);             // frees memory
int fn_803C5D2C(int port);                  // CRI: a port's transfer state (1 busy, 2 done)
extern char beCriSfpData_meta[];
extern char beCriAcxData_meta[];
extern char igAdxFile_meta[];
extern char igMemoryRefMetaField_meta[];
extern void *lbl_80562104[];                 // the memory manager
void fn_803C1A94(unsigned int parameter, int value);   // CRI: sets a parameter
int fn_802A8C18(igAdxAudio *adxt);          // an ADX stream's state (3: ready)
void fn_802A9200(void *);
void fn_802A9670(void *);
void fn_802A9320(int, int);
void fn_802A97FC(void *);
void fn_8006F428(void *memory, const char *poolName, int);   // creates a memory pool
void *fn_800658F8(void *meta, const char *name);           // a metaobject's field by name
bool fn_80068128(void *object, void *meta);                // whether an object is of a class
void fn_80062C90(void *field, const char *poolName);        // the pool a memory field allocates from
int strcmp(const char *, const char *);
int sprintf(char *, const char *, ...);
char *strcpy(char *, const char *);
char *strcat(char *, const char *);
unsigned int strlen(const char *);
}

// An object's name, or "" when it has none.
static inline const char *nameOf(igNamedObject *object) { return object->_name ? object->_name : ""; }

extern "C" {

void beCri_virtual5C(beCri *self)
{
    fn_8028A398(self->_insight, self);
    fn_802A9148(1);
    igMetaObject *file = *reinterpret_cast<igMetaObject **>(igFile_meta);
    lbl_80535A68[0] = file->_abstractProxy;
    file->_abstractProxy = (void *)fn_802F4F48;
}

// igFile's creation callback while beCri is active: files are ADX files.
void *fn_802F4F48(void *) { return *reinterpret_cast<void **>(igAdxFile_meta); }

void beCri_virtual60(beCri *self)
{
    igMetaObject *file = *reinterpret_cast<igMetaObject **>(igFile_meta);
    file->_abstractProxy = lbl_80535A68[0];
    fn_8028A400(self->_insight, self);
}

void beCri_virtual64(beCri *self)
{
    self->_system = static_cast<beSystem *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beSystem_meta)));
    {
        void *pool = poolFor(self, lbl_80562258);
        if (self->_hdBGM) release(self->_hdBGM);
        self->_hdBGM = beCriHandle_create(pool);
    }
    fn_8031C99C(self->_hdBGM->_audio, 2);
    fn_80066490(self->_hdBGM, 0);
    {
        void *pool = poolFor(self, lbl_80562258);
        if (self->_hdENV) release(self->_hdENV);
        self->_hdENV = beCriHandle_create(pool);
    }
    fn_8031C99C(self->_hdENV->_audio, 2);
    fn_80066490(self->_hdENV, 0);
    fn_802F66C8(self);
    self->_pauseOnetime = false;
    for (int i = 0; i < 16; i++) {
        lbl_80535A6C[0][i] = 0;
        lbl_80535A6C[1][i] = 0;
        lbl_80535AEC[i] = 0;
    }
}

void beCri_virtual68(beCri *self)
{
    fn_802F60FC(self, 5);
    fn_8031CB84(self->_hdBGM->_audio);
    fn_8031CB84(self->_hdENV->_audio);
    fn_802F6824(self);
}

// Takes an effect setting (beCriFxInfo) into the info list.
bool beCri_virtual6C(beCri *self, igObject *info)
{
    igMetaObject *fxInfo = *reinterpret_cast<igMetaObject **>(beCriFxInfo_meta);
    if (fxInfo == metaOf(info)) {
        fn_80069128(self->_infoList, info);
        return true;
    }
    return false;
}

void beCri_virtual70(beCri *self)
{
    fn_802F6F10(self, "NONE");
    removeAll(reinterpret_cast<igObjectList *>(self->_infoList));
    if (self->_infoList->_count <= 0) fn_8004155C(self->_infoList, 0, 4);
    fn_802F6BAC(self, false);
}

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
    const char *file = name ? name : "";
    fn_8031D294(audio, 1);
    fn_8031CF94(audio, volume->_max + self->_baseVolume);
    if (fn_8031CC1C(audio, file)) {
        if (self->_pauseOnetime) self->_pauseOnetime = false;
        else fn_8031D294(audio, 0);
        long long id = ++self->_request;
        handle->_playID = id;
        handle->_type = data->_type;
        fn_80066490(handle, data->_name ? data->_name : "");
        return id;
    }
    return 0;
}

// Stops a handle and resets its volume ramp.
void fn_802F5F98(beCri *, beCriHandle *handle)
{
    beCriAudio *audio = handle->_audio;
    beCriVolume *volume = handle->_volume;
    handle->_playID = 0;
    handle->_type = 0;
    volume->_isExec = 0;
    volume->_max = 0;
    volume->_current = 0.0f;
    volume->_sta = 0.0f;
    volume->_end = 0.0f;
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

// Transfers a sound-file data block to its port; true once transferred.
bool fn_802F69B8(beCri *, beCriSfpData *data)
{
    if (data->_isTransfer) return true;
    int port = data->_portNo;
    if (lbl_80535A6C[0][port] || lbl_80535A6C[1][port]) fn_803C1CC4(port);
    lbl_80535A6C[0][port] = data->_tblSize;
    lbl_80535A6C[1][port] = data->_pcmSize;
    if (fn_803C1DD0(lbl_80535A6C[0]) < 0) return false;
    if (fn_803C2418(port, data->_dataBuffer) < 0) return false;
    fn_80056378(data->_dataBuffer);
    data->_dataBuffer = 0;
    data->_isTransfer = true;
    return true;
}

// For sound-file data (data type 1), transfers every block of the binary objects; true if all transferred.
bool fn_802F6AA8(beCri *self)
{
    bool ok = true;
    igObjectList *list = self->_lsBinObjs;
    if (self->_dataType == 1) {
        for (int i = 0; i < list->_count; i++) {
            igMetaObject *sfpData = *reinterpret_cast<igMetaObject **>(beCriSfpData_meta);
            beCriSfpData *data = item<beCriSfpData>(list, i);
            if (sfpData == metaOf(data)) {
                data->_portNo = i;
                if (!fn_802F69B8(self, data)) ok = false;
            } else {
                char line[64];
                char message[1024];
                sprintf(line, "---- not SfpData[%s]", nameOf(data));
                strcpy(message, "----  WARNING  -----------------\n");
                strcat(message, line);
                strcat(message, "--------------------------------");
                ok = false;
            }
        }
    }
    return ok;
}

// Releases the ports of the transferred sound-file data (all of them, or all but the first) and empties the
// binary object list.
bool fn_802F6BAC(beCri *self, bool all)
{
    int last = all ? -1 : 0;
    for (int i = self->_lsBinObjs->_count - 1; i > last; i--) {
        igMetaObject *acxData = *reinterpret_cast<igMetaObject **>(beCriAcxData_meta);
        beCriSfpData *data = item<beCriSfpData>(self->_lsBinObjs, i);
        if (acxData == metaOf(data)) continue;
        igMetaObject *sfpData = *reinterpret_cast<igMetaObject **>(beCriSfpData_meta);
        if (sfpData != metaOf(data)) continue;
        if (!data->_isTransfer) continue;
        int port = data->_portNo;
        if (lbl_80535A6C[0][port] || lbl_80535A6C[1][port]) {
            fn_803C1CC4(port);
            lbl_80535A6C[0][port] = 0;
            lbl_80535A6C[1][port] = 0;
            lbl_80535AEC[port] = 0;
        }
    }
    removeAll(self->_lsBinObjs);
    if (self->_lsBinObjs->_count <= 0) fn_8004155C(self->_lsBinObjs, 0, 4);
    return true;
}

// Follows the transfers in progress; false while one is busy or failed. A finished block's buffer is freed
// and the next block's transfer started.
bool fn_802F6DF8(beCri *self)
{
    bool done = true;
    for (int i = 0; i < self->_lsBinObjs->_count; i++) {
        if (lbl_80535AEC[i] == 0 || lbl_80535AEC[i] == 2) continue;
        lbl_80535AEC[i] = fn_803C5D2C(i);
        switch (lbl_80535AEC[i]) {
        case 1:
            return false;
        case 2: {
            beCriSfpData *data = item<beCriSfpData>(self->_lsBinObjs, i);
            fn_80056378(data->_dataBuffer);
            data->_dataBuffer = 0;
            data->_isTransfer = true;
            igObjectList *list = self->_lsBinObjs;
            if (i < list->_count - 1 && !item<beCriSfpData>(list, i + 1)->_isTransfer)
                fn_802F69B8(self, item<beCriSfpData>(list, i + 1));
            break;
        }
        case 3:
            done = false;
            break;
        default:
            done = false;
            break;
        }
    }
    return done;
}

// Sets the reverb of the first effect setting if its name is name ("NONE" if null), otherwise none.
void fn_802F6F10(beCri *self, const char *name)
{
    igInfoList *list = self->_infoList;
    if (list->_count > 0) {
        beCriFxInfo *info = item<beCriFxInfo>(list, 0);
        if (!name) name = "NONE";
        if (strcmp(name, nameOf(info)) == 0) fn_803C1A94(0xA4000000, info->_reverb);
        else fn_803C1A94(0xA4000000, 0x7F);
    } else {
        fn_803C1A94(0xA4000000, 0x7F);
    }
}

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

// Sets the sound-file volume once (1..127; any other value is taken as 127).
void fn_802F7244(beCri *self, int volume)
{
    if (self->_sndfVolume == 0) {
        if (volume <= 0 || volume > 0x7F) volume = 0x7F;
        self->_sndfVolume = volume;
        fn_803C2734(0, 0xA0010000, volume);
    }
}

// A metaobject's memory field (igMemoryRefMetaField) by name, or null.
static inline void *memoryField(void *meta, const char *name)
{
    void *field = fn_800658F8(meta, name);
    if (field && fn_80068128(field, *reinterpret_cast<void **>(igMemoryRefMetaField_meta))) return field;
    return 0;
}

// Creates the sound-file buffer pool and makes beCriSfpData's _dataBuffer allocate from it.
void fn_802F7294(beCri *)
{
    fn_8006F428(lbl_80562104[0], "sndfBuffer", 0x20);
    fn_80062C90(memoryField(*reinterpret_cast<void **>(beCriSfpData_meta), "_dataBuffer"), "sndfBuffer");
}

void *beCri_virtual58(beCri *) { return *reinterpret_cast<void **>(beCri_meta); }

}
