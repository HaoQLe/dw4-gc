// beNDMWMdlObject: building an object RAM's work (0x8034BEA8..0x8034C0E8).
#include "beModelCtrl.h"

#pragma auto_inline off

extern "C" {
extern const char lbl_80456D40[];   // "KIND_OBJECT"
extern const char lbl_80456D4C[];   // "ONE"
extern char beNDMWMdlObject_meta[];

// Builds an object RAM's work; a request with an integer names the hit parent (its info name and RAM number).
// The RAM is then placed as its message says.
void beNDMWMdlObject_virtual98(beNDMWMdlObject *self, beBaseInfoRam *ram)
{
    beModelCtrlInfoRamData *data = ramDataOf(ram, lbl_80456D4C);
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
