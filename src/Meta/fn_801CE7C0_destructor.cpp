// fn_801CE7C0: the deleting destructor of lbl_804B4B88. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
extern "C" {
extern char lbl_804B4B88[];
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
struct Level_804B4B88 : igGroupObject {
    igObjectRefMember unknown20;
    igObjectRefMember unknown24;
    char unknown28[12];
    igObjectRefMember unknown34;
    char unknown38[8];
    igObjectRefMember unknown40;
    igObjectRefMember unknown44;
    char unknown48[4];
    igObjectRefMember unknown4C;
    igObjectRefMember unknown50;
    igObjectRefMember unknown54;
    igObjectRefMember unknown58;
    igObjectRefMember unknown5C;
    igObjectRefMember unknown60;
    igObjectRefMember unknown64;
    igObjectRefMember unknown68;
    igObjectRefMember unknown6C;
};

extern "C" Level_804B4B88 *fn_801CE7C0(Level_804B4B88 *self, short flags)
{
    if (self) {
        self->__vtable = lbl_804B4B88;
        self->unknown6C.~igObjectRefMember();
        self->unknown68.~igObjectRefMember();
        self->unknown64.~igObjectRefMember();
        self->unknown60.~igObjectRefMember();
        self->unknown5C.~igObjectRefMember();
        self->unknown58.~igObjectRefMember();
        self->unknown54.~igObjectRefMember();
        self->unknown50.~igObjectRefMember();
        self->unknown4C.~igObjectRefMember();
        self->unknown44.~igObjectRefMember();
        self->unknown40.~igObjectRefMember();
        self->unknown34.~igObjectRefMember();
        self->unknown24.~igObjectRefMember();
        self->unknown20.~igObjectRefMember();
        self->igGroupObject::~igGroupObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
