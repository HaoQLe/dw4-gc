// igObjectChangedListener: Alchemy class registration (0x801409F0..0x80140B40). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectChangedListener)
META_DECLARE(igListenerBase)

extern "C" {
void fn_8012FC48();
void *igObjectChangedListener_parentMeta();
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_80140A2C_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igObjectChangedListener)

void *igObjectChangedListener_vtableRead()
{
    Instance_80140A2C_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = igListenerBase_vtable;
    object.__vtable = igObjectChangedListener_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectChangedListener)

void igObjectChangedListener_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igObjectChangedListener_meta, igListenerBase_register,
                       igObjectChangedListener_parentMeta, igObjectChangedListener_getMetaCall,
                       igObjectChangedListener_className, 0x20,
                       igObjectChangedListener_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igObjectChangedListener)

}
#pragma pop
