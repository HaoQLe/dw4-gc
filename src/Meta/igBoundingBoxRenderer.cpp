// igBoundingBoxRenderer: Alchemy class registration (0x80408C90..0x80408DB8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBoundingBoxRenderer)

extern "C" {
void fn_80408DB8(void *, int);
extern char lbl_80497C9C[108];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igBoundingBoxRenderer)

META_GET_META(igBoundingBoxRenderer)

void *igBoundingBoxRenderer_vtableRead()
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
        char unknown28[4];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_80497C9C;
    object.unknown08 = 0;
    object.__vtable = igBoundingBoxRenderer_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown24 = 0;
    void *result = meta_vtableOf(&object);
    fn_80408DB8(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
