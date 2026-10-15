// igViewerStatisticsManager: Alchemy class registration (0x80402E5C..0x80402F78). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igViewerStatisticsManager)

extern "C" {
void fn_80402F78(void *,short);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igViewerStatisticsManager)

META_GET_META(igViewerStatisticsManager)

void *igViewerStatisticsManager_vtableRead()
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
        char unknown20[4];
        int unknown24;
        int unknown28;
        char unknown2C[36];
    } object;
    igObject_construct(&object);
    object.__vtable = igViewerStatisticsManager_vtable;
    object.unknown08 = 0;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown24 = 0;
    object.unknown28 = 0;
    void *result = meta_vtableOf(&object);
    fn_80402F78(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
