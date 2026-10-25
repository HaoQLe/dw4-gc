// beNDMWMdlMapCursor: building a cursor RAM's work (0x803B3CA8..0x803B3EE8).
// (the player RAM of the same number) over the map base, opening when the player appears and closing when it
// goes.
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

// Builds the RAM's work; a request with an integer names the hit parent (its info name and RAM number). The RAM
// is then placed as its message says.
void beNDMWMdlMapCursor_virtual98(beNDMWMdlMapCursor *self, beBaseInfoRam *ram)
{
    beModelCtrlInfoRamData *data = ramDataOf(ram, lbl_8045CF70);
    {
        beModelCtrlInfoWork *created = beModelCtrlInfoWork_create(poolFor(self, lbl_8056225C));
        Ref<beModelCtrlInfoWork> work(created);
        if (data->_work) release(data->_work);
        data->_work = created;
        if (fn_80306A30(self->_messenger) != 0) {
            setString(work->_hitParentName, fn_8030709C(self->_messenger, 0));
            work->_hitParentRamNo = fn_80306B00(self->_messenger, 0);
        }
    }
    fn_8030D610(self, ram);
}

}
