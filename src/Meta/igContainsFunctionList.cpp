// igContainsFunctionList: Alchemy class registration (0x80120FA8..0x80121124). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igContainsFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
extern char lbl_8049B0E0[];
}

struct Instance_8012101C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igContainsFunctionList)

META_GET_META(igContainsFunctionList)

void *igContainsFunctionList_vtableRead()
{
    Instance_8012101C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049B0E0;
    object.__vtable = igContainsFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igContainsFunctionList)

void igContainsFunctionList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igContainsFunctionList_meta, igDataList_register,
                       fn_80024D1C, igContainsFunctionList_getMetaCall,
                       igContainsFunctionList_className, 0x14,
                       igContainsFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igContainsFunctionList)

}
#pragma pop
