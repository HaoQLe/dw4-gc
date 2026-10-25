// beNDMWMdlMapBase: building the map base RAM's work (0x803B37D8..0x803B3A18).
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

// Builds the RAM's work; a request with an integer names the hit parent (its info name and RAM number). The RAM
// is then placed as its message says.
void beNDMWMdlMapBase_virtual98(beNDMWMdlMapBase *self, beBaseInfoRam *ram)
{
    beModelCtrlInfoRamData *data = ramDataOf(ram, lbl_8045CE98);
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
