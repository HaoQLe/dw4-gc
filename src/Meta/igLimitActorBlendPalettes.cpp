// igLimitActorBlendPalettes: Alchemy class registration (0x8014394C..0x80143BFC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igUnsignedIntMetaField.h>

META_DECLARE(igLimitActorBlendPalettes)
META_DECLARE(igOptVisitObject)

extern "C" {
void fn_80075AC4(void *,int);
void fn_8012FC48();
void *fn_8012FEB0();
extern char igLimitActorBlendPalettes_fieldNames[4];
extern char igLimitActorBlendPalettes_fieldOffsets[4];
extern char igLimitActorBlendPalettes_fieldStorage[4];
extern char igLimitActorBlendPalettes_fieldTypes[4];
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

struct igLimitActorBlendPalettesInstance : Instance_804A46AC {
    char unknown2C[12];
    inline ~igLimitActorBlendPalettesInstance() { __vtable = igLimitActorBlendPalettes_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igLimitActorBlendPalettes)

void *igLimitActorBlendPalettes_vtableRead()
{
    igLimitActorBlendPalettesInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A4A04;
    object._registry._value = 0;
    object._configuration._value = 0;
    object.__vtable = lbl_804A46AC;
    object._visitedMetaObject._value = 0;
    object.__vtable = igLimitActorBlendPalettes_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igLimitActorBlendPalettes)

void igLimitActorBlendPalettes_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igLimitActorBlendPalettes_meta, igOptVisitObject_register,
                       fn_8012FEB0, igLimitActorBlendPalettes_getMetaCall,
                       igLimitActorBlendPalettes_className, 0x30,
                       igLimitActorBlendPalettes_vtableRead, igLimitActorBlendPalettes_fieldInit, 0, 0);
}

META_GET_META_CALL(igLimitActorBlendPalettes)

void igLimitActorBlendPalettes_fieldInit()
{
    Meta::igMetaObject *meta = igLimitActorBlendPalettes_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igLimitActorBlendPalettes_fieldTypes, 1);
    Meta::igUnsignedIntMetaField *maxBlendMatrixCountField = static_cast<Meta::igUnsignedIntMetaField *>(meta_field(meta, base));
    fn_80075AC4(maxBlendMatrixCountField, 16);
    meta_setupFields(meta, igLimitActorBlendPalettes_fieldNames, igLimitActorBlendPalettes_fieldStorage, igLimitActorBlendPalettes_fieldOffsets, base);
}

}
#pragma pop
