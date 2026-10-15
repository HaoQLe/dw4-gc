// igExtendByFunctionList: Alchemy class registration (0x80121124..0x801212A0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igExtendByFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
extern char lbl_8049B020[];
}

struct Instance_80121198_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igExtendByFunctionList)

META_GET_META(igExtendByFunctionList)

void *igExtendByFunctionList_vtableRead()
{
    Instance_80121198_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049B020;
    object.__vtable = igExtendByFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igExtendByFunctionList)

void igExtendByFunctionList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igExtendByFunctionList_meta, igDataList_register,
                       fn_80024D1C, igExtendByFunctionList_getMetaCall,
                       igExtendByFunctionList_className, 0x14,
                       igExtendByFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igExtendByFunctionList)

}
#pragma pop
