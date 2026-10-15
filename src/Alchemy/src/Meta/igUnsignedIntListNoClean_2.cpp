// igUnsignedIntListNoClean: Alchemy class registration (0x80035B20..0x80035C70). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedIntListNoClean)
META_DECLARE(igDataList)
META_DECLARE(igUnsignedIntList)

extern "C" {
void fn_80021B94();
void *fn_80035C70();
extern char lbl_80474900[];
}

struct Instance_80035B5C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igUnsignedIntListNoClean)

void *igUnsignedIntListNoClean_vtableRead()
{
    Instance_80035B5C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474900;
    object.__vtable = igUnsignedIntList_vtable;
    object.__vtable = igUnsignedIntListNoClean_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnsignedIntListNoClean)

void igUnsignedIntListNoClean_register()
{
    fn_80021B94();
    meta_registerClass(0, &igUnsignedIntListNoClean_meta, igUnsignedIntList_register,
                       fn_80035C70, igUnsignedIntListNoClean_getMetaCall,
                       igUnsignedIntListNoClean_className, 0x14,
                       igUnsignedIntListNoClean_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igUnsignedIntListNoClean)

}
#pragma pop
