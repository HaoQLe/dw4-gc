// igRayList: Alchemy class registration (0x8011F7A8..0x8011F908). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRayList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8011D8BC();
extern char igRayList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8049B91C[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRayList)

void *igRayList_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8049B91C;
    object.__vtable = igRayList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRayList)

void igRayList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igRayList_meta, igObjectList_register,
                       fn_80024180, igRayList_getMetaCall,
                       igRayList_className, 0x14,
                       igRayList_vtableRead, 0, 0, igRayList_dependencies);
}

META_GET_META_CALL(igRayList)

}
#pragma pop
