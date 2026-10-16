// igBlendMatrixSelect: Alchemy class registration (0x801C6F78..0x801C727C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBlendMatrixSelect)
META_DECLARE(igAttrSet)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801285A0(void *);
void fn_801AA6DC();
void *fn_801B623C();
extern char igBlendMatrixSelect_dependencies[8];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMemberLookup _name;
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

struct igAttrSetInstance : igGroupInstance {
    igObjectRefMember _attributes;
    inline igAttrSetInstance()
    {
        __vtable = igAttrSet_vtable;
        _attributes._value = 0;
    }
    inline ~igAttrSetInstance() { __vtable = igAttrSet_vtable; }
};

struct igBlendMatrixSelectInstance : igAttrSetInstance {
    char unknown24[4];
    igObjectRefMember _blendMatrixIndices;
    char unknown2C[64];
    char unknown6C[64];
    inline igBlendMatrixSelectInstance()
    {
        __vtable = igBlendMatrixSelect_vtable;
        _blendMatrixIndices._value = 0;
        fn_801285A0(&unknown2C);
        fn_801285A0(&unknown6C);
    }
    inline ~igBlendMatrixSelectInstance() { __vtable = igBlendMatrixSelect_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBlendMatrixSelect)

void *igBlendMatrixSelect_vtableRead()
{
    igBlendMatrixSelectInstance object;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igBlendMatrixSelect)

void igBlendMatrixSelect_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igBlendMatrixSelect_meta, igAttrSet_register,
                       fn_801B623C, igBlendMatrixSelect_getMetaCall,
                       igBlendMatrixSelect_className, 0xAC,
                       igBlendMatrixSelect_vtableRead, igBlendMatrixSelect_fieldInit, 0, igBlendMatrixSelect_dependencies);
}

META_GET_META_CALL(igBlendMatrixSelect)

}
#pragma pop
