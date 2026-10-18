// fn_80344408: the deleting destructor of beNDMWGameRam. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWGameRam)
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
struct beNDMWGameRamObject : Level_804DD724 {
    char unknown1C[4];
    igObjectRefMember _dBShinka;
    igObjectRefMember _dBPcTech;
    igObjectRefMember _dBWeapon;
    igObjectRefMember _dBArmor1;
    igObjectRefMember _dBArmor2;
    igObjectRefMember _dBAbChip;
    igObjectRefMember _dBEnemy;
    igObjectRefMember _dBEneatk;
    igObjectRefMember _commonDataList;
    igObjectRefMember _playerDataListList;
    char unknown48[4];
};

extern "C" beNDMWGameRamObject *fn_80344408(beNDMWGameRamObject *self, short flags)
{
    if (self) {
        self->__vtable = beNDMWGameRam_vtable;
        self->_playerDataListList.~igObjectRefMember();
        self->_commonDataList.~igObjectRefMember();
        self->_dBEneatk.~igObjectRefMember();
        self->_dBEnemy.~igObjectRefMember();
        self->_dBAbChip.~igObjectRefMember();
        self->_dBArmor2.~igObjectRefMember();
        self->_dBArmor1.~igObjectRefMember();
        self->_dBWeapon.~igObjectRefMember();
        self->_dBPcTech.~igObjectRefMember();
        self->_dBShinka.~igObjectRefMember();
        self->Level_804DD724::~Level_804DD724();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
