// igGamecubeLongTimer: Alchemy class registration (0x8003B478..0x8003B59C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeLongTimer)
META_DECLARE(igLongTimer)

extern "C" {
void fn_80021B94();
void *igGamecubeLongTimer_parentMeta();
extern char lbl_80473354[];
extern char lbl_804733EC[];
}

struct Instance_8003B4B4_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeLongTimer)

void *igGamecubeLongTimer_vtableRead()
{
    Instance_8003B4B4_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804733EC;
    object.__vtable = lbl_80473354;
    object.__vtable = igGamecubeLongTimer_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeLongTimer)

void igGamecubeLongTimer_register()
{
    fn_80021B94();
    meta_registerClass(0, &igGamecubeLongTimer_meta, igLongTimer_register,
                       igGamecubeLongTimer_parentMeta, igGamecubeLongTimer_getMetaCall,
                       igGamecubeLongTimer_className, 0x28,
                       igGamecubeLongTimer_vtableRead, 0, 0, 0);
}

}
#pragma pop
