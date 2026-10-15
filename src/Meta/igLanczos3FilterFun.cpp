// igLanczos3FilterFun: Alchemy class registration (0x80149E24..0x80149FA0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igLanczos3FilterFun)
META_DECLARE(igSerialFilterFun)

extern "C" {
void fn_8012FC48();
void *fn_80149C04();
extern char lbl_804A6BF0[];
extern char lbl_804A8FDC[];
}

struct Instance_80149E98_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igLanczos3FilterFun)

META_GET_META(igLanczos3FilterFun)

void *igLanczos3FilterFun_vtableRead()
{
    Instance_80149E98_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A8FDC;
    object.__vtable = lbl_804A6BF0;
    object.__vtable = igLanczos3FilterFun_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLanczos3FilterFun)

void igLanczos3FilterFun_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igLanczos3FilterFun_meta, igSerialFilterFun_register,
                       fn_80149C04, igLanczos3FilterFun_getMetaCall,
                       igLanczos3FilterFun_className, 0x10,
                       igLanczos3FilterFun_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igLanczos3FilterFun)

}
#pragma pop
