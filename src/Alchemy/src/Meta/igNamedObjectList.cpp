// igNamedObjectList: Alchemy class registration (0x80029A98..0x80029BF8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNamedObjectList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igNamedObjectList_dependencies[8];
extern char lbl_80476298[];
extern char lbl_80476E0C[];
}

struct Instance_80029AD4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igNamedObjectList)

void *igNamedObjectList_vtableRead()
{
    Instance_80029AD4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80476298;
    object.__vtable = igNamedObjectList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNamedObjectList)

void igNamedObjectList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igNamedObjectList_meta, igObjectList_register,
                       fn_80024180, igNamedObjectList_getMetaCall,
                       igNamedObjectList_className, 0x14,
                       igNamedObjectList_vtableRead, 0, 0, igNamedObjectList_dependencies);
}

META_GET_META_CALL(igNamedObjectList)

}
#pragma pop
