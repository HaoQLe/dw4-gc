// Gap::Bec::beNDMWMdlMapBase: the map's base model, which stays centred on the players. This file: the kind
// test and the RAM start (0x803B3774..0x803B37D8).
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

// Takes the models of kind KIND_MAPBASE.
unsigned char beNDMWMdlMapBase_virtual94(beNDMWMdlMapBase *, const char *kind) { return strcmp(kind, lbl_8045CE80.KIND_MAPBASE) == 0; }

// Registers the RAM for the MAPBASE messages.
void beNDMWMdlMapBase_virtual9C(beNDMWMdlMapBase *self, beBaseInfoRam *ram) { fn_80305308(self->_messenger, ram, lbl_8045CE90); }

}
