// beNDMWMdlPlayer: the attacks' wait checks (0x8034D214..0x8034D61C).
#include "beNDMWMdlPlayer.h"

#pragma auto_inline off

extern "C" {

// The wait checks of the attacks. Atck01: when the ACTION command ends, the commands continue, or SQ_WAIT plays
// if the attack button was let go meanwhile. Atck02: letting the button go plays SQ_WAIT; the commands continue
// when the ACTION command ends. Atck03: the commands continue when the button is let go.
void beNDMWMdlPlayer_virtualA4(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    beModelCtrlInfo *info = static_cast<beModelCtrlInfo *>(ram->_parentInfo);
    beNDMWMdlPlayerInfoWork *work = playerWork(ram, pool);
    int held = 0;
    if (work->_isOnCtrl) held = bePadManager_getPad(self->_padManager, ram->_ramNo)->_button;
    if (strcmp(work->_wCheckName, pool.Atck01) == 0) {
        switch (work->_wCheckSt) {
        case 0:
            work->_wCheckMode = 0;
            work->_wCheckSt = 1;
        case 1:
            if (!(held & BUTTON_ATTACK)) work->_wCheckMode = 1;
            int ramNo = ram->_ramNo;
            fn_80305ED0(self->_messenger, pool.ACTION, nameOf(info), ramNo, pool.ISCOMEND);
            if (fn_80306A1C(self->_messenger, 0)) {
                setString(work->_wCheckName, 0);
                work->_wCheckSt = 0;
                if (work->_wCheckMode == 0) fn_8030C3AC(self, info, ram, work);
                else virtuals(self)->handleMessage(ram, pool.SQ_WAIT);
            }
            break;
        }
    } else if (strcmp(work->_wCheckName, pool.Atck02) == 0) {
        if (!(held & BUTTON_ATTACK)) virtuals(self)->handleMessage(ram, pool.SQ_WAIT);
        int ramNo = ram->_ramNo;
        fn_80305ED0(self->_messenger, pool.ACTION, nameOf(info), ramNo, pool.ISCOMEND);
        if (fn_80306A1C(self->_messenger, 0)) {
            setString(work->_wCheckName, 0);
            fn_8030C3AC(self, info, ram, work);
        }
    } else if (strcmp(work->_wCheckName, pool.Atck03) == 0) {
        if (!(held & BUTTON_ATTACK)) {
            setString(work->_wCheckName, 0);
            fn_8030C3AC(self, info, ram, work);
        }
    }
}

}
