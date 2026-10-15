// igClut: Alchemy class registration (0x800D562C..0x800D575C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igClut)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800CE2F8();
void fn_800D575C();
extern char lbl_8055ECF8[7];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igClut)

void *igClut_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = igClut_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igClut)

void igClut_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igClut_meta, igObject_register,
                       fn_800237D0, igClut_getMetaCall,
                       lbl_8055ECF8, 0x20,
                       igClut_vtableRead, fn_800D575C, 0, 0);
}

META_GET_META_CALL(igClut)

}
#pragma pop
