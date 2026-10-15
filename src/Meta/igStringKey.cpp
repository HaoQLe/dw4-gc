// igStringKey: Alchemy class registration (0x801AE104..0x801AE2C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStringKey)
META_DECLARE(igPropertyKey)

extern "C" {
void fn_801AA6DC();
void *igStringKey_parentMeta();
extern char lbl_804B977C[];
}

struct igStringKeyInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _value;
    char unknown0C[4];
    inline ~igStringKeyInstance() { __vtable = igStringKey_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igStringKey)

META_GET_META(igStringKey)

void *igStringKey_vtableRead()
{
    igStringKeyInstance object;
    object.__vtable = lbl_804B977C;
    object.__vtable = igStringKey_vtable;
    object._value._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStringKey)

void igStringKey_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igStringKey_meta, igPropertyKey_register,
                       igStringKey_parentMeta, igStringKey_getMetaCall,
                       igStringKey_className, 0xC,
                       igStringKey_vtableRead, igStringKey_fieldInit, 0, 0);
}

META_GET_META_CALL(igStringKey)

}
#pragma pop
