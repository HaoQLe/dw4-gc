// igUnsignedShortListList: Alchemy class registration (0x800356D0..0x80035830). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedShortListList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igUnsignedShortListList_dependencies[8];
extern char lbl_80474A84[];
extern char lbl_80476E0C[];
}

struct Instance_8003570C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igUnsignedShortListList)

void *igUnsignedShortListList_vtableRead()
{
    Instance_8003570C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_80474A84;
    object.__vtable = igUnsignedShortListList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnsignedShortListList)

void igUnsignedShortListList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igUnsignedShortListList_meta, igObjectList_register,
                       fn_80024180, igUnsignedShortListList_getMetaCall,
                       igUnsignedShortListList_className, 0x14,
                       igUnsignedShortListList_vtableRead, 0, 0, igUnsignedShortListList_dependencies);
}

META_GET_META_CALL(igUnsignedShortListList)

}
#pragma pop
