// fn_80403D78: the deleting destructor of lbl_804F1B40. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igNamedObject)
extern "C" {
extern char lbl_804CBA60[];
extern char lbl_804F1B40[];
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
struct Level_804F1B40 : Level_804CBA60 {
    char unknown0C[4];
    igObjectRefMember unknown10;
    igObjectRefMember unknown14;
    igObjectRefMember unknown18;
    igObjectRefMember unknown1C;
    igObjectRefMember unknown20;
    igObjectRefMember unknown24;
    char unknown28[4];
    igObjectRefMember unknown2C;
    igObjectRefMember unknown30;
    igObjectRefMember unknown34;
    igObjectRefMember unknown38;
    igObjectRefMember unknown3C;
    igObjectRefMember unknown40;
    igObjectRefMember unknown44;
    igObjectRefMember unknown48;
    igObjectRefMember unknown4C;
    igObjectRefMember unknown50;
    igObjectRefMember unknown54;
    igObjectRefMember unknown58;
    igObjectRefMember unknown5C;
    igObjectRefMember unknown60;
    igObjectRefMember unknown64;
    igObjectRefMember unknown68;
    igObjectRefMember unknown6C;
    igObjectRefMember unknown70;
    igObjectRefMember unknown74;
    igObjectRefMember unknown78;
    igObjectRefMember unknown7C;
    igObjectRefMember unknown80;
    igObjectRefMember unknown84;
    igObjectRefMember unknown88;
    igObjectRefMember unknown8C;
    igObjectRefMember unknown90;
    igObjectRefMember unknown94;
    igObjectRefMember unknown98;
    igObjectRefMember unknown9C;
    char unknownA0[20];
    igObjectRefMember unknownB4;
    igObjectRefMember unknownB8;
    char unknownBC[4];
    igObjectRefMember unknownC0;
};

extern "C" Level_804F1B40 *fn_80403D78(Level_804F1B40 *self, short flags)
{
    if (self) {
        self->__vtable = lbl_804F1B40;
        self->unknownC0.~igObjectRefMember();
        self->unknownB8.~igObjectRefMember();
        self->unknownB4.~igObjectRefMember();
        self->unknown9C.~igObjectRefMember();
        self->unknown98.~igObjectRefMember();
        self->unknown94.~igObjectRefMember();
        self->unknown90.~igObjectRefMember();
        self->unknown8C.~igObjectRefMember();
        self->unknown88.~igObjectRefMember();
        self->unknown84.~igObjectRefMember();
        self->unknown80.~igObjectRefMember();
        self->unknown7C.~igObjectRefMember();
        self->unknown78.~igObjectRefMember();
        self->unknown74.~igObjectRefMember();
        self->unknown70.~igObjectRefMember();
        self->unknown6C.~igObjectRefMember();
        self->unknown68.~igObjectRefMember();
        self->unknown64.~igObjectRefMember();
        self->unknown60.~igObjectRefMember();
        self->unknown5C.~igObjectRefMember();
        self->unknown58.~igObjectRefMember();
        self->unknown54.~igObjectRefMember();
        self->unknown50.~igObjectRefMember();
        self->unknown4C.~igObjectRefMember();
        self->unknown48.~igObjectRefMember();
        self->unknown44.~igObjectRefMember();
        self->unknown40.~igObjectRefMember();
        self->unknown3C.~igObjectRefMember();
        self->unknown38.~igObjectRefMember();
        self->unknown34.~igObjectRefMember();
        self->unknown30.~igObjectRefMember();
        self->unknown2C.~igObjectRefMember();
        self->unknown24.~igObjectRefMember();
        self->unknown20.~igObjectRefMember();
        self->unknown1C.~igObjectRefMember();
        self->unknown18.~igObjectRefMember();
        self->unknown14.~igObjectRefMember();
        self->unknown10.~igObjectRefMember();
        self->Level_804CBA60::~Level_804CBA60();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
