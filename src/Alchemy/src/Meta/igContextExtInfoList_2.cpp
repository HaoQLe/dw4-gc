// igContextExtInfoList: Alchemy class registration (0x80037094..0x800371F4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igContextExtInfoList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igContextExtInfoList_dependencies[8];
extern char lbl_80474294[];
extern char lbl_80476E0C[];
}

struct Instance_800370D0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igContextExtInfoList)

void *igContextExtInfoList_vtableRead()
{
    Instance_800370D0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80474294;
    object.__vtable = igContextExtInfoList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igContextExtInfoList)

void igContextExtInfoList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igContextExtInfoList_meta, igObjectList_register,
                       fn_80024180, igContextExtInfoList_getMetaCall,
                       igContextExtInfoList_className, 0x14,
                       igContextExtInfoList_vtableRead, 0, 0, igContextExtInfoList_dependencies);
}

META_GET_META_CALL(igContextExtInfoList)

}
#pragma pop
