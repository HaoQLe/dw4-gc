// beFileListInfoManager: handing the read infos to the insight core (0x802FA53C..0x802FA6D8).
#include "beFileList.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Takes the loaded lists' infos out of the insight core and forgets them.
bool fn_802FA53C(beFileListInfoManager *self)
{
    for (int i = 0; i < self->_readInfoList->_count; i++) {
        igObject *info = item<igObject>(self->_readInfoList, i);
        if (info) fn_8028A7DC(self->_insight, info);
    }
    removeAll(reinterpret_cast<igObjectList *>(self->_readInfoList));
    return true;
}

}
