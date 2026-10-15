// igObjectChangedEvent: Alchemy class registration (0x80140B48..0x80140C3C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectChangedEvent)
META_DECLARE(igMessageBase)

extern "C" {
void fn_8012FC48();
void *fn_80140C3C();
extern char igObjectChangedEvent_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectChangedEvent)

META_ARK_REGISTER(igObjectChangedEvent)

void igObjectChangedEvent_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igObjectChangedEvent_meta, igMessageBase_register,
                       fn_80140C3C, igObjectChangedEvent_getMetaCall,
                       igObjectChangedEvent_className, 0x24,
                       0, igObjectChangedEvent_fieldInit, 0, igObjectChangedEvent_dependencies);
}

META_GET_META_CALL(igObjectChangedEvent)

}
#pragma pop
