// fn_802D9B84: the deleting destructor of beFont. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(beFont)
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
    inline ~Level_804DD724() { __vtable = lbl_804DD724; }
};
struct beFontObject : Level_804DD724 {
    char unknown1C[4];
    igObjectRefMember _root;
    igObjectRefMember _fonts;
    char unknown28[4];
    igObjectRefMember _gaPairList;
    igObjectRefMember _lineFeedList;
    igObjectRefMember _alignList;
    igObjectRefMember _convertData;
    igStringMember _condition00;
    igStringMember _condition01;
    char unknown44[4];
};

extern "C" beFontObject *fn_802D9B84(beFontObject *self, short flags)
{
    if (self) {
        self->__vtable = beFont_vtable;
        self->_condition01.~igStringMember();
        self->_condition00.~igStringMember();
        self->_convertData.~igObjectRefMember();
        self->_alignList.~igObjectRefMember();
        self->_lineFeedList.~igObjectRefMember();
        self->_gaPairList.~igObjectRefMember();
        self->_fonts.~igObjectRefMember();
        self->_root.~igObjectRefMember();
        self->Level_804DD724::~Level_804DD724();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
