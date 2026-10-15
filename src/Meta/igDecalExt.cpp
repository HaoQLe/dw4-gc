// igDecalExt: Alchemy class registration (0x800D4C64..0x800D4DBC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDecalExt)
META_DECLARE(igContextExt)

extern "C" {
void fn_800CE2F8();
void *fn_800D031C();
extern char igDecalExt_fieldNames[4];
extern char igDecalExt_fieldOffsets[4];
extern char igDecalExt_fieldStorage[4];
extern char igDecalExt_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDecalExt)

META_ARK_REGISTER(igDecalExt)

void igDecalExt_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igDecalExt_meta, igContextExt_register,
                       fn_800D031C, igDecalExt_getMetaCall,
                       igDecalExt_className, 0x18,
                       0, igDecalExt_fieldInit, 0, 0);
}

META_GET_META_CALL(igDecalExt)

void igDecalExt_fieldInit()
{
    Meta::igMetaObject *meta = igDecalExt_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igDecalExt_fieldTypes, 1);
    meta_setupFields(meta, igDecalExt_fieldNames, igDecalExt_fieldStorage, igDecalExt_fieldOffsets, base);
}

}
#pragma pop
