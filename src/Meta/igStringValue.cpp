// igStringValue: Alchemy class registration (0x801ADF0C..0x801AE094). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStringValue)
META_DECLARE(igPropertyValue)

extern "C" {
void fn_801AA6DC();
void *igStringValue_parentMeta();
extern char lbl_804B983C[];
}

struct igStringValueInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _value;
    char unknown0C[4];
    inline ~igStringValueInstance() { __vtable = igStringValue_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igStringValue)

void *igStringValue_vtableRead()
{
    igStringValueInstance object;
    object.__vtable = lbl_804B983C;
    object.__vtable = igStringValue_vtable;
    object._value._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStringValue)

void igStringValue_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igStringValue_meta, igPropertyValue_register,
                       igStringValue_parentMeta, igStringValue_getMetaCall,
                       igStringValue_className, 0xC,
                       igStringValue_vtableRead, igStringValue_fieldInit, 0, 0);
}

META_GET_META_CALL(igStringValue)

}
#pragma pop
