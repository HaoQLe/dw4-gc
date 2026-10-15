// beUnicode: Alchemy class registration (0x802B5148..0x802B5290). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beUnicode)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beUnicode)

void *beUnicode_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
    } object;
    igObject_construct(&object);
    object.__vtable = beUnicode_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beUnicode)

void beUnicode_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beUnicode_meta, igObject_register,
                       fn_800237D0, beUnicode_getMetaCall,
                       beUnicode_className, 0x8,
                       beUnicode_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beUnicode)

}
#pragma pop
