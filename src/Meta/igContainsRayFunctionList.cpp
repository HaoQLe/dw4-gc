// igContainsRayFunctionList: Alchemy class registration (0x80120B34..0x80120CB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igContainsRayFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
extern char lbl_8049B320[];
}

struct Instance_80120BA8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igContainsRayFunctionList)

META_GET_META(igContainsRayFunctionList)

void *igContainsRayFunctionList_vtableRead()
{
    Instance_80120BA8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049B320;
    object.__vtable = igContainsRayFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igContainsRayFunctionList)

void igContainsRayFunctionList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igContainsRayFunctionList_meta, igDataList_register,
                       fn_80024D1C, igContainsRayFunctionList_getMetaCall,
                       igContainsRayFunctionList_className, 0x14,
                       igContainsRayFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igContainsRayFunctionList)

}
#pragma pop
