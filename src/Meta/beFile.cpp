// beFile: Alchemy class registration (0x802DACAC..0x802DADF4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beFile)
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
META_GET_META(beFile)
#pragma pop

void *beFile_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
    } object;
    igObject_construct(&object);
    object.__vtable = beFile_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beFile)

void beFile_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beFile_meta, igObject_register,
                       fn_800237D0, beFile_getMetaCall,
                       beFile_className, 0x8,
                       beFile_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beFile)

}
#pragma pop
