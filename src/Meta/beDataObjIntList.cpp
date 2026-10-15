// beDataObjIntList: Alchemy class registration (0x802DD2A0..0x802DD57C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beDataObjIntList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beDataObjIntList_dependencies[8];
extern char beDataObjIntList_fieldNames[];
extern char beDataObjIntList_fieldOffsets[];
extern char beDataObjIntList_fieldStorage[];
extern char beDataObjIntList_fieldTypes[];
void *fn_80023CF4();
void *fn_800365B4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beDataObjIntListInstance : igNamedObjectInstance {
    igObjectRefMember _data;
    inline ~beDataObjIntListInstance() { __vtable = beDataObjIntList_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beDataObjIntList)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beDataObjIntList)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beDataObjIntList_vtableRead()
{
    beDataObjIntListInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beDataObjIntList_vtable;
    object._data._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beDataObjIntList)

void beDataObjIntList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDataObjIntList_meta, igNamedObject_register,
                       fn_80023CF4, beDataObjIntList_getMetaCall,
                       beDataObjIntList_className, 0x10,
                       beDataObjIntList_vtableRead, beDataObjIntList_fieldInit, 0, beDataObjIntList_dependencies);
}

META_GET_META_CALL(beDataObjIntList)

void beDataObjIntList_fieldInit()
{
    Meta::igMetaObject *meta = beDataObjIntList_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDataObjIntList_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_800365B4();
    dataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    dataField->_construct = true;
    meta_setupFields(meta, beDataObjIntList_fieldNames, beDataObjIntList_fieldStorage, beDataObjIntList_fieldOffsets, base);
}

}
#pragma pop
