// igFileImage: Alchemy class registration (0x800D22F4..0x800D23DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFileImage)
META_DECLARE(igImage)

extern "C" {
void fn_800CE2F8();
void *fn_800D22EC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igFileImage)

META_ARK_REGISTER(igFileImage)

void igFileImage_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igFileImage_meta, igImage_register,
                       fn_800D22EC, igFileImage_getMetaCall,
                       igFileImage_className, 0x5C,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igFileImage)

}
#pragma pop
