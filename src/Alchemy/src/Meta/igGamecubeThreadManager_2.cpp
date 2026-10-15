// igGamecubeThreadManager: Alchemy class registration (0x8003AE48..0x8003AF68). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeThreadManager)
META_DECLARE(igThreadManager)

extern "C" {
void fn_80021B94();
void fn_8003AF70();
void *igGamecubeThreadManager_parentMeta();
extern char lbl_80470C2C[];
}

struct Instance_8003AE84_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeThreadManager)

void *igGamecubeThreadManager_vtableRead()
{
    Instance_8003AE84_0 object;
    igObject_construct(&object);
    object.__vtable = lbl_80470C2C;
    object.__vtable = igGamecubeThreadManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeThreadManager)

void igGamecubeThreadManager_register()
{
    fn_80021B94();
    meta_registerClass(0, &igGamecubeThreadManager_meta, igThreadManager_register,
                       igGamecubeThreadManager_parentMeta, igGamecubeThreadManager_getMetaCall,
                       igGamecubeThreadManager_className, 0x10,
                       igGamecubeThreadManager_vtableRead, fn_8003AF70, 0, 0);
}

}
#pragma pop
