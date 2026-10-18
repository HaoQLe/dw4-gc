// dtor_802B367C: the deleting destructor of lbl_804DD724. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igNamedObject)
extern "C" {
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectObject() { __vtable = igNamedObject_vtable; }
};
struct Level_804CBA60 : igNamedObjectObject {
    inline ~Level_804CBA60() { __vtable = lbl_804CBA60; }
};
struct Level_804DD724 : Level_804CBA60 {
    char unknown0C[12];
    igObjectRefMember unknown18;
};

extern "C" Level_804DD724 *dtor_802B367C(Level_804DD724 *self, short flags)
{
    if (self) {
        self->__vtable = lbl_804DD724;
        self->unknown18.~igObjectRefMember();
        self->Level_804CBA60::~Level_804CBA60();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
