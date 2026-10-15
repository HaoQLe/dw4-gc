// igSkeleton: Alchemy class registration (0x801AFAB4..0x801AFCA4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSkeleton)
META_DECLARE(igAnimationHierarchy)
META_DECLARE(igNamedObject)

extern "C" {
void fn_801AA6DC();
extern char igSkeleton_dependencies[8];
void *igSkeleton_parentMeta();
extern char lbl_804B9324[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804B9324 : igNamedObjectInstance {
    inline ~Instance_804B9324() { __vtable = lbl_804B9324; }
};

struct igSkeletonInstance : Instance_804B9324 {
    char unknown0C[4];
    igObjectRefMember _boneInfoList;
    char unknown14[12];
    inline ~igSkeletonInstance() { __vtable = igSkeleton_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSkeleton)

void *igSkeleton_vtableRead()
{
    igSkeletonInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804B9324;
    object.__vtable = igSkeleton_vtable;
    object._boneInfoList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSkeleton)

void igSkeleton_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igSkeleton_meta, igAnimationHierarchy_register,
                       igSkeleton_parentMeta, igSkeleton_getMetaCall,
                       igSkeleton_className, 0x1C,
                       igSkeleton_vtableRead, igSkeleton_fieldInit, 0, igSkeleton_dependencies);
}

META_GET_META_CALL(igSkeleton)

}
#pragma pop
