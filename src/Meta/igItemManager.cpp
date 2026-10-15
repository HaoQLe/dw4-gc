// igItemManager: Alchemy class registration (0x80144C38..0x80144D7C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igItemManager)
META_DECLARE(igManager)

extern "C" {
void fn_8012FC48();
void *fn_8013B2B0();
extern char lbl_804A6460[];
}

struct Instance_80144C74_0 {
    void *__vtable;
    char unknown04[36];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igItemManager)

void *igItemManager_vtableRead()
{
    Instance_80144C74_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_804A6460;
    object.__vtable = igManager_vtable;
    object.__vtable = igItemManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igItemManager)

void igItemManager_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igItemManager_meta, igManager_register,
                       fn_8013B2B0, igItemManager_getMetaCall,
                       igItemManager_className, 0x20,
                       igItemManager_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igItemManager)

}
#pragma pop
