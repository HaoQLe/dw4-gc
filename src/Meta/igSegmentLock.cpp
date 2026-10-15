// igSegmentLock: Alchemy class registration (0x8013384C..0x8013399C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSegmentLock)
META_DECLARE(igTypeLock)

extern "C" {
void fn_8012FC48();
void *igSegmentLock_parentMeta();
extern char lbl_804A2C58[];
extern char lbl_804A6460[];
extern char lbl_804AA8E4[];
}

struct Instance_80133888_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSegmentLock)

void *igSegmentLock_vtableRead()
{
    Instance_80133888_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AA8E4;
    object.__vtable = lbl_804A2C58;
    object.__vtable = igSegmentLock_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSegmentLock)

void igSegmentLock_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igSegmentLock_meta, igTypeLock_register,
                       igSegmentLock_parentMeta, igSegmentLock_getMetaCall,
                       igSegmentLock_className, 0x20,
                       igSegmentLock_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igSegmentLock)

}
#pragma pop
