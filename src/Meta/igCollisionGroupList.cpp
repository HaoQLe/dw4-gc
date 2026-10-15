// igCollisionGroupList: Alchemy class registration (0x8028D058..0x8028D1B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCollisionGroupList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8028C93C();
extern char igCollisionGroupList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804CCF28[];
}

struct Instance_8028D094_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollisionGroupList)

void *igCollisionGroupList_vtableRead()
{
    Instance_8028D094_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804CCF28;
    object.__vtable = igCollisionGroupList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollisionGroupList)

void igCollisionGroupList_register()
{
    fn_8028C93C();
    meta_registerClass(0, &igCollisionGroupList_meta, igObjectList_register,
                       fn_80024180, igCollisionGroupList_getMetaCall,
                       igCollisionGroupList_className, 0x14,
                       igCollisionGroupList_vtableRead, 0, 0, igCollisionGroupList_dependencies);
}

META_GET_META_CALL(igCollisionGroupList)

}
#pragma pop
