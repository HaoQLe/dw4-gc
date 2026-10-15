// igGeometryAttrList: Alchemy class registration (0x800BACD4..0x800BAE34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGeometryAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igGeometryAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047DA24[];
}

struct Instance_800BAD10_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGeometryAttrList)

void *igGeometryAttrList_vtableRead()
{
    Instance_800BAD10_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047DA24;
    object.__vtable = igGeometryAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGeometryAttrList)

void igGeometryAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igGeometryAttrList_meta, igObjectList_register,
                       fn_80024180, igGeometryAttrList_getMetaCall,
                       igGeometryAttrList_className, 0x14,
                       igGeometryAttrList_vtableRead, 0, 0, igGeometryAttrList_dependencies);
}

META_GET_META_CALL(igGeometryAttrList)

}
#pragma pop
