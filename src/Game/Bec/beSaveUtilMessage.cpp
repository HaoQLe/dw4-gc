// beSaveUtil: its message handler (0x80323D20..0x803244FC).
#include "beSave.h"
#include <meta/beSaveUtil.h>
#include <meta/beSaveUtilInfoRam.h>
#include <meta/beSvConnectCheck.h>
#include <meta/beSvStartApi.h>
#include <meta/beSvEndApi.h>
#include <meta/igIntList.h>
#include <meta/beSvFileMakeApi.h>
#include <meta/beSvFileFindApi.h>
#include <meta/beSvFormatApi.h>
#include <meta/beSvUseCheckApi.h>
#include <meta/beSvReadMediaApi.h>
#include <meta/beSvWriteMediaApi.h>
#include <meta/beSvGetFreeSizeApi.h>
#include <meta/beMessengerWork.h>
#include <meta/enums.h>

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {
beSvConnectCheck *beSvConnectCheck_create(void *pool);
beSvStartApi *beSvStartApi_create(void *pool);
beSvEndApi *beSvEndApi_create(void *pool);
void fn_803225EC(void *, beSvDeliver *request);
void fn_803225FC(beSvConnectCheck *self);
int fn_80322688(beSvConnectCheck *self, beSvDeliver *request);
void fn_80323454(beSaveUtil *self, beSaveUtilInfoRam *ram);
// The values the request's slot lists start with (all 0).
extern int lbl_804E1068[], lbl_804E106C[], lbl_804E1070[], lbl_804E1074[], lbl_804E1078[];
beSvFileMakeApi *beSvFileMakeApi_create(void *pool);
beSvFileFindApi *beSvFileFindApi_create(void *pool);
beSvFormatApi *beSvFormatApi_create(void *pool);
beSvUseCheckApi *beSvUseCheckApi_create(void *pool);
beSvReadMediaApi *beSvReadMediaApi_create(void *pool);
beSvWriteMediaApi *beSvWriteMediaApi_create(void *pool);
beSvGetFreeSizeApi *beSvGetFreeSizeApi_create(void *pool);
bool fn_80323364(beSaveUtil *self, beSaveUtilInfoRam *ram, beSaveApi *api);
// The messenger: the message enum, and the current request's arguments and reply.
void *fn_802BBE38();                                                   // the beSaveUtil_Message enum
int fn_80304FD8(void *messenger, void *messageEnum, const char *message); // a message's value in an enum
int fn_8030690C(void *messenger);                     // the number of bool arguments
void fn_80306964(void *messenger, bool value);        // appends a bool
int fn_80306A30(void *messenger);                     // the number of int arguments
int fn_80306B00(void *messenger, int index);          // int argument index
void fn_80306A40(void *messenger, int value);         // appends an int
int fn_80306E1C(void *messenger);                     // the number of object arguments
void *fn_80306FB4(void *messenger, int index);        // object argument index
void fn_80306E2C(void *messenger, igObject *value);   // appends an object
}

// Holds an operation in _api (as assigning a smart reference).
static inline void setApi(beSaveUtil *self, beSaveApi *api)
{
    if (api) addRef(api);
    if (self->_api) release(self->_api);
    self->_api = api;
}

// The save RAM's progress (_st0 phase, _st1 sub-step, _st2 step).
static inline void setRamPhase(beBaseInfoRam *ram, int phase)
{
    ram->_st0 = phase;
    ram->_st3 = 0;
    ram->_st2 = 0;
    ram->_st1 = 0;
}

// Empties the request's per-slot lists.
static inline void clearSlotLists(beSaveUtilInfoRam *ram)
{
    truncate(ram->_deliver->_actConnect, 0);
    truncate(ram->_deliver->_freeSizeList, 0);
    truncate(ram->_deliver->_freeFileList, 0);
    truncate(ram->_deliver->_formatList, 0);
}

extern "C" {

// The slot a request message names (its first int argument), or -1 for any.
static inline void readTargetSlot(beSaveUtil *self, beSaveUtilInfoRam *ram)
{
    ram->_deliver->_targetConnect = -1;
    for (int i = 0; i < fn_80306A30(self->_messenger); i++) {
        int value = fn_80306B00(self->_messenger, i);
        switch (i) {
        case 0:
            ram->_deliver->_targetConnect = value;
            break;
        }
    }
}

// The game data a read or write request carries (its first object argument).
static inline void readGameData(beSaveUtil *self, beSaveUtilInfoRam *ram)
{
    if (fn_80306E1C(self->_messenger) != 0)
        ram->_deliver->_gameData = static_cast<beSaveDataDeliver *>(fn_80306FB4(self->_messenger, 0));
}

// Answers a beSaveUtil_Message: GENERATE starts the card library, REMOVE ends it, REQUEST_* start an
// operation on the requested slot, and the rest report the request's state.
bool beSaveUtil_virtual90(beSaveUtil *self, beSaveUtilInfoRam *ram, beMessengerWork *message)
{
    switch (fn_80304FD8(self->_messenger, fn_802BBE38(), message->_message)) {
    case beSaveUtil_Message::REQUEST_FILEFIND: {
        Ref<beSvFileFindApi> api(beSvFileFindApi_create(poolFor(self, lbl_8056225C)), Ref<beSvFileFindApi>::adopt);
        readTargetSlot(self, ram);
        fn_80323364(self, ram, api);
        break;
    }
    case beSaveUtil_Message::REQUEST_USE_CHECK: {
        Ref<beSvUseCheckApi> api(beSvUseCheckApi_create(poolFor(self, lbl_8056225C)), Ref<beSvUseCheckApi>::adopt);
        readTargetSlot(self, ram);
        fn_80323364(self, ram, api);
        break;
    }
    case beSaveUtil_Message::REQUEST_GETFREESIZE: {
        Ref<beSvGetFreeSizeApi> api(beSvGetFreeSizeApi_create(poolFor(self, lbl_8056225C)), Ref<beSvGetFreeSizeApi>::adopt);
        readTargetSlot(self, ram);
        fn_80323364(self, ram, api);
        break;
    }
    case beSaveUtil_Message::REQUEST_FILEMAKE: {
        Ref<beSvFileMakeApi> api(beSvFileMakeApi_create(poolFor(self, lbl_8056225C)), Ref<beSvFileMakeApi>::adopt);
        readTargetSlot(self, ram);
        readGameData(self, ram);
        fn_80323364(self, ram, api);
        break;
    }
    case beSaveUtil_Message::REQUEST_FORMAT: {
        Ref<beSvFormatApi> api(beSvFormatApi_create(poolFor(self, lbl_8056225C)), Ref<beSvFormatApi>::adopt);
        readTargetSlot(self, ram);
        fn_80323364(self, ram, api);
        break;
    }
    case beSaveUtil_Message::REQUEST_WRITE_MEDIA: {
        Ref<beSvWriteMediaApi> api(beSvWriteMediaApi_create(poolFor(self, lbl_8056225C)), Ref<beSvWriteMediaApi>::adopt);
        readTargetSlot(self, ram);
        readGameData(self, ram);
        fn_80323364(self, ram, api);
        break;
    }
    case beSaveUtil_Message::REQUEST_READ_MEDIA: {
        Ref<beSvReadMediaApi> api(beSvReadMediaApi_create(poolFor(self, lbl_8056225C)), Ref<beSvReadMediaApi>::adopt);
        readTargetSlot(self, ram);
        readGameData(self, ram);
        fn_80323364(self, ram, api);
        break;
    }
    case beSaveUtil_Message::GETDELIVER:
        if (fn_80306E1C(self->_messenger) == 0) fn_80306E2C(self->_messenger, ram->_deliver);
        break;
    case beSaveUtil_Message::GENERATE: {
        setRamPhase(ram, 1);
        ram->_st1 = 0;
        ram->_st3 = 0;
        ram->_st2 = 0;
        beSvDeliver *request = ram->_deliver;
        if (fn_80306A30(self->_messenger) != 0) request->_saveVer = fn_80306B00(self->_messenger, 0);
        if (fn_8030690C(self->_messenger) == 0) fn_80306964(self->_messenger, true);
        break;
    }
    case beSaveUtil_Message::REMOVE:
        setRamPhase(ram, 1);
        ram->_st1 = 2;
        ram->_st3 = 0;
        ram->_st2 = 0;
        break;
    case beSaveUtil_Message::ISBUSY:
        if (fn_8030690C(self->_messenger) != 0) break;
        if (ram->_deliver->_isEndOperat == true) fn_80306964(self->_messenger, false);
        else fn_80306964(self->_messenger, true);
        break;
    case beSaveUtil_Message::GETRESULT:
        if (fn_80306A30(self->_messenger) == 0) fn_80306A40(self->_messenger, ram->_deliver->_result);
        break;
    case beSaveUtil_Message::ISRDY:
        if (fn_8030690C(self->_messenger) != 0) break;
        if (ram->_isRdy == true) fn_80306964(self->_messenger, true);
        else fn_80306964(self->_messenger, false);
        break;
    case beSaveUtil_Message::CHECKMEM:
        if (fn_8030690C(self->_messenger) != 0) break;
        fn_80306A40(self->_messenger, ram->_deliver->_memCapa);
        fn_80306A40(self->_messenger, ram->_deliver->_fileCapa);
        if (ram->_deliver->_isMemCapaOK == true) fn_80306964(self->_messenger, true);
        else fn_80306964(self->_messenger, false);
        if (ram->_deliver->_isfileCapaOK == true) fn_80306964(self->_messenger, true);
        else fn_80306964(self->_messenger, false);
        break;
    case beSaveUtil_Message::GETOPERATE:   // reports the result, as GETRESULT does
        if (fn_80306A30(self->_messenger) == 0) fn_80306A40(self->_messenger, ram->_deliver->_result);
        break;
    case beSaveUtil_Message::XBOX_HD_CAPACHK:
        break;
    default:
        return false;
    }
    return true;
}

}
