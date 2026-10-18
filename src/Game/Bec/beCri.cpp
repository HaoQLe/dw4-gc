// Gap::Bec::beCri: its creation and the system callbacks.
#include "beCri.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

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
    fn_802F6F10(self, lbl_80425430);
    removeAll(reinterpret_cast<igObjectList *>(self->_infoList));
    if (self->_infoList->_count <= 0) fn_8004155C(self->_infoList, 0, 4);
    fn_802F6BAC(self, false);
}

}
