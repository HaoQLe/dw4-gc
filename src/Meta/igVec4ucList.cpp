// igVec4ucList: Alchemy class registration (0x801218DC..0x80121A60). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec4ucList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
void fn_80121A60();
extern char lbl_8049AB90[];
}

struct Instance_80121950_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVec4ucList)

META_GET_META(igVec4ucList)

void *igVec4ucList_vtableRead()
{
    Instance_80121950_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049AB90;
    object.__vtable = igVec4ucList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec4ucList)

void igVec4ucList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec4ucList_meta, igDataList_register,
                       fn_80024D1C, igVec4ucList_getMetaCall,
                       igVec4ucList_className, 0x14,
                       igVec4ucList_vtableRead, fn_80121A60, 0, 0);
}

META_GET_META_CALL(igVec4ucList)

}
#pragma pop
