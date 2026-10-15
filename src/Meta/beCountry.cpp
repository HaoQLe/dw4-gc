// beCountry: Alchemy class registration (0x802E0218..0x802E0360). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beCountry)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_GET_META(beCountry)
#pragma pop

void *beCountry_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
    } object;
    igObject_construct(&object);
    object.__vtable = beCountry_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beCountry)

void beCountry_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCountry_meta, igObject_register,
                       fn_800237D0, beCountry_getMetaCall,
                       beCountry_className, 0x8,
                       beCountry_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beCountry)

}
#pragma pop
