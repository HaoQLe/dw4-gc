// igViewerGuiFactory: Alchemy class registration (0x80406228..0x80406344). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igViewerGuiFactory)

extern "C" {
void fn_80406344(void *,short);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igViewerGuiFactory)

META_GET_META(igViewerGuiFactory)

void *igViewerGuiFactory_vtableRead()
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
        char unknown28[8];
    } object;
    igObject_construct(&object);
    object.__vtable = igViewerGuiFactory_vtable;
    object.unknown08 = 0;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown24 = 0;
    void *result = meta_vtableOf(&object);
    fn_80406344(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
