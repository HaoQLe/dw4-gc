// Gap::Bec::beNDMWMdlPBullet (0x8034C0F8..0x8034C2F0): the model controller of player bullets.
#include "beModelCtrl.h"

#pragma auto_inline off

extern "C" {
extern const char lbl_80456DF0[];   // "KIND_PBULLET"
extern const char lbl_80456E00[];   // "ONE"
extern char beNDMWMdlPBullet_meta[];

// Takes the models of kind KIND_PBULLET (returned as a byte, as the original's boolean type is).
unsigned char beNDMWMdlPBullet_virtual94(beNDMWMdlPBullet *, const char *kind) { return strcmp(kind, lbl_80456DF0) == 0; }

void beNDMWMdlPBullet_virtual9C(beNDMWMdlPBullet *, beBaseInfoRam *) {}

// Builds a bullet RAM's work and places it.
void beNDMWMdlPBullet_virtual98(beNDMWMdlPBullet *self, beBaseInfoRam *ram)
{
    beModelCtrlInfoRamData *data = ramDataOf(ram, lbl_80456E00);
    beModelCtrlInfoWork *work = beModelCtrlInfoWork_create(poolFor(self, lbl_8056225C));
    Ref<beModelCtrlInfoWork> holder(work);
    if (data->_work) release(data->_work);
    data->_work = work;
    fn_8030D260(self, ram);
}

igMetaObject *beNDMWMdlPBullet_virtual58(beNDMWMdlPBullet *) { return metaVar(beNDMWMdlPBullet_meta); }

}
