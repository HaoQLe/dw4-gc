// beSvReadMediaApi: the load's steps (0x80321670..0x80321C68). A file whose banner and icons are missing
// gets them rewritten before the copies are read and checked.
#include "beSave.h"
#include <meta/beSvReadMediaApi.h>
#include <meta/igObjectList.h>

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

// The copy being read (the class's unnamed member at 0xE8).
static inline int &copyIndex(beSvReadMediaApi *self) { return *reinterpret_cast<int *>(self->unknownE8); }

// Read buffer index (one per copy).
static inline beSaveMemoryObj *readBuffer(beSvReadMediaApi *self, int index) { return item<beSaveMemoryObj>(self->_loadWorkList, index); }

extern "C" {

bool beSvReadMediaApi_virtual60(beSvReadMediaApi *self)
{
    if (self->_isEnd) return true;
    beSvPlatDataGC *plat = lbl_80535C18[0];
    switch (self->_st0) {
    case 0:
        mountPhase(self);
        break;
    case 1:
        switch (CARDOpen(self->_connect, plat->_fileName, &cardOf(self)->fileInfo)) {
        case CARD_RESULT_READY:
            nextPhase(self);
            break;
        case CARD_RESULT_NOFILE:
        default:
            finish(self, SAVEAPI_NOFILE);
            break;
        }
        break;
    case 2:   // the file status: rewrite the banner and icons if they are missing
        switch (self->_st1) {
        case 0:
            switch (CARDGetStatus(self->_connect, cardOf(self)->fileInfo.fileNo, &cardOf(self)->stat)) {
            case CARD_RESULT_READY:
                nextSubStep(self);
                break;
            default:
                fail(self, SAVEAPI_ERROR, 19);
                break;
            }
            break;
        case 1:
            if (cardOf(self)->stat.iconAddr == sizeof(plat->_comment)) nextPhase(self);
            else nextSubStep(self);
            break;
        case 2:
            fn_80320004(self);
            nextSubStep(self);
            break;
        case 3:
            switch (fn_8032029C(self)) {
            case SAVE_DONE:
                nextPhase(self);
                break;
            case SAVE_IOERROR:
                fail(self, SAVEAPI_IOERROR, 19);
                break;
            case SAVE_BROKEN:
                fail(self, SAVEAPI_BROKEN, 19);
                break;
            case SAVE_NOCARD:
                fail(self, SAVEAPI_NOCARD, 19);
                break;
            case SAVE_RUNNING:
                break;
            default:
                fail(self, SAVEAPI_ERROR, 19);
                break;
            }
            break;
        }
        break;
    case 3:   // read both copies
        switch (self->_st1) {
        case 0:
            copyIndex(self) = 0;
            nextSubStep(self);
            break;
        case 1:
            CARDReadAsync(&cardOf(self)->fileInfo, readBuffer(self, copyIndex(self))->_mem, plat->_dataSize, plat->_dataOffSet[copyIndex(self)], 0);
            nextSubStep(self);
            break;
        case 2:
            switch (CARDGetResultCode(self->_connect)) {
            case CARD_RESULT_BUSY:
                break;
            case CARD_RESULT_READY:
                if (copyIndex(self) == 0) {
                    copyIndex(self) = 1;
                    setSubStep(self, 1);
                } else {
                    self->_result = SAVEAPI_OK;
                    nextPhase(self);
                }
                break;
            case CARD_RESULT_NOCARD:
                fail(self, SAVEAPI_NOCARD, 19);
                break;
            default:
                fail(self, SAVEAPI_ERROR, 19);
                break;
            }
            break;
        }
        break;
    case 4: {   // the first copy whose checksum matches (with this version) becomes the game data
        bool found = false;
        for (int i = 0; i < 2; i++) {
            unsigned int *image = static_cast<unsigned int *>(readBuffer(self, i)->_mem);
            int sum = image[0];
            image[1] = lbl_80535C1C[0];
            if (virtualsOf(self)->checksum(image, plat->_dataSize) == sum) {
                memcpy(self->_gameData->_data, image + 2, self->_gameData->_size);
                found = true;
                break;
            }
        }
        if (!found) self->_result = SAVEAPI_CORRUPT;
        goPhase(self, 19);
        break;
    }
    case 19:
        CARDClose(&cardOf(self)->fileInfo);
        nextPhase(self);
        break;
    case 20:
        self->_isEnd = true;
        fn_8031FF98(self);
        break;
    }
    if (self->_isEnd == true) {
        for (int i = 0; i < 2; i++) fn_8031FAC8(readBuffer(self, i));
    }
    return self->_isEnd;
}

void beSvReadMediaApi_virtual64(beSvReadMediaApi *self, beSvDeliver *request)
{
    request->_result = self->_result;
    request->_isEndOperat = true;
}

}
