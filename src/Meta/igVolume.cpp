// igVolume: Alchemy class registration (0x8011D950..0x8011DA48). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVolume)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8011D8BC();
void fn_8011DA48();
void fn_8011DA70();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVolume)

META_ARK_REGISTER(igVolume)

void igVolume_register()
{
    fn_8011D8BC();
    meta_registerClass(1, &igVolume_meta, igObject_register,
                       fn_800237D0, igVolume_getMetaCall,
                       igVolume_className, 0x8,
                       0, fn_8011DA48, fn_8011DA70, 0);
}

META_GET_META_CALL(igVolume)

}
#pragma pop
