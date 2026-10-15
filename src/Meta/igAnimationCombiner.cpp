// igAnimationCombiner: Alchemy class registration (0x801CB9DC..0x801CBCB4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAnimationCombiner)
META_DECLARE(igAnimationSystem)
META_DECLARE(igNamedObject)

extern "C" {
void fn_801AA6DC();
void fn_801CBE9C();
extern char igAnimationCombiner_dependencies[16];
void *igAnimationCombiner_parentMeta();
extern char lbl_804B5F8C[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804B5F8C : igNamedObjectInstance {
    igObjectRefMember _animHierarchy;
    inline ~Instance_804B5F8C() { __vtable = lbl_804B5F8C; }
};

struct igAnimationCombinerInstance : Instance_804B5F8C {
    char unknown10[32];
    igObjectRefMember _boneInfoListList;
    igObjectRefMember _boneInfoListBase;
    igObjectRefMember _animationStateList;
    char unknown3C[36];
    inline ~igAnimationCombinerInstance() { __vtable = igAnimationCombiner_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igAnimationCombiner)

META_GET_META(igAnimationCombiner)

void *igAnimationCombiner_vtableRead()
{
    igAnimationCombinerInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804B5F8C;
    object._animHierarchy._value = 0;
    object.__vtable = igAnimationCombiner_vtable;
    object._boneInfoListList._value = 0;
    object._boneInfoListBase._value = 0;
    object._animationStateList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationCombiner)

void igAnimationCombiner_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationCombiner_meta, igAnimationSystem_register,
                       igAnimationCombiner_parentMeta, igAnimationCombiner_getMetaCall,
                       igAnimationCombiner_className, 0x60,
                       igAnimationCombiner_vtableRead, igAnimationCombiner_fieldInit, fn_801CBE9C, igAnimationCombiner_dependencies);
}

META_GET_META_CALL(igAnimationCombiner)

}
#pragma pop
