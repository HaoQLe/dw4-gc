// Gap::Bec::beWeapon: methods at 0x80318230..0x80318474. The message handler (beWeapon_virtual8C,
// 0x80318474) and beWeapon_virtual58 (0x80318A14) still come from their original objects.
// Layouts come from the class metadata (include/meta); unnamed functions keep their address names and
// are wrapped below with what the code shows they do.
#include <meta/beWeapon.h>
#include <meta/beWeaponAttachData.h>
#include <meta/beWeaponAttachDataList.h>
#include <meta/beMessenger.h>
#include <game/ObjectRef.h>

using namespace Meta;

extern "C" {
void *fn_80068430(igObject *object);          // memory pool of an object (its pool index at +4)
void *fn_800607F4(void *poolSource);          // a pool from the memory manager
extern unsigned char lbl_80562298;            // nonzero: objects allocate from their own pool
extern char lbl_8056225C[];                   // default pool source (type unknown)
beWeaponAttachDataList *fn_802B38CC(void *pool);  // creates a beWeaponAttachDataList in pool
beWeaponAttachData *fn_802B3ADC(void *pool);      // creates a beWeaponAttachData in pool
void fn_80069128(void *list, void *object);   // appends to an object list
void fn_80305308(beMessenger *messenger, int, const char *command);  // sends command through the messenger
extern const char lbl_80452628[];             // "PLAYERARMS", first of the strings shared with the message handler
extern char lbl_8053453C[];                   // a metaobject pointer (class unknown)
}


// The pool new objects owned by object are created in.
static inline void *poolFor(igObject *object)
{
    void *pool = fn_80068430(object);
    if (lbl_80562298) return pool;
    return fn_800607F4(*reinterpret_cast<void **>(lbl_8056225C));
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
void beWeapon_virtual7C(beWeapon *self, int arg)
{
    if (!self->_attachDataList) {
        beWeaponAttachDataList *list = fn_802B38CC(poolFor(self));
        ObjectRef holder(list);
        if (self->_attachDataList) release(self->_attachDataList);
        self->_attachDataList = list;
        for (int i = 0; i < 4; i++) {
            AdoptedRef attachment(fn_802B3ADC(poolFor(self)));
            fn_80069128(self->_attachDataList, attachment._object);
        }
    }
    fn_80305308(self->_messenger, arg, lbl_80452628);
}

void beWeapon_virtual84(beWeapon *) {}

}
