// igBellFilterFun: Alchemy class registration (0x8014A11C..0x8014A298). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBellFilterFun)
META_DECLARE(igSerialFilterFun)

extern "C" {
void fn_8012FC48();
void *fn_80149C04();
extern char lbl_804A6BF0[];
extern char lbl_804A8FDC[];
}

struct Instance_8014A190_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igBellFilterFun)

META_GET_META(igBellFilterFun)

void *igBellFilterFun_vtableRead()
{
    Instance_8014A190_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A8FDC;
    object.__vtable = lbl_804A6BF0;
    object.__vtable = igBellFilterFun_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBellFilterFun)

void igBellFilterFun_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igBellFilterFun_meta, igSerialFilterFun_register,
                       fn_80149C04, igBellFilterFun_getMetaCall,
                       igBellFilterFun_className, 0x10,
                       igBellFilterFun_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igBellFilterFun)

}
#pragma pop
