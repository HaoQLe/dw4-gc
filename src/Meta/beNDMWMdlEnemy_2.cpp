// beNDMWMdlEnemy: Alchemy class registration (0x8033ACF8..0x8033AE78). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beNDMWMdlEnemy)
META_DECLARE(igNamedObject)

extern "C" {
void fn_8033AE78(void *, int);
extern char lbl_804CBA60[304];
extern char lbl_804DD724[148];
extern char lbl_804DEE44[204];
extern char lbl_804EDFF8[200];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWMdlEnemy)

META_METAOBJECT(beNDMWMdlEnemy)

META_GET_META(beNDMWMdlEnemy)

#pragma push
#pragma optimize_for_size on
void *beNDMWMdlEnemy_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        char unknown0C[12];
        int unknown18;
        char unknown1C[16];
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.unknown08 = 0;
    object.__vtable = lbl_804CBA60;
    object.unknown18 = 0;
    object.__vtable = lbl_804DD724;
    object.__vtable = lbl_804DEE44;
    object.__vtable = lbl_804EDFF8;
    object.__vtable = beNDMWMdlEnemy_vtable;
    void *result = meta_vtableOf(&object);
    fn_8033AE78(&object, -1);   // the class's destructor
    return result;
}
#pragma pop

}
#pragma pop
