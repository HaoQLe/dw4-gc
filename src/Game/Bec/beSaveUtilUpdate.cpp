// beSaveUtil: the per-frame update of a save RAM (0x80323538..0x80323BFC).
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

// Each frame, for a save RAM: phase 1 starts the card library (step 0), then runs the operations given by
// messages (step 1), then ends the library (step 2); phase 2 empties the slot lists.
void beSaveUtil_virtual84(beSaveUtil *self, beSaveUtilInfoRam *ram)
{
    switch (ram->_st0) {
    case 0:
        break;
    case 3:
        break;
    case 1:
        switch (ram->_st1) {
        case 0:
            switch (ram->_st2) {
            case 0: {
                if (!self->_connectCheck) {
                    void *pool = poolFor(self, lbl_8056225C);
                    if (self->_connectCheck) release(self->_connectCheck);
                    self->_connectCheck = beSvConnectCheck_create(pool);
                }
                clearSlotLists(ram);
                truncate(ram->_deliver->_totalSizeList, 0);
                for (int i = 0; i < ram->_deliver->_platformData->_connectMax; i++) {
                    appendInt(ram->_deliver->_actConnect, lbl_804E1068[0]);
                    appendInt(ram->_deliver->_freeSizeList, lbl_804E106C[0]);
                    appendInt(ram->_deliver->_freeFileList, lbl_804E1070[0]);
                    appendInt(ram->_deliver->_formatList, lbl_804E1074[0]);
                    appendInt(ram->_deliver->_totalSizeList, lbl_804E1078[0]);
                }
                Ref<beSvStartApi> start(beSvStartApi_create(poolFor(self, lbl_8056225C)), Ref<beSvStartApi>::adopt);
                virtualsOf(start)->start(ram->_deliver);
                setApi(self, start);
                ram->_st2++;
                ram->_st3 = 0;
                break;
            }
            case 1:
                if (virtualsOf(self->_api)->step()) {
                    if (self->_api) release(self->_api);
                    self->_api = 0;
                    ram->_isRdy = true;
                    ram->_st1 = 1;
                    ram->_st3 = 0;
                    ram->_st2 = 0;
                }
                break;
            }
            break;
        case 1:
            fn_80323454(self, ram);
            switch (ram->_st2) {
            case 1:
                if (!self->_api) {
                    ram->_st2 = 0;
                    ram->_st3 = 0;
                    break;
                }
                if (virtualsOf(self->_api)->step()) {
                    virtualsOf(self->_api)->end(ram->_deliver);
                    ram->_st2 = 0;
                    ram->_st3 = 0;
                    if (self->_api) release(self->_api);
                    self->_api = 0;
                }
                break;
            }
            break;
        case 2:
            switch (ram->_st2) {
            case 0: {
                Ref<beSvEndApi> end(beSvEndApi_create(poolFor(self, lbl_8056225C)), Ref<beSvEndApi>::adopt);
                virtualsOf(end)->start(ram->_deliver);
                setApi(self, end);
                ram->_st2++;
                ram->_st3 = 0;
                break;
            }
            case 1:
                if (virtualsOf(self->_api)->step()) {
                    if (self->_api) release(self->_api);
                    self->_api = 0;
                    setRamPhase(ram, 2);
                }
                break;
            }
            break;
        }
        break;
    case 2:
        clearSlotLists(ram);
        ram->_isRdy = false;
        setRamPhase(ram, 3);
        break;
    }
}

}
