// Gap::Bec::beNDMWMdlPlayer2: background chips (g_000bcaps), left where a player model is erased (SQ_ERAS);
// the player's bits and part of its experience are deposited in the chip (BKCHIPBITEXP). A chip remembers its
// player's stage and position in the game RAM's common data (BKCHIPSTAGE, BKCHIPPOS) and comes back on that
// stage (GENESTAGE); it switches on when a player comes near, and raising it restores the player and pays back
// what it holds (BKCHIPDATA). Hypothesis: a downed player's capsule. This file:
// finding the pad manager, the kind test and the RAM start (0x8034E6DC..0x8034E784).
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

}
