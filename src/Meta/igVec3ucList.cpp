// igVec3ucList: Alchemy class registration (0x80121EC0..0x8012200C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec3ucList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
void fn_8012200C();
extern char lbl_8049A880[];
}

struct Instance_80121EFC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec3ucList)

void *igVec3ucList_vtableRead()
{
    Instance_80121EFC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049A880;
    object.__vtable = igVec3ucList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec3ucList)

void igVec3ucList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec3ucList_meta, igDataList_register,
                       fn_80024D1C, igVec3ucList_getMetaCall,
                       igVec3ucList_className, 0x14,
                       igVec3ucList_vtableRead, fn_8012200C, 0, 0);
}

META_GET_META_CALL(igVec3ucList)

}
#pragma pop
