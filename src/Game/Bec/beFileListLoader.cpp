// beFileListInfoManager: the loader's per-frame state machine (0x802F8A64..0x802F9E98).
#include "beFileList.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// The loader, one step per frame (_proc):
//    0  the stage's loading screen: loadingUSA/ld<first two letters of the stage>.igb
//    1  its infos go to the insight core; the list's sound files (a name whose part after the first '/' starts
//       with 's') are loaded first, with BecText.igb and _common/sbiallse.igb the first time
//  100  loads them; the sound manager then makes its binary list (101: until the transfer is done)
//  102  queues the list's other files
//    2  loads them
//    3  runs the stage's func.lua and boot.lua (<stage>/lua)
//    4  loads the system's resident files and waits for the loading screen; the important infos are read
//   20, 21  two frames
//    5  the read infos go to the insight core
//    6  shows the loading layer and gives each scene's graph its layer node
//    7  initialises the text control and runs start.lua
//    8  the system becomes active
//    9  runs first.lua; outside stagIS08/09/10/12, soft reset is allowed again
//   -1  idle
void beFileListInfoManager_virtual74(beFileListInfoManager *self)
{
    if (self->_system->_execDvdErr > 0) return;
    switch (self->_proc) {
    default:
        self->_proc = -1;
        break;
    case -1:
        break;
    case 0: {
        if (self->_infoList->_count < 1) {
            self->_proc = -1;
            break;
        }
        self->_system->_isActive = false;
        beFileListInfo *list = item<beFileListInfo>(self->_infoList, 0);
        if (nameOf(list)) setString(self->_system->_stageName, nameOf(list));
        else setString(self->_system->_stageName, "notDefined");
        fn_8006F794(lbl_80562104[0]);
        {
        Ref<igStringObj> path(self->_system->_globalStrObj);
        fn_80071F9C(path, self->_system->_stageName);
        fn_80072840(path, 0, 2);
        igStringObj *text = path;
        fn_80072038(text, "ld", 0, strlen("ld"));
        int end = text->_length;
        fn_80072038(text, ".igb", end, strlen(".igb"));
        fn_80072038(text, "loadingUSA/", 0, strlen("loadingUSA/"));
        igDirectory *directory = fn_8006FD34(lbl_80562104[0], textOf(text));
        fn_80069128(self->_dirList, directory);
        }
        self->_proc = 1;
        break;
    }
    case 1: {
        igDirectory *directory = item<igDirectory>(self->_dirList, 0);
        if (!fn_80070130(lbl_80562104[0], directory)) break;
        igInfoList *infos = directory->_infoList;
        for (int i = 0; i < infos->_count; i++) fn_8028A7DC(self->_insight, item<igObject>(infos, i));
        fn_80070140(lbl_80562104[0], directory->_name);
        removeAll(reinterpret_cast<igObjectList *>(self->_dirList));
        igNamedObjectList *files = item<beFileListInfo>(self->_infoList, 0)->_fnames;
        if (!self->_isReadOnetime) {
            POOLED_REF(text, "BecText.igb");
            fn_8002080C(self->_fnames, text);
            POOLED_REF(sound, "_common/sbiallse.igb");
            fn_8002080C(self->_fnames, sound);
            self->_isReadOnetime = true;
            self->_onetimeCount = 2;
        }
        Ref<igStringObj> path(self->_system->_globalStrObj);
        igStringObj *text = path;
        bool sounds = false;
        for (int i = 0; i < files->_count; i++) {
            const char *file = nameOf(item<igNamedObject>(files, i));
            POOLED_REF(name, file);
            int slash = -1;
            fn_80071F9C(path, name.getString());
            for (unsigned int j = 0; j < text->_length; j++) {
                if (textOf(text)[j] == '/') {
                    slash = j;
                    break;
                }
            }
            if (slash == -1) slash = 0;
            if (name.getString()[slash + 1] == 's') {
                fn_8002080C(self->_fnames, name);
                sounds = true;
                igObject *object = item<igObject>(files, i);
                if (object) release(object);
                fn_80041C10(files, i);
                static_cast<igObject **>(files->_data)[files->_count] = 0;
                i--;
            }
        }
        if (sounds) self->_proc = 100;
        else self->_proc = 102;
        break;
    }
    case 100:
        if (!fn_802F9E98(self, self->_fnames)) break;
        fn_802FA53C(self);
        removeAll(reinterpret_cast<igObjectList *>(self->_readInfoList));
        self->_loaded = 0;
        clearStrings(self->_fnames);
        fn_80305F58(self->_messenger, "SOUND", "SEARCH");
        if (fn_80306A1C(self->_messenger, 0)) {
            self->_proc = 101;
            fn_80305F58(self->_messenger, "SOUND", "MAKEBINLIST");
        } else {
            self->_proc = 102;
        }
        break;
    case 101:
        fn_80305F58(self->_messenger, "SOUND", "ISDONETRANS");
        if (fn_80306A1C(self->_messenger, 0) == true) self->_proc = 102;
        break;
    case 102: {
        igNamedObjectList *files = item<beFileListInfo>(self->_infoList, 0)->_fnames;
        for (int i = 0; i < files->_count; i++) {
            const char *file = nameOf(item<igNamedObject>(files, i));
            POOLED_REF(name, file);
            fn_8002080C(self->_fnames, name);
        }
        self->_proc = 2;
        break;
    }
    case 2:
        if (fn_802F9E98(self, self->_fnames)) {
            self->_loaded = 0;
            self->_proc = 3;
        }
        break;
    case 3: {
        beLua *lua = luaOf(self);
        if (lua) {
            char directory[32];
            sprintf(directory, "%s/lua", self->_system->_stageName);
            fn_80302224(lua);
            fn_80301FA4(lua, "func.lua", directory);
            fn_80301FA4(lua, "boot.lua", directory);
        }
        self->_proc = 4;
        break;
    }
    case 4: {
        igStringRefList *resident = self->_system->_readFileList;
        beLoadingNode *loading = 0;
        bool shown;
        igGroup *scene = self->_sceneInfoManager->_parameters->_scene;
        if ((scene->_childList ? scene->_childList->_count : 0) > 0) {
            igObject *child = item<igObject>(scene->_childList, 0);
            beLoadingNode *node = child && fn_80068128(child, *reinterpret_cast<void **>(beLoadingNode_meta)) ? static_cast<beLoadingNode *>(child) : 0;
            loading = node;
            if (node) shown = fn_80311674(node);
            else shown = true;
        } else {
            shown = true;
        }
        bool loaded = fn_802F9E98(self, resident);
        if (!shown || !loaded) break;
        self->_loaded = 0;
        self->_proc = 20;
        if (loading) fn_80311660(loading);
        while (self->_importantInfoList->_count > 0) {
            fn_80069128(self->_readInfoList, item<igObject>(self->_importantInfoList, 0));
            igInfoList *important = self->_importantInfoList;
            igObject *object = item<igObject>(important, 0);
            if (object) release(object);
            fn_80041C10(important, 0);
            static_cast<igObject **>(important->_data)[important->_count] = 0;
        }
        fn_8006F8CC(lbl_80562104[0]);
        break;
    }
    case 20:
        self->_proc = 21;
        break;
    case 21:
        self->_proc = 5;
        break;
    case 5:
        if (fn_802FA53C(self)) {
            removeAll(reinterpret_cast<igObjectList *>(self->_readInfoList));
            self->_proc = 6;
        }
        break;
    case 6:
        fn_80305F58(self->_messenger, "LAYERCTL", "ORDER");
        if (fn_8030690C(self->_messenger) >= 1) {
            fn_80305EA8(self->_messenger, "LAYERCTL");
            fn_80306FDC(self->_messenger, "LOADING");
            fn_80306FDC(self->_messenger, "SET");
            fn_80305A28(self->_messenger, "SWITCH");
            if (self->_infoList->_count > 1) {
                for (int i = 1; i < self->_infoList->_count; i++) {
                    igObject *info = item<igObject>(self->_infoList, i);
                    igMetaObject *sceneMeta = *reinterpret_cast<igMetaObject **>(igSceneInfo_meta);
                    if (sceneMeta != metaOf(info)) continue;
                    igNode *graph = static_cast<igSceneInfo *>(info)->_sceneGraph;
                    fn_80305EA8(self->_messenger, "LAYERCTL");
                    fn_80306FDC(self->_messenger, nameOf(graph));
                    fn_80305A28(self->_messenger, "GETLAYERNODE");
                    if (fn_80306E1C(self->_messenger) > 0) fn_801EAC44(fn_80306FB4(self->_messenger, 0), graph);
                }
            }
        }
        self->_proc = 7;
        break;
    case 7: {
        fn_80305F58(self->_messenger, "TEXTCTL", "INITIALIZE");
        beLua *lua = luaOf(self);
        if (lua) {
            char directory[32];
            sprintf(directory, "%s/lua", self->_system->_stageName);
            fn_80301FA4(lua, "start.lua", directory);
        }
        self->_proc = 8;
        break;
    }
    case 8:
        self->_system->_isActive = true;
        self->_proc = 9;
        break;
    case 9: {
        beLua *lua = luaOf(self);
        if (lua) {
            char directory[32];
            sprintf(directory, "%s/lua", self->_system->_stageName);
            fn_80301FA4(lua, "first.lua", directory);
        }
        self->_proc = -1;
        POOLED_REF(stage08, "stagIS08");
        POOLED_REF(stage09, "stagIS09");
        POOLED_REF(stage10, "stagIS10");
        POOLED_REF(stage12, "stagIS12");
        POOLED_REF(stage, self->_system->_stageName);
        if (stage.getString() != stage08.getString() && stage.getString() != stage09.getString() &&
            stage.getString() != stage10.getString() && stage.getString() != stage12.getString())
            self->_system->_isSResetEnable = true;
        break;
    }
    }
}

}
