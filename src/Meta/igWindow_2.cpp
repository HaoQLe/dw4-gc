// igWindow: Alchemy class registration (0x800CAF88..0x800CB078). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igWindow)
META_DECLARE(igEventProducer)

extern "C" {
void fn_800CAEE0();
void *fn_800CB078();
void fn_800CB080();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igWindow)

META_ARK_REGISTER(igWindow)

void igWindow_register()
{
    fn_800CAEE0();
    meta_registerClass(1, &igWindow_meta, igEventProducer_register,
                       fn_800CB078, igWindow_getMetaCall,
                       igWindow_className, 0x8,
                       0, fn_800CB080, 0, 0);
}

META_GET_META_CALL(igWindow)

}
#pragma pop
