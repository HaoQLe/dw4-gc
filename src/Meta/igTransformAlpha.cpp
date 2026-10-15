// igTransformAlpha: Alchemy class registration (0x8013025C..0x80130520). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>
#include <meta/igIntMetaField.h>

META_DECLARE(igTransformAlpha)
META_DECLARE(igOptVisitObject)

extern "C" {
void fn_8004D4BC(void *,float);
void fn_80053650(void *,int);
void fn_8012FC48();
void *fn_8012FEB0();
extern char igTransformAlpha_fieldNames[8];
extern char igTransformAlpha_fieldOffsets[8];
extern char igTransformAlpha_fieldStorage[8];
extern char igTransformAlpha_fieldTypes[8];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_80566AD0[4];
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

struct igTransformAlphaInstance : Instance_804A46AC {
    char unknown2C[12];
    inline ~igTransformAlphaInstance() { __vtable = igTransformAlpha_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTransformAlpha)

void *igTransformAlpha_vtableRead()
{
    igTransformAlphaInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igTransformAlpha_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTransformAlpha)

void igTransformAlpha_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igTransformAlpha_meta, igOptVisitObject_register,
                       fn_8012FEB0, igTransformAlpha_getMetaCall,
                       igTransformAlpha_className, 0x34,
                       igTransformAlpha_vtableRead, igTransformAlpha_fieldInit, 0, 0);
}

META_GET_META_CALL(igTransformAlpha)

void igTransformAlpha_fieldInit()
{
    Meta::igMetaObject *meta = igTransformAlpha_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igTransformAlpha_fieldTypes, 2);
    Meta::igFloatMetaField *scaleField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base));
    fn_8004D4BC(scaleField, *reinterpret_cast<float *>(lbl_80566AD0 + 0));
    Meta::igIntMetaField *offsetField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 1));
    fn_80053650(offsetField, 128);
    meta_setupFields(meta, igTransformAlpha_fieldNames, igTransformAlpha_fieldStorage, igTransformAlpha_fieldOffsets, base);
}

}
#pragma pop
