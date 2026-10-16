// igTransformSequence1_5: Alchemy class registration (0x801AB3D8..0x801AB4E0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTransformSequence1_5)

extern "C" {
void fn_801AB4E0(void *, int);
extern char lbl_804B33F4[264];
extern char lbl_804BA150[136];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTransformSequence1_5)

META_GET_META(igTransformSequence1_5)

void *igTransformSequence1_5_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        int unknown14;
        char unknown18[32];
        int unknown38;
        int unknown3C;
        int unknown40;
        int unknown44;
        char unknown48[24];
        int unknown60;
        char unknown64[4];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804BA150;
    object.__vtable = lbl_804B33F4;
    object.unknown08 = 0;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.unknown14 = 0;
    object.__vtable = igTransformSequence1_5_vtable;
    object.unknown38 = 0;
    object.unknown3C = 0;
    object.unknown40 = 0;
    object.unknown44 = 0;
    object.unknown60 = 0;
    void *result = meta_vtableOf(&object);
    fn_801AB4E0(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
