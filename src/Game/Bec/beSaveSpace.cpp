// beSvGetFreeSizeApi (free space on the card), beSvStartApi and beSvEndApi (0x80322214..0x803225FC).
#include "beSave.h"
#include <meta/beSvGetFreeSizeApi.h>
#include <meta/beSvStartApi.h>
#include <meta/beSvEndApi.h>

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {
extern unsigned char lbl_805661D0;   // the card library is initialised
extern int lbl_804E08F8[];           // [0]: set to 2 here (defined in beSaveFileMake.cpp; its meaning is not established)
}

extern "C" {

void beSvGetFreeSizeApi_virtual5C(beSvGetFreeSizeApi *self, beSvDeliver *request)
{
    self->_connect = request->_targetConnect;
    self->_isEnd = false;
    self->_result = 1;
    lbl_80535C18[0] = static_cast<beSvPlatDataGC *>(request->_platformData);
    goPhase(self, 0);
}

bool beSvGetFreeSizeApi_virtual60(beSvGetFreeSizeApi *self)
{
    if (self->_isEnd) return true;
    switch (self->_st0) {
    case 0:
        mountPhase(self);
        break;
    case 1: {
        s32 bytes = 0;
        s32 files = 0;
        switch (CARDFreeBlocks(self->_connect, &bytes, &files)) {
        case CARD_RESULT_READY:
            self->_memCapa = bytes;
            self->_fileCapa = files;
            fail(self, SAVEAPI_OK, 20);
            break;
        default:
            fail(self, SAVEAPI_ERROR, 20);
            break;
        }
        break;
    }
    case 20:
        self->_isEnd = true;
        fn_8031FF98(self);
        break;
    }
    return self->_isEnd;
}

// Returns whether the save fits: enough free bytes for the file and a free file entry.
void beSvGetFreeSizeApi_virtual64(beSvGetFreeSizeApi *self, beSvDeliver *request)
{
    beSvPlatDataGC *plat = lbl_80535C18[0];
    if (self->_result == SAVEAPI_OK) {
        if (self->_fileCapa > 0) {
            request->_isfileCapaOK = true;
            if (plat->_memNeed <= self->_memCapa) self->_result = SAVEAPI_OK;
            else self->_result = SAVEAPI_NOSPACE;
        } else {
            self->_result = SAVEAPI_NOENTRY;
        }
    }
    request->_result = self->_result;
    if (plat->_memNeed <= self->_memCapa) request->_isMemCapaOK = true;
    else request->_isMemCapaOK = false;
    if (self->_fileCapa > 0) request->_isfileCapaOK = true;
    else request->_isfileCapaOK = false;
    request->_isEndOperat = true;
    request->_memCapa = self->_memCapa;
    request->_fileCapa = self->_fileCapa;
}

// Initialises the card library once and takes the save version from the request.
void beSvStartApi_virtual5C(beSvStartApi *self, beSvDeliver *request)
{
    self->_isEnd = false;
    if (!lbl_805661D0) {
        CARDInit();
        lbl_805661D0 = true;
    }
    lbl_804E08F8[0] = 2;
    lbl_80535C1C[0] = request->_saveVer;
    self->_result = 1;
}

bool beSvStartApi_virtual60(beSvStartApi *self)
{
    if (self->_isEnd) return true;
    finish(self, SAVEAPI_OK);
    return true;
}

void beSvStartApi_virtual64(beSvStartApi *self, beSvDeliver *request)
{
    request->_result = self->_result;
    request->_isEndOperat = true;
}

void beSvEndApi_virtual5C(beSvEndApi *self, beSvDeliver *)
{
    self->_isEnd = false;
    self->_result = 1;
}

bool beSvEndApi_virtual60(beSvEndApi *self)
{
    if (self->_isEnd) return true;
    self->_isEnd = true;
    self->_result = SAVEAPI_OK;
    return true;
}

void beSvEndApi_virtual64(beSvEndApi *self, beSvDeliver *request)
{
    request->_result = self->_result;
    request->_isEndOperat = true;
}

// Clears the request's multitap use.
void fn_803225EC(void *, beSvDeliver *request)
{
    request->_useMtap = 0;
    request->_chgUseMtap = 0;
}

}
