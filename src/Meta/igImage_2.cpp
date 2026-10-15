// igImage: Alchemy class registration (0x800D2450..0x800D2544). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igImage)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800CE2F8();
void fn_800D2544();
void fn_800D26C4();
extern char igImage_dependencies[8];
extern char lbl_8055EB8C[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igImage)

META_ARK_REGISTER(igImage)

void igImage_register()
{
    fn_800CE2F8();
    meta_registerClass(1, &igImage_meta, igObject_register,
                       fn_800237D0, igImage_getMetaCall,
                       lbl_8055EB8C, 0x5C,
                       0, fn_800D2544, fn_800D26C4, igImage_dependencies);
}

META_GET_META_CALL(igImage)

}
#pragma pop
