// igListenerProducerBase: Alchemy class registration (0x80142F2C..0x80143014). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igListenerProducerBase)
META_DECLARE(igBase)

extern "C" {
void fn_8012FC48();
void *fn_8013BA10();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igListenerProducerBase)

META_ARK_REGISTER(igListenerProducerBase)

void igListenerProducerBase_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igListenerProducerBase_meta, igBase_register,
                       fn_8013BA10, igListenerProducerBase_getMetaCall,
                       igListenerProducerBase_className, 0x20,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igListenerProducerBase)

}
#pragma pop
