// igSphere: Alchemy class registration (0x8011F55C..0x8011F6A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSphere)
META_DECLARE(igVolume)

extern "C" {
void fn_8011D8BC();
void *fn_8011F6A4();
void fn_8011F74C();
extern char lbl_8049B9DC[];
}

struct Instance_8011F598_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSphere)

void *igSphere_vtableRead()
{
    Instance_8011F598_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_8049B9DC;
    object.__vtable = igSphere_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSphere)

void igSphere_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igSphere_meta, igVolume_register,
                       fn_8011F6A4, igSphere_getMetaCall,
                       igSphere_className, 0x18,
                       igSphere_vtableRead, igSphere_fieldInit, fn_8011F74C, 0);
}

META_GET_META_CALL(igSphere)

}
#pragma pop
