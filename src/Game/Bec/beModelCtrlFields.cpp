// beModelCtrl: the base class's empty virtuals and the reflected classes' field setters, emitted out of line at the end of the original file (0x8030F218..0x8030F9C0).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

void beModelCtrl_virtualBC(beModelCtrl *, beBaseInfoRam *) {}             // 0xBC: ACTION1

void beModelCtrl_virtualB8(beModelCtrl *, beBaseInfoRam *) {}             // 0xB8: after a sequence starts

void fn_8030F220(beModelCtrlInfoWork *work, const char *script) { setString(work->_luaFHit, script); }

void fn_8030F2C8(beModelCtrlInfoWork *work, const char *script) { setString(work->_luaWHit, script); }

void fn_8030F370(beModelCtrlInfoWork *work, const char *script) { setString(work->_luaBHit, script); }

void fn_8030F418(beModelCtrlInfoWork *work, const char *check) { setString(work->_wCheckName, check); }

void fn_8030F4C0(beModelCtrlInfoWork *work, beModelCtrlData *data) { setRef(work->_comData, data); }

void fn_8030F530(beModelCtrlInfoWork *work, const char *sequence) { setString(work->_seqCodeName, sequence); }

void beModelCtrl_virtualB4(beModelCtrl *, beBaseInfoRam *) {}             // 0xB4: SQ_ERAS

void fn_8030F5DC(beModelCtrlInfoWork *work, beModelCtrlInfoHitBody *body) { setRef(work->_hitBody, body); }

void beModelCtrl_virtualAC(beModelCtrl *, beBaseInfoRam *) {}             // 0xAC: ONFREEZE

void beModelCtrl_virtualA8(beModelCtrl *, beBaseInfoRam *) {}             // 0xA8: OFCTRL

void fn_8030F654(beModelCtrlInfoRamData *data, beModelCtrlInfoWork *work) { setRef(data->_work, work); }

void beModelCtrl_virtualB0(beModelCtrl *, beBaseInfoRam *) {}             // 0xB0: REMOVE

void fn_8030F6C8(beModelCtrlInfoWork *work, beModelCtrlInfoAI *ai) { setRef(work->_aI, ai); }

void fn_8030F738(igNode *node, igVolume *bound) { setRef(node->_bound, bound); }

void fn_8030F7A8(beModelCtrlInfoWork *work, igAABox *box) { setRef(work->_baseAABox, box); }

igStringRef *fn_8030F818(igStringRef *ref, const char *text)
{
    *ref = text;
    return ref;
}

bool beModelCtrl_virtualC4(beModelCtrl *, beBaseInfoRam *, const char *) { return false; }   // 0xC4: no subclass messages

beBaseInfoData *fn_8030F8CC(beBaseInfoRam *ram, const char *name)
{
    ensureDataList(ram);
    return static_cast<beBaseInfoData *>(fn_800695CC(ram->_dataList, nameField(), name));
}

}
