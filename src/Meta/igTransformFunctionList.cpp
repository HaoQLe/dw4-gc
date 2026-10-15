// igTransformFunctionList: Alchemy class registration (0x801206C0..0x8012083C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTransformFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
extern char lbl_8049B560[];
}

struct Instance_80120734_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTransformFunctionList)

META_GET_META(igTransformFunctionList)

void *igTransformFunctionList_vtableRead()
{
    Instance_80120734_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049B560;
    object.__vtable = igTransformFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTransformFunctionList)

void igTransformFunctionList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igTransformFunctionList_meta, igDataList_register,
                       fn_80024D1C, igTransformFunctionList_getMetaCall,
                       igTransformFunctionList_className, 0x14,
                       igTransformFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igTransformFunctionList)

}
#pragma pop
