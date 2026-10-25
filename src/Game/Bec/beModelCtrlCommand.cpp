// beModelCtrl: commands, wait checks and the command runner (0x8030BCB0..0x8030C85C).
#include "beModelCtrl.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// An MSGBOX command: nothing to do here.
bool fn_8030BCB0(beModelCtrl *, beModelCtrlInfo *, beModelCtrlInfoWork *, igNamedObject *) { return true; }

// A SEQ command: plays the named sequence.
bool fn_8030BCB8(beModelCtrl *self, beBaseInfoRam *ram, igNamedObject *command)
{
    virtuals(self)->handleMessage(ram, nameOrEmpty(command));
    return true;
}

// A WCHECK command: the next commands wait until the named check passes (TurnY, Landing, Action, Moving,
// Rotation).
bool fn_8030BCFC(beModelCtrl *, beModelCtrlInfoWork *work, igNamedObject *command)
{
    setString(work->_wCheckName, nameOrEmpty(command));
    return false;
}

// The wait check: TurnY and Landing wait for the vertical move, Action for the ACTION manager's command to
// end, Moving for the translations and Rotation for the turn; then the commands continue. Without a check the
// subclass's step runs (virtual 0xA4).
void fn_8030BDB8(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work)
{
    const beModelCtrlPool &mc = MC;
    if (strcmp(work->_wCheckName, mc.TurnY) == 0 || strcmp(work->_wCheckName, mc.Landing) == 0) {
        if (!fn_8030A0A0(self, ram, work, 2)) {
            setString(work->_wCheckName, 0);
            fn_8030C3AC(self, info, ram, work);
        }
    } else if (strcmp(work->_wCheckName, mc.Action) == 0) {
        int ramNo = ram->_ramNo;
        fn_80305ED0(self->_messenger, mc.ACTION, nameOrEmpty(info), ramNo, mc.ISCOMEND);
        if (fn_80306A1C(self->_messenger, 0)) {
            setString(work->_wCheckName, 0);
            fn_8030C3AC(self, info, ram, work);
        }
    } else if (strcmp(work->_wCheckName, mc.Moving) == 0) {
        if (!fn_8030A0A0(self, ram, work, 0)) {
            setString(work->_wCheckName, 0);
            fn_8030C3AC(self, info, ram, work);
        }
    } else if (strcmp(work->_wCheckName, mc.Rotation) == 0) {
        if (!fn_8030A0A0(self, ram, work, 1)) {
            setString(work->_wCheckName, 0);
            fn_8030C3AC(self, info, ram, work);
        }
    } else {
        virtuals(self)->step(ram);
    }
}

void beModelCtrl_virtualA4(beModelCtrl *, beBaseInfoRam *) {}             // 0xA4: the step when no check waits

// A HITBOX command: AllClear removes the hit-box subcommands, Set adds one.
bool fn_8030C134(beModelCtrl *, beBaseInfoRam *ram, beModelCtrlInfoWork *work, igNamedObject *command)
{
    if (strcmp(nameOrEmpty(command), kAllClear) == 0) fn_80310A68(work->_subCommand, ram, metaVar(beModelCtrlSCHitBox_meta));
    else if (strcmp(nameOrEmpty(command), kSet) == 0) fn_80310DAC(work->_subCommand, command);
    return true;
}

// A MUTEKI command: OFFWALL, ONWALL, OFFFLOOR and ONFLOOR switch the wall and floor checks; any other name makes
// the model invincible for the command's frames.
bool fn_8030C1F0(beModelCtrl *, beBaseInfoRam *ram, beModelCtrlInfoWork *work, beModelCtrlMUTEKI *command)
{
    const beModelCtrlPool &mc = MC;
    if (!fn_8031E138(ram, mc.KEIKATIMER)) fn_8031DE44(ram, mc.KEIKATIMER, 0);
    if (strcmp(nameOrEmpty(command), mc.OFFWALL) == 0) work->_isWallCheck = false;
    else if (strcmp(nameOrEmpty(command), mc.ONWALL) == 0) work->_isWallCheck = true;
    else if (strcmp(nameOrEmpty(command), mc.OFFFLOOR) == 0) work->_isFloorCheck = false;
    else if (strcmp(nameOrEmpty(command), mc.ONFLOOR) == 0) work->_isFloorCheck = true;
    else work->_mutekiCount = command->_frame;
    return true;
}

// Counts the invincibility frames down.
void fn_8030C334(beModelCtrl *, beBaseInfoRam *ram, beModelCtrlInfoWork *work)
{
    float count = work->_mutekiCount;
    if (count > kZero) {
        float left = count - fn_8031E4C4(ram, kKEIKATIMER);
        if (left < kZero) left = kZero;
        work->_mutekiCount = left;
    }
}

// Runs the current sequence's commands from the command index, each by its class, until one waits (returns
// false) or a JUMP plays another sequence. A LABEL waits once.
void fn_8030C3AC(beModelCtrl *self, beModelCtrlInfo *info, beBaseInfoRam *ram, beModelCtrlInfoWork *work)
{
    bool jumped = false;
    int index = work->_comIndex;
    beModelCtrlData *data = work->_comData;
    while (index != data->_comList->_count) {
        igNamedObject *command = item<igNamedObject>(data->_comList, index);
        bool next = true;
        if (isA(command, beModelCtrlCTRL_meta)) {
            next = fn_80308EC0(self, work, command);
            index++;
        } else if (isA(command, beModelCtrlACTION_meta)) {
            next = fn_8030943C(self, info, ram, command);
            index++;
        } else if (isA(command, beModelCtrlMOVE_meta)) {
            next = fn_8030A6BC(self, ram, work, command);
            index++;
        } else if (isA(command, beModelCtrlMOVEEX_meta)) {
            next = fn_8030A6BC(self, ram, work, command);
            index++;
        } else if (isA(command, beModelCtrlMOVERL_meta)) {
            next = fn_8030A6BC(self, ram, work, command);
            index++;
        } else if (isA(command, beModelCtrlPDMOVE_meta)) {
            next = fn_8030AEE0(self, ram, work, static_cast<beModelCtrlPDMOVE *>(command));
            index++;
        } else if (isA(command, beModelCtrlWCHECK_meta)) {
            next = fn_8030BCFC(self, work, command);
            index++;
        } else if (isA(command, beModelCtrlHITBOX_meta)) {
            next = fn_8030C134(self, ram, work, command);
            index++;
        } else if (isA(command, beModelCtrlMUTEKI_meta)) {
            next = fn_8030C1F0(self, ram, work, static_cast<beModelCtrlMUTEKI *>(command));
            index++;
        } else if (isA(command, beModelCtrlLABELCTRL_meta)) {
            next = fn_8030B6B0(self, ram, work, static_cast<beModelCtrlLABELCTRL *>(command));
            index++;
        } else if (isA(command, beModelCtrlLUACALL_meta)) {
            next = fn_8030B8A4(self, info, ram, work, static_cast<beModelCtrlLUACALL *>(command));
            index++;
        } else if (isA(command, beModelCtrlAIMAP_meta)) {
            next = fn_8030BB3C(self, info, ram, work, command);
            index++;
        } else if (isA(command, beModelCtrlMSGBOX_meta)) {
            next = fn_8030BCB0(self, info, work, command);
            index++;
        } else if (isA(command, beModelCtrlLABEL_meta)) {
            if (work->_comLabelCount != 0) {
                next = false;
            } else {
                index++;
                work->_comLabelCount = 1;
            }
        } else if (isA(command, beModelCtrlJUMP_meta)) {
            jumped = fn_8030BCB8(self, ram, command);
        }
        if (jumped || !next) break;
    }
    if (!jumped) work->_comIndex = index;
}

}
