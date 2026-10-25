// Gap::Bec::beNDMWMdlObject (0x8034BE6C..0x8034C0F8): the model controller of stage objects.
#include "beModelCtrl.h"

#pragma auto_inline off

extern "C" {
extern const char lbl_80456D40[];   // "KIND_OBJECT"
extern const char lbl_80456D4C[];   // "ONE"
extern char beNDMWMdlObject_meta[];

// Takes the models of kind KIND_OBJECT.
unsigned char beNDMWMdlObject_virtual94(beNDMWMdlObject *, const char *kind) { return strcmp(kind, lbl_80456D40) == 0; }

void beNDMWMdlObject_virtual9C(beNDMWMdlObject *, beBaseInfoRam *) {}

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

igMetaObject *beNDMWMdlObject_virtual58(beNDMWMdlObject *) { return metaVar(beNDMWMdlObject_meta); }

}
