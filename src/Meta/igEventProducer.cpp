// igEventProducer: Alchemy class registration (0x800CB448..0x800CB530). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igEventProducer)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800CAEE0();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igEventProducer)

META_ARK_REGISTER(igEventProducer)

void igEventProducer_register()
{
    fn_800CAEE0();
    meta_registerClass(1, &igEventProducer_meta, igObject_register,
                       fn_800237D0, igEventProducer_getMetaCall,
                       igEventProducer_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igEventProducer)

}
#pragma pop
