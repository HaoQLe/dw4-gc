// igBase: Alchemy class registration (0x8015274C..0x80152830). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBase)
META_DECLARE(igInterfaced)

extern "C" {
void fn_8012FC48();
void *fn_801420C0();
extern char lbl_8055FD48[7];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBase)

META_ARK_REGISTER(igBase)

void igBase_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igBase_meta, igInterfaced_register,
                       fn_801420C0, igBase_getMetaCall,
                       lbl_8055FD48, 0x20,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igBase)

}
#pragma pop
