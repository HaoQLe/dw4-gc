// igIsEmptyFunctionList: Alchemy class registration (0x801203C8..0x80120544). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIsEmptyFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
extern char lbl_8049B6E0[];
}

struct Instance_8012043C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igIsEmptyFunctionList)

META_GET_META(igIsEmptyFunctionList)

void *igIsEmptyFunctionList_vtableRead()
{
    Instance_8012043C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049B6E0;
    object.__vtable = igIsEmptyFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIsEmptyFunctionList)

void igIsEmptyFunctionList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igIsEmptyFunctionList_meta, igDataList_register,
                       fn_80024D1C, igIsEmptyFunctionList_getMetaCall,
                       igIsEmptyFunctionList_className, 0x14,
                       igIsEmptyFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igIsEmptyFunctionList)

}
#pragma pop
