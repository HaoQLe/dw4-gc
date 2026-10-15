// igDynamicLock: Alchemy class registration (0x8014C0A8..0x8014C1F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDynamicLock)
META_DECLARE(igInstanceLock)

extern "C" {
void fn_8012FC48();
void *fn_8014C1F8();
extern char lbl_804A6460[];
extern char lbl_804A6564[];
extern char lbl_804AA8E4[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDynamicLock)

void *igDynamicLock_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AA8E4;
    object.__vtable = lbl_804A6564;
    object.__vtable = igDynamicLock_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDynamicLock)

void igDynamicLock_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igDynamicLock_meta, igInstanceLock_register,
                       fn_8014C1F8, igDynamicLock_getMetaCall,
                       igDynamicLock_className, 0x20,
                       igDynamicLock_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igDynamicLock)

}
#pragma pop
