// igMatrix44fList: Alchemy class registration (0x80121458..0x801215A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMatrix44fList)
META_DECLARE(igDataList)

extern "C" {
void *fn_80024D1C();
void fn_8011D8BC();
void fn_801215A4();
extern char lbl_8049ADD8[];
}

struct Instance_80121494_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMatrix44fList)

void *igMatrix44fList_vtableRead()
{
    Instance_80121494_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_8049ADD8;
    object.__vtable = igMatrix44fList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMatrix44fList)

void igMatrix44fList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igMatrix44fList_meta, igDataList_register,
                       fn_80024D1C, igMatrix44fList_getMetaCall,
                       igMatrix44fList_className, 0x14,
                       igMatrix44fList_vtableRead, fn_801215A4, 0, 0);
}

META_GET_META_CALL(igMatrix44fList)

}
#pragma pop
