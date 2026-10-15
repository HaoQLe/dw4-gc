// beDataBase: Alchemy class registration (0x802DD9B0..0x802DDADC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beDataBase)

extern "C" {
void fn_802DDADC(void *,short);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beDataBase)

META_GET_META(beDataBase)

void *beDataBase_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
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
        char unknown38[8];
    } object;
    igObject_construct(&object);
    object.__vtable = beDataBase_vtable;
    object.unknown08 = 0;
    object.unknown0C = 0;
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
    fn_802DDADC(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
