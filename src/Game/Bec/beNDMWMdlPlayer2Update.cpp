// beNDMWMdlPlayer2: a background chip's switch (0x8034EB78..0x8034ED34).
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

}
