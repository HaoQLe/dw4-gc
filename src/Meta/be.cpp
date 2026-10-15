// be: Alchemy class registration (0x802E74EC..0x802E7838). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(be)
META_DECLARE(igInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char be_dependencies[8];
extern char be_fieldNames[];
extern char be_fieldOffsets[];
extern char be_fieldStorage[];
extern char be_fieldTypes[];
void *fn_80024B94();
void *fn_80284550();
void fn_802B1AC8();
extern char lbl_804CBA60[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804CBA60 : igNamedObjectInstance {
    inline ~Instance_804CBA60() { __vtable = lbl_804CBA60; }
};

struct beInstance : Instance_804CBA60 {
    char unknown0C[4];
    igObjectRefMember _stringRefList;
    char unknown14[12];
    inline ~beInstance() { __vtable = be_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(be)

META_METAOBJECT(be)

META_GET_META(be)

void *be_vtableRead()
{
    beInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = be_vtable;
    object._stringRefList._value = 0;
    return meta_vtableOf(&object);
}

#pragma push
#pragma optimize_for_size off
META_ARK_REGISTER(be)
#pragma pop

#pragma push
#pragma optimize_for_size off
void be_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &be_meta, igInfoManager_register,
                       fn_80284550, be_getMetaCall,
                       be_className, 0x14,
                       be_vtableRead, be_fieldInit, 0, be_dependencies);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META_CALL(be)
#pragma pop

#pragma push
#pragma optimize_for_size off
void be_fieldInit()
{
    Meta::igMetaObject *meta = be_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, be_fieldTypes, 1);
    Meta::igObjectRefMetaField *stringRefListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_80024B94();
    stringRefListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    stringRefListField->_construct = true;
    meta_setupFields(meta, be_fieldNames, be_fieldStorage, be_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
