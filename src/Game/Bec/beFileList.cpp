// beFileListInfoManager: the game's file loading. File-list infos (beFileListInfo: a section name and its file
// names) queue up; each frame the manager loads them through Alchemy's resource manager and runs their scripts.
// This file: registration and the info queue (0x802F82D8..0x802F84B4).
#include "beFileList.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

void beFileListInfoManager_virtual5C(beFileListInfoManager *self) { fn_8028A398(self->_insight, self); }

void beFileListInfoManager_virtual60(beFileListInfoManager *self) { fn_8028A400(self->_insight, self); }

// Finds the managers it works with.
void beFileListInfoManager_virtual64(beFileListInfoManager *self)
{
    self->_system = static_cast<beSystem *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beSystem_meta)));
    self->_messenger = static_cast<beMessenger *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beMessenger_meta)));
    self->_sceneInfoManager = static_cast<igViewerSceneInfoManager *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(igViewerSceneInfoManager_meta)));
}

void beFileListInfoManager_virtual68(beFileListInfoManager *) {}

// Takes an info: a file list goes to the front of the queue (and loading restarts, with soft reset disabled);
// a named-object info goes to beFont.
bool beFileListInfoManager_virtual6C(beFileListInfoManager *self, igObject *info)
{
    igMetaObject *fileList = metaVar(beFileListInfo_meta);
    if (fileList == metaOf(info)) {
        igInfoList *queue = self->_infoList;
        if (queue->_count > 0) {
            igObject *front = info;
            if (front) addRef(front);
            fn_80041A44(queue, 0, 1, &front);
        } else {
            fn_80069128(queue, info);
        }
        self->_proc = 0;
        self->_system->_isSResetEnable = false;
        return true;
    }
    igMetaObject *named = metaVar(igNamedObjectInfo_meta);
    if (named == metaOf(info)) {
        beFont *font = static_cast<beFont *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beFont_meta)));
        if (!font) return false;
        fn_802FB510(font, info);
        return true;
    }
    return false;
}

}
