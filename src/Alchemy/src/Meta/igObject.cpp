// igObject: Alchemy class registration (0x80066AE0..0x80066B74). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObject)

extern "C" {
void fn_80066A60();
void *fn_80066AA4();
void *fn_80066AAC();
Meta::igMetaObject *fn_80066B74();
void fn_80066B7C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igObject)

void igObject_register()
{
    meta_registerClass(0, &igObject_meta, fn_80066A60,
                       fn_80066AA4, fn_80066B74,
                       igObject_className, 0x8,
                       fn_80066AAC, fn_80066B7C, 0, 0);
}

}
#pragma pop
