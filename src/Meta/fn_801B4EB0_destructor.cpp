// fn_801B4EB0: the deleting destructor of lbl_804B3E38. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
extern "C" {
extern char lbl_804B3E38[];
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectObject() { __vtable = igNamedObject_vtable; }
};
struct igNodeObject : igNamedObjectObject {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeObject() { __vtable = igNode_vtable; }
};
struct igGroupObject : igNodeObject {
    char unknown14[8];
    igObjectRefMember _childList;
    inline ~igGroupObject() { __vtable = igGroup_vtable; }
};
struct Level_804B3E38 : igGroupObject {
    char unknown20[28];
    igObjectRefMember unknown3C;
    igObjectRefMember unknown40;
    char unknown44[16];
    igObjectRefMember unknown54;
    igObjectRefMember unknown58;
    igObjectRefMember unknown5C;
    igObjectRefMember unknown60;
    igObjectRefMember unknown64;
    char unknown68[4];
    igObjectRefMember unknown6C;
    igObjectRefMember unknown70;
    igObjectRefMember unknown74;
    char unknown78[24];
    igObjectRefMember unknown90;
    char unknown94[4];
    igObjectRefMember unknown98;
    igObjectRefMember unknown9C;
    igObjectRefMember unknownA0;
    igObjectRefMember unknownA4;
    igObjectRefMember unknownA8;
    igObjectRefMember unknownAC;
    igObjectRefMember unknownB0;
    igObjectRefMember unknownB4;
    igObjectRefMember unknownB8;
    igObjectRefMember unknownBC;
    igObjectRefMember unknownC0;
    igObjectRefMember unknownC4;
    igObjectRefMember unknownC8;
    igObjectRefMember unknownCC;
    char unknownD0[20];
    igObjectRefMember unknownE4;
    igObjectRefMember unknownE8;
};

extern "C" Level_804B3E38 *fn_801B4EB0(Level_804B3E38 *self, short flags)
{
    if (self) {
        self->__vtable = lbl_804B3E38;
        self->unknownE8.~igObjectRefMember();
        self->unknownE4.~igObjectRefMember();
        self->unknownCC.~igObjectRefMember();
        self->unknownC8.~igObjectRefMember();
        self->unknownC4.~igObjectRefMember();
        self->unknownC0.~igObjectRefMember();
        self->unknownBC.~igObjectRefMember();
        self->unknownB8.~igObjectRefMember();
        self->unknownB4.~igObjectRefMember();
        self->unknownB0.~igObjectRefMember();
        self->unknownAC.~igObjectRefMember();
        self->unknownA8.~igObjectRefMember();
        self->unknownA4.~igObjectRefMember();
        self->unknownA0.~igObjectRefMember();
        self->unknown9C.~igObjectRefMember();
        self->unknown98.~igObjectRefMember();
        self->unknown90.~igObjectRefMember();
        self->unknown74.~igObjectRefMember();
        self->unknown70.~igObjectRefMember();
        self->unknown6C.~igObjectRefMember();
        self->unknown64.~igObjectRefMember();
        self->unknown60.~igObjectRefMember();
        self->unknown5C.~igObjectRefMember();
        self->unknown58.~igObjectRefMember();
        self->unknown54.~igObjectRefMember();
        self->unknown40.~igObjectRefMember();
        self->unknown3C.~igObjectRefMember();
        self->igGroupObject::~igGroupObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
