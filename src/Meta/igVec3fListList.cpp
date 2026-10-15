// igVec3fListList: Alchemy class registration (0x80121D60..0x80121EC0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec3fListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8011D8BC();
extern char igVec3fListList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8049A944[];
}

struct Instance_80121D9C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec3fListList)

void *igVec3fListList_vtableRead()
{
    Instance_80121D9C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8049A944;
    object.__vtable = igVec3fListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec3fListList)

void igVec3fListList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec3fListList_meta, igObjectList_register,
                       fn_80024180, igVec3fListList_getMetaCall,
                       igVec3fListList_className, 0x14,
                       igVec3fListList_vtableRead, 0, 0, igVec3fListList_dependencies);
}

META_GET_META_CALL(igVec3fListList)

}
#pragma pop
