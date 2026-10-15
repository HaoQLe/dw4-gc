// igInsightCore: Alchemy class registration (0x80285E9C..0x80286008). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInsightCore)

extern "C" {
void fn_80286008(void *,short);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igInsightCore)

META_METAOBJECT(igInsightCore)

META_GET_META(igInsightCore)

void *igInsightCore_vtableRead()
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
        char unknown34[52];
        int unknown68;
        char unknown6C[4];
    } object;
    igObject_construct(&object);
    object.__vtable = igInsightCore_vtable;
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
    object.unknown68 = 0;
    void *result = meta_vtableOf(&object);
    fn_80286008(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
