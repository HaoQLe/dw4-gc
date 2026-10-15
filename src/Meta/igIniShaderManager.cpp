// igIniShaderManager: Alchemy class registration (0x801BE6A8..0x801BE7E4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIniShaderManager)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801AA6DC();
void fn_801BE7E4();
void fn_801BE80C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igIniShaderManager)

void *igIniShaderManager_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
    } object;
    igObject_construct(&object);
    object.__vtable = igIniShaderManager_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIniShaderManager)

void igIniShaderManager_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igIniShaderManager_meta, igObject_register,
                       fn_800237D0, igIniShaderManager_getMetaCall,
                       igIniShaderManager_className, 0x8,
                       igIniShaderManager_vtableRead, fn_801BE7E4, fn_801BE80C, 0);
}

META_GET_META_CALL(igIniShaderManager)

}
#pragma pop
