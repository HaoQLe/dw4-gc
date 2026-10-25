// beModelCtrl: starting a model RAM (0x803083CC..0x803084B4).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Starts a model RAM: registers it for the controller's messages, and for the hit messages its info's HIT data
// asks for.
void beModelCtrl_virtual7C(beModelCtrl *self, beBaseInfoRam *ram)
{
    const beModelCtrlPool &mc = MC;
    beBaseInfo *info = ram->_parentInfo;
    fn_80305308(self->_messenger, ram, mc.MODELCTRL);
    beModelCtrlInfoDataHit *hit = static_cast<beModelCtrlInfoDataHit *>(fn_800695CC(info->_dataList, nameField(), mc.HIT));
    if (hit) {
        if (hit->_isHitPlayerBullet) fn_80305308(self->_messenger, ram, mc.HITPLAYERBULLET);
        if (hit->_isHitPlayerTalk) fn_80305308(self->_messenger, ram, mc.HITPLAYERTALK);
        if (hit->_isHitEnemyBullet) fn_80305308(self->_messenger, ram, mc.HITENEMYBULLET);
    }
    virtuals(self)->ramStarted(ram);
}

}
