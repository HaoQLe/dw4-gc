// beModelCtrl: the model controller. This file: finding its managers, the info class, taking infos (0x803082A4..0x803083CC).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Finds the managers the controller works with: the Lua manager and the target object.
void beModelCtrl_virtual88(beModelCtrl *self)
{
    if (!self->_luaManager) self->_luaManager = static_cast<beLua *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beLua_meta)));
    if (!self->_targetObj) self->_targetObj = static_cast<beTargetObj *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(beTargetObj_meta)));
}

// The class of the infos the controller takes.
void *beModelCtrl_virtual80(beModelCtrl *) { return *reinterpret_cast<void **>(beModelCtrlInfo_meta); }

// Takes a beModelCtrlInfo of a kind this controller handles.
bool beModelCtrl_virtual6C(beModelCtrl *self, igObject *info)
{
    igMetaObject *meta = virtuals(self)->infoMeta();
    if (meta == metaOf(info) && virtuals(self)->isKind(static_cast<beModelCtrlInfo *>(info)->_kindString) == true) {
        fn_802F251C(self, info);
        return true;
    }
    return false;
}

}
