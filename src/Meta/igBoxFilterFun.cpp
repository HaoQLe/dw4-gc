// igBoxFilterFun: Alchemy class registration (0x8014A414..0x8014A590). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBoxFilterFun)
META_DECLARE(igSerialFilterFun)

extern "C" {
void fn_8012FC48();
void *fn_80149C04();
extern char lbl_804A6BF0[];
extern char lbl_804A8FDC[];
}

struct Instance_8014A488_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igBoxFilterFun)

META_GET_META(igBoxFilterFun)

void *igBoxFilterFun_vtableRead()
{
    Instance_8014A488_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A8FDC;
    object.__vtable = lbl_804A6BF0;
    object.__vtable = igBoxFilterFun_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBoxFilterFun)

void igBoxFilterFun_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igBoxFilterFun_meta, igSerialFilterFun_register,
                       fn_80149C04, igBoxFilterFun_getMetaCall,
                       igBoxFilterFun_className, 0x10,
                       igBoxFilterFun_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igBoxFilterFun)

}
#pragma pop
