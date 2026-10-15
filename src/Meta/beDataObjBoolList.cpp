// beDataObjBoolList: Alchemy class registration (0x802DCD60..0x802DD03C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beDataObjBoolList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beDataObjBoolList_dependencies[8];
extern char beDataObjBoolList_fieldNames[];
extern char beDataObjBoolList_fieldOffsets[];
extern char beDataObjBoolList_fieldStorage[];
extern char beDataObjBoolList_fieldTypes[];
void *fn_80023CF4();
void *fn_80036C40();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beDataObjBoolListInstance : igNamedObjectInstance {
    igObjectRefMember _data;
    inline ~beDataObjBoolListInstance() { __vtable = beDataObjBoolList_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beDataObjBoolList)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beDataObjBoolList)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beDataObjBoolList_vtableRead()
{
    beDataObjBoolListInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beDataObjBoolList_vtable;
    object._data._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beDataObjBoolList)

void beDataObjBoolList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDataObjBoolList_meta, igNamedObject_register,
                       fn_80023CF4, beDataObjBoolList_getMetaCall,
                       beDataObjBoolList_className, 0x10,
                       beDataObjBoolList_vtableRead, beDataObjBoolList_fieldInit, 0, beDataObjBoolList_dependencies);
}

META_GET_META_CALL(beDataObjBoolList)

void beDataObjBoolList_fieldInit()
{
    Meta::igMetaObject *meta = beDataObjBoolList_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDataObjBoolList_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80036C40();
    dataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    dataField->_construct = true;
    meta_setupFields(meta, beDataObjBoolList_fieldNames, beDataObjBoolList_fieldStorage, beDataObjBoolList_fieldOffsets, base);
}

}
#pragma pop
