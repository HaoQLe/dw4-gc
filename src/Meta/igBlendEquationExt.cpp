// igBlendEquationExt: Alchemy class registration (0x800D59C8..0x800D5B44). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igEnumMetaField.h>

META_DECLARE(igBlendEquationExt)
META_DECLARE(igContextExt)

extern "C" {
void fn_8003D160();
void fn_80046E58(void *,void *);
void fn_800CE2F8();
void *fn_800D031C();
extern char igBlendEquationExt_fieldNames[4];
extern char igBlendEquationExt_fieldOffsets[4];
extern char igBlendEquationExt_fieldStorage[4];
extern char igBlendEquationExt_fieldTypes[4];
extern char lbl_8055ED30[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBlendEquationExt)

META_ARK_REGISTER(igBlendEquationExt)

void igBlendEquationExt_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igBlendEquationExt_meta, igContextExt_register,
                       fn_800D031C, igBlendEquationExt_getMetaCall,
                       igBlendEquationExt_className, 0x18,
                       0, igBlendEquationExt_fieldInit, 0, 0);
}

META_GET_META_CALL(igBlendEquationExt)

void igBlendEquationExt_fieldInit()
{
    Meta::igMetaObject *meta = igBlendEquationExt_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igBlendEquationExt_fieldTypes, 1);
    Meta::igEnumMetaField *equationField = static_cast<Meta::igEnumMetaField *>(meta_field(meta, base));
    fn_80046E58(equationField, lbl_8055ED30);
    equationField->_getMetaEnumFunction = reinterpret_cast<void *>((void *)fn_8003D160);
    meta_setupFields(meta, igBlendEquationExt_fieldNames, igBlendEquationExt_fieldStorage, igBlendEquationExt_fieldOffsets, base);
}

}
#pragma pop
