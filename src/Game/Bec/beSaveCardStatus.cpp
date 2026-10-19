// The save layer's write of the save image and its file status: banner, icon formats and speed (0x8032029C..0x80320604).
#include "beSave.h"
#include <game/Virtual.h>

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {
void fn_80065704(void *meta, int);   // called on destruction with the class's metaobject
void fn_800667B4(igObject *self);    // igObject's virtual28
extern char beSaveMemoryObj_meta[];
}

extern "C" {

// One step of finishing a written save: write the image, wait, then set the file's status (banner and icon
// formats, icon speed and animation) from the platform data.
int fn_8032029C(beSaveApi *api)
{
    int result = SAVE_RUNNING;
    beSvPlatDataGC *plat = lbl_80535C18[0];
    switch (cardOf(api)->writeStep) {
    case 0:
        CARDWriteAsync(&cardOf(api)->fileInfo, api->_imageWork->_mem, plat->_imageSize, 0, 0);
        cardOf(api)->writeStep++;
        break;
    case 1:
        switch (CARDGetResultCode(api->_connect)) {
        case CARD_RESULT_READY:
            cardOf(api)->writeStep++;
            break;
        case CARD_RESULT_NOCARD:
            result = SAVE_NOCARD;
            break;
        case CARD_RESULT_IOERROR:
            result = SAVE_IOERROR;
            break;
        case CARD_RESULT_BUSY:
            break;
        default:
            result = SAVE_WRITEFAILED;
            break;
        }
        break;
    case 2:
        switch (CARDGetStatus(api->_connect, cardOf(api)->fileInfo.fileNo, &cardOf(api)->stat)) {
        case CARD_RESULT_READY:
            cardOf(api)->writeStep++;
            break;
        default:
            result = SAVE_IOERROR;
            break;
        }
        break;
    case 3: {
        cardOf(api)->stat.commentAddr = 0;
        cardOf(api)->stat.iconAddr = sizeof(plat->_comment);
        switch (plat->_bannerType) {
        case 1:
            CARDSetBannerFormat(&cardOf(api)->stat, CARD_STAT_BANNER_C8);
            break;
        case 2:
            CARDSetBannerFormat(&cardOf(api)->stat, CARD_STAT_BANNER_RGB5A3);
            break;        case CARD_STAT_BANNER_NONE:
            break;
        }
        int format;
        switch (plat->_iconType) {
        default:
            format = CARD_STAT_ICON_C8;
            break;
        case 1:
            format = CARD_STAT_ICON_RGB5A3;
            break;
        }
        int speed;
        switch (plat->_iconSpeed) {
        case 0:
        default:
            speed = CARD_STAT_SPEED_SLOW;
            break;
        case 1:
            speed = CARD_STAT_SPEED_MIDDLE;
            break;
        case 2:
            speed = CARD_STAT_SPEED_FAST;
            break;
        }
        for (int i = 0; i < CARD_ICON_MAX; i++) {
            if (i < plat->_iconKaz) {
                CARDSetIconFormat(&cardOf(api)->stat, i, format);
                CARDSetIconSpeed(&cardOf(api)->stat, i, speed);
            } else {
                CARDSetIconFormat(&cardOf(api)->stat, i, CARD_STAT_ICON_NONE);
                CARDSetIconSpeed(&cardOf(api)->stat, i, CARD_STAT_SPEED_END);
            }
        }
        switch (plat->_iconLoopType) {
        case 0:
            CARDSetIconAnim(&cardOf(api)->stat, CARD_STAT_ANIM_LOOP);
            break;
        case 1:
            CARDSetIconAnim(&cardOf(api)->stat, CARD_STAT_ANIM_BOUNCE);
            break;
        }
        CARDSetStatus(api->_connect, cardOf(api)->fileInfo.fileNo, &cardOf(api)->stat);
        result = SAVE_DONE;
        cardOf(api)->writeStep++;
        break;
    }
    case 4:
        result = SAVE_DONE;
        break;
    }
    if (result != SAVE_RUNNING && api->_imageWork) {
        release(api->_imageWork);
        api->_imageWork = 0;
    }
    return result;
}

}
