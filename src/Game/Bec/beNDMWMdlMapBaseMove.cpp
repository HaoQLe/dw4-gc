// beNDMWMdlMapBase: centring the map on the players, and the class (0x803B3A18..0x803B3C70).
// opposite of the players' average position, so that the map stays centred on them.
#include "beModelCtrl.h"

#pragma auto_inline off

// This file's constant pool (0x8045CE80).
struct beNDMWMdlMapBasePool {
    char KIND_MAPBASE[16];
    char MAPBASE[8];
    char ONE[4];
    char PLAYER[8];
    char GETMATRIX[12];
    float half;        // 0.5f
    float three;       // 3.0f
    float quarter;     // 0.25f
    float zero;        // 0.0f
};
extern "C" const beNDMWMdlMapBasePool lbl_8045CE80;

extern "C" {
extern const char lbl_8045CE90[];   // "MAPBASE"
extern const char lbl_8045CE98[];   // "ONE"
extern char beNDMWMdlMapBase_meta[];
void fn_80305F58(beMessenger *messenger, const char *target, const char *command);   // a request to every RAM of target, sent at once

// Before the move: the players' positions (two to four players) are averaged in X and Z, and the map moves to
// the opposite point at height 0.
void beNDMWMdlMapBase_virtualC0(beNDMWMdlMapBase *self, beBaseInfoRam *ram)
{
    const beNDMWMdlMapBasePool &pool = lbl_8045CE80;
    float center[3];
    center[0] = lbl_804F8AE0[0];
    center[1] = lbl_804F8AE0[1];
    center[2] = lbl_804F8AE0[2];
    fn_80305F58(self->_messenger, pool.PLAYER, pool.GETMATRIX);
    if (fn_80306D58(self->_messenger) != 0) {
        int players = fn_80306D58(self->_messenger);
        for (int i = 0; i < players; i++) {
            float position[3];
            fn_80128DAC(fn_80306DE8(self->_messenger, i).m, position);
            center[0] += position[0];
            center[1] += position[1];
            center[2] += position[2];
        }
        switch (players) {
        case 2:
            center[0] *= pool.half;
            center[2] *= pool.half;
            break;
        case 3:
            center[0] /= pool.three;
            center[2] /= pool.three;
            break;
        case 4:
            center[0] *= pool.quarter;
            center[2] *= pool.quarter;
            break;
        }
        center[0] = -center[0];
        center[1] = pool.zero;
        center[2] = -center[2];
    }
    fn_80128D90(ramDataOf(ram, pool.ONE)->_node->_m, center);
}

igMetaObject *beNDMWMdlMapBase_virtual58(beNDMWMdlMapBase *) { return metaVar(beNDMWMdlMapBase_meta); }

}
