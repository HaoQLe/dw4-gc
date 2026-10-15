// igScaleActors: Alchemy class registration (0x80133BD0..0x80133E9C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igScaleActors)
META_DECLARE(igOptBase)

extern "C" {
void fn_8004D4BC(void *,float);
void fn_8012FC48();
void *fn_801308D0();
void *fn_801BFF38();
extern char igScaleActors_dependencies[8];
extern char igScaleActors_fieldNames[8];
extern char igScaleActors_fieldOffsets[8];
extern char igScaleActors_fieldStorage[8];
extern char igScaleActors_fieldTypes[8];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_80566AEC[4];
}

struct Instance_804A4A04 : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _registry;
    igObjectRefMember _configuration;
    inline ~Instance_804A4A04() { __vtable = lbl_804A4A04; }
};

struct igScaleActorsInstance : Instance_804A4A04 {
    char unknown28[4];
    igObjectRefMember _skinGeometryList;
    char unknown30[8];
    inline ~igScaleActorsInstance() { __vtable = igScaleActors_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igScaleActors)

void *igScaleActors_vtableRead()
{
    igScaleActorsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = igScaleActors_vtable;
    object._skinGeometryList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igScaleActors)

void igScaleActors_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igScaleActors_meta, igOptBase_register,
                       fn_801308D0, igScaleActors_getMetaCall,
                       igScaleActors_className, 0x30,
                       igScaleActors_vtableRead, igScaleActors_fieldInit, 0, igScaleActors_dependencies);
}

META_GET_META_CALL(igScaleActors)

void igScaleActors_fieldInit()
{
    Meta::igMetaObject *meta = igScaleActors_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igScaleActors_fieldTypes, 2);
    Meta::igFloatMetaField *scaleField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(scaleField, *reinterpret_cast<float *>(lbl_80566AEC + 0));
    Meta::igObjectRefMetaField *skinGeometryListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value4 = fn_801BFF38();
    skinGeometryListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value4);
    skinGeometryListField->_construct = true;
    skinGeometryListField->_persistent = false;
    meta_setupFields(meta, igScaleActors_fieldNames, igScaleActors_fieldStorage, igScaleActors_fieldOffsets, base);
}

}
#pragma pop
