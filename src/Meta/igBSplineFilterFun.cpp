// igBSplineFilterFun: Alchemy class registration (0x80149FA0..0x8014A11C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBSplineFilterFun)
META_DECLARE(igSerialFilterFun)

extern "C" {
void fn_8012FC48();
void *fn_80149C04();
extern char lbl_804A6BF0[];
extern char lbl_804A8FDC[];
}

struct Instance_8014A014_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igBSplineFilterFun)

META_GET_META(igBSplineFilterFun)

void *igBSplineFilterFun_vtableRead()
{
    Instance_8014A014_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A8FDC;
    object.__vtable = lbl_804A6BF0;
    object.__vtable = igBSplineFilterFun_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBSplineFilterFun)

void igBSplineFilterFun_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igBSplineFilterFun_meta, igSerialFilterFun_register,
                       fn_80149C04, igBSplineFilterFun_getMetaCall,
                       igBSplineFilterFun_className, 0x10,
                       igBSplineFilterFun_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igBSplineFilterFun)

}
#pragma pop
