// igGeometryAttr2: Alchemy class registration (0x800B6540..0x800B6694). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGeometryAttr2)

extern "C" {
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igGeometryAttr2Instance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _vertexArray;
    igObjectRefMember _indexArray;
    igObjectRefMember _stripLengths;
    char unknown18[32];
    inline ~igGeometryAttr2Instance() { __vtable = igGeometryAttr2_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGeometryAttr2)

void *igGeometryAttr2_vtableRead()
{
    igGeometryAttr2Instance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igGeometryAttr2_vtable;
    object._vertexArray._value = 0;
    object._indexArray._value = 0;
    object._stripLengths._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
