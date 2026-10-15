// igVec4fList: Alchemy class registration (0x80121B1C..0x80121C68). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVec4fList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
void fn_80121C68();
extern char lbl_8049AA08[];
}

struct Instance_80121B58_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVec4fList)

void *igVec4fList_vtableRead()
{
    Instance_80121B58_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049AA08;
    object.__vtable = igVec4fList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVec4fList)

void igVec4fList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVec4fList_meta, igDataList_register,
                       fn_80024D1C, igVec4fList_getMetaCall,
                       igVec4fList_className, 0x14,
                       igVec4fList_vtableRead, fn_80121C68, 0, 0);
}

META_GET_META_CALL(igVec4fList)

}
#pragma pop
