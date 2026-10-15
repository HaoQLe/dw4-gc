// igRandomNumber: Alchemy class registration (0x80216ADC..0x80216BCC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRandomNumber)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80216620();
void fn_80216BCC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRandomNumber)

META_ARK_REGISTER(igRandomNumber)

void igRandomNumber_register()
{
    fn_80216620();
    meta_registerClass(1, &igRandomNumber_meta, igObject_register,
                       fn_800237D0, igRandomNumber_getMetaCall,
                       igRandomNumber_className, 0x8,
                       0, fn_80216BCC, 0, 0);
}

META_GET_META_CALL(igRandomNumber)

}
#pragma pop
