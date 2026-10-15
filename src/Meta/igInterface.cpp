// igInterface: Alchemy class registration (0x801467C0..0x801468F8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInterface)
META_DECLARE(igInterfaced)

extern "C" {
void fn_8012FC48();
void *fn_801420C0();
extern char lbl_804A6460[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInterface)

void *igInterface_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = igInterface_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInterface)

void igInterface_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igInterface_meta, igInterfaced_register,
                       fn_801420C0, igInterface_getMetaCall,
                       igInterface_className, 0x20,
                       igInterface_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igInterface)

}
#pragma pop
