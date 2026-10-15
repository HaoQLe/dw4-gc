// igDoubleList: Alchemy class registration (0x800349A8..0x80034AF4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDoubleList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80034AF4();
extern char lbl_80474F18[];
}

struct Instance_800349E4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDoubleList)

void *igDoubleList_vtableRead()
{
    Instance_800349E4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474F18;
    object.__vtable = igDoubleList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDoubleList)

void igDoubleList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igDoubleList_meta, igDataList_register,
                       fn_80024D1C, igDoubleList_getMetaCall,
                       igDoubleList_className, 0x14,
                       igDoubleList_vtableRead, fn_80034AF4, 0, 0);
}

META_GET_META_CALL(igDoubleList)

}
#pragma pop
