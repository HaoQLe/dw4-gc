// igManager: Alchemy class registration (0x80141F88..0x801420C0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igManager)
META_DECLARE(igInterfaced)

extern "C" {
void fn_8012FC48();
void *fn_801420C0();
extern char lbl_804A6460[];
}

struct Instance_80141FC4_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igManager)

void *igManager_vtableRead()
{
    Instance_80141FC4_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = igManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igManager)

void igManager_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igManager_meta, igInterfaced_register,
                       fn_801420C0, igManager_getMetaCall,
                       igManager_className, 0x20,
                       igManager_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igManager)

}
#pragma pop
