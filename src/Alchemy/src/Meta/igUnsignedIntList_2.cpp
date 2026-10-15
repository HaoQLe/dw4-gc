// igUnsignedIntList: Alchemy class registration (0x80035CEC..0x80035E38). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igUnsignedIntList)
META_DECLARE(igDataList)

extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void fn_80035E38();
extern char lbl_80474900[];
}

struct Instance_80035D28_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igUnsignedIntList)

void *igUnsignedIntList_vtableRead()
{
    Instance_80035D28_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80474900;
    object.__vtable = igUnsignedIntList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igUnsignedIntList)

void igUnsignedIntList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igUnsignedIntList_meta, igDataList_register,
                       fn_80024D1C, igUnsignedIntList_getMetaCall,
                       igUnsignedIntList_className, 0x14,
                       igUnsignedIntList_vtableRead, fn_80035E38, 0, 0);
}

META_GET_META_CALL(igUnsignedIntList)

}
#pragma pop
