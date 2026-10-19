// beFileListInfoManager: loading a list of files and sorting their infos (0x802F9E98..0x802FA53C).
#include "beFileList.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// One step of loading the file list names: when the directory being loaded has finished, its infos are sorted
// (Lua infos to the insight core, scenes with cameras or named ROOTATTR to the important list, other scenes to
// the queue, the rest to the read list) and the next file is due; otherwise the next file starts loading.
// Returns true when every file is loaded.
bool fn_802F9E98(beFileListInfoManager *self, igStringRefList *names)
{
    if (self->_loaded >= names->_count) return true;
    if (self->_dirList->_count != 0) {
        igDirectory *directory = item<igDirectory>(self->_dirList, 0);
        if (fn_80070130(lbl_80562104[0], directory)) {
            POOLED_REF(rootAttr, "ROOTATTR");
            igInfoList *infos = directory->_infoList;
            for (int i = 0; i < infos->_count; i++) {
                igObject *info = item<igObject>(infos, i);
                igMetaObject *lua = *reinterpret_cast<igMetaObject **>(beLuaInfo_meta);
                if (lua == metaOf(info)) {
                    fn_8028A7DC(self->_insight, info);
                    continue;
                }
                igMetaObject *sceneMeta = *reinterpret_cast<igMetaObject **>(igSceneInfo_meta);
                if (sceneMeta == metaOf(info)) {
                    igSceneInfo *scene = asSceneInfo(info);
                    if (scene->_cameras && scene->_cameras->_count > 0) fn_80069128(self->_importantInfoList, info);
                    else if (nameOf(scene->_sceneGraph) == rootAttr.getString()) fn_80069128(self->_importantInfoList, info);
                    else fn_80069128(self->_infoList, info);
                    continue;
                }
                // Before the first scene info of the read list. (The test is on the new info itself, which is never a
                // scene info here, so it always goes to the end.)
                int position = -1;
                for (int j = 0; j < self->_readInfoList->_count; j++) {
                    igMetaObject *scene = *reinterpret_cast<igMetaObject **>(igSceneInfo_meta);
                    if (scene == metaOf(info)) {
                        position = j;
                        break;
                    }
                }
                if (position == -1) {
                    fn_80069128(self->_readInfoList, info);
                } else {
                    insertAt(self->_readInfoList, position, info);
                }
            }
            fn_80070140(lbl_80562104[0], directory->_name);
            removeAll(reinterpret_cast<igObjectList *>(self->_dirList));
            self->_loaded++;
        }
    } else {
        // Before the first files, the resource manager allocates from the resident pools (count 2) or this
        // manager's pools (count 0).
        if (self->_onetimeCount > -1) {
            if (self->_onetimeCount == 2) {
                setPool(lbl_80562104[0]->_objectMemoryPool, poolFor(self, lbl_80562258));
                setPool(lbl_80562104[0]->_dataMemoryPool, poolFor(self, lbl_80562258));
            } else if (self->_onetimeCount == 0) {
                setPool(lbl_80562104[0]->_objectMemoryPool, poolFor(self, lbl_8056225C));
                setPool(lbl_80562104[0]->_dataMemoryPool, poolFor(self, lbl_8056225C));
            }
            self->_onetimeCount--;
        }
        igStringRef name = fn_800218F4(names, self->_loaded);
        fn_80069128(self->_dirList, fn_8006FD34(lbl_80562104[0], name.getString()));
    }
    return false;
}

}
