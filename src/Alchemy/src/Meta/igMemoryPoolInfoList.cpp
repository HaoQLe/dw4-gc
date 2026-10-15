// igMemoryPoolInfoList: Alchemy class registration (0x8002B594..0x8002B6F4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMemoryPoolInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igMemoryPoolInfoList_dependencies[8];
extern char lbl_80476024[];
extern char lbl_80476E0C[];
}

struct Instance_8002B5D0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMemoryPoolInfoList)

void *igMemoryPoolInfoList_vtableRead()
{
    Instance_8002B5D0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80476024;
    object.__vtable = igMemoryPoolInfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMemoryPoolInfoList)

void igMemoryPoolInfoList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igMemoryPoolInfoList_meta, igObjectList_register,
                       fn_80024180, igMemoryPoolInfoList_getMetaCall,
                       igMemoryPoolInfoList_className, 0x14,
                       igMemoryPoolInfoList_vtableRead, 0, 0, igMemoryPoolInfoList_dependencies);
}

META_GET_META_CALL(igMemoryPoolInfoList)

}
#pragma pop
