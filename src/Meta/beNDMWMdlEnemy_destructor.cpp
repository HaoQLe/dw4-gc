// fn_8033AE78: the deleting destructor of beNDMWMdlEnemy. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlEnemy)
META_DECLARE(igNamedObject)
extern "C" {
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804DEE44[];
extern char lbl_804EDFF8[];
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMemberLookup _name;
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
struct Level_804DEE44 : Level_804DD724 {
    inline ~Level_804DEE44() { __vtable = lbl_804DEE44; }
};
struct Level_804EDFF8 : Level_804DEE44 {
    inline ~Level_804EDFF8() { __vtable = lbl_804EDFF8; }
};
struct beNDMWMdlEnemyObject : Level_804EDFF8 {
    char unknown1C[16];
};

extern "C" beNDMWMdlEnemyObject *fn_8033AE78(beNDMWMdlEnemyObject *self, short flags)
{
    if (self) {
        self->__vtable = beNDMWMdlEnemy_vtable;
        self->Level_804EDFF8::~Level_804EDFF8();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
