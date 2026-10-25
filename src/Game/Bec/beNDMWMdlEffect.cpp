// Gap::Bec::beNDMWMdlEffect (0x8034B8EC..0x8034BAE4): the model controller of effects.
#include "beModelCtrl.h"

#pragma auto_inline off

extern "C" {
extern const char lbl_80456B88[];   // "KIND_EFFECT"
extern const char lbl_80456B94[];   // "ONE"
extern char beNDMWMdlEffect_meta[];

// Takes the models of kind KIND_EFFECT (returned as a byte, as the original's boolean type is).
unsigned char beNDMWMdlEffect_virtual94(beNDMWMdlEffect *, const char *kind) { return strcmp(kind, lbl_80456B88) == 0; }

void beNDMWMdlEffect_virtual9C(beNDMWMdlEffect *, beBaseInfoRam *) {}

// Builds an effect RAM's work and places it.
void beNDMWMdlEffect_virtual98(beNDMWMdlEffect *self, beBaseInfoRam *ram)
{
    beModelCtrlInfoRamData *data = ramDataOf(ram, lbl_80456B94);
    beModelCtrlInfoWork *work = beModelCtrlInfoWork_create(poolFor(self, lbl_8056225C));
    Ref<beModelCtrlInfoWork> holder(work);
    if (data->_work) release(data->_work);
    data->_work = work;
    fn_8030D260(self, ram);
}

igMetaObject *beNDMWMdlEffect_virtual58(beNDMWMdlEffect *) { return metaVar(beNDMWMdlEffect_meta); }

}
