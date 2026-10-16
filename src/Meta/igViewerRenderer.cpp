// igViewerRenderer: Alchemy class registration (0x804053B4..0x8040550C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igViewerRenderer)

extern "C" {
void fn_8040550C(void *, int);
extern char lbl_80497C9C[108];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igViewerRenderer)

META_GET_META(igViewerRenderer)

void *igViewerRenderer_vtableRead()
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
        int unknown38;
        int unknown3C;
        int unknown40;
        char unknown44[4];
        int unknown48;
        int unknown4C;
        int unknown50;
        int unknown54;
        int unknown58;
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_80497C9C;
    object.unknown08 = 0;
    object.__vtable = igViewerRenderer_vtable;
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
    object.unknown38 = 0;
    object.unknown3C = 0;
    object.unknown40 = 0;
    object.unknown48 = 0;
    object.unknown4C = 0;
    object.unknown50 = 0;
    object.unknown54 = 0;
    object.unknown58 = 0;
    void *result = meta_vtableOf(&object);
    fn_8040550C(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
