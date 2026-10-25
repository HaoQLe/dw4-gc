// Gap::Bec::beNDMWMdlPlayer2 (0x8034E6DC..0x8034F44C): background chips, the players' models left in the lobby.
// A chip remembers its player's stage and position in the game RAM's common data (BKCHIPSTAGE, BKCHIPPOS);
// it switches on when a player comes near, and raising it pays out the bits and experience it holds
// (BKCHIPDATA) to the player whose Digimon it was.
#include "beModelCtrl.h"
#include <meta/bePadManager.h>
#include <meta/beDataObjInt.h>
#include <meta/beDataObjIntList.h>
#include <meta/beDataObjString.h>
#include <meta/beDataObjStringList.h>
#include <meta/beDataObjFloatList.h>

#pragma auto_inline off

// This file's constant pool (0x804573A8).
struct beNDMWMdlPlayer2Pool {
    char KIND_PLAYER2[16];
    char PLAYER2[8];
    char ONE[4];
    char GAMERAM[8];
    char GETCOMMON[12];
    char BKCHIPSTAGE[12];
    char BKCHIPPOS[12];
    char PLAYER[8];
    char NEAR[8];
    float switchDistance;      // 900.0f: the squared distance within which a player switches the chip on
    char SQ_SWON[8];
    char SQ_SWOF[8];
    char endScript[20];        // "end_g_000bcaps.lua"
    char GENERATE[12];
    char REMOVE[8];
    char GENESTAGE[12];
    char MODELCTRL[12];
    char chipModel[12];        // "g_000bcaps"
    char entrySequence[12];    // "SQ_ENTR%dP"
    char RAISE[8];
    char ISRUN[8];
    char GETPLAYER[12];
    char HP[4];
    char DIGIMONNAME[12];
    char defaultDigimon[12];   // "p_agumon"
    char SQ_CMBK[8];
    char BKCHIPDATA[12];
    char BIT[4];
    char BKCHIPNAME[12];
    char EXP[4];
    char SQ_EXIT[8];
};
extern "C" const beNDMWMdlPlayer2Pool lbl_804573A8;

extern "C" {
extern const char lbl_804573B8[];   // "PLAYER2"
extern int lbl_804E7E78[];          // 0: a paid-out chip's bits
extern int lbl_804E7E7C[];          // 0: a paid-out chip's experience
extern char bePadManager_meta[];
extern char beNDMWMdlPlayer2_meta[];
beNDMWMdlPlayer2InfoWork *beNDMWMdlPlayer2InfoWork_create(void *pool);
void fn_802F24B0(beBaseInfoManager *self);                   // beBaseInfoManager's virtual64
void *bePadManager_getPad(bePadManager *manager, int index);
void fn_80305EA8(beMessenger *messenger, const char *target);   // opens a request to target
void fn_80305F58(beMessenger *messenger, const char *target, const char *command);   // a request to every RAM of target, sent at once
void fn_80305F9C(beMessenger *messenger, const char *target, const char *infoName, int ramNo);   // opens a request to target's RAM
void fn_803061BC(beMessenger *messenger, const char *command, long long delay);       // sends the request
void fn_8030650C(beMessenger *messenger, const char *target, const char *infoName, int ramNo, const char *command, long long delay);   // a request to target's RAM, sent at once
void fn_80306C84(beMessenger *messenger, const float *vector);   // appends a vector argument
// The game RAM's named data objects.
beDataObjInt *fn_8031F3CC(igObject *data, const char *name);
beDataObjIntList *fn_8031F3FC(igObject *data, const char *name);
beDataObjString *fn_8031F48C(igObject *data, const char *name);
beDataObjStringList *fn_8031F4BC(igObject *data, const char *name);
beDataObjFloatList *fn_8031F51C(igObject *data, const char *name);

// Finds the pad manager.
void beNDMWMdlPlayer2_virtual64(beNDMWMdlPlayer2 *self)
{
    fn_802F24B0(self);
    self->_padManager = static_cast<bePadManager *>(fn_8028A730(self->_insight, *reinterpret_cast<void **>(bePadManager_meta)));
}

// Takes the models of kind KIND_PLAYER2.
unsigned char beNDMWMdlPlayer2_virtual94(beNDMWMdlPlayer2 *, const char *kind) { return strcmp(kind, lbl_804573A8.KIND_PLAYER2) == 0; }

// Registers the RAM for the PLAYER2 messages.
void beNDMWMdlPlayer2_virtual9C(beNDMWMdlPlayer2 *self, beBaseInfoRam *ram) { fn_80305308(self->_messenger, ram, lbl_804573B8); }

// Builds a chip's work and places it, then records the stage it is on and its position as its player's
// background chip.
void beNDMWMdlPlayer2_virtual98(beNDMWMdlPlayer2 *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayer2Pool &pool = lbl_804573A8;
    beModelCtrlInfoRamData *data = ramDataOf(ram, pool.ONE);
    {
        beNDMWMdlPlayer2InfoWork *work = beNDMWMdlPlayer2InfoWork_create(poolFor(self, lbl_8056225C));
        Ref<beNDMWMdlPlayer2InfoWork> holder(work);
        if (data->_work) release(data->_work);
        data->_work = work;
    }
    fn_8030D610(self, ram);
    fn_80305F58(self->_messenger, pool.GAMERAM, pool.GETCOMMON);
    igObject *common = fn_80306FB4(self->_messenger, 0);
    beDataObjStringList *stages = fn_8031F4BC(common, pool.BKCHIPSTAGE);
    beDataObjFloatList *positions = fn_8031F51C(common, pool.BKCHIPPOS);
    int chip = ram->_ramNo;
    {
        POOLED_REF(stage, self->_system->_stageName);
        setStringAt(stages->_data, chip, stage);
    }
    float position[3];
    fn_80128DAC(data->_node->_m, position);
    setValueAt(positions->_data, chip * 3, position[0]);
    setValueAt(positions->_data, chip * 3 + 1, position[1]);
    setValueAt(positions->_data, chip * 3 + 2, position[2]);
}

// Each frame: counts up to 10 frames, and switches on (SQ_SWON) when the nearest player comes within 30 units,
// off (SQ_SWOF) when it leaves. Without a player the end script runs.
void beNDMWMdlPlayer2_virtualA0(beNDMWMdlPlayer2 *self, beBaseInfoRam *ram)
{
    const beNDMWMdlPlayer2Pool &pool = lbl_804573A8;
    beModelCtrlInfoRamData *data = ramDataOf(ram, pool.ONE);
    beNDMWMdlPlayer2InfoWork *work = static_cast<beNDMWMdlPlayer2InfoWork *>(data->_work);
    if (work->_timerCount < 10) work->_timerCount++;
    bePadManager_getPad(self->_padManager, ram->_ramNo);
    if (fn_8031C67C(data->_node->_m, pool.PLAYER, pool.NEAR)) {
        float distance = fn_8031C8EC();
        if (!work->_isPowerOn) {
            if (distance < pool.switchDistance) {
                work->_isPowerOn = true;
                virtuals(self)->handleMessage(ram, pool.SQ_SWON);
            }
        } else {
            if (distance > pool.switchDistance) {
                work->_isPowerOn = false;
                virtuals(self)->handleMessage(ram, pool.SQ_SWOF);
            }
        }
    } else {
        fn_80301FA4(self->_luaManager, pool.endScript, 0);
    }
}

// The chips' own messages: GENERATE replaces a running chip; GENESTAGE brings back the chip of a player whose
// stage this is; RAISE (after the first 10 frames) gives the chip back to its player: the player's Digimon
// returns (SQ_CMBK) unless already running, the chip's bits go to the player and, for the same Digimon, its
// experience (scaled by the request's percentage); the chip then exits and its stage is cleared.
bool beNDMWMdlPlayer2_virtualC4(beNDMWMdlPlayer2 *self, beBaseInfoRam *ram, const char *message)
{
    const beNDMWMdlPlayer2Pool &pool = lbl_804573A8;
    if (strcmp(message, pool.GENERATE) == 0) {
        if (ram->_isRun) virtuals(self)->handleMessage(ram, pool.REMOVE);
        return false;
    }
    if (strcmp(message, pool.GENESTAGE) == 0) {
        fn_80305F58(self->_messenger, pool.GAMERAM, pool.GETCOMMON);
        igObject *common = fn_80306FB4(self->_messenger, 0);
        igStringRefList *stages = fn_8031F4BC(common, pool.BKCHIPSTAGE)->_data;
        igFloatList *positions = fn_8031F51C(common, pool.BKCHIPPOS)->_data;
        int chip = ram->_ramNo;
        if (fn_800218F4(stages, chip).getString() && strcmp(self->_system->_stageName, fn_800218F4(stages, chip).getString()) == 0) {
            float *saved = static_cast<float *>(positions->_data);
            float x = saved[chip * 3], y = saved[chip * 3 + 1], z = saved[chip * 3 + 2];
            fn_80305F9C(self->_messenger, pool.MODELCTRL, pool.chipModel, ram->_ramNo);
            float position[3];
            position[0] = x;
            position[1] = y;
            position[2] = z;
            fn_80306C84(self->_messenger, position);
            char sequence[16];
            sprintf(sequence, pool.entrySequence, ram->_ramNo + 1);
            fn_80306FDC(self->_messenger, sequence);
            fn_803061BC(self->_messenger, pool.GENERATE, 1);
        }
        return true;
    }
    if (strcmp(message, pool.RAISE) == 0) {
        beNDMWMdlPlayer2InfoWork *work = static_cast<beNDMWMdlPlayer2InfoWork *>(ramDataOf(ram, pool.ONE)->_work);
        if (work->_timerCount < 10) return true;
        Matrix44 matrix(fn_80306DE8(self->_messenger, 0));
        int percent = fn_80306B00(self->_messenger, 0);
        int hp = fn_80306B00(self->_messenger, 1);
        bool running = false;
        fn_80305ED0(self->_messenger, pool.PLAYER, 0, ram->_ramNo, pool.ISRUN);
        int count = fn_8030690C(self->_messenger);
        for (int i = 0; i < count; i++) {
            if (fn_80306A1C(self->_messenger, i) == true) {
                running = true;
                break;
            }
        }
        fn_80305EA8(self->_messenger, pool.GAMERAM);
        fn_80306A40(self->_messenger, ram->_ramNo);
        fn_80305A28(self->_messenger, pool.GETPLAYER);
        igObject *player = fn_80306FB4(self->_messenger, 0);
        if (!running) {
            fn_8031F3CC(player, pool.HP)->_data = hp;
            const char *digimon = fn_8031F48C(player, pool.DIGIMONNAME)->_data;
            if (!digimon[0]) digimon = pool.defaultDigimon;
            fn_80305344(self->_messenger, pool.MODELCTRL, digimon, ram->_ramNo);
            fn_80306D68(self->_messenger, matrix.m);
            fn_80306FDC(self->_messenger, pool.SQ_CMBK);
            fn_80305A28(self->_messenger, pool.GENERATE);
        }
        fn_80305F58(self->_messenger, pool.GAMERAM, pool.GETCOMMON);
        igObject *common = fn_80306FB4(self->_messenger, 0);
        int bitsSlot = ram->_ramNo * 2;
        int bits = static_cast<int *>(fn_8031F3FC(common, pool.BKCHIPDATA)->_data->_data)[bitsSlot] + fn_8031F3CC(player, pool.BIT)->_data;
        fn_8031F3CC(player, pool.BIT)->_data = bits;
        setValueAt(fn_8031F3FC(common, pool.BKCHIPDATA)->_data, bitsSlot, lbl_804E7E78[0]);
        const char *digimon = fn_8031F48C(player, pool.DIGIMONNAME)->_data;
        const char *chipDigimon = fn_800218F4(fn_8031F4BC(common, pool.BKCHIPNAME)->_data, ram->_ramNo).getString();
        if (strcmp(digimon, chipDigimon) == 0) {
            int expSlot = ram->_ramNo * 2 + 1;
            int exp = static_cast<int *>(fn_8031F3FC(common, pool.BKCHIPDATA)->_data->_data)[expSlot] * percent / 100 + fn_8031F3CC(player, pool.EXP)->_data;
            fn_8031F3CC(player, pool.EXP)->_data = exp;
            setValueAt(fn_8031F3FC(common, pool.BKCHIPDATA)->_data, expSlot, lbl_804E7E7C[0]);
        }
        fn_8030650C(self->_messenger, pool.PLAYER2, 0, ram->_ramNo, pool.SQ_EXIT, 0);
        fn_80305F58(self->_messenger, pool.GAMERAM, pool.GETCOMMON);
        int chip = ram->_ramNo;
        setStringAt(fn_8031F4BC(fn_80306FB4(self->_messenger, 0), pool.BKCHIPSTAGE)->_data, chip, igStringRef());
        return true;
    }
    return false;
}

igMetaObject *beNDMWMdlPlayer2_virtual58(beNDMWMdlPlayer2 *) { return metaVar(beNDMWMdlPlayer2_meta); }

}
