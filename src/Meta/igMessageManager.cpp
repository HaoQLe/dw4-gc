// igMessageManager: Alchemy class registration (0x8014151C..0x80141660). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMessageManager)
META_DECLARE(igManager)

extern "C" {
void fn_8012FC48();
void *fn_8013B2B0();
extern char lbl_804A6460[];
}

struct Instance_80141558_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igMessageManager)

void *igMessageManager_vtableRead()
{
    Instance_80141558_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = igManager_vtable;
    object.__vtable = igMessageManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMessageManager)

void igMessageManager_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igMessageManager_meta, igManager_register,
                       fn_8013B2B0, igMessageManager_getMetaCall,
                       igMessageManager_className, 0x20,
                       igMessageManager_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igMessageManager)

}
#pragma pop
