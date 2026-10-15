// igAnimationDatabaseList: Alchemy class registration (0x801CAA98..0x801CABF8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationDatabaseList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igAnimationDatabaseList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B63E8[];
}

struct Instance_801CAAD4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationDatabaseList)

void *igAnimationDatabaseList_vtableRead()
{
    Instance_801CAAD4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B63E8;
    object.__vtable = igAnimationDatabaseList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationDatabaseList)

void igAnimationDatabaseList_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationDatabaseList_meta, igObjectList_register,
                       fn_80024180, igAnimationDatabaseList_getMetaCall,
                       igAnimationDatabaseList_className, 0x14,
                       igAnimationDatabaseList_vtableRead, 0, 0, igAnimationDatabaseList_dependencies);
}

META_GET_META_CALL(igAnimationDatabaseList)

}
#pragma pop
