// beNDMWMdlPlayer: closing the panel (OFCTRL, ONFREEZE, REMOVE, the damage sequences), the number icon,
// leaving a background chip, and the class (0x8034DF40..0x8034E6DC).
#include "beNDMWMdlPlayer.h"

#pragma auto_inline off

extern "C" {

// OFCTRL: closes the player's panel.
void beNDMWMdlPlayer_virtualA8(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    closePanel(self, ram, playerWork(ram, pool), pool);
}

// ONFREEZE: closes the player's panel.
void beNDMWMdlPlayer_virtualAC(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    closePanel(self, ram, playerWork(ram, pool), pool);
}

// After a sequence starts. SQ_WAIT shows the player's number icon (i_pcnumic, SQ_OPENP<n>) over the player; a
// sequence of PanelCloseSeqList (the damage, death, sleep and stun sequences) closes the panel.
void beNDMWMdlPlayer_virtualB8(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    beBaseInfo *info = ram->_parentInfo;
    beNDMWMdlPlayerInfoWork *work = playerWork(ram, pool);
    if (strcmp(work->_seqCodeName, pool.SQ_WAIT) == 0) {
        int ramNo = ram->_ramNo;
        fn_80305344(self->_messenger, pool.MODELCTRL, nameOf(info), ramNo);
        fn_80306FDC(self->_messenger, pool.i_pcnumic);
        char sequence[12];
        sprintf(sequence, pool.SQ_OPENP_d, ram->_ramNo);
        fn_80306FDC(self->_messenger, sequence);
        fn_80306B28(self->_messenger, pool.iconScale);
        float offset[3];
        offset[0] = pool.zero;
        offset[1] = pool.iconHeight;
        offset[2] = pool.zero;
        fn_80306C84(self->_messenger, offset);
        fn_80306964(self->_messenger, true);
        fn_80306964(self->_messenger, true);
        fn_80305A28(self->_messenger, pool.SETEFFECT);
    }
    if (work->_isPanel) {
        unsigned int value;
        igResult found(fn_800633C8(fn_80338AB0(), work->_seqCodeName, &value));
        if (found.value == kSuccess__3Gap.value) {
            work->_isPanel = false;
            fn_80305ED0(self->_messenger, pool.NDMWPANEL, 0, ram->_ramNo, pool.REMOVE);
        }
    }
    fn_803AE1A4(self, ram);
}

// SQ_ERAS: the player leaves a background chip (g_000bcaps) where it stood, which plays the player's entry
// sequence; when the chip runs, the game RAM deposits the player's bits and part of its experience in it
// (BKCHIPBITEXP: the Digimon's name, all the bits, a level-dependent share of the experience). Closes the panel.
void beNDMWMdlPlayer_virtualB4(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    beModelCtrlInfoRamData *data = ramDataOf(ram, pool.ONE);
    beNDMWMdlPlayerInfoWork *work = static_cast<beNDMWMdlPlayerInfoWork *>(data->_work);
    fn_80305344(self->_messenger, pool.MODELCTRL, pool.g_000bcaps, ram->_ramNo);
    fn_80306D68(self->_messenger, data->_node->_m);
    fn_80306FDC(self->_messenger, lbl_804E7CA4[ram->_ramNo]);
    fn_80305A28(self->_messenger, pool.GENERATE);
    fn_80305ED0(self->_messenger, pool.MODELCTRL, pool.g_000bcaps, ram->_ramNo, pool.ISRUN);
    if (fn_8030690C(self->_messenger) != 0 && fn_80306A1C(self->_messenger, 0) == true) {
        fn_80305EA8(self->_messenger, pool.GAMERAM);
        fn_80306A40(self->_messenger, ram->_ramNo);
        fn_80305A28(self->_messenger, pool.BKCHIPBITEXP);
    }
    closePanel(self, ram, work, pool);
}

// REMOVE: closes the player's panel.
void beNDMWMdlPlayer_virtualB0(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    closePanel(self, ram, playerWork(ram, pool), pool);
}

igMetaObject *beNDMWMdlPlayer_virtual58(beNDMWMdlPlayer *) { return metaVar(beNDMWMdlPlayer_meta); }

}
