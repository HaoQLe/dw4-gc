// igVolumeList: Alchemy class registration (0x8011DB30..0x8011DC90). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVolumeList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8011D8BC();
extern char igVolumeList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8049BB54[];
}

struct Instance_8011DB6C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVolumeList)

void *igVolumeList_vtableRead()
{
    Instance_8011DB6C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8049BB54;
    object.__vtable = igVolumeList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVolumeList)

void igVolumeList_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVolumeList_meta, igObjectList_register,
                       fn_80024180, igVolumeList_getMetaCall,
                       igVolumeList_className, 0x14,
                       igVolumeList_vtableRead, 0, 0, igVolumeList_dependencies);
}

META_GET_META_CALL(igVolumeList)

}
#pragma pop
