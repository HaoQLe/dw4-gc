// beAction2InfoWork: Alchemy class registration (0x802E54C4..0x802E58D8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beAction2InfoWork)
META_DECLARE(beAction2Data)
META_DECLARE(igObject)

extern "C" {
extern char beAction2InfoWork_dependencies[24];
extern char beAction2InfoWork_fieldNames[];
extern char beAction2InfoWork_fieldOffsets[];
extern char beAction2InfoWork_fieldStorage[];
extern char beAction2InfoWork_fieldTypes[];
void *fn_800237D0();
void *fn_800ADC34();
void *fn_800B51FC();
void *fn_800B9348();
void *fn_800B9DD0();
void fn_802B1AC8();
}

struct beAction2InfoWorkInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _comData;
    char unknown0C[68];
    igObjectRefMember _colorAttr;
    igObjectRefMember _blendStateAttr;
    igObjectRefMember _textureStateAttr;
    igObjectRefMember _lightingStateAttr;
    inline ~beAction2InfoWorkInstance() { __vtable = beAction2InfoWork_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beAction2InfoWork)

META_METAOBJECT(beAction2InfoWork)

META_GET_META(beAction2InfoWork)

#pragma push
#pragma use_lmw_stmw on
void *beAction2InfoWork_vtableRead()
{
    beAction2InfoWorkInstance object;
    object.__vtable = beAction2InfoWork_vtable;
    object._comData._value = 0;
    object._colorAttr._value = 0;
    object._blendStateAttr._value = 0;
    object._textureStateAttr._value = 0;
    object._lightingStateAttr._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_ARK_REGISTER(beAction2InfoWork)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beAction2InfoWork_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAction2InfoWork_meta, igObject_register,
                       fn_800237D0, beAction2InfoWork_getMetaCall,
                       beAction2InfoWork_className, 0x60,
                       beAction2InfoWork_vtableRead, beAction2InfoWork_fieldInit, 0, beAction2InfoWork_dependencies);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META_CALL(beAction2InfoWork)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beAction2InfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beAction2InfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beAction2InfoWork_fieldTypes, 21);
    Meta::igObjectRefMetaField *comDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    comDataField->_metaObject = beAction2Data_metaObject();
    Meta::igObjectRefMetaField *colorAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 17));
    void *value_value5 = fn_800B9348();
    colorAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    Meta::igObjectRefMetaField *blendStateAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 18));
    void *value_value7 = fn_800B9DD0();
    blendStateAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    Meta::igObjectRefMetaField *textureStateAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 19));
    void *value_value9 = fn_800ADC34();
    textureStateAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value9);
    Meta::igObjectRefMetaField *lightingStateAttrField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 20));
    void *value_value11 = fn_800B51FC();
    lightingStateAttrField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value11);
    meta_setupFields(meta, beAction2InfoWork_fieldNames, beAction2InfoWork_fieldStorage, beAction2InfoWork_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
