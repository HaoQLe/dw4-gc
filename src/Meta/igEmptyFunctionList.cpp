// igEmptyFunctionList: Alchemy class registration (0x80120544..0x801206C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igEmptyFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
extern char lbl_8049B620[];
}

struct Instance_801205B8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igEmptyFunctionList)

META_GET_META(igEmptyFunctionList)

void *igEmptyFunctionList_vtableRead()
{
    Instance_801205B8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049B620;
    object.__vtable = igEmptyFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEmptyFunctionList)

void igEmptyFunctionList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igEmptyFunctionList_meta, igDataList_register,
                       fn_80024D1C, igEmptyFunctionList_getMetaCall,
                       igEmptyFunctionList_className, 0x14,
                       igEmptyFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igEmptyFunctionList)

}
#pragma pop
