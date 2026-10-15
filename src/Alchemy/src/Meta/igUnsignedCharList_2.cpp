// igUnsignedCharList: Alchemy class registration (0x8003503C..0x80035188). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedCharList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80035188();
extern char lbl_80474CD0[];
}

struct Instance_80035078_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igUnsignedCharList)

void *igUnsignedCharList_vtableRead()
{
    Instance_80035078_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474CD0;
    object.__vtable = igUnsignedCharList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnsignedCharList)

void igUnsignedCharList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igUnsignedCharList_meta, igDataList_register,
                       fn_80024D1C, igUnsignedCharList_getMetaCall,
                       igUnsignedCharList_className, 0x14,
                       igUnsignedCharList_vtableRead, fn_80035188, 0, 0);
}

META_GET_META_CALL(igUnsignedCharList)

}
#pragma pop
