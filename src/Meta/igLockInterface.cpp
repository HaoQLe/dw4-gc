// igLockInterface: Alchemy class registration (0x8014298C..0x80142AE0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLockInterface)
META_DECLARE(igInterface)

extern "C" {
extern char lbl_804A6460[];
}

struct igLockInterfaceInstance : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _objectCacheNames;
    igObjectRefMember _objectCacheValids;
    igObjectRefMember _objectCacheLists;
    char unknown2C[12];
    inline ~igLockInterfaceInstance() { __vtable = igLockInterface_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLockInterface)

void *igLockInterface_vtableRead()
{
    igLockInterfaceInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = igInterface_vtable;
    object.__vtable = igLockInterface_vtable;
    object._objectCacheNames._value = 0;
    object._objectCacheValids._value = 0;
    object._objectCacheLists._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
