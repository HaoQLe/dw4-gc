// Gap::Bec::beCri: the reverb setting.
#include "beCri.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Sets the reverb of the first effect setting if its name is name (lbl_80425430 if null), otherwise none.
void fn_802F6F10(beCri *self, const char *name)
{
    igInfoList *list = self->_infoList;
    if (list->_count > 0) {
        beCriFxInfo *info = item<beCriFxInfo>(list, 0);
        if (!name) name = lbl_80425430;
        if (strcmp(name, nameOf(info)) == 0) fn_803C1A94(0xA4000000, info->_reverb);
        else fn_803C1A94(0xA4000000, 0x7F);
    } else {
        fn_803C1A94(0xA4000000, 0x7F);
    }
}

}
