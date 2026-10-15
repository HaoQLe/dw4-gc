// beMessengerArgData: Alchemy class registration (0x802CF580..0x802CF6E0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beMessengerArgData)

extern "C" {
void fn_802CF6E0(void *,short);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beMessengerArgData)

META_METAOBJECT(beMessengerArgData)

META_GET_META(beMessengerArgData)

void *beMessengerArgData_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[8];
        int unknown0C;
        int unknown10;
        int unknown14;
        int unknown18;
        int unknown1C;
        int unknown20;
        int unknown24;
        int unknown28;
        int unknown2C;
    } object;
    igObject_construct(&object);
    object.__vtable = beMessengerArgData_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown24 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    void *result = meta_vtableOf(&object);
    fn_802CF6E0(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
