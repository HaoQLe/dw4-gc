// igGfxShaderDefineList: Alchemy class registration (0x800D4000..0x800D4160). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGfxShaderDefineList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800CE2F8();
extern char igGfxShaderDefineList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804935F8[];
}

struct Instance_800D403C_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGfxShaderDefineList)

void *igGfxShaderDefineList_vtableRead()
{
    Instance_800D403C_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804935F8;
    object.__vtable = igGfxShaderDefineList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGfxShaderDefineList)

void igGfxShaderDefineList_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGfxShaderDefineList_meta, igObjectList_register,
                       fn_80024180, igGfxShaderDefineList_getMetaCall,
                       igGfxShaderDefineList_className, 0x14,
                       igGfxShaderDefineList_vtableRead, 0, 0, igGfxShaderDefineList_dependencies);
}

META_GET_META_CALL(igGfxShaderDefineList)

}
#pragma pop
