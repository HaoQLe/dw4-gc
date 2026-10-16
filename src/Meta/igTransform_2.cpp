// igTransform: Alchemy class registration (0x801AC680..0x801AC968). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTransform)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void *fn_8011148C();
void fn_801285A0(void *);
void fn_801AA6DC();
extern char igTransform_dependencies[12];
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

struct igNodeInstance : igNamedObjectInstance {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline igNodeInstance()
    {
        __vtable = igNode_vtable;
        _bound._value = 0;
        _parentList._value = 0;
    }
    inline ~igNodeInstance() { __vtable = igNode_vtable; }
};

struct igGroupInstance : igNodeInstance {
    char unknown14[8];
    igObjectRefMember _childList;
    inline igGroupInstance()
    {
        __vtable = igGroup_vtable;
        _childList._value = 0;
    }
    inline ~igGroupInstance() { __vtable = igGroup_vtable; }
};

struct igTransformInstance : igGroupInstance {
    char unknown20[68];
    igObjectRefMember _mvm;
    igObjectRefMember _transformInput;
    inline igTransformInstance()
    {
        __vtable = igTransform_vtable;
        fn_801285A0(&unknown20);
        _mvm._value = 0;
        _transformInput._value = 0;
    }
    inline ~igTransformInstance() { __vtable = igTransform_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTransform)

void *igTransform_vtableRead()
{
    igTransformInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTransform)

void igTransform_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igTransform_meta, igGroup_register,
                       fn_8011148C, igTransform_getMetaCall,
                       igTransform_className, 0x6C,
                       igTransform_vtableRead, igTransform_fieldInit, 0, igTransform_dependencies);
}

META_GET_META_CALL(igTransform)

}
#pragma pop
