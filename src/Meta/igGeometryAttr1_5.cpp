// igGeometryAttr1_5: Alchemy class registration (0x800B68D0..0x800B6BA0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGeometryAttr1_5)
META_DECLARE(igGeometryAttr)

extern "C" {
void fn_800ABC8C();
extern char igGeometryAttr1_5_dependencies[8];
void *igGeometryAttr1_5_parentMeta();
extern char lbl_8047C5AC[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct Instance_8047C5AC : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _vertexArray;
    igObjectRefMember _indexArray;
    char unknown14[12];
    igObjectRefMember _primLengths;
    char unknown24[4];
    igObjectRefMember _dPds;
    igObjectRefMember _dPdt;
    inline ~Instance_8047C5AC() { __vtable = lbl_8047C5AC; }
};

struct igGeometryAttr1_5Instance : Instance_8047C5AC {
    igObjectRefMember _stripLengths;
    char unknown34[12];
    inline ~igGeometryAttr1_5Instance() { __vtable = igGeometryAttr1_5_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGeometryAttr1_5)

void *igGeometryAttr1_5_vtableRead()
{
    igGeometryAttr1_5Instance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = lbl_8047C5AC;
    object._vertexArray._value = 0;
    object._indexArray._value = 0;
    object._primLengths._value = 0;
    object._dPds._value = 0;
    object._dPdt._value = 0;
    object.__vtable = igGeometryAttr1_5_vtable;
    object._stripLengths._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGeometryAttr1_5)

void igGeometryAttr1_5_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igGeometryAttr1_5_meta, igGeometryAttr_register,
                       igGeometryAttr1_5_parentMeta, igGeometryAttr1_5_getMetaCall,
                       igGeometryAttr1_5_className, 0x34,
                       igGeometryAttr1_5_vtableRead, igGeometryAttr1_5_fieldInit, 0, igGeometryAttr1_5_dependencies);
}

META_GET_META_CALL(igGeometryAttr1_5)

}
#pragma pop
