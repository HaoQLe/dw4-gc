// igMemoryImage: Alchemy class registration (0x800D2204..0x800D22EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMemoryImage)
META_DECLARE(igImage)

extern "C" {
void fn_800CE2F8();
void *fn_800D22EC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMemoryImage)

META_ARK_REGISTER(igMemoryImage)

void igMemoryImage_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igMemoryImage_meta, igImage_register,
                       fn_800D22EC, igMemoryImage_getMetaCall,
                       igMemoryImage_className, 0x5C,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igMemoryImage)

}
#pragma pop
