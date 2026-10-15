// igCustomVectorState: Alchemy class registration (0x800D4F54..0x800D5128). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCustomVectorState)
META_DECLARE(igCustomState)
META_DECLARE(igNamedObject)

extern "C" {
void fn_800CE2F8();
void *fn_800D5128();
extern char lbl_80493290[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_80493290 : igNamedObjectInstance {
    inline ~Instance_80493290() { __vtable = lbl_80493290; }
};

struct igCustomVectorStateInstance : Instance_80493290 {
    char unknown0C[20];
    inline ~igCustomVectorStateInstance() { __vtable = igCustomVectorState_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igCustomVectorState)

META_GET_META(igCustomVectorState)

void *igCustomVectorState_vtableRead()
{
    igCustomVectorStateInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_80493290;
    object.__vtable = igCustomVectorState_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCustomVectorState)

void igCustomVectorState_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igCustomVectorState_meta, igCustomState_register,
                       fn_800D5128, igCustomVectorState_getMetaCall,
                       igCustomVectorState_className, 0x1C,
                       igCustomVectorState_vtableRead, igCustomVectorState_fieldInit, 0, 0);
}

META_GET_META_CALL(igCustomVectorState)

}
#pragma pop
