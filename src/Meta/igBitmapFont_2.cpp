// igBitmapFont: Alchemy class registration (0x80114BDC..0x80114C9C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBitmapFont)
META_DECLARE(igFont)

extern "C" {
void fn_8010CBD4();
extern char igBitmapFont_dependencies[12];
void *igBitmapFont_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igBitmapFont)

void igBitmapFont_register()
{
    fn_8010CBD4();
    meta_registerClass(0, &igBitmapFont_meta, igFont_register,
                       igBitmapFont_parentMeta, igBitmapFont_getMetaCall,
                       igBitmapFont_className, 0x24,
                       igBitmapFont_vtableRead, igBitmapFont_fieldInit, 0, igBitmapFont_dependencies);
}

META_GET_META_CALL(igBitmapFont)

}
#pragma pop
