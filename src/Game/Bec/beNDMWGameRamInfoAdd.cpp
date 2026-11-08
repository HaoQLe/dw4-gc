// beNDMWGameRam: creating the game RAM's own info and RAM (0x8036D7EC..0x8036D93C).
#include "beNDMWGameRam.h"

#pragma auto_inline off

extern "C" {

// Creates the manager's one info ("gameram") with its one RAM the first time, and announces the RAM with
// GAMERAM.
int beNDMWGameRam_virtual6C(beNDMWGameRam *self)
{
    if (self->_infoList->_count == 0) {
        Ref<beNDMWGameRamInfo> info(beNDMWGameRamInfo_create(poolFor(self, lbl_8056225C)), Ref<beNDMWGameRamInfo>::adopt);
        Ref<beNDMWGameRamInfoRam> ram(beNDMWGameRamInfoRam_create(poolFor(self, lbl_8056225C)), Ref<beNDMWGameRamInfoRam>::adopt);
        fn_80066490(info, lbl_80459278);
        ram->_parentInfo = info;
        ram->_parentManager = self;
        ram->_st0 = 0;
        ram->_st3 = 0;
        ram->_st2 = 0;
        ram->_st1 = 0;
        ram->_ramNo = 0;
        ram->_isRun = true;
        fn_80069128(info->_ramList, ram);
        fn_80069128(self->_infoList, info);
        fn_80305308(self->_messenger, ram, lbl_80459280);
    }
    return 0;
}

}
