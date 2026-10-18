// fn_802C64EC: the deleting destructor of beModelCtrlInfoWork. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(beModelCtrlInfoWork)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct beModelCtrlInfoWorkObject {
    void *__vtable;
    char unknown04[4];
    igObjectRefMember _mHp;
    igObjectRefMember _hp;
    char unknown10[4];
    igStringMember _seqCodeName;
    igObjectRefMember _comData;
    char unknown1C[8];
    igObjectRefMember _labelSeqList;
    igObjectRefMember _labelNameList;
    igObjectRefMember _labelOffsetList;
    igStringMember _luaBHit;
    igStringMember _luaWHit;
    igStringMember _luaFHit;
    char unknown3C[12];
    igObjectRefMember _pdMoveDataList;
    igStringMember _wCheckName;
    igObjectRefMember _aI;
    char unknown54[4];
    igStringMember _targetMode;
    igStringMember _targetKind;
    igStringMember _targetSpc1;
    char unknown64[16];
    igStringMember _keyEventName;
    char unknown78[52];
    igObjectRefMember _posLockNode;
    igObjectRefMember _posLockTrc;
    igStringMember _posLockModelName;
    igStringMember _posLockBoneName;
    char unknownBC[12];
    igObjectRefMember _moveObjectList;
    igObjectRefMember _rideOnData;
    igObjectRefMember _debugHitBoxNode;
    igObjectRefMember _hitBody;
    char unknownD8[4];
    igStringMember _hitParentName;
    char unknownE0[4];
    igObjectRefMember _subCommand;
    igObjectRefMember _baseAABox;
};

extern "C" beModelCtrlInfoWorkObject *fn_802C64EC(beModelCtrlInfoWorkObject *self, short flags)
{
    if (self) {
        self->__vtable = beModelCtrlInfoWork_vtable;
        self->_baseAABox.~igObjectRefMember();
        self->_subCommand.~igObjectRefMember();
        self->_hitParentName.~igStringMember();
        self->_hitBody.~igObjectRefMember();
        self->_debugHitBoxNode.~igObjectRefMember();
        self->_rideOnData.~igObjectRefMember();
        self->_moveObjectList.~igObjectRefMember();
        self->_posLockBoneName.~igStringMember();
        self->_posLockModelName.~igStringMember();
        self->_posLockTrc.~igObjectRefMember();
        self->_posLockNode.~igObjectRefMember();
        self->_keyEventName.~igStringMember();
        self->_targetSpc1.~igStringMember();
        self->_targetKind.~igStringMember();
        self->_targetMode.~igStringMember();
        self->_aI.~igObjectRefMember();
        self->_wCheckName.~igStringMember();
        self->_pdMoveDataList.~igObjectRefMember();
        self->_luaFHit.~igStringMember();
        self->_luaWHit.~igStringMember();
        self->_luaBHit.~igStringMember();
        self->_labelOffsetList.~igObjectRefMember();
        self->_labelNameList.~igObjectRefMember();
        self->_labelSeqList.~igObjectRefMember();
        self->_comData.~igObjectRefMember();
        self->_seqCodeName.~igStringMember();
        self->_hp.~igObjectRefMember();
        self->_mHp.~igObjectRefMember();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
