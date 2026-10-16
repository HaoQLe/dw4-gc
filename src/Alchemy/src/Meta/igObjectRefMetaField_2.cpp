// igObjectRefMetaField: Alchemy class registration (0x800289F8..0x80028AB4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectRefMetaField)
META_DECLARE(igRefMetaField)

extern "C" {
void *fn_80025494();
void *fn_80028934();
extern char igObjectRefMetaField_dependencies[12];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igObjectRefMetaField)

void igObjectRefMetaField_register()
{
    meta_registerClass(0, &igObjectRefMetaField_meta, igRefMetaField_register,
                       fn_80025494, igObjectRefMetaField_getMetaCall,
                       igObjectRefMetaField_className, 0x44,
                       fn_80028934, igObjectRefMetaField_fieldInit, 0, igObjectRefMetaField_dependencies);
}

META_GET_META_CALL(igObjectRefMetaField)

}
#pragma pop
