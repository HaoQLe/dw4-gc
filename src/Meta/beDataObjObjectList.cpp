// beDataObjObjectList: Alchemy class registration (0x802DC4E8..0x802DC7C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beDataObjObjectList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beDataObjObjectList_dependencies[8];
extern char beDataObjObjectList_fieldNames[];
extern char beDataObjObjectList_fieldOffsets[];
extern char beDataObjObjectList_fieldStorage[];
extern char beDataObjObjectList_fieldTypes[];
void *fn_80023CF4();
void *fn_80028F84();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beDataObjObjectListInstance : igNamedObjectInstance {
    igObjectRefMember _data;
    inline ~beDataObjObjectListInstance() { __vtable = beDataObjObjectList_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beDataObjObjectList)

META_GET_META(beDataObjObjectList)

#pragma push
#pragma optimize_for_size on
void *beDataObjObjectList_vtableRead()
{
    beDataObjObjectListInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beDataObjObjectList_vtable;
    object._data._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beDataObjObjectList)

void beDataObjObjectList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDataObjObjectList_meta, igNamedObject_register,
                       fn_80023CF4, beDataObjObjectList_getMetaCall,
                       beDataObjObjectList_className, 0x10,
                       beDataObjObjectList_vtableRead, beDataObjObjectList_fieldInit, 0, beDataObjObjectList_dependencies);
}

META_GET_META_CALL(beDataObjObjectList)

void beDataObjObjectList_fieldInit()
{
    Meta::igMetaObject *meta = beDataObjObjectList_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDataObjObjectList_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80028F84();
    dataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    dataField->_construct = true;
    meta_setupFields(meta, beDataObjObjectList_fieldNames, beDataObjObjectList_fieldStorage, beDataObjObjectList_fieldOffsets, base);
}

}
#pragma pop
