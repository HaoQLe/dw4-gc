// igDataTable: Alchemy class registration (0x8014C824..0x8014C8E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDataTable)
META_DECLARE(igNamedObject)

extern "C" {
void fn_8014C8E8(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDataTable)

void *igDataTable_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        char unknown14[4];
        int unknown18;
        int unknown1C;
        int unknown20;
        int unknown24;
        int unknown28;
        int unknown2C;
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.unknown08 = 0;
    object.__vtable = igDataTable_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown24 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    void *result = meta_vtableOf(&object);
    fn_8014C8E8(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
