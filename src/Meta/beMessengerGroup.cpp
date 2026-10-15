// beMessengerGroup: Alchemy class registration (0x802CEAFC..0x802CEE98). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMessengerGroup)
META_DECLARE(beBaseInfoRamList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beMessengerGroup_dependencies[16];
extern char beMessengerGroup_fieldNames[];
extern char beMessengerGroup_fieldOffsets[];
extern char beMessengerGroup_fieldStorage[];
extern char beMessengerGroup_fieldTypes[];
void *fn_80023CF4();
void *fn_80024B94();
void *fn_800365B4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beMessengerGroupInstance : igNamedObjectInstance {
    igObjectRefMember _infoNameList;
    igObjectRefMember _ramNoList;
    igObjectRefMember _ramList;
    inline ~beMessengerGroupInstance() { __vtable = beMessengerGroup_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beMessengerGroup)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beMessengerGroup)
#pragma pop

void *beMessengerGroup_vtableRead()
{
    beMessengerGroupInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beMessengerGroup_vtable;
    object._infoNameList._value = 0;
    object._ramNoList._value = 0;
    object._ramList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beMessengerGroup)

void beMessengerGroup_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMessengerGroup_meta, igNamedObject_register,
                       fn_80023CF4, beMessengerGroup_getMetaCall,
                       beMessengerGroup_className, 0x18,
                       beMessengerGroup_vtableRead, beMessengerGroup_fieldInit, 0, beMessengerGroup_dependencies);
}

META_GET_META_CALL(beMessengerGroup)

void beMessengerGroup_fieldInit()
{
    Meta::igMetaObject *meta = beMessengerGroup_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMessengerGroup_fieldTypes, 3);
    Meta::igObjectRefMetaField *infoNameListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80024B94();
    infoNameListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    infoNameListField->_construct = true;
    Meta::igObjectRefMetaField *ramNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_800365B4();
    ramNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    ramNoListField->_construct = true;
    Meta::igObjectRefMetaField *ramListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    ramListField->_metaObject = beBaseInfoRamList_metaObject();
    ramListField->_construct = true;
    meta_setupFields(meta, beMessengerGroup_fieldNames, beMessengerGroup_fieldStorage, beMessengerGroup_fieldOffsets, base);
}

}
#pragma pop
