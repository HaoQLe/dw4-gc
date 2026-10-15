// beUnicodeObj: Alchemy class registration (0x802D91E4..0x802D9468). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igMemoryRefMetaField.h>

META_DECLARE(beUnicodeObj)
META_DECLARE(igNamedObject)

extern "C" {
extern char beUnicodeObj_fieldNames[];
extern char beUnicodeObj_fieldOffsets[];
extern char beUnicodeObj_fieldStorage[];
extern char beUnicodeObj_fieldTypes[];
void *fn_8002213C();
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beUnicodeObjInstance : igNamedObjectInstance {
    char unknown0C[4];
    inline ~beUnicodeObjInstance() { __vtable = beUnicodeObj_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beUnicodeObj)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beUnicodeObj)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beUnicodeObj_vtableRead()
{
    beUnicodeObjInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beUnicodeObj_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beUnicodeObj)

void beUnicodeObj_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beUnicodeObj_meta, igNamedObject_register,
                       fn_80023CF4, beUnicodeObj_getMetaCall,
                       beUnicodeObj_className, 0x10,
                       beUnicodeObj_vtableRead, beUnicodeObj_fieldInit, 0, 0);
}

META_GET_META_CALL(beUnicodeObj)

void beUnicodeObj_fieldInit()
{
    Meta::igMetaObject *meta = beUnicodeObj_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beUnicodeObj_fieldTypes, 1);
    Meta::igMemoryRefMetaField *bufferField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8002213C();
    bufferField->_memType = reinterpret_cast<Meta::igMetaField *>(value_value3);
    meta_setupFields(meta, beUnicodeObj_fieldNames, beUnicodeObj_fieldStorage, beUnicodeObj_fieldOffsets, base);
}

}
#pragma pop
