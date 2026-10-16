// igNormalsRenderer: Alchemy class registration (0x804083CC..0x804084F4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNormalsRenderer)

extern "C" {
void fn_804084F4(void *, int);
extern char lbl_80497C9C[108];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(igNormalsRenderer)

META_GET_META(igNormalsRenderer)

void *igNormalsRenderer_vtableRead()
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
        char unknown24[4];
        int unknown28;
        char unknown2C[4];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_80497C9C;
    object.unknown08 = 0;
    object.__vtable = igNormalsRenderer_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown28 = 0;
    void *result = meta_vtableOf(&object);
    fn_804084F4(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
