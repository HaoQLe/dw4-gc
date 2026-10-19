// beSvFileMakeApi: creates the save file on the card and writes the first save (0x80320834..0x80320F60).
// The data is written twice, at the two offsets of the platform data, then the banner and icons.
#include "beSave.h"
#include <meta/beSvFileMakeApi.h>
#include <meta/beSvPlatBaseData.h>

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

// The save layer's first data word, which beSvStartApi sets to 2 (its meaning is not established). It is
// defined here so that this unit's data starts where the original's does.
__declspec(section ".data") int lbl_804E08F8[1] = {2};

// Which of the two copies is being written (the class's unnamed member at 0xDC).
static inline int &copyIndex(beSvFileMakeApi *self) { return *reinterpret_cast<int *>(self->unknownDC); }

extern "C" {

// Builds the save image: the checksum, the version word, then the game data.
void beSvFileMakeApi_virtual5C(beSvFileMakeApi *self, beSvDeliver *request)
{
    beSvPlatBaseData *plat = request->_platformData;
    self->_connect = request->_targetConnect;
    lbl_80535C18[0] = static_cast<beSvPlatDataGC *>(request->_platformData);
    renewBlock(self, self->_saveWork);
    fn_8031F9FC(self->_saveWork, plat->_dataSize, 32);
    unsigned int *image = static_cast<unsigned int *>(self->_saveWork->_mem);
    image[1] = lbl_80535C1C[0];
    memcpy(image + 2, request->_gameData->_data, request->_gameData->_size);
    image[0] = virtualsOf(self)->checksum(image, plat->_dataSize);
    restart(self);
}

bool beSvFileMakeApi_virtual60(beSvFileMakeApi *self)
{
    if (self->_isEnd) return true;
    beSvPlatDataGC *plat = lbl_80535C18[0];
    switch (self->_st0) {
    case 0:
        mountPhase(self);
        break;
    case 1:   // create the file; an existing one is deleted first
        switch (self->_st1) {
        case 0:
            CARDCreateAsync(self->_connect, plat->_fileName, plat->_memNeed, &cardOf(self)->fileInfo, 0);
            setSubStep(self, 1);
            break;
        case 1:
            switch (CARDGetResultCode(self->_connect)) {
            case CARD_RESULT_READY:
                nextPhase(self);
                copyIndex(self) = 0;
                break;
            case CARD_RESULT_EXIST:
                setSubStep(self, 2);
                break;
            case CARD_RESULT_NOCARD:
                fail(self, SAVEAPI_NOCARD, 20);
                break;
            case CARD_RESULT_IOERROR:
                fail(self, SAVEAPI_IOERROR, 20);
                break;
            case CARD_RESULT_BUSY:
                break;
            default:
                fail(self, SAVEAPI_ERROR, 20);
                break;
            }
            break;
        case 2:
            CARDDeleteAsync(self->_connect, plat->_fileName, 0);
            setSubStep(self, 3);
            break;
        case 3:
            switch (CARDGetResultCode(self->_connect)) {
            case CARD_RESULT_READY:
            case CARD_RESULT_NOFILE:
                setSubStep(self, 0);
                break;
            case CARD_RESULT_NOCARD:
                fail(self, SAVEAPI_NOCARD, 20);
                break;
            case CARD_RESULT_BUSY:
                break;
            case CARD_RESULT_WRONGDEVICE:
            default:
                fail(self, SAVEAPI_ERROR, 20);
                break;
            }
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
                self->_result = SAVEAPI_OK;
                nextPhase(self);
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

void beSvFileMakeApi_virtual64(beSvFileMakeApi *self, beSvDeliver *request)
{
    request->_result = self->_result;
    request->_isEndOperat = true;
}

}
