// beDataObjString: Alchemy class registration (0x802DCAA0..0x802DCD60). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beDataObjString)
META_DECLARE(igNamedObject)

extern "C" {
extern char beDataObjString_fieldNames[];
extern char beDataObjString_fieldOffsets[];
extern char beDataObjString_fieldStorage[];
extern char beDataObjString_fieldTypes[];
void *fn_80023CF4();
void fn_80071694(void *,int);
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beDataObjStringInstance : igNamedObjectInstance {
    igStringMember _data;
    inline ~beDataObjStringInstance() { __vtable = beDataObjString_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beDataObjString)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beDataObjString)
#pragma pop

void *beDataObjString_vtableRead()
{
    beDataObjStringInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beDataObjString_vtable;
    object._data._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beDataObjString)

void beDataObjString_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDataObjString_meta, igNamedObject_register,
                       fn_80023CF4, beDataObjString_getMetaCall,
                       beDataObjString_className, 0x10,
                       beDataObjString_vtableRead, beDataObjString_fieldInit, 0, 0);
}

META_GET_META_CALL(beDataObjString)

void beDataObjString_fieldInit()
{
    Meta::igMetaObject *meta = beDataObjString_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDataObjString_fieldTypes, 1);
    Meta::igStringMetaField *dataField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base));
    fn_80071694(dataField, 0);
    meta_setupFields(meta, beDataObjString_fieldNames, beDataObjString_fieldStorage, beDataObjString_fieldOffsets, base);
}

}
#pragma pop
