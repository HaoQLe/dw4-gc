// igCustomState: Alchemy class registration (0x800D376C..0x800D3854). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCustomState)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void fn_800CE2F8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCustomState)

META_ARK_REGISTER(igCustomState)

void igCustomState_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igCustomState_meta, igNamedObject_register,
                       fn_80023CF4, igCustomState_getMetaCall,
                       igCustomState_className, 0xC,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igCustomState)

}
#pragma pop
