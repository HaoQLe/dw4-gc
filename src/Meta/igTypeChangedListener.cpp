// igTypeChangedListener: Alchemy class registration (0x80130024..0x801301D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTypeChangedListener)
META_DECLARE(igListenerBase)
META_DECLARE(igObjectChangedListener)

extern "C" {
void fn_8012FC48();
void *fn_801301D4();
extern char igTypeChangedListener_dependencies[8];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct igTypeChangedListenerInstance : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _objectType;
    char unknown24[12];
    inline ~igTypeChangedListenerInstance() { __vtable = igTypeChangedListener_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTypeChangedListener)

void *igTypeChangedListener_vtableRead()
{
    igTypeChangedListenerInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = igListenerBase_vtable;
    object.__vtable = igObjectChangedListener_vtable;
    object.__vtable = igTypeChangedListener_vtable;
    object._objectType._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTypeChangedListener)

void igTypeChangedListener_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igTypeChangedListener_meta, igObjectChangedListener_register,
                       fn_801301D4, igTypeChangedListener_getMetaCall,
                       igTypeChangedListener_className, 0x24,
                       igTypeChangedListener_vtableRead, igTypeChangedListener_fieldInit, 0, igTypeChangedListener_dependencies);
}

META_GET_META_CALL(igTypeChangedListener)

}
#pragma pop
