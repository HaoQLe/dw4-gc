// igCollapseHierarchy: Alchemy class registration (0x8015123C..0x80151534). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(igCollapseHierarchy)
META_DECLARE(igNodeTraversal)
META_DECLARE(igOptBase)

extern "C" {
void *fn_80029F84();
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_801308D0();
extern char igCollapseHierarchy_dependencies[8];
extern char igCollapseHierarchy_fieldNames[8];
extern char igCollapseHierarchy_fieldOffsets[8];
extern char igCollapseHierarchy_fieldStorage[8];
extern char igCollapseHierarchy_fieldTypes[8];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct igCollapseHierarchyInstance : Instance_804A4A04 {
    igStringMember _traversalName;
    igObjectRefMember _nodeType;
    char unknown30[8];
    inline ~igCollapseHierarchyInstance() { __vtable = igCollapseHierarchy_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCollapseHierarchy)

void *igCollapseHierarchy_vtableRead()
{
    igCollapseHierarchyInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igCollapseHierarchy_vtable;
    object._traversalName._value = 0;
    object._nodeType._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCollapseHierarchy)

void igCollapseHierarchy_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igCollapseHierarchy_meta, igOptBase_register,
                       fn_801308D0, igCollapseHierarchy_getMetaCall,
                       igCollapseHierarchy_className, 0x30,
                       igCollapseHierarchy_vtableRead, igCollapseHierarchy_fieldInit, 0, igCollapseHierarchy_dependencies);
}

META_GET_META_CALL(igCollapseHierarchy)

void igCollapseHierarchy_fieldInit()
{
    Meta::igMetaObject *meta = igCollapseHierarchy_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCollapseHierarchy_fieldTypes, 2);
    Meta::igStringMetaField *traversalNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029F84();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(traversalNameField) + 0x38) = value_value3;
    Meta::igObjectRefMetaField *nodeTypeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    fn_80071694(nodeTypeField, igNodeTraversal_className);
    meta_setupFields(meta, igCollapseHierarchy_fieldNames, igCollapseHierarchy_fieldStorage, igCollapseHierarchy_fieldOffsets, base);
}

}
#pragma pop
