// beNDMWGameRam: Alchemy class registration (0x80344274..0x80344408). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWGameRam)
META_DECLARE(igNamedObject)

extern "C" {
void fn_80344408(void *, int);
extern char lbl_804CBA60[304];
extern char lbl_804DD724[148];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWGameRam)

META_METAOBJECT(beNDMWGameRam)

META_GET_META(beNDMWGameRam)

void *beNDMWGameRam_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        char unknown0C[12];
        int unknown18;
        char unknown1C[4];
        int unknown20;
        int unknown24;
        int unknown28;
        int unknown2C;
        int unknown30;
        int unknown34;
        int unknown38;
        int unknown3C;
        int unknown40;
        int unknown44;
        char unknown48[4];
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.__vtable = lbl_804CBA60;
    object.__vtable = lbl_804DD724;
    object.unknown08 = 0;
    object.unknown18 = 0;
    object.__vtable = beNDMWGameRam_vtable;
    object.unknown20 = 0;
    object.unknown24 = 0;
    object.unknown28 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown34 = 0;
    object.unknown38 = 0;
    object.unknown3C = 0;
    object.unknown40 = 0;
    object.unknown44 = 0;
    void *result = meta_vtableOf(&object);
    fn_80344408(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
