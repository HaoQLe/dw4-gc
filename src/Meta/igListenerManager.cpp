// igListenerManager: Alchemy class registration (0x80143050..0x80143194). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igListenerManager)
META_DECLARE(igManager)

extern "C" {
void fn_8012FC48();
void *fn_8013B2B0();
extern char lbl_804A6460[];
}

struct Instance_8014308C_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igListenerManager)

void *igListenerManager_vtableRead()
{
    Instance_8014308C_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = igManager_vtable;
    object.__vtable = igListenerManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igListenerManager)

void igListenerManager_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igListenerManager_meta, igManager_register,
                       fn_8013B2B0, igListenerManager_getMetaCall,
                       igListenerManager_className, 0x20,
                       igListenerManager_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igListenerManager)

}
#pragma pop
