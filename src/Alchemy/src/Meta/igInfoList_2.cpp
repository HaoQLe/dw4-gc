// igInfoList: Alchemy class registration (0x8002E860..0x8002E9C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igInfoList_dependencies[8];
extern char lbl_80475AFC[];
extern char lbl_80476E0C[];
}

struct Instance_8002E89C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInfoList)

void *igInfoList_vtableRead()
{
    Instance_8002E89C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80475AFC;
    object.__vtable = igInfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInfoList)

void igInfoList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igInfoList_meta, igObjectList_register,
                       fn_80024180, igInfoList_getMetaCall,
                       igInfoList_className, 0x14,
                       igInfoList_vtableRead, 0, 0, igInfoList_dependencies);
}

META_GET_META_CALL(igInfoList)

}
#pragma pop
