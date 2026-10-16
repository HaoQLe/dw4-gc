// beNDMWMdlPlayer: Alchemy class registration (0x80338B10..0x80338C90). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlPlayer)
META_DECLARE(igNamedObject)

extern "C" {
void fn_80338C90(void *, int);
extern char lbl_804CBA60[304];
extern char lbl_804DD724[148];
extern char lbl_804DEE44[204];
extern char lbl_804EDFF8[200];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWMdlPlayer)

META_METAOBJECT(beNDMWMdlPlayer)

META_GET_META(beNDMWMdlPlayer)

void *beNDMWMdlPlayer_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        char unknown0C[12];
        int unknown18;
        char unknown1C[28];
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.unknown08 = 0;
    object.__vtable = lbl_804CBA60;
    object.unknown18 = 0;
    object.__vtable = lbl_804DD724;
    object.__vtable = lbl_804DEE44;
    object.__vtable = lbl_804EDFF8;
    object.__vtable = beNDMWMdlPlayer_vtable;
    void *result = meta_vtableOf(&object);
    fn_80338C90(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
