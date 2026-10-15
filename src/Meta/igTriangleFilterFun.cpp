// igTriangleFilterFun: Alchemy class registration (0x8014A298..0x8014A414). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTriangleFilterFun)
META_DECLARE(igSerialFilterFun)

extern "C" {
void fn_8012FC48();
void *fn_80149C04();
extern char lbl_804A6BF0[];
extern char lbl_804A8FDC[];
}

struct Instance_8014A30C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTriangleFilterFun)

META_GET_META(igTriangleFilterFun)

void *igTriangleFilterFun_vtableRead()
{
    Instance_8014A30C_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A8FDC;
    object.__vtable = lbl_804A6BF0;
    object.__vtable = igTriangleFilterFun_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTriangleFilterFun)

void igTriangleFilterFun_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igTriangleFilterFun_meta, igSerialFilterFun_register,
                       fn_80149C04, igTriangleFilterFun_getMetaCall,
                       igTriangleFilterFun_className, 0x10,
                       igTriangleFilterFun_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igTriangleFilterFun)

}
#pragma pop
