// igTextureSamplerSource: Alchemy class registration (0x800D4564..0x800D46F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextureSamplerSource)
META_DECLARE(igNamedObject)

extern "C" {
void *fn_80023CF4();
void fn_800CE2F8();
void fn_800D46F0();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igTextureSamplerSourceInstance : igNamedObjectInstance {
    char unknown0C[20];
    inline ~igTextureSamplerSourceInstance() { __vtable = igTextureSamplerSource_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextureSamplerSource)

void *igTextureSamplerSource_vtableRead()
{
    igTextureSamplerSourceInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igTextureSamplerSource_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTextureSamplerSource)

void igTextureSamplerSource_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igTextureSamplerSource_meta, igNamedObject_register,
                       fn_80023CF4, igTextureSamplerSource_getMetaCall,
                       igTextureSamplerSource_className, 0x18,
                       igTextureSamplerSource_vtableRead, fn_800D46F0, 0, 0);
}

META_GET_META_CALL(igTextureSamplerSource)

}
#pragma pop
