// igMorphedGeometryAttr: Alchemy class registration (0x800B346C..0x800B3588). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMorphedGeometryAttr)

extern "C" {
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igMorphedGeometryAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _geometry;
    igObjectRefMember _morphList;
    char unknown14[12];
    inline ~igMorphedGeometryAttrInstance() { __vtable = igMorphedGeometryAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMorphedGeometryAttr)

void *igMorphedGeometryAttr_vtableRead()
{
    igMorphedGeometryAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igMorphedGeometryAttr_vtable;
    object._geometry._value = 0;
    object._morphList._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
