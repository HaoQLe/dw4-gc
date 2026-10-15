// igGaussianFilterFun: Alchemy class registration (0x80149A80..0x80149C04). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGaussianFilterFun)
META_DECLARE(igSerialFilterFun)

extern "C" {
void fn_8012FC48();
void *fn_80149C04();
extern char lbl_804A6BF0[];
extern char lbl_804A8FDC[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igGaussianFilterFun)

META_GET_META(igGaussianFilterFun)

void *igGaussianFilterFun_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804A8FDC;
    object.__vtable = lbl_804A6BF0;
    object.__vtable = igGaussianFilterFun_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGaussianFilterFun)

void igGaussianFilterFun_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igGaussianFilterFun_meta, igSerialFilterFun_register,
                       fn_80149C04, igGaussianFilterFun_getMetaCall,
                       igGaussianFilterFun_className, 0x20,
                       igGaussianFilterFun_vtableRead, igGaussianFilterFun_fieldInit, 0, 0);
}

META_GET_META_CALL(igGaussianFilterFun)

}
#pragma pop
