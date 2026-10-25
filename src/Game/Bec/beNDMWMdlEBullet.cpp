// Gap::Bec::beNDMWMdlEBullet (0x8034B6F4..0x8034B8EC): the model controller of enemy bullets.
#include "beModelCtrl.h"

#pragma auto_inline off

extern "C" {
extern const char lbl_80456AD8[];   // "KIND_EBULLET"
extern const char lbl_80456AE8[];   // "ONE"
extern char beNDMWMdlEBullet_meta[];

// Takes the models of kind KIND_EBULLET (returned as a byte, as the original's boolean type is).
unsigned char beNDMWMdlEBullet_virtual94(beNDMWMdlEBullet *, const char *kind) { return strcmp(kind, lbl_80456AD8) == 0; }

void beNDMWMdlEBullet_virtual9C(beNDMWMdlEBullet *, beBaseInfoRam *) {}

// Builds a bullet RAM's work and places it.
void beNDMWMdlEBullet_virtual98(beNDMWMdlEBullet *self, beBaseInfoRam *ram)
{
    beModelCtrlInfoRamData *data = ramDataOf(ram, lbl_80456AE8);
    beModelCtrlInfoWork *work = beModelCtrlInfoWork_create(poolFor(self, lbl_8056225C));
    Ref<beModelCtrlInfoWork> holder(work);
    if (data->_work) release(data->_work);
    data->_work = work;
    fn_8030D260(self, ram);
}

igMetaObject *beNDMWMdlEBullet_virtual58(beNDMWMdlEBullet *) { return metaVar(beNDMWMdlEBullet_meta); }

}
