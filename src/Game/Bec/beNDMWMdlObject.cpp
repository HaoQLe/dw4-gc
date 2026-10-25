// Gap::Bec::beNDMWMdlObject: the model controller of stage objects. This file: the kind test and the RAM start (0x8034BE6C..0x8034BEA8).
#include "beModelCtrl.h"

#pragma auto_inline off

extern "C" {
extern const char lbl_80456D40[];   // "KIND_OBJECT"
extern const char lbl_80456D4C[];   // "ONE"
extern char beNDMWMdlObject_meta[];

// Takes the models of kind KIND_OBJECT.
unsigned char beNDMWMdlObject_virtual94(beNDMWMdlObject *, const char *kind) { return strcmp(kind, lbl_80456D40) == 0; }

void beNDMWMdlObject_virtual9C(beNDMWMdlObject *, beBaseInfoRam *) {}

}
