// beModelCtrlData: Alchemy class registration (0x802CCA74..0x802CCD64). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beModelCtrlData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlData_dependencies[8];
extern char beModelCtrlData_fieldNames[];
extern char beModelCtrlData_fieldOffsets[];
extern char beModelCtrlData_fieldStorage[];
extern char beModelCtrlData_fieldTypes[];
void *fn_80023CF4();
void *fn_80029A5C();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beModelCtrlDataInstance : igNamedObjectInstance {
    igObjectRefMember _comList;
    inline ~beModelCtrlDataInstance() { __vtable = beModelCtrlData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beModelCtrlData)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beModelCtrlData)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beModelCtrlData_vtableRead()
{
    beModelCtrlDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlData_vtable;
    object._comList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beModelCtrlData)

void beModelCtrlData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlData_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlData_getMetaCall,
                       beModelCtrlData_className, 0x10,
                       beModelCtrlData_vtableRead, beModelCtrlData_fieldInit, 0, beModelCtrlData_dependencies);
}

META_GET_META_CALL(beModelCtrlData)

void beModelCtrlData_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlData_fieldTypes, 1);
    Meta::igObjectRefMetaField *comListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80029A5C();
    comListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    comListField->_construct = true;
    meta_setupFields(meta, beModelCtrlData_fieldNames, beModelCtrlData_fieldStorage, beModelCtrlData_fieldOffsets, base);
}

}
#pragma pop
