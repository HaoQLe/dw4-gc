// igParameterMatch: Alchemy class registration (0x80139804..0x80139AB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igParameterMatch)
META_DECLARE(igParameterSetConstraint)

extern "C" {
void fn_8012FC48();
void *fn_80139794();
extern char igParameterMatch_fieldNames[8];
extern char igParameterMatch_fieldOffsets[8];
extern char igParameterMatch_fieldStorage[8];
extern char igParameterMatch_fieldTypes[8];
extern char lbl_804AA298[];
}

struct Instance_804AA298 : igObjectInstance {
    char unknown04[4];
    igStringMember _errorMessage;
    inline ~Instance_804AA298() { __vtable = lbl_804AA298; }
};

struct igParameterMatchInstance : Instance_804AA298 {
    igStringMember _fieldOneName;
    igStringMember _fieldTwoName;
    char unknown14[4];
    inline ~igParameterMatchInstance() { __vtable = igParameterMatch_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igParameterMatch)

META_GET_META(igParameterMatch)

void *igParameterMatch_vtableRead()
{
    igParameterMatchInstance object;
    object.__vtable = lbl_804AA298;
    object._errorMessage._value = 0;
    object.__vtable = igParameterMatch_vtable;
    object._fieldOneName._value = 0;
    object._fieldTwoName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igParameterMatch)

void igParameterMatch_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igParameterMatch_meta, igParameterSetConstraint_register,
                       fn_80139794, igParameterMatch_getMetaCall,
                       igParameterMatch_className, 0x14,
                       igParameterMatch_vtableRead, igParameterMatch_fieldInit, 0, 0);
}

META_GET_META_CALL(igParameterMatch)

void igParameterMatch_fieldInit()
{
    Meta::igMetaObject *meta = igParameterMatch_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igParameterMatch_fieldTypes, 2);
    meta_setupFields(meta, igParameterMatch_fieldNames, igParameterMatch_fieldStorage, igParameterMatch_fieldOffsets, base);
}

}
#pragma pop
