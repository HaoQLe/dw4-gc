// igMersenneTwisterRandomNumber: Alchemy class registration (0x802177B4..0x802178D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMersenneTwisterRandomNumber)
META_DECLARE(igRandomNumber)

extern "C" {
void fn_80216620();
void *igMersenneTwisterRandomNumber_parentMeta();
extern char lbl_804BC590[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMersenneTwisterRandomNumber)

void *igMersenneTwisterRandomNumber_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[2516];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804BC590;
    object.__vtable = igMersenneTwisterRandomNumber_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMersenneTwisterRandomNumber)

void igMersenneTwisterRandomNumber_register()
{
    fn_80216620();
    meta_registerClass(0, &igMersenneTwisterRandomNumber_meta, igRandomNumber_register,
                       igMersenneTwisterRandomNumber_parentMeta, igMersenneTwisterRandomNumber_getMetaCall,
                       igMersenneTwisterRandomNumber_className, 0x9CC,
                       igMersenneTwisterRandomNumber_vtableRead, igMersenneTwisterRandomNumber_fieldInit, 0, 0);
}

}
#pragma pop
