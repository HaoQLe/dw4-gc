// beCameraBoxData: Alchemy class registration (0x802E1D74..0x802E2114). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beCameraBoxData)
META_DECLARE(igObject)

extern "C" {
extern char beCameraBoxData_dependencies[16];
extern char beCameraBoxData_fieldNames[];
extern char beCameraBoxData_fieldOffsets[];
extern char beCameraBoxData_fieldStorage[];
extern char beCameraBoxData_fieldTypes[];
void *fn_800237D0();
void *fn_801AC2D4();
void *fn_801ADB98();
void *fn_801BFF38();
void fn_802B1AC8();
}

struct beCameraBoxDataInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _switch;
    igObjectRefMember _geometryList;
    igObjectRefMember _transformList;
    igObjectRefMember _eyePosList;
    igObjectRefMember _intPosList;
    char unknown1C[4];
    inline ~beCameraBoxDataInstance() { __vtable = beCameraBoxData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beCameraBoxData)

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beCameraBoxData_vtableRead()
{
    beCameraBoxDataInstance object;
    object.__vtable = beCameraBoxData_vtable;
    object._switch._value = 0;
    object._geometryList._value = 0;
    object._transformList._value = 0;
    object._eyePosList._value = 0;
    object._intPosList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beCameraBoxData)

void beCameraBoxData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCameraBoxData_meta, igObject_register,
                       fn_800237D0, beCameraBoxData_getMetaCall,
                       beCameraBoxData_className, 0x1C,
                       beCameraBoxData_vtableRead, beCameraBoxData_fieldInit, 0, beCameraBoxData_dependencies);
}

META_GET_META_CALL(beCameraBoxData)

void beCameraBoxData_fieldInit()
{
    Meta::igMetaObject *meta = beCameraBoxData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCameraBoxData_fieldTypes, 5);
    Meta::igObjectRefMetaField *switchField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801ADB98();
    switchField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *geometryListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_801BFF38();
    geometryListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    geometryListField->_construct = true;
    Meta::igObjectRefMetaField *transformListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value7 = fn_801AC2D4();
    transformListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    transformListField->_construct = true;
    Meta::igObjectRefMetaField *eyePosListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_value9 = fn_801AC2D4();
    eyePosListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value9);
    eyePosListField->_construct = true;
    Meta::igObjectRefMetaField *intPosListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_value11 = fn_801AC2D4();
    intPosListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value11);
    intPosListField->_construct = true;
    meta_setupFields(meta, beCameraBoxData_fieldNames, beCameraBoxData_fieldStorage, beCameraBoxData_fieldOffsets, base);
}

}
#pragma pop
