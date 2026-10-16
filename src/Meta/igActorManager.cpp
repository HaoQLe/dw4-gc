// igActorManager: Alchemy class registration (0x804091B0..0x804092E0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igActorManager)
META_DECLARE(igNamedObject)

extern "C" {
void fn_804092E0(void *, int);
extern char lbl_804CBA60[304];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igActorManager)

META_GET_META(igActorManager)

void *igActorManager_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        char unknown0C[4];
        int unknown10;
        int unknown14;
        int unknown18;
        int unknown1C;
        int unknown20;
        int unknown24;
        int unknown28;
        int unknown2C;
        int unknown30;
        int unknown34;
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.__vtable = lbl_804CBA60;
    object.unknown08 = 0;
    object.__vtable = igActorManager_vtable;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown24 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown34 = 0;
    void *result = meta_vtableOf(&object);
    fn_804092E0(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
