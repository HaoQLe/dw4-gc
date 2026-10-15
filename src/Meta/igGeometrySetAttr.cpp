// igGeometrySetAttr: Alchemy class registration (0x800B5FC0..0x800B60DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGeometrySetAttr)

extern "C" {
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igGeometrySetAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _vc;
    char unknown10[4];
    igObjectRefMember _geometryAttrList;
    char unknown18[8];
    inline ~igGeometrySetAttrInstance() { __vtable = igGeometrySetAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGeometrySetAttr)

void *igGeometrySetAttr_vtableRead()
{
    igGeometrySetAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igGeometrySetAttr_vtable;
    object._vc._value = 0;
    object._geometryAttrList._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
