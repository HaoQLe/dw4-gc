// igGfxShaderConstantList: Alchemy class registration (0x800D3890..0x800D39F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGfxShaderConstantList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CE2F8();
extern char igGfxShaderConstantList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804937DC[];
}

struct Instance_800D38CC_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGfxShaderConstantList)

void *igGfxShaderConstantList_vtableRead()
{
    Instance_800D38CC_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804937DC;
    object.__vtable = igGfxShaderConstantList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGfxShaderConstantList)

void igGfxShaderConstantList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGfxShaderConstantList_meta, igObjectList_register,
                       fn_80024180, igGfxShaderConstantList_getMetaCall,
                       igGfxShaderConstantList_className, 0x14,
                       igGfxShaderConstantList_vtableRead, 0, 0, igGfxShaderConstantList_dependencies);
}

META_GET_META_CALL(igGfxShaderConstantList)

}
#pragma pop
