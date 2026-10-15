// igVectorBlending: Alchemy class registration (0x8011DDE4..0x8011DF18). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igVectorBlending)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8011D8BC();
void fn_8011DF18();
}

struct Instance_8011DE20_0 {
    void *__vtable;
    char unknown04[4];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igVectorBlending)

void *igVectorBlending_vtableRead()
{
    Instance_8011DE20_0 object;
    igObject_construct(&object);
    object.__vtable = igVectorBlending_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igVectorBlending)

void igVectorBlending_register()
{
    fn_8011D8BC();
    meta_registerClass(0, &igVectorBlending_meta, igObject_register,
                       fn_800237D0, igVectorBlending_getMetaCall,
                       igVectorBlending_className, 0x8,
                       igVectorBlending_vtableRead, 0, fn_8011DF18, 0);
}

META_GET_META_CALL(igVectorBlending)

}
#pragma pop
