// beNDMWMdlPlayer: building a player RAM's work and the status panel (0x8034D61C..0x8034DF40).
#include "beNDMWMdlPlayer.h"

#pragma auto_inline off

extern "C" {

// Builds a player RAM's work: the turn-attack slots, its place (at the stage's player point when no position is
// given), its HP and MP from the game RAM (refilled when HP is 0), the stat changes cleared, the game start for a
// player not in use yet, its arms, and the status panel's level, HP and MP; players are metal in some
// dungeons, and the main lobby's stages are marked.
void beNDMWMdlPlayer_virtual98(beNDMWMdlPlayer *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayerPool &pool = lbl_80456EA0;
    beBaseInfo *info = ram->_parentInfo;
    beModelCtrlInfoRamData *data = ramDataOf(ram, pool.ONE);
    beNDMWMdlPlayerInfoWork *work;
    {
        beNDMWMdlPlayerInfoWork *created = beNDMWMdlPlayerInfoWork_create(poolFor(self, lbl_8056225C));
        Ref<beNDMWMdlPlayerInfoWork> holder(created);
        if (data->_work) release(data->_work);
        data->_work = created;
        work = holder;
        work->_isPlayer = true;
        work->_directionLimiter[0] = pool.zero;
        work->_directionLimiter[1] = pool.seven;
        work->_directionLimiter[2] = pool.zero;
        Ref<igIntList> timers(igIntList_create(poolFor(self, lbl_8056225C)), Ref<igIntList>::adopt);
        if (timers->_count <= 8) fn_8004155C(timers, 8, 4);
        if (timers->_capacity >= 8) timers->_count = 8;
        else fn_80041660(timers, 8, 4);
        if (timers->_count != 0) memset(timers->_data, 0, timers->_count * 4);
        setRef(work->_turnAtkTimer, static_cast<igIntList *>(timers));
    }
    if (fn_80306C74(self->_messenger) == 0 && fn_80306D58(self->_messenger) == 0) {
        Matrix44 matrix;
        fn_80306604(self->_messenger);
        fn_80305EA8(self->_messenger, pool.PLAYERPOINT);
        fn_80306A40(self->_messenger, 0);
        fn_80306A40(self->_messenger, ram->_ramNo);
        fn_80305A28(self->_messenger, pool.GETMATRIX);
        if (fn_80306D58(self->_messenger) != 0) matrix = fn_80306DE8(self->_messenger, 0);
        fn_803067A0(self->_messenger);
        fn_80306D68(self->_messenger, matrix.m);
    }
    fn_8030D610(self, ram);
    fn_80305EA8(self->_messenger, pool.GAMERAM);
    fn_80306A40(self->_messenger, ram->_ramNo);
    fn_80305A28(self->_messenger, pool.GETPLAYER);
    igObject *player = fn_80306FB4(self->_messenger, 0);
    setRef(work->_hp, fn_8031F3CC(player, pool.HP));
    setRef(work->_mHp, fn_8031F3CC(player, pool.MHP));
    if (work->_hp->_data == 0) {
        fn_8031F3CC(player, pool.HP)->_data = fn_8031F3CC(player, pool.MHP)->_data;
        fn_8031F3CC(player, pool.MP)->_data = fn_8031F3CC(player, pool.MMP)->_data;
    }
    for (int i = 0; i < 7; i++) setValueAt(fn_8031F3FC(player, pool.UPDATA)->_data, i, lbl_804E7C68[0]);
    for (int i = 0; i < 6; i++) setValueAt(fn_8031F3FC(player, pool.DOWNDATA)->_data, i, lbl_804E7C6C[0]);
    if (!fn_8031F42C(player, pool.ISUSE)->_data) {
        fn_80305EA8(self->_messenger, pool.GAMERAM);
        fn_80306A40(self->_messenger, ram->_ramNo);
        fn_80306FDC(self->_messenger, nameOf(info));
        fn_80306FDC(self->_messenger, lbl_804E7C70[ram->_ramNo]);
        fn_80305A28(self->_messenger, pool.GAMESTART);
        igBoolList *bases = fn_8031F45C(player, pool.BASE_ISUSE)->_data;
        int i = 0;
        int count = bases->_count;
        bool *base = static_cast<bool *>(bases->_data);
        for (; i < count; i++) base[i] = lbl_80561408;
    }
    if (fn_8031F4BC(player, pool.POWERSOCKETNAME)->_data->_count != 0) {
        const igStringRef &arms = fn_800218F4(fn_8031F4BC(player, pool.POWERSOCKETNAME)->_data, 0);
        fn_8030650C(self->_messenger, pool.PLAYERARMS, arms.getString(), ram->_ramNo, pool.GENERATE, 1);
    }
    fn_80305EA8(self->_messenger, pool.GAMERAM);
    fn_80306A40(self->_messenger, ram->_ramNo);
    fn_80305A28(self->_messenger, pool.RECALCPLAYER);
    fn_80305344(self->_messenger, pool.NUMBERCTRL, pool.lvnm, ram->_ramNo);
    fn_80306A40(self->_messenger, fn_8031F3CC(player, pool.LEVEL)->_data);
    fn_80305A28(self->_messenger, pool.SETVALUE);
    fn_80305344(self->_messenger, pool.METERCTRL, pool.hpmt, ram->_ramNo);
    int maxHp = fn_8031F3CC(player, pool.MHP)->_data;
    int hp = fn_8031F3CC(player, pool.HP)->_data;
    fn_80306B28(self->_messenger, pool.hundred * hp / maxHp);
    fn_80305A28(self->_messenger, pool.SETPERCENT);
    fn_80305344(self->_messenger, pool.NUMBERCTRL, pool.hpnm, ram->_ramNo);
    fn_80306A40(self->_messenger, fn_8031F3CC(player, pool.HP)->_data);
    fn_80305A28(self->_messenger, pool.SETVALUE);
    fn_80305344(self->_messenger, pool.METERCTRL, pool.mpmt, ram->_ramNo);
    int mp = fn_8031F3CC(player, pool.MP)->_data;
    fn_80306B28(self->_messenger, mp * 100 / fn_8031F3CC(player, pool.MMP)->_data);
    fn_80305A28(self->_messenger, pool.SETPERCENT);
    fn_80305344(self->_messenger, pool.NUMBERCTRL, pool.mpnm, ram->_ramNo);
    fn_80306A40(self->_messenger, fn_8031F3CC(player, pool.MP)->_data);
    fn_80305A28(self->_messenger, pool.SETVALUE);
    const char *stage = self->_system->_stageName;
    for (int i = 0; i < 5; i++) {
        if (strcmp(lbl_804E7C80[i], stage) == 0) {
            fn_80305ED0(self->_messenger, pool.PLAYER, 0, ram->_ramNo, pool.SETMETAL);
            break;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (strcmp(lbl_804E7C94[i], stage) == 0) {
            work->_isMainLobby = true;
            break;
        }
    }
}

}
