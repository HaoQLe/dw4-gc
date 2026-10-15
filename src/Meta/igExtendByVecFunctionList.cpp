// igExtendByVecFunctionList: Alchemy class registration (0x801209B8..0x80120B34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igExtendByVecFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
extern char lbl_8049B3E0[];
}

struct Instance_80120A2C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igExtendByVecFunctionList)

META_GET_META(igExtendByVecFunctionList)

void *igExtendByVecFunctionList_vtableRead()
{
    Instance_80120A2C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049B3E0;
    object.__vtable = igExtendByVecFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igExtendByVecFunctionList)

void igExtendByVecFunctionList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igExtendByVecFunctionList_meta, igDataList_register,
                       fn_80024D1C, igExtendByVecFunctionList_getMetaCall,
                       igExtendByVecFunctionList_className, 0x14,
                       igExtendByVecFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igExtendByVecFunctionList)

}
#pragma pop
