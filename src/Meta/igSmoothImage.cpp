// igSmoothImage: Alchemy class registration (0x801495A0..0x80149688). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSmoothImage)
META_DECLARE(igFilterImage)

extern "C" {
void fn_8012FC48();
void *fn_80149688();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSmoothImage)

META_ARK_REGISTER(igSmoothImage)

void igSmoothImage_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igSmoothImage_meta, igFilterImage_register,
                       fn_80149688, igSmoothImage_getMetaCall,
                       igSmoothImage_className, 0x14,
                       0, 0, 0, 0);
}

META_GET_META_CALL(igSmoothImage)

}
#pragma pop
