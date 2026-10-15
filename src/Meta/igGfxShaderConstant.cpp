// igGfxShaderConstant: Alchemy class registration (0x800D39F0..0x800D3C00). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGfxShaderConstant)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void fn_800CE2F8();
void fn_800D3C00();
extern char igGfxShaderConstant_dependencies[8];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igGfxShaderConstantInstance : igNamedObjectInstance {
    char unknown0C[4];
    igStringMember unknown10;
    char unknown14[16];
    igObjectRefMember unknown24;
    char unknown28[16];
    inline ~igGfxShaderConstantInstance() { __vtable = igGfxShaderConstant_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGfxShaderConstant)

void *igGfxShaderConstant_vtableRead()
{
    igGfxShaderConstantInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igGfxShaderConstant_vtable;
    object.unknown10._value = 0;
    object.unknown24._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGfxShaderConstant)

void igGfxShaderConstant_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGfxShaderConstant_meta, igNamedObject_register,
                       fn_80023CF4, igGfxShaderConstant_getMetaCall,
                       igGfxShaderConstant_className, 0x30,
                       igGfxShaderConstant_vtableRead, fn_800D3C00, 0, igGfxShaderConstant_dependencies);
}

META_GET_META_CALL(igGfxShaderConstant)

}
#pragma pop
