// igAction: Alchemy class registration (0x80115A40..0x80115B28). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAction)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8010CBD4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAction)

META_ARK_REGISTER(igAction)

void igAction_register()
{
    fn_8010CBD4();
    meta_registerClass(1, &igAction_meta, igObject_register,
                       fn_800237D0, igAction_getMetaCall,
                       igAction_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igAction)

}
#pragma pop
