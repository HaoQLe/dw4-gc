// beNDMWMdlPlayer2: building a background chip's work and recording it (0x8034E784..0x8034EB04).
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

}
