// Gap::Bec::beWeapon: methods at 0x80318230..0x80318474. The message handler (beWeapon_virtual8C,
// 0x80318474) and beWeapon_virtual58 (0x80318A14) still come from their original objects.
// Layouts come from the class metadata (include/meta); unnamed functions keep their address names and
// are wrapped below with what the code shows they do.
#include <meta/beWeapon.h>
#include <meta/beWeaponAttachData.h>
#include <meta/beWeaponAttachDataList.h>
#include <meta/beMessenger.h>
#include <meta/beBaseInfoRam.h>
#include <game/Ref.h>
#include <game/Pool.h>

using namespace Meta;

extern "C" {
extern char lbl_8056225C[];                   // this file's default pool source (type unknown)
beWeaponAttachDataList *fn_802B38CC(void *pool);  // creates a beWeaponAttachDataList in pool
beWeaponAttachData *fn_802B3ADC(void *pool);      // creates a beWeaponAttachData in pool
void fn_80069128(void *list, void *object);   // appends to an object list
void fn_80305308(beMessenger *messenger, beBaseInfoRam *ram, const char *command);  // sends command through the messenger
extern const char lbl_80452628[];             // "PLAYERARMS", first of the strings shared with the message handler
extern char lbl_8053453C[];                   // a metaobject pointer (class unknown)
}


extern "C" {

// Releases the attachment list.
void beWeapon_virtual88(beWeapon *self)
{
    if (self->_attachDataList) release(self->_attachDataList);
    self->_attachDataList = 0;
}

void *beWeapon_virtual80(beWeapon *)
{
    return *reinterpret_cast<void **>(lbl_8053453C);
}

// Creates the attachment list, with four empty attachments, on first use; then sends PLAYERARMS.
void beWeapon_virtual7C(beWeapon *self, beBaseInfoRam *ram)
{
    if (!self->_attachDataList) {
        beWeaponAttachDataList *list = fn_802B38CC(poolFor(self, lbl_8056225C));
        Ref<beWeaponAttachDataList> holder(list);
        if (self->_attachDataList) release(self->_attachDataList);
        self->_attachDataList = list;
        for (int i = 0; i < 4; i++) {
            Ref<beWeaponAttachData> attachment(fn_802B3ADC(poolFor(self, lbl_8056225C)), Ref<beWeaponAttachData>::adopt);
            fn_80069128(self->_attachDataList, attachment);
        }
    }
    fn_80305308(self->_messenger, ram, lbl_80452628);
}

void beWeapon_virtual84(beWeapon *) {}

}
