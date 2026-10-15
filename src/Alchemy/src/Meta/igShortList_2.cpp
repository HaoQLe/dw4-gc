// igShortList: Alchemy class registration (0x8003548C..0x800355D8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igShortList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_800355D8();
extern char lbl_80474B48[];
}

struct Instance_800354C8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igShortList)

void *igShortList_vtableRead()
{
    Instance_800354C8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474B48;
    object.__vtable = igShortList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igShortList)

void igShortList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igShortList_meta, igDataList_register,
                       fn_80024D1C, igShortList_getMetaCall,
                       igShortList_className, 0x14,
                       igShortList_vtableRead, fn_800355D8, 0, 0);
}

META_GET_META_CALL(igShortList)

}
#pragma pop
