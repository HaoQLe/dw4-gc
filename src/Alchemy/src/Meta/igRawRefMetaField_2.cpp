// igRawRefMetaField: Alchemy class registration (0x800276DC..0x8002778C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igRawRefMetaField)
META_DECLARE(igRefMetaField)

extern "C" {
void *fn_80025494();
void *fn_80027648();
extern char igRawRefMetaField_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(igRawRefMetaField)

void igRawRefMetaField_register()
{
    meta_registerClass(0, &igRawRefMetaField_meta, igRefMetaField_register,
                       fn_80025494, igRawRefMetaField_getMetaCall,
                       igRawRefMetaField_className, 0x38,
                       fn_80027648, 0, 0, igRawRefMetaField_dependencies);
}

META_GET_META_CALL(igRawRefMetaField)

}
#pragma pop
