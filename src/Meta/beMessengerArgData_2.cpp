// beMessengerArgData: Alchemy class registration (0x802CF8E8..0x802CFB34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMessengerArgData)
META_DECLARE(igObject)

extern "C" {
extern char beMessengerArgData_dependencies[36];
extern char beMessengerArgData_fieldNames[];
extern char beMessengerArgData_fieldOffsets[];
extern char beMessengerArgData_fieldStorage[];
extern char beMessengerArgData_fieldTypes[];
void *fn_800237D0();
void *fn_80024B94();
void *fn_80028F84();
void *fn_80034D84();
void *fn_80035F2C();
void *fn_800365B4();
void *fn_80036C40();
void *fn_8012141C();
void *fn_80122100();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beMessengerArgData)

void beMessengerArgData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMessengerArgData_meta, igObject_register,
                       fn_800237D0, beMessengerArgData_getMetaCall,
                       beMessengerArgData_className, 0x30,
                       beMessengerArgData_vtableRead, beMessengerArgData_fieldInit, 0, beMessengerArgData_dependencies);
}

META_GET_META_CALL(beMessengerArgData)

void beMessengerArgData_fieldInit()
{
    Meta::igMetaObject *meta = beMessengerArgData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMessengerArgData_fieldTypes, 10);
    Meta::igObjectRefMetaField *boolListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value3 = fn_80036C40();
    boolListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    boolListField->_construct = true;
    Meta::igObjectRefMetaField *intListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    void *value_value5 = fn_800365B4();
    intListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    intListField->_construct = true;
    Meta::igObjectRefMetaField *floatListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    void *value_value7 = fn_80034D84();
    floatListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    floatListField->_construct = true;
    Meta::igObjectRefMetaField *longListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    void *value_value9 = fn_80035F2C();
    longListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value9);
    longListField->_construct = true;
    Meta::igObjectRefMetaField *vec3fListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_value11 = fn_80122100();
    vec3fListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value11);
    vec3fListField->_construct = true;
    Meta::igObjectRefMetaField *matrix44fListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_value13 = fn_8012141C();
    matrix44fListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value13);
    matrix44fListField->_construct = true;
    Meta::igObjectRefMetaField *objectListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    void *value_value15 = fn_80028F84();
    objectListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value15);
    objectListField->_construct = true;
    Meta::igObjectRefMetaField *stringListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    void *value_value17 = fn_80024B94();
    stringListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value17);
    stringListField->_construct = true;
    meta_setupFields(meta, beMessengerArgData_fieldNames, beMessengerArgData_fieldStorage, beMessengerArgData_fieldOffsets, base);
}

}
#pragma pop
