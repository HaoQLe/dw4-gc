// beMatCtrlData: Alchemy class registration (0x802D0E90..0x802D1124). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMatCtrlData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beMatCtrlData_dependencies[8];
extern char beMatCtrlData_fieldNames[];
extern char beMatCtrlData_fieldOffsets[];
extern char beMatCtrlData_fieldStorage[];
extern char beMatCtrlData_fieldTypes[];
void *fn_80023CF4();
void *fn_80122790();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beMatCtrlDataInstance : igNamedObjectInstance {
    igObjectRefMember _chkBox;
    inline ~beMatCtrlDataInstance() { __vtable = beMatCtrlData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beMatCtrlData)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beMatCtrlData_vtableRead()
{
    beMatCtrlDataInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beMatCtrlData_vtable;
    object._chkBox._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beMatCtrlData)

void beMatCtrlData_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMatCtrlData_meta, igNamedObject_register,
                       fn_80023CF4, beMatCtrlData_getMetaCall,
                       beMatCtrlData_className, 0x10,
                       beMatCtrlData_vtableRead, beMatCtrlData_fieldInit, 0, beMatCtrlData_dependencies);
}

META_GET_META_CALL(beMatCtrlData)

void beMatCtrlData_fieldInit()
{
    Meta::igMetaObject *meta = beMatCtrlData_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMatCtrlData_fieldTypes, 1);
    Meta::igObjectRefMetaField *chkBoxField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80122790();
    chkBoxField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beMatCtrlData_fieldNames, beMatCtrlData_fieldStorage, beMatCtrlData_fieldOffsets, base);
}

}
#pragma pop
