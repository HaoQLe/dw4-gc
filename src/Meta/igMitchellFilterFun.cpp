// igMitchellFilterFun: Alchemy class registration (0x80149CA8..0x80149E24). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMitchellFilterFun)
META_DECLARE(igSerialFilterFun)

extern "C" {
void fn_8012FC48();
void *fn_80149C04();
extern char lbl_804A6BF0[];
extern char lbl_804A8FDC[];
}

struct Instance_80149D1C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMitchellFilterFun)

META_GET_META(igMitchellFilterFun)

void *igMitchellFilterFun_vtableRead()
{
    Instance_80149D1C_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A8FDC;
    object.__vtable = lbl_804A6BF0;
    object.__vtable = igMitchellFilterFun_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMitchellFilterFun)

void igMitchellFilterFun_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igMitchellFilterFun_meta, igSerialFilterFun_register,
                       fn_80149C04, igMitchellFilterFun_getMetaCall,
                       igMitchellFilterFun_className, 0x10,
                       igMitchellFilterFun_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igMitchellFilterFun)

}
#pragma pop
