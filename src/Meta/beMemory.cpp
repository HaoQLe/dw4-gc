// beMemory: Alchemy class registration (0x802CFB34..0x802CFE10). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMemory)
META_DECLARE(beMessenger)
META_DECLARE(bePadManager)
META_DECLARE(igInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beMemory_dependencies[12];
extern char beMemory_fieldNames[];
extern char beMemory_fieldOffsets[];
extern char beMemory_fieldStorage[];
extern char beMemory_fieldTypes[];
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

struct beMemoryInstance : Instance_804CBA60 {
    char unknown0C[36];
    inline ~beMemoryInstance() { __vtable = beMemory_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beMemory)

META_GET_META(beMemory)

#pragma push
#pragma optimize_for_size on
void *beMemory_vtableRead()
{
    beMemoryInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = beMemory_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beMemory)

void beMemory_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMemory_meta, igInfoManager_register,
                       fn_80284550, beMemory_getMetaCall,
                       beMemory_className, 0x24,
                       beMemory_vtableRead, beMemory_fieldInit, 0, beMemory_dependencies);
}

META_GET_META_CALL(beMemory)

void beMemory_fieldInit()
{
    Meta::igMetaObject *meta = beMemory_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMemory_fieldTypes, 5);
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    padManagerField->_metaObject = bePadManager_metaObject();
    padManagerField->_refCounted = false;
    meta_setupFields(meta, beMemory_fieldNames, beMemory_fieldStorage, beMemory_fieldOffsets, base);
}

}
#pragma pop
