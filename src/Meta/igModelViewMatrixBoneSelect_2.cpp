// igModelViewMatrixBoneSelect: Alchemy class registration (0x801BADA4..0x801BB08C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(igModelViewMatrixBoneSelect)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_80053650(void *,int);
void *fn_8011148C();
void fn_801AA6DC();
extern char igModelViewMatrixBoneSelect_fieldNames[4];
extern char igModelViewMatrixBoneSelect_fieldOffsets[4];
extern char igModelViewMatrixBoneSelect_fieldStorage[4];
extern char igModelViewMatrixBoneSelect_fieldTypes[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igNodeInstance : igNamedObjectInstance {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeInstance() { __vtable = igNode_vtable; }
};

struct igGroupInstance : igNodeInstance {
    char unknown14[8];
    igObjectRefMember _childList;
    inline ~igGroupInstance() { __vtable = igGroup_vtable; }
};

struct igModelViewMatrixBoneSelectInstance : igGroupInstance {
    char unknown20[8];
    inline ~igModelViewMatrixBoneSelectInstance() { __vtable = igModelViewMatrixBoneSelect_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igModelViewMatrixBoneSelect)

void *igModelViewMatrixBoneSelect_vtableRead()
{
    igModelViewMatrixBoneSelectInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igGroup_vtable;
    object._childList._value = 0;
    object.__vtable = igModelViewMatrixBoneSelect_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igModelViewMatrixBoneSelect)

void igModelViewMatrixBoneSelect_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igModelViewMatrixBoneSelect_meta, igGroup_register,
                       fn_8011148C, igModelViewMatrixBoneSelect_getMetaCall,
                       igModelViewMatrixBoneSelect_className, 0x24,
                       igModelViewMatrixBoneSelect_vtableRead, igModelViewMatrixBoneSelect_fieldInit, 0, 0);
}

META_GET_META_CALL(igModelViewMatrixBoneSelect)

void igModelViewMatrixBoneSelect_fieldInit()
{
    Meta::igMetaObject *meta = igModelViewMatrixBoneSelect_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igModelViewMatrixBoneSelect_fieldTypes, 1);
    Meta::igIntMetaField *matrixIndexField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base));
    fn_80053650(matrixIndexField, -1);
    meta_setupFields(meta, igModelViewMatrixBoneSelect_fieldNames, igModelViewMatrixBoneSelect_fieldStorage, igModelViewMatrixBoneSelect_fieldOffsets, base);
}

}
#pragma pop
