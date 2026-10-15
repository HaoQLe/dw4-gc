// igParameterNonNull: Alchemy class registration (0x801395C0..0x80139794). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igParameterNonNull)
META_DECLARE(igParameterSetConstraint)

extern "C" {
void fn_8012FC48();
void *fn_80139794();
extern char lbl_804AA298[];
}

struct Instance_804AA298 : igObjectInstance {
    char unknown04[4];
    igStringMember _errorMessage;
    inline ~Instance_804AA298() { __vtable = lbl_804AA298; }
};

struct igParameterNonNullInstance : Instance_804AA298 {
    igStringMember _fieldName;
    inline ~igParameterNonNullInstance() { __vtable = igParameterNonNull_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igParameterNonNull)

void *igParameterNonNull_vtableRead()
{
    igParameterNonNullInstance object;
    object.__vtable = lbl_804AA298;
    object._errorMessage._value = 0;
    object.__vtable = igParameterNonNull_vtable;
    object._fieldName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igParameterNonNull)

void igParameterNonNull_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igParameterNonNull_meta, igParameterSetConstraint_register,
                       fn_80139794, igParameterNonNull_getMetaCall,
                       igParameterNonNull_className, 0x10,
                       igParameterNonNull_vtableRead, igParameterNonNull_fieldInit, 0, 0);
}

META_GET_META_CALL(igParameterNonNull)

}
#pragma pop
