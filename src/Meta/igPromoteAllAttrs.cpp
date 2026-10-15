// igPromoteAllAttrs: Alchemy class registration (0x8013872C..0x80138A70). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(igPromoteAllAttrs)
META_DECLARE(igOptVisitObject)

extern "C" {
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_8012FEB0();
extern char igPromoteAllAttrs_fieldNames[8];
extern char igPromoteAllAttrs_fieldOffsets[8];
extern char igPromoteAllAttrs_fieldStorage[8];
extern char igPromoteAllAttrs_fieldTypes[8];
extern char lbl_8049D19C[];
extern char lbl_8049D1D0[];
extern char lbl_804A46AC[];
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

struct Instance_804A46AC : Instance_804A4A04 {
    igObjectRefMember _visitedMetaObject;
    inline ~Instance_804A46AC() { __vtable = lbl_804A46AC; }
};

struct igPromoteAllAttrsInstance : Instance_804A46AC {
    igStringMember _newAttrSetName;
    igStringMember _attrsToIgnore;
    char unknown34[12];
    inline ~igPromoteAllAttrsInstance() { __vtable = igPromoteAllAttrs_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igPromoteAllAttrs)

void *igPromoteAllAttrs_vtableRead()
{
    igPromoteAllAttrsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igPromoteAllAttrs_vtable;
    object._newAttrSetName._value = 0;
    object._attrsToIgnore._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igPromoteAllAttrs)

void igPromoteAllAttrs_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igPromoteAllAttrs_meta, igOptVisitObject_register,
                       fn_8012FEB0, igPromoteAllAttrs_getMetaCall,
                       igPromoteAllAttrs_className, 0x34,
                       igPromoteAllAttrs_vtableRead, igPromoteAllAttrs_fieldInit, 0, 0);
}

META_GET_META_CALL(igPromoteAllAttrs)

void igPromoteAllAttrs_fieldInit()
{
    Meta::igMetaObject *meta = igPromoteAllAttrs_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igPromoteAllAttrs_fieldTypes, 2);
    Meta::igStringMetaField *newAttrSetNameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    fn_80071694(newAttrSetNameField, lbl_8049D19C);
    Meta::igStringMetaField *attrsToIgnoreField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 1));
    fn_80071694(attrsToIgnoreField, lbl_8049D1D0);
    meta_setupFields(meta, igPromoteAllAttrs_fieldNames, igPromoteAllAttrs_fieldStorage, igPromoteAllAttrs_fieldOffsets, base);
}

}
#pragma pop
