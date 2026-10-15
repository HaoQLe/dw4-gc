// igContainsVecFunctionList: Alchemy class registration (0x8012083C..0x801209B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igContainsVecFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
extern char lbl_8049B4A0[];
}

struct Instance_801208B0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igContainsVecFunctionList)

META_GET_META(igContainsVecFunctionList)

void *igContainsVecFunctionList_vtableRead()
{
    Instance_801208B0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049B4A0;
    object.__vtable = igContainsVecFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igContainsVecFunctionList)

void igContainsVecFunctionList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igContainsVecFunctionList_meta, igDataList_register,
                       fn_80024D1C, igContainsVecFunctionList_getMetaCall,
                       igContainsVecFunctionList_className, 0x14,
                       igContainsVecFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igContainsVecFunctionList)

}
#pragma pop
