// beFileListInfoManager: forgetting the queue (0x802F84B4..0x802F8A64).
#include "beFileList.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Forgets every queued list, loaded directory and file name.
void beFileListInfoManager_virtual70(beFileListInfoManager *self)
{
    removeAll(reinterpret_cast<igObjectList *>(self->_infoList));
    removeAll(reinterpret_cast<igObjectList *>(self->_dirList));
    clearStrings(self->_fnames);
    removeAll(reinterpret_cast<igObjectList *>(self->_importantInfoList));
    removeAll(reinterpret_cast<igObjectList *>(self->_readInfoList));
    if (self->_infoList->_count <= 0) fn_8004155C(self->_infoList, 0, 4);
    if (self->_dirList->_count <= 0) fn_8004155C(self->_dirList, 0, 4);
    if (self->_importantInfoList->_count <= 0) fn_8004155C(self->_importantInfoList, 0, 4);
    if (self->_readInfoList->_count <= 0) fn_8004155C(self->_readInfoList, 0, 4);
    self->_loaded = 0;
}

}
