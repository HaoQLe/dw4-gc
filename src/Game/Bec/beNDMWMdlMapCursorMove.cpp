// beNDMWMdlMapCursor: following the player, and the class (0x803B3EE8..0x803B41A4).
#include "beModelCtrl.h"

#pragma auto_inline off

// This file's constant pool (0x8045CF60).
struct beNDMWMdlMapCursorPool {
    char KIND_MAPCURSOR[16];
    char ONE[4];
    char SQ_OPEN00[12];
    char SQ_OPEN01[12];
    char SQ_OPEN02[12];
    char SQ_OPEN03[12];
    char PLAYER[8];
    char GETMATRIX[12];
    char MODELCTRL[12];
    char SQ_CLOSE[12];
    char MAPBASE[8];
    float zero;   // 0.0f
};
extern "C" const beNDMWMdlMapCursorPool lbl_8045CF60;

extern "C" {
extern const char lbl_8045CF70[];          // "ONE"
extern const char *lbl_804EE8D0[4];        // the opening sequences of cursors 0 to 3: SQ_OPEN00..SQ_OPEN03
extern const char lbl_80567408[1];         // ""
extern char beNDMWMdlMapCursor_meta[];
void fn_80305F14(beMessenger *messenger, const char *target, int ramNo, const char *command);   // a request to one RAM of target, sent at once
void fn_80305F58(beMessenger *messenger, const char *target, const char *command);              // a request to every RAM of target, sent at once

// Before the move: follows the player of the same RAM number. When the player appears the cursor plays its
// opening sequence; when it is gone, SQ_CLOSE. While shown, the cursor sits over the player's position plus the
// map base's, at height 0.
void beNDMWMdlMapCursor_virtualC0(beNDMWMdlMapCursor *self, beBaseInfoRam *ram)
{
    const beNDMWMdlMapCursorPool &pool = lbl_8045CF60;
    bool found = false;
    bool shown = false;
    float position[3];
    position[0] = lbl_804F8AE0[0];
    position[1] = lbl_804F8AE0[1];
    position[2] = lbl_804F8AE0[2];
    fn_80305F14(self->_messenger, pool.PLAYER, ram->_ramNo, pool.GETMATRIX);
    if (fn_80306D58(self->_messenger) != 0) {
        fn_80128DAC(fn_80306DE8(self->_messenger, 0).m, position);
        found = true;
    }
    switch (ram->_st0) {
    case 0:
        if (found) {
            int ramNo = ram->_ramNo;
            const char *name = ram->_parentInfo->_name ? ram->_parentInfo->_name : lbl_80567408;
            fn_80305ED0(self->_messenger, pool.MODELCTRL, name, ramNo, lbl_804EE8D0[ramNo]);
            ram->_st0 = 1;
            shown = true;
            ram->_st3 = 0;
            ram->_st2 = 0;
            ram->_st1 = 0;
        }
        break;
    case 1:
        if (!found) {
            int ramNo = ram->_ramNo;
            const char *name = ram->_parentInfo->_name ? ram->_parentInfo->_name : lbl_80567408;
            fn_80305ED0(self->_messenger, pool.MODELCTRL, name, ramNo, pool.SQ_CLOSE);
            ram->_st0 = 0;
            ram->_st3 = 0;
            ram->_st2 = 0;
            ram->_st1 = 0;
        }
        shown = true;
        break;
    }
    if (shown) {
        fn_80305F58(self->_messenger, pool.MAPBASE, pool.GETMATRIX);
        if (fn_80306D58(self->_messenger) != 0) {
            float base[3];
            fn_80128DAC(fn_80306DE8(self->_messenger, 0).m, base);
            position[0] += base[0];
            position[1] += base[1];
            position[2] += base[2];
            beModelCtrlInfoRamData *data = ramDataOf(ram, pool.ONE);
            position[1] = pool.zero;
            fn_80128D90(data->_node->_m, position);
        }
    }
}

igMetaObject *beNDMWMdlMapCursor_virtual58(beNDMWMdlMapCursor *) { return metaVar(beNDMWMdlMapCursor_meta); }

}
