// igVectorMorphing: Alchemy class registration (0x8011DC90..0x8011DDC4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVectorMorphing)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8011D8BC();
void fn_8011DDC4();
}

struct Instance_8011DCCC_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVectorMorphing)

void *igVectorMorphing_vtableRead()
{
    Instance_8011DCCC_0 object;
    igObject_construct(&object);
    object.__vtable = igVectorMorphing_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVectorMorphing)

void igVectorMorphing_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVectorMorphing_meta, igObject_register,
                       fn_800237D0, igVectorMorphing_getMetaCall,
                       igVectorMorphing_className, 0x8,
                       igVectorMorphing_vtableRead, 0, fn_8011DDC4, 0);
}

META_GET_META_CALL(igVectorMorphing)

}
#pragma pop
