// igParameterSetConstraint: Alchemy class registration (0x80138F34..0x8013908C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igParameterSetConstraint)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8012FC48();
extern char igParameterSetConstraint_fieldNames[4];
extern char igParameterSetConstraint_fieldOffsets[4];
extern char igParameterSetConstraint_fieldStorage[4];
extern char igParameterSetConstraint_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igParameterSetConstraint)

META_ARK_REGISTER(igParameterSetConstraint)

void igParameterSetConstraint_register()
{
    fn_8012FC48();
    meta_registerClass(1, &igParameterSetConstraint_meta, igObject_register,
                       fn_800237D0, igParameterSetConstraint_getMetaCall,
                       igParameterSetConstraint_className, 0xC,
                       0, igParameterSetConstraint_fieldInit, 0, 0);
}

META_GET_META_CALL(igParameterSetConstraint)

void igParameterSetConstraint_fieldInit()
{
    Meta::igMetaObject *meta = igParameterSetConstraint_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igParameterSetConstraint_fieldTypes, 1);
    meta_setupFields(meta, igParameterSetConstraint_fieldNames, igParameterSetConstraint_fieldStorage, igParameterSetConstraint_fieldOffsets, base);
}

}
#pragma pop
