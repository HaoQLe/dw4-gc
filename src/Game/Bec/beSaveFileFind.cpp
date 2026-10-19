// beSvFileFindApi (finds the save file in a slot, or in both), beSvFormatApi (formats a card) and
// beSvUseCheckApi (whether a card can be used) (0x80320F60..0x80321584).
#include "beSave.h"
#include <meta/beSvFileFindApi.h>
#include <meta/beSvFormatApi.h>
#include <meta/beSvUseCheckApi.h>

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Slot -1 means both: slot 0 first, then slot 1 if the file is not found there.
void beSvFileFindApi_virtual5C(beSvFileFindApi *self, beSvDeliver *request)
{
    if (request->_targetConnect == -1) {
        self->_connect = 0;
        self->_isConAllChk = true;
    } else {
        self->_connect = request->_targetConnect;
        self->_isConAllChk = false;
    }
    restart(self);
    lbl_80535C18[0] = static_cast<beSvPlatDataGC *>(request->_platformData);
}

// The original's code for this function keeps no common subexpressions (the file info's address is
// recomputed for each call); the pragma reproduces that.
#pragma push
#pragma opt_common_subs off
bool beSvFileFindApi_virtual60(beSvFileFindApi *self)
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
            CARDClose(&cardOf(self)->fileInfo);
            fail(self, SAVEAPI_OK, 20);
            break;
        case CARD_RESULT_NOFILE:
            finish(self, SAVEAPI_NOFILE);
            break;
        default:
            fail(self, SAVEAPI_ERROR, 20);
            break;
        }
        break;
    case 20:
        self->_isEnd = true;
        fn_8031FF98(self);
        break;
    }
    // Not found in slot 0 while looking in both: try slot 1.
    if (self->_isConAllChk && self->_isEnd && self->_result != SAVEAPI_OK && self->_connect == 0) {
        restart(self);
        self->_connect = 1;
    }
    return self->_isEnd;
}
#pragma pop

void beSvFileFindApi_virtual64(beSvFileFindApi *self, beSvDeliver *request)
{
    request->_result = self->_result;
    request->_isEndOperat = true;
}

// beSvFormatApi: formats the card in a slot.
void beSvFormatApi_virtual5C(beSvFormatApi *self, beSvDeliver *request)
{
    self->_isEnd = false;
    self->_connect = request->_targetConnect;
    self->_result = 1;
}

// Mounts the card (a broken one too, since it is about to be formatted), then formats it.
bool beSvFormatApi_virtual60(beSvFormatApi *self)
{
    if (self->_isEnd) return true;
    switch (self->_st0) {
    case 0:
        if (self->_st1 == 0) {
            fn_8031FC40(self);
            setSubStep(self, 1);
            break;
        }
        switch (fn_8031FCF0(self)) {
        case SAVE_DONE:
        case SAVE_BROKEN:
            nextPhase(self);
            break;
        case SAVE_IOERROR:
            finish(self, SAVEAPI_IOERROR);
            break;
        case SAVE_NOCARD:
            finish(self, SAVEAPI_NOCARD);
            break;
        case SAVE_WRONGDEVICE:
            finish(self, SAVEAPI_WRONGDEVICE);
            break;
        case SAVE_RUNNING:
            break;
        default:
            finish(self, SAVEAPI_ERROR);
            break;
        }
        break;
    case 1:
        if (self->_st1 == 0) {
            CARDFormatAsync(self->_connect, 0);
            setSubStep(self, 1);
            break;
        }
        switch (CARDGetResultCode(self->_connect)) {
        case CARD_RESULT_READY:
            self->_isEnd = true;
            self->_result = SAVEAPI_OK;
            break;
        case CARD_RESULT_NOCARD:
            finish(self, SAVEAPI_NOCARD);
            break;
        case CARD_RESULT_BUSY:
            break;
        case CARD_RESULT_IOERROR:
        case CARD_RESULT_FATAL_ERROR:
        default:
            finish(self, SAVEAPI_IOERROR);
            break;
        }
        break;
    }
    if (self->_isEnd == true) fn_8031FF98(self);
    return self->_isEnd;
}

void beSvFormatApi_virtual64(beSvFormatApi *self, beSvDeliver *request)
{
    request->_result = self->_result;
    request->_isEndOperat = true;
}

// beSvUseCheckApi: whether the card in a slot can be used (it mounts and passes the check).
void beSvUseCheckApi_virtual5C(beSvUseCheckApi *self, beSvDeliver *request)
{
    self->_connect = request->_targetConnect;
    self->_isEnd = false;
    self->_result = 1;
    fn_8031FC40(self);
    goPhase(self, 0);
}

bool beSvUseCheckApi_virtual60(beSvUseCheckApi *self)
{
    if (self->_isEnd) return true;
    switch (fn_8031FCF0(self)) {
    case SAVE_DONE:
        finish(self, SAVEAPI_OK);
        break;
    case SAVE_IOERROR:
        finish(self, SAVEAPI_IOERROR);
        break;
    case SAVE_BROKEN:
        finish(self, SAVEAPI_BROKEN);
        break;
    case SAVE_NOCARD:
        finish(self, SAVEAPI_NOCARD);
        break;
    case SAVE_WRONGDEVICE:
        finish(self, SAVEAPI_WRONGDEVICE);
        break;
    }
    if (self->_isEnd == true) fn_8031FF98(self);
    return self->_isEnd;
}

void beSvUseCheckApi_virtual64(beSvUseCheckApi *self, beSvDeliver *request)
{
    request->_result = self->_result;
    request->_isEndOperat = true;
}

}
