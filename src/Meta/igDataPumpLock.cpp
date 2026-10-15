// igDataPumpLock: Alchemy class registration (0x8014D0FC..0x8014D258). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDataPumpLock)
META_DECLARE(igCachedInstanceLock)

extern "C" {
void fn_8012FC48();
void *igDataPumpLock_parentMeta();
extern char lbl_804A6460[];
extern char lbl_804A6564[];
extern char lbl_804A8524[];
extern char lbl_804AA8E4[];
}

struct Instance_8014D138_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDataPumpLock)

void *igDataPumpLock_vtableRead()
{
    Instance_8014D138_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AA8E4;
    object.__vtable = lbl_804A6564;
    object.__vtable = lbl_804A8524;
    object.__vtable = igDataPumpLock_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDataPumpLock)

void igDataPumpLock_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igDataPumpLock_meta, igCachedInstanceLock_register,
                       igDataPumpLock_parentMeta, igDataPumpLock_getMetaCall,
                       igDataPumpLock_className, 0x20,
                       igDataPumpLock_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igDataPumpLock)

}
#pragma pop
