// igUnsignedShortList: Alchemy class registration (0x800358A4..0x800359F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedShortList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_800359F0();
extern char lbl_804749C0[];
}

struct Instance_800358E0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igUnsignedShortList)

void *igUnsignedShortList_vtableRead()
{
    Instance_800358E0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_804749C0;
    object.__vtable = igUnsignedShortList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnsignedShortList)

void igUnsignedShortList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igUnsignedShortList_meta, igDataList_register,
                       fn_80024D1C, igUnsignedShortList_getMetaCall,
                       igUnsignedShortList_className, 0x14,
                       igUnsignedShortList_vtableRead, fn_800359F0, 0, 0);
}

META_GET_META_CALL(igUnsignedShortList)

}
#pragma pop
