// igLineWidthExt: Alchemy class registration (0x800D18C4..0x800D1A30). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>

META_DECLARE(igLineWidthExt)
META_DECLARE(igContextExt)

extern "C" {
void fn_8004D4BC(void *,float);
void fn_800CE2F8();
void *fn_800D031C();
extern char igLineWidthExt_fieldNames[4];
extern char igLineWidthExt_fieldOffsets[4];
extern char igLineWidthExt_fieldStorage[4];
extern char igLineWidthExt_fieldTypes[4];
extern char lbl_805668C8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLineWidthExt)

META_ARK_REGISTER(igLineWidthExt)

void igLineWidthExt_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igLineWidthExt_meta, igContextExt_register,
                       fn_800D031C, igLineWidthExt_getMetaCall,
                       igLineWidthExt_className, 0x18,
                       0, igLineWidthExt_fieldInit, 0, 0);
}

META_GET_META_CALL(igLineWidthExt)

void igLineWidthExt_fieldInit()
{
    Meta::igMetaObject *meta = igLineWidthExt_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLineWidthExt_fieldTypes, 1);
    Meta::igFloatMetaField *fWidthField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(fWidthField, *reinterpret_cast<float *>(lbl_805668C8 + 0));
    meta_setupFields(meta, igLineWidthExt_fieldNames, igLineWidthExt_fieldStorage, igLineWidthExt_fieldOffsets, base);
}

}
#pragma pop
