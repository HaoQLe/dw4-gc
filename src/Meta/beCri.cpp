// beCri: Alchemy class registration (0x802DFCF0..0x802DFFA8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beCri)
META_DECLARE(igNamedObject)

extern "C" {
extern char lbl_804CBA60[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804CBA60 : igNamedObjectInstance {
    inline ~Instance_804CBA60() { __vtable = lbl_804CBA60; }
};

struct beCriInstance : Instance_804CBA60 {
    char unknown0C[20];
    igObjectRefMember _hdBGM;
    igObjectRefMember _hdENV;
    igObjectRefMember _hdSEs;
    igObjectRefMember _infoList;
    igObjectRefMember _lsBinObjs;
    char unknown34[28];
    inline ~beCriInstance() { __vtable = beCri_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beCri)

META_METAOBJECT(beCri)

META_GET_META(beCri)

#pragma push
#pragma use_lmw_stmw on
void *beCri_vtableRead()
{
    beCriInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = beCri_vtable;
    object._hdBGM._value = 0;
    object._hdENV._value = 0;
    object._hdSEs._value = 0;
    object._infoList._value = 0;
    object._lsBinObjs._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

}
#pragma pop
