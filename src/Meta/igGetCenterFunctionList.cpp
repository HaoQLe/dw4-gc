// igGetCenterFunctionList: Alchemy class registration (0x8012024C..0x801203C8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGetCenterFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
extern char lbl_8049B7A0[];
}

struct Instance_801202C0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igGetCenterFunctionList)

META_GET_META(igGetCenterFunctionList)

void *igGetCenterFunctionList_vtableRead()
{
    Instance_801202C0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049B7A0;
    object.__vtable = igGetCenterFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGetCenterFunctionList)

void igGetCenterFunctionList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igGetCenterFunctionList_meta, igDataList_register,
                       fn_80024D1C, igGetCenterFunctionList_getMetaCall,
                       igGetCenterFunctionList_className, 0x14,
                       igGetCenterFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igGetCenterFunctionList)

}
#pragma pop
