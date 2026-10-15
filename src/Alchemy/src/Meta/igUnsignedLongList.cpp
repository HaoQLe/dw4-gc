// igUnsignedLongList: Alchemy class registration (0x80036170..0x800362F4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedLongList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_800362F4();
extern char lbl_80474720[];
}

struct Instance_800361E4_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igUnsignedLongList)

META_GET_META(igUnsignedLongList)

void *igUnsignedLongList_vtableRead()
{
    Instance_800361E4_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474720;
    object.__vtable = igUnsignedLongList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnsignedLongList)

void igUnsignedLongList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igUnsignedLongList_meta, igDataList_register,
                       fn_80024D1C, igUnsignedLongList_getMetaCall,
                       igUnsignedLongList_className, 0x14,
                       igUnsignedLongList_vtableRead, fn_800362F4, 0, 0);
}

META_GET_META_CALL(igUnsignedLongList)

}
#pragma pop
