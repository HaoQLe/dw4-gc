// igMessageBase: Alchemy class registration (0x80141BB8..0x80141CFC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMessageBase)
META_DECLARE(igBase)

extern "C" {
void fn_8012FC48();
void *fn_8013BA10();
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_80141BF4_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMessageBase)

void *igMessageBase_vtableRead()
{
    Instance_80141BF4_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = igMessageBase_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessageBase)

void igMessageBase_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igMessageBase_meta, igBase_register,
                       fn_8013BA10, igMessageBase_getMetaCall,
                       igMessageBase_className, 0x20,
                       igMessageBase_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igMessageBase)

}
#pragma pop
