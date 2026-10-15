// igInstanceChangedListener: Alchemy class registration (0x80146F64..0x801470C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInstanceChangedListener)
META_DECLARE(igListenerBase)
META_DECLARE(igObjectChangedListener)

extern "C" {
void fn_8012FC48();
void *fn_801301D4();
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_80146FA0_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInstanceChangedListener)

void *igInstanceChangedListener_vtableRead()
{
    Instance_80146FA0_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = igListenerBase_vtable;
    object.__vtable = igObjectChangedListener_vtable;
    object.__vtable = igInstanceChangedListener_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInstanceChangedListener)

void igInstanceChangedListener_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igInstanceChangedListener_meta, igObjectChangedListener_register,
                       fn_801301D4, igInstanceChangedListener_getMetaCall,
                       igInstanceChangedListener_className, 0x20,
                       igInstanceChangedListener_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igInstanceChangedListener)

}
#pragma pop
