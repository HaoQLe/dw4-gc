// igExtendByRayFunctionList: Alchemy class registration (0x80120CB0..0x80120E2C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igExtendByRayFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
extern char lbl_8049B260[];
}

struct Instance_80120D24_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igExtendByRayFunctionList)

META_GET_META(igExtendByRayFunctionList)

void *igExtendByRayFunctionList_vtableRead()
{
    Instance_80120D24_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049B260;
    object.__vtable = igExtendByRayFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igExtendByRayFunctionList)

void igExtendByRayFunctionList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igExtendByRayFunctionList_meta, igDataList_register,
                       fn_80024D1C, igExtendByRayFunctionList_getMetaCall,
                       igExtendByRayFunctionList_className, 0x14,
                       igExtendByRayFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igExtendByRayFunctionList)

}
#pragma pop
