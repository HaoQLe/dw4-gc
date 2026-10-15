// igCombineTransforms: Alchemy class registration (0x8014F470..0x8014F760). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>

META_DECLARE(igCombineTransforms)
META_DECLARE(igOptVisitObject)

extern "C" {
void fn_8004D4BC(void *,float);
void fn_8012FC48();
void *fn_8012FEB0();
extern char igCombineTransforms_fieldNames[8];
extern char igCombineTransforms_fieldOffsets[8];
extern char igCombineTransforms_fieldStorage[8];
extern char igCombineTransforms_fieldTypes[8];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_80566B14[4];
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

struct igCombineTransformsInstance : Instance_804A46AC {
    igStringMember _transformString;
    char unknown30[8];
    inline ~igCombineTransformsInstance() { __vtable = igCombineTransforms_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCombineTransforms)

void *igCombineTransforms_vtableRead()
{
    igCombineTransformsInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igCombineTransforms_vtable;
    object._transformString._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCombineTransforms)

void igCombineTransforms_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igCombineTransforms_meta, igOptVisitObject_register,
                       fn_8012FEB0, igCombineTransforms_getMetaCall,
                       igCombineTransforms_className, 0x34,
                       igCombineTransforms_vtableRead, igCombineTransforms_fieldInit, 0, 0);
}

META_GET_META_CALL(igCombineTransforms)

void igCombineTransforms_fieldInit()
{
    Meta::igMetaObject *meta = igCombineTransforms_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igCombineTransforms_fieldTypes, 2);
    Meta::igFloatMetaField *shearAmountField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 1));
    fn_8004D4BC(shearAmountField, *reinterpret_cast<float *>(lbl_80566B14 + 0));
    meta_setupFields(meta, igCombineTransforms_fieldNames, igCombineTransforms_fieldStorage, igCombineTransforms_fieldOffsets, base);
}

}
#pragma pop
