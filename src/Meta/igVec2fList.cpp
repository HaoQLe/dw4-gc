// igVec2fList: Alchemy class registration (0x80122344..0x801224C8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec2fList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
void fn_801224C8();
extern char lbl_8049A638[];
}

struct Instance_801223B8_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igVec2fList)

META_GET_META(igVec2fList)

void *igVec2fList_vtableRead()
{
    Instance_801223B8_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049A638;
    object.__vtable = igVec2fList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec2fList)

void igVec2fList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec2fList_meta, igDataList_register,
                       fn_80024D1C, igVec2fList_getMetaCall,
                       igVec2fList_className, 0x14,
                       igVec2fList_vtableRead, fn_801224C8, 0, 0);
}

META_GET_META_CALL(igVec2fList)

}
#pragma pop
