// beDataObjStringList: Alchemy class registration (0x802DC7C4..0x802DCAA0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beDataObjStringList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beDataObjStringList_dependencies[8];
extern char beDataObjStringList_fieldNames[];
extern char beDataObjStringList_fieldOffsets[];
extern char beDataObjStringList_fieldStorage[];
extern char beDataObjStringList_fieldTypes[];
void *fn_80023CF4();
void *fn_80024B94();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beDataObjStringListInstance : igNamedObjectInstance {
    igObjectRefMember _data;
    inline ~beDataObjStringListInstance() { __vtable = beDataObjStringList_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beDataObjStringList)

META_GET_META(beDataObjStringList)

#pragma push
#pragma optimize_for_size on
void *beDataObjStringList_vtableRead()
{
    beDataObjStringListInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beDataObjStringList_vtable;
    object._data._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beDataObjStringList)

void beDataObjStringList_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDataObjStringList_meta, igNamedObject_register,
                       fn_80023CF4, beDataObjStringList_getMetaCall,
                       beDataObjStringList_className, 0x10,
                       beDataObjStringList_vtableRead, beDataObjStringList_fieldInit, 0, beDataObjStringList_dependencies);
}

META_GET_META_CALL(beDataObjStringList)

void beDataObjStringList_fieldInit()
{
    Meta::igMetaObject *meta = beDataObjStringList_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDataObjStringList_fieldTypes, 1);
    Meta::igObjectRefMetaField *dataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80024B94();
    dataField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    dataField->_construct = true;
    meta_setupFields(meta, beDataObjStringList_fieldNames, beDataObjStringList_fieldStorage, beDataObjStringList_fieldOffsets, base);
}

}
#pragma pop
