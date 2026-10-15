// beLuaState: Alchemy class registration (0x802D15AC..0x802D1840). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beLuaState)
META_DECLARE(igLuaState)
META_DECLARE(igNamedObject)

extern "C" {
void *beLuaState_parentMeta();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igLuaStateInstance : igNamedObjectInstance {
    char unknown0C[4];
    igObjectRefMember _memPool;
    inline ~igLuaStateInstance() { __vtable = igLuaState_vtable; }
};

struct beLuaStateInstance : igLuaStateInstance {
    char unknown14[12];
    inline ~beLuaStateInstance() { __vtable = beLuaState_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beLuaState)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beLuaState)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beLuaState)
#pragma pop

void *beLuaState_vtableRead()
{
    beLuaStateInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igLuaState_vtable;
    object._memPool._value = 0;
    object.__vtable = beLuaState_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beLuaState)

void beLuaState_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beLuaState_meta, igLuaState_register,
                       beLuaState_parentMeta, beLuaState_getMetaCall,
                       beLuaState_className, 0x18,
                       beLuaState_vtableRead, beLuaState_fieldInit, 0, 0);
}

META_GET_META_CALL(beLuaState)

}
#pragma pop
