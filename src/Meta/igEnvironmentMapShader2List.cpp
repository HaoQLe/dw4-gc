// igEnvironmentMapShader2List: Alchemy class registration (0x801C1008..0x801C1168). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igEnvironmentMapShader2List)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_801AA6DC();
extern char igEnvironmentMapShader2List_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804B72A8[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igEnvironmentMapShader2List)

void *igEnvironmentMapShader2List_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804B72A8;
    object.__vtable = igEnvironmentMapShader2List_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEnvironmentMapShader2List)

void igEnvironmentMapShader2List_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igEnvironmentMapShader2List_meta, igObjectList_register,
                       fn_80024180, igEnvironmentMapShader2List_getMetaCall,
                       igEnvironmentMapShader2List_className, 0x14,
                       igEnvironmentMapShader2List_vtableRead, 0, 0, igEnvironmentMapShader2List_dependencies);
}

META_GET_META_CALL(igEnvironmentMapShader2List)

}
#pragma pop
