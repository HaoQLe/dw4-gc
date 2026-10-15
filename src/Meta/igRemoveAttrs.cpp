// igRemoveAttrs: Alchemy class registration (0x801363B0..0x801366A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(igRemoveAttrs)
META_DECLARE(igNodeTraversal)
META_DECLARE(igOptBase)

extern "C" {
void *fn_80029F84();
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_801308D0();
extern char igRemoveAttrs_dependencies[8];
extern char igRemoveAttrs_fieldNames[8];
extern char igRemoveAttrs_fieldOffsets[8];
extern char igRemoveAttrs_fieldStorage[8];
extern char igRemoveAttrs_fieldTypes[8];
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

struct igRemoveAttrsInstance : Instance_804A4A04 {
    igStringMember _traversalName;
    igObjectRefMember _attributeType;
    char unknown30[8];
    inline ~igRemoveAttrsInstance() { __vtable = igRemoveAttrs_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igRemoveAttrs)

void *igRemoveAttrs_vtableRead()
{
    igRemoveAttrsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igRemoveAttrs_vtable;
    object._traversalName._value = 0;
    object._attributeType._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igRemoveAttrs)

void igRemoveAttrs_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igRemoveAttrs_meta, igOptBase_register,
                       fn_801308D0, igRemoveAttrs_getMetaCall,
                       igRemoveAttrs_className, 0x30,
                       igRemoveAttrs_vtableRead, igRemoveAttrs_fieldInit, 0, igRemoveAttrs_dependencies);
}

META_GET_META_CALL(igRemoveAttrs)

void igRemoveAttrs_fieldInit()
{
    Meta::igMetaObject *meta = igRemoveAttrs_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igRemoveAttrs_fieldTypes, 2);
    Meta::igStringMetaField *traversalNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029F84();
    *reinterpret_cast<void **>(reinterpret_cast<char *>(traversalNameField) + 0x38) = value_value3;
    Meta::igObjectRefMetaField *attributeTypeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    fn_80071694(attributeTypeField, igNodeTraversal_className);
    meta_setupFields(meta, igRemoveAttrs_fieldNames, igRemoveAttrs_fieldStorage, igRemoveAttrs_fieldOffsets, base);
}

}
#pragma pop
