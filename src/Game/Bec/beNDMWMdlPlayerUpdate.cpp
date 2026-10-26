// beNDMWMdlPlayer: a player's per-frame step: turning, the buttons and the panels (0x8034C3C8..0x8034D1A0).
#include "beNDMWMdlPlayer.h"

#pragma auto_inline off

extern "C" {

// Each frame: the stick turns the player relative to the camera (touching all eight
// directions within a slot's 30 frames, a full turn, arms the second attack); the buttons act. Outside the main lobby, guard is pressed, and while it is held a
// stick flick repeated within bodyAttackTime is the body attack (SQ_ATCK3). Nothing else acts while jumping or
// falling. With a panel open, the panel reports the item or technique chosen (ISCHECK); without one, the
// buttons open the panels, attack (in the main lobby, a hit box instead), or open the status window.
void beNDMWMdlPlayer_virtualA0(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    beNDMWMdlPlayerInfoWork *work = playerWork(ram, pool);
    bePadData *pad = bePadManager_getPad(self->_padManager, ram->_ramNo);
    float cameraAngle;
    int stick = pad->_lStk;
    bool fullTurn = false;
    float stickX = pad->_LStick[0];
    float stickY = pad->_LStick[1];
    if (stick != 0) {
        igIntList *timers = work->_turnAtkTimer;
        int slot = lbl_804E7BF0[stick];
        if (slot != -1) setValueAt(timers, slot, lbl_804E7C30[0]);
        int count = 0;
        for (int i = 0; i < 8; i++) {
            int timer = static_cast<int *>(timers->_data)[i];
            if (timer > 0) {
                setValueAt(timers, i, timer - 1);
                count++;
            }
        }
        if (count >= 8) fullTurn = true;
        Matrix44 view;
        fn_8012A92C(view.m, reinterpret_cast<const float *>(*reinterpret_cast<char **>(reinterpret_cast<char *>(self->_viewerSIManager) + 0x14) + 0x6C));
        float forward[3];
        fn_8012D434(forward, lbl_804F8B10, view.m);
        cameraAngle = atan2(forward[0], forward[2]);
        work->_targetDirection[1] = cameraAngle + (float)atan2(stickX, -stickY);
        work->_keyInput = true;
    } else {
        work->_keyInput = false;
    }
    int pressed = pad->_trigger;
    int held = pad->_button;
    if (!work->_isMainLobby) {
        if (strcmp(work->_seqCodeName, pool.SQ_JUMP) != 0 && (pressed & BUTTON_GUARD)) setString(work->_keyEventName, pool.SQ_GUARD);
        if (held & BUTTON_GUARD) {
            float timer = work->_bodyAtkTimer;
            if (timer > pool.zero) {
                timer -= self->_system->_frameTimeF;
                if (timer >= pool.zero) work->_bodyAtkTimer = timer;
                else work->_bodyAtkTimer = pool.zero;
            }
            switch (work->_bodyAtkSt0) {
            case 0:
                if (!work->_keyInput) work->_bodyAtkSt0 = 1;
                break;
            case 1:
                if (work->_keyInput == true) {
                    work->_bodyAtkTimer = pool.bodyAttackTime;
                    work->_bodyAtkPad = stick;
                    work->_bodyAtkSt0 = 2;
                }
                break;
            case 2:
                if (pool.zero == work->_bodyAtkTimer) work->_bodyAtkSt0 = 0;
                else if (!work->_keyInput) work->_bodyAtkSt0 = 3;
                break;
            case 3:
                if (pool.zero == work->_bodyAtkTimer) {
                    work->_bodyAtkSt0 = 0;
                } else if (work->_keyInput) {
                    if (stick == work->_bodyAtkPad && strcmp(work->_seqCodeName, pool.SQ_JUMP) != 0 && strcmp(work->_seqCodeName, pool.SQ_FALL) != 0) {
                        setString(work->_keyEventName, pool.SQ_ATCK3);
                        work->_ctrlSt0 = 0;
                        work->_ctrlSt1 = 0;
                    }
                    work->_bodyAtkSt0 = 0;
                }
                break;
            }
        } else {
            work->_bodyAtkSt0 = 0;
        }
    }
    if (strcmp(work->_seqCodeName, pool.SQ_JUMP) != 0 && strcmp(work->_seqCodeName, pool.SQ_FALL) != 0) {
        if (work->_isPanel) {
            bool chosen = false;
            fn_80305ED0(self->_messenger, pool.NDMWPANEL, 0, ram->_ramNo, pool.ISCHECK);
            if (fn_8030690C(self->_messenger) == 0 || !fn_80306A1C(self->_messenger, 0)) {
                work->_isPanel = false;
            } else if (fn_80306A1C(self->_messenger, 2)) {
                if (fn_80306A1C(self->_messenger, 1)) {
                    setString(work->_keyEventName, pool.SQ_ITEM);
                } else {
                    const char *label = fn_8030709C(self->_messenger, 0);
                    fn_8030B014(self, ram, work, pool.SQ_WAZA, label);
                    setString(work->_keyEventName, pool.SQ_WAZA);
                }
                chosen = true;
            }
            if (!chosen) {
                if (pressed & BUTTON_JUMP) setString(work->_keyEventName, pool.SQ_JUMP);
                else if (pressed & BUTTON_HEAL) openPanel(self, ram, work, pool, pool.GENEEMGHEAL);
                else if (!work->_keyInput && !(held & ~BUTTON_STATUS) && (pressed & BUTTON_STATUS)) playCursorNG(self, pool);
            }
        } else {
            if (pressed & BUTTON_JUMP) {
                setString(work->_keyEventName, pool.SQ_JUMP);
            } else if (pressed & BUTTON_HEAL) {
                openPanel(self, ram, work, pool, pool.GENEEMGHEAL);
            } else if ((pressed & BUTTON_ITEM) && !work->_isPanel) {
                openPanel(self, ram, work, pool, pool.GENERATEITEM);
            } else if ((pressed & BUTTON_WAZA) && !work->_isPanel) {
                openPanel(self, ram, work, pool, pool.GENERATEWAZA);
            } else if ((pressed & BUTTON_STAT) && !work->_isPanel) {
                openPanel(self, ram, work, pool, pool.GENERATESTAT);
            } else if (pressed & BUTTON_ATTACK) {
                if (work->_isMainLobby) {
                    // In the main lobby an attack is only a hit box ("Set": kind 60000, frames 1 to 2, a 3-unit box
                    // 4 up and 7 ahead).
                    Ref<beModelCtrlHITBOX> hitBox(beModelCtrlHITBOX_create(poolFor(self, lbl_8056225C)), Ref<beModelCtrlHITBOX>::adopt);
                    fn_80066490(hitBox, pool.Set);
                    hitBox->_kind = 60000;
                    hitBox->_start = pool.one;
                    hitBox->_length = pool.one;
                    hitBox->_offset[0] = pool.zero;
                    hitBox->_offset[1] = pool.four;
                    hitBox->_offset[2] = pool.seven;
                    hitBox->_boxSize[0] = pool.three;
                    hitBox->_boxSize[1] = pool.three;
                    hitBox->_boxSize[2] = pool.three;
                    fn_80310DAC(work->_subCommand, hitBox);
                } else {
                    // An item on the ground takes the button first (DROPITEM ACTION1); else the attack, once the
                    // previous one's delay is over. The delay is the player's ATTACKDELAY (in frames), shown by the
                    // status panel's meter.
                    fn_80305EA8(self->_messenger, pool.DROPITEM);
                    fn_80306A40(self->_messenger, ram->_ramNo);
                    fn_80306900(self->_messenger, true);
                    fn_80305A28(self->_messenger, pool.ACTION1);
                    if (fn_8030690C(self->_messenger) == 0 && fn_8031E238(ram, pool.ATDELAY)) {
                        if (fullTurn) {
                            setString(work->_keyEventName, pool.SQ_ATCK2);
                            igIntList *timers = work->_turnAtkTimer;
                            if (timers->_count != 0) memset(timers->_data, 0, timers->_count * 4);
                        } else {
                            setString(work->_keyEventName, pool.SQ_ATCK1);
                        }
                        int delay = fn_8031F3CC(item<igObject>(self->_gameRam->_playerDataListList, ram->_ramNo), pool.ATTACKDELAY)->_data;
                        fn_8031DE44(ram, pool.ATDELAY, (long long)delay * 1000000000 / 60);
                        fn_80305ED0(self->_messenger, pool.MODELCTRL, pool.i_stpnl05, ram->_ramNo, lbl_804E7C34[(delay - 22) / 4]);
                    }
                }
            } else if (!work->_keyInput && !(held & ~BUTTON_STATUS) && (pressed & BUTTON_STATUS)) {
                fn_80305ED0(self->_messenger, pool.NDMWPANEL, 0, -1, pool.ISRUN);
                if (fn_8030690C(self->_messenger) != 0 && fn_80306A1C(self->_messenger, 0) == true) {
                    playCursorNG(self, pool);
                } else {
                    fn_80305344(self->_messenger, pool.SUBWND, 0, 0);
                    fn_80306A40(self->_messenger, ram->_ramNo);
                    fn_80306FDC(self->_messenger, pool.STATUS);
                    fn_80305A28(self->_messenger, pool.GENERATE);
                }
            }
        }
    }
}

}
