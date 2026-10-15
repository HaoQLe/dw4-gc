// igGamecubeSemaphore: Alchemy class registration (0x8003B238..0x8003B3B4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeSemaphore)
META_DECLARE(igNamedObject)
META_DECLARE(igSemaphore)

extern "C" {
void fn_80021B94();
void *igGamecubeSemaphore_parentMeta();
extern char lbl_80473480[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_80473480 : igNamedObjectInstance {
    inline ~Instance_80473480() { __vtable = lbl_80473480; }
};

struct igGamecubeSemaphoreInstance : Instance_80473480 {
    char unknown0C[36];
    inline ~igGamecubeSemaphoreInstance() { __vtable = igGamecubeSemaphore_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeSemaphore)

void *igGamecubeSemaphore_vtableRead()
{
    igGamecubeSemaphoreInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_80473480;
    object.__vtable = igGamecubeSemaphore_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeSemaphore)

void igGamecubeSemaphore_register()
{
    fn_80021B94();
    meta_registerClass(0, &igGamecubeSemaphore_meta, igSemaphore_register,
                       igGamecubeSemaphore_parentMeta, igGamecubeSemaphore_getMetaCall,
                       igGamecubeSemaphore_className, 0x24,
                       igGamecubeSemaphore_vtableRead, igGamecubeSemaphore_fieldInit, 0, 0);
}

}
#pragma pop
