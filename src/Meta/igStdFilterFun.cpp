// igStdFilterFun: Alchemy class registration (0x8014A590..0x8014A6D4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStdFilterFun)
META_DECLARE(igSerialFilterFun)

extern "C" {
void fn_8012FC48();
void *fn_80149C04();
extern char lbl_804A6BF0[];
extern char lbl_804A8FDC[];
}

struct Instance_8014A5CC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igStdFilterFun)

void *igStdFilterFun_vtableRead()
{
    Instance_8014A5CC_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A8FDC;
    object.__vtable = lbl_804A6BF0;
    object.__vtable = igStdFilterFun_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igStdFilterFun)

void igStdFilterFun_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igStdFilterFun_meta, igSerialFilterFun_register,
                       fn_80149C04, igStdFilterFun_getMetaCall,
                       igStdFilterFun_className, 0x10,
                       igStdFilterFun_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igStdFilterFun)

}
#pragma pop
