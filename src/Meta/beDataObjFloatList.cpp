// beDataObjFloatList: Alchemy class registration (0x802DC20C..0x802DC4E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beDataObjFloatList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beDataObjFloatList_dependencies[8];
extern char beDataObjFloatList_fieldNames[];
extern char beDataObjFloatList_fieldOffsets[];
extern char beDataObjFloatList_fieldStorage[];
extern char beDataObjFloatList_fieldTypes[];
void *fn_80023CF4();
void *fn_80034D84();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beDataObjFloatListInstance : igNamedObjectInstance {
    igObjectRefMember _data;
    inline ~beDataObjFloatListInstance() { __vtable = beDataObjFloatList_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beDataObjFloatList)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beDataObjFloatList)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beDataObjFloatList_vtableRead()
{
    beDataObjFloatListInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beDataObjFloatList_vtable;
    object._data._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beDataObjFloatList)

void beDataObjFloatList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDataObjFloatList_meta, igNamedObject_register,
                       fn_80023CF4, beDataObjFloatList_getMetaCall,
                       beDataObjFloatList_className, 0x10,
                       beDataObjFloatList_vtableRead, beDataObjFloatList_fieldInit, 0, beDataObjFloatList_dependencies);
}

META_GET_META_CALL(beDataObjFloatList)

void beDataObjFloatList_fieldInit()
{
    Meta::igMetaObject *meta = beDataObjFloatList_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDataObjFloatList_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80034D84();
    dataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    dataField->_construct = true;
    meta_setupFields(meta, beDataObjFloatList_fieldNames, beDataObjFloatList_fieldStorage, beDataObjFloatList_fieldOffsets, base);
}

}
#pragma pop
