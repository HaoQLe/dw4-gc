// beModelCtrlSCEffect: Alchemy class registration (0x802C59B8..0x802C5C6C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>

META_DECLARE(beModelCtrlSCEffect)
META_DECLARE(beModelCtrlSubComBase)

extern "C" {
extern char beModelCtrlSCEffect_fieldNames[];
extern char beModelCtrlSCEffect_fieldOffsets[];
extern char beModelCtrlSCEffect_fieldStorage[];
extern char beModelCtrlSCEffect_fieldTypes[];
void fn_80053650(void *,int);
void fn_802B1AC8();
void *fn_802C570C();
extern char lbl_804D9E80[];
}

struct beModelCtrlSCEffectInstance : igObjectInstance {
    char unknown04[20];
    igStringMember _modelName;
    igStringMember _seqName;
    char unknown20[32];
    inline ~beModelCtrlSCEffectInstance() { __vtable = beModelCtrlSCEffect_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beModelCtrlSCEffect)

META_GET_META(beModelCtrlSCEffect)

void *beModelCtrlSCEffect_vtableRead()
{
    beModelCtrlSCEffectInstance object;
    object.__vtable = lbl_804D9E80;
    object.__vtable = beModelCtrlSCEffect_vtable;
    object._modelName._value = 0;
    object._seqName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlSCEffect)

void beModelCtrlSCEffect_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlSCEffect_meta, beModelCtrlSubComBase_register,
                       fn_802C570C, beModelCtrlSCEffect_getMetaCall,
                       beModelCtrlSCEffect_className, 0x3C,
                       beModelCtrlSCEffect_vtableRead, beModelCtrlSCEffect_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlSCEffect)

void beModelCtrlSCEffect_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlSCEffect_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlSCEffect_fieldTypes, 7);
    Meta::igIntMetaField *geneRamNoField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base));
    fn_80053650(geneRamNoField, -1);
    meta_setupFields(meta, beModelCtrlSCEffect_fieldNames, beModelCtrlSCEffect_fieldStorage, beModelCtrlSCEffect_fieldOffsets, base);
}

}
#pragma pop
