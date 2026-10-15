// igRayIntersectionFunctionList: Alchemy class registration (0x80120E2C..0x80120FA8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRayIntersectionFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
extern char lbl_8049B1A0[];
}

struct Instance_80120EA0_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igRayIntersectionFunctionList)

META_GET_META(igRayIntersectionFunctionList)

void *igRayIntersectionFunctionList_vtableRead()
{
    Instance_80120EA0_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049B1A0;
    object.__vtable = igRayIntersectionFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRayIntersectionFunctionList)

void igRayIntersectionFunctionList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igRayIntersectionFunctionList_meta, igDataList_register,
                       fn_80024D1C, igRayIntersectionFunctionList_getMetaCall,
                       igRayIntersectionFunctionList_className, 0x14,
                       igRayIntersectionFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igRayIntersectionFunctionList)

}
#pragma pop
