// igListenerBase: Alchemy class registration (0x80143808..0x8014394C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igListenerBase)
META_DECLARE(igBase)

extern "C" {
void fn_8012FC48();
void *fn_8013BA10();
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_80143844_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igListenerBase)

void *igListenerBase_vtableRead()
{
    Instance_80143844_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = igListenerBase_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igListenerBase)

void igListenerBase_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igListenerBase_meta, igBase_register,
                       fn_8013BA10, igListenerBase_getMetaCall,
                       igListenerBase_className, 0x20,
                       igListenerBase_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igListenerBase)

}
#pragma pop
