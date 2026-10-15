// igMetaFieldInfo: Alchemy class registration (0x8002A420..0x8002A5EC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMetaFieldInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)

extern "C" {
void fn_80021B94();
void *fn_800284EC();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igInfoInstance : igNamedObjectInstance {
    inline ~igInfoInstance() { __vtable = igInfo_vtable; }
};

struct igMetaFieldInfoInstance : igInfoInstance {
    char unknown0C[20];
    inline ~igMetaFieldInfoInstance() { __vtable = igMetaFieldInfo_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMetaFieldInfo)

META_GET_META(igMetaFieldInfo)

void *igMetaFieldInfo_vtableRead()
{
    igMetaFieldInfoInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igInfo_vtable;
    object.__vtable = igMetaFieldInfo_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMetaFieldInfo)

void igMetaFieldInfo_register()
{
    fn_80021B94();
    meta_registerClass(0, &igMetaFieldInfo_meta, igInfo_register,
                       fn_800284EC, igMetaFieldInfo_getMetaCall,
                       igMetaFieldInfo_className, 0x14,
                       igMetaFieldInfo_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igMetaFieldInfo)

}
#pragma pop
