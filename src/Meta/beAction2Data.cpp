// beAction2Data: Alchemy class registration (0x802E6EF8..0x802E71E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beAction2Data)
META_DECLARE(igNamedObject)

extern "C" {
extern char beAction2Data_dependencies[8];
extern char beAction2Data_fieldNames[];
extern char beAction2Data_fieldOffsets[];
extern char beAction2Data_fieldStorage[];
extern char beAction2Data_fieldTypes[];
void *fn_80023CF4();
void *fn_80029A5C();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beAction2DataInstance : igNamedObjectInstance {
    igObjectRefMember _comList;
    inline ~beAction2DataInstance() { __vtable = beAction2Data_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beAction2Data)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beAction2Data)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beAction2Data_vtableRead()
{
    beAction2DataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beAction2Data_vtable;
    object._comList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beAction2Data)

void beAction2Data_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAction2Data_meta, igNamedObject_register,
                       fn_80023CF4, beAction2Data_getMetaCall,
                       beAction2Data_className, 0x10,
                       beAction2Data_vtableRead, beAction2Data_fieldInit, 0, beAction2Data_dependencies);
}

META_GET_META_CALL(beAction2Data)

void beAction2Data_fieldInit()
{
    Meta::igMetaObject *meta = beAction2Data_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beAction2Data_fieldTypes, 1);
    Meta::igObjectRefMetaField *comListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029A5C();
    comListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    comListField->_construct = true;
    meta_setupFields(meta, beAction2Data_fieldNames, beAction2Data_fieldStorage, beAction2Data_fieldOffsets, base);
}

}
#pragma pop
