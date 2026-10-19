// beSvWriteMediaApi: saves over the existing file (0x80321C68..0x80322214): both copies, then the banner, icons
// and file status.
#include "beSave.h"
#include <meta/beSvWriteMediaApi.h>

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

// Which of the two copies is being written (the class's unnamed member at 0xDC).
static inline int &copyIndex(beSvWriteMediaApi *self) { return *reinterpret_cast<int *>(self->unknownDC); }

extern "C" {

// Builds the save image: the checksum, the version word, then the game data.
void beSvWriteMediaApi_virtual5C(beSvWriteMediaApi *self, beSvDeliver *request)
{
    beSvPlatBaseData *plat = request->_platformData;
    self->_connect = request->_targetConnect;
    self->_isEnd = false;
    self->_result = 1;
    lbl_80535C18[0] = static_cast<beSvPlatDataGC *>(request->_platformData);
    renewBlock(self, self->_saveWork);
    fn_8031F9FC(self->_saveWork, plat->_dataSize, 32);
    unsigned int *image = static_cast<unsigned int *>(self->_saveWork->_mem);
    image[1] = lbl_80535C1C[0];
    memcpy(image + 2, request->_gameData->_data, request->_gameData->_size);
    image[0] = virtualsOf(self)->checksum(image, plat->_dataSize);
    goPhase(self, 0);
}

bool beSvWriteMediaApi_virtual60(beSvWriteMediaApi *self)
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
            copyIndex(self) = 0;
            break;
        case CARD_RESULT_NOFILE:
        default:
            fail(self, SAVEAPI_NOFILE, 20);
            break;
        }
        break;
    case 2:   // write the data, once at each copy's offset
        if (self->_st1 == 0) {
            CARDWriteAsync(&cardOf(self)->fileInfo, self->_saveWork->_mem, plat->_dataSize, plat->_dataOffSet[copyIndex(self)], 0);
            setSubStep(self, 1);
            break;
        }
        switch (CARDGetResultCode(self->_connect)) {
        case CARD_RESULT_READY:
            if (copyIndex(self) == 0) {
                copyIndex(self) = 1;
                setSubStep(self, 0);
            } else {
                goPhase(self, 3);
            }
            break;
        case CARD_RESULT_NOCARD:
            fail(self, SAVEAPI_NOCARD, 19);
            break;
        case CARD_RESULT_IOERROR:
            fail(self, SAVEAPI_IOERROR, 19);
            break;
        case CARD_RESULT_BUSY:
            break;
        case CARD_RESULT_WRONGDEVICE:
        case CARD_RESULT_NOFILE:
        default:
            fail(self, SAVEAPI_ERROR, 19);
            break;
        }
        break;
    case 3:   // the banner, icons and file status
        switch (self->_st1) {
        case 0:
            fn_80320004(self);
            nextSubStep(self);
            break;
        case 1:
            switch (fn_8032029C(self)) {
            case SAVE_DONE:
                fail(self, SAVEAPI_OK, 19);
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
    case 19:
        CARDClose(&cardOf(self)->fileInfo);
        nextPhase(self);
        break;
    case 20:
        self->_isEnd = true;
        fn_8031FF98(self);
        break;
    }
    if (self->_isEnd) fn_8031FAC8(self->_saveWork);
    return self->_isEnd;
}

void beSvWriteMediaApi_virtual64(beSvWriteMediaApi *self, beSvDeliver *request)
{
    request->_result = self->_result;
    request->_isEndOperat = true;
}

}
