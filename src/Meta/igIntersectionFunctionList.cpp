// igIntersectionFunctionList: Alchemy class registration (0x801212A0..0x8012141C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIntersectionFunctionList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
extern char lbl_8049AF60[];
}

struct Instance_80121314_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igIntersectionFunctionList)

META_GET_META(igIntersectionFunctionList)

void *igIntersectionFunctionList_vtableRead()
{
    Instance_80121314_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049AF60;
    object.__vtable = igIntersectionFunctionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIntersectionFunctionList)

void igIntersectionFunctionList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igIntersectionFunctionList_meta, igDataList_register,
                       fn_80024D1C, igIntersectionFunctionList_getMetaCall,
                       igIntersectionFunctionList_className, 0x14,
                       igIntersectionFunctionList_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igIntersectionFunctionList)

}
#pragma pop
