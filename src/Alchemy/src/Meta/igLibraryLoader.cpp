// igLibraryLoader: Alchemy class registration (0x8002D770..0x8002D858). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLibraryLoader)
META_DECLARE(igObject)

extern "C" {
void fn_80021B94();
void *fn_800237D0();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLibraryLoader)

META_ARK_REGISTER(igLibraryLoader)

void igLibraryLoader_register()
{
    fn_80021B94();
    meta_registerClass(1, &igLibraryLoader_meta, igObject_register,
                       fn_800237D0, igLibraryLoader_getMetaCall,
                       igLibraryLoader_className, 0x8,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igLibraryLoader)

}
#pragma pop
