// igGatherTransforms: Alchemy class registration (0x80147C64..0x80147F40). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGatherTransforms)
META_DECLARE(igOptVisitObject)

extern "C" {
void fn_8012FC48();
void *fn_8012FEB0();
extern char igGatherTransforms_fieldNames[4];
extern char igGatherTransforms_fieldOffsets[4];
extern char igGatherTransforms_fieldStorage[4];
extern char igGatherTransforms_fieldTypes[4];
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

struct igGatherTransformsInstance : Instance_804A46AC {
    igStringMember _transformString;
    char unknown30[8];
    inline ~igGatherTransformsInstance() { __vtable = igGatherTransforms_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGatherTransforms)

void *igGatherTransforms_vtableRead()
{
    igGatherTransformsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igGatherTransforms_vtable;
    object._transformString._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGatherTransforms)

void igGatherTransforms_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igGatherTransforms_meta, igOptVisitObject_register,
                       fn_8012FEB0, igGatherTransforms_getMetaCall,
                       igGatherTransforms_className, 0x30,
                       igGatherTransforms_vtableRead, igGatherTransforms_fieldInit, 0, 0);
}

META_GET_META_CALL(igGatherTransforms)

void igGatherTransforms_fieldInit()
{
    Meta::igMetaObject *meta = igGatherTransforms_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGatherTransforms_fieldTypes, 1);
    meta_setupFields(meta, igGatherTransforms_fieldNames, igGatherTransforms_fieldStorage, igGatherTransforms_fieldOffsets, base);
}

}
#pragma pop
