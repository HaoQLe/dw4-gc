// igPropertyValue: Alchemy class registration (0x801B43EC..0x801B44D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igPropertyValue)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801AA6DC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPropertyValue)

META_ARK_REGISTER(igPropertyValue)

void igPropertyValue_register()
{
    fn_801AA6DC();
    meta_registerClass(1, &igPropertyValue_meta, igObject_register,
                       fn_800237D0, igPropertyValue_getMetaCall,
                       igPropertyValue_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igPropertyValue)

}
#pragma pop
