// igInverseKinematicsAnimation: Alchemy class registration (0x801BD1CC..0x801BD49C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInverseKinematicsAnimation)
META_DECLARE(igAnimation)
META_DECLARE(igNamedObject)

extern "C" {
void fn_801285A0(void *);
void fn_801AA6DC();
extern char igInverseKinematicsAnimation_dependencies[12];
void *igInverseKinematicsAnimation_parentMeta();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline igNamedObjectInstance()
    {
        __vtable = igNamedObject_vtable;
        _name._value = 0;
    }
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igAnimationInstance : igNamedObjectInstance {
    char unknown0C[4];
    igObjectRefMember _bindingList;
    igObjectRefMember _trackList;
    igObjectRefMember _transitionList;
    char unknown1C[28];
    igObjectRefMember _useAnimationTransBoolArray;
    inline igAnimationInstance()
    {
        __vtable = igAnimation_vtable;
        _bindingList._value = 0;
        _trackList._value = 0;
        _transitionList._value = 0;
        _useAnimationTransBoolArray._value = 0;
    }
    inline ~igAnimationInstance() { __vtable = igAnimation_vtable; }
};

struct igInverseKinematicsAnimationInstance : igAnimationInstance {
    char unknown3C[4];
    char unknown40[92];
    igObjectRefMember _recorder;
    char unknownA0[16];
    inline igInverseKinematicsAnimationInstance()
    {
        __vtable = igInverseKinematicsAnimation_vtable;
        fn_801285A0(&unknown40);
        _recorder._value = 0;
    }
    inline ~igInverseKinematicsAnimationInstance() { __vtable = igInverseKinematicsAnimation_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInverseKinematicsAnimation)

void *igInverseKinematicsAnimation_vtableRead()
{
    igInverseKinematicsAnimationInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInverseKinematicsAnimation)

void igInverseKinematicsAnimation_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igInverseKinematicsAnimation_meta, igAnimation_register,
                       igInverseKinematicsAnimation_parentMeta, igInverseKinematicsAnimation_getMetaCall,
                       igInverseKinematicsAnimation_className, 0xB0,
                       igInverseKinematicsAnimation_vtableRead, igInverseKinematicsAnimation_fieldInit, 0, igInverseKinematicsAnimation_dependencies);
}

META_GET_META_CALL(igInverseKinematicsAnimation)

}
#pragma pop
