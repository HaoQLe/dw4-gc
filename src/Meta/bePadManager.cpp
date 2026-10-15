// bePadManager: Alchemy class registration (0x802C2134..0x802C2538). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(bePadManager)
META_DECLARE(beKeyboardReceiver)
META_DECLARE(bePadDataList)
META_DECLARE(beSystem)
META_DECLARE(igInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char bePadManager_dependencies[16];
extern char bePadManager_fieldNames[];
extern char bePadManager_fieldOffsets[];
extern char bePadManager_fieldStorage[];
extern char bePadManager_fieldTypes[];
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

struct bePadManagerInstance : Instance_804CBA60 {
    char unknown0C[4];
    igObjectRefMember _system;
    igObjectRefMember _padList;
    igObjectRefMember _kbReceiver;
    char unknown1C[12];
    inline ~bePadManagerInstance() { __vtable = bePadManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(bePadManager)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(bePadManager)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(bePadManager)
#pragma pop

void *bePadManager_vtableRead()
{
    bePadManagerInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = bePadManager_vtable;
    object._system._value = 0;
    object._padList._value = 0;
    object._kbReceiver._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(bePadManager)

void bePadManager_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &bePadManager_meta, igInfoManager_register,
                       fn_80284550, bePadManager_getMetaCall,
                       bePadManager_className, 0x20,
                       bePadManager_vtableRead, bePadManager_fieldInit, 0, bePadManager_dependencies);
}

META_GET_META_CALL(bePadManager)

void bePadManager_fieldInit()
{
    Meta::igMetaObject *meta = bePadManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, bePadManager_fieldTypes, 5);
    Meta::igObjectRefMetaField *systemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    systemField->_metaObject = beSystem_metaObject();
    Meta::igObjectRefMetaField *padListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    padListField->_metaObject = bePadDataList_metaObject();
    padListField->_construct = true;
    Meta::igObjectRefMetaField *kbReceiverField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    kbReceiverField->_metaObject = beKeyboardReceiver_metaObject();
    kbReceiverField->_construct = true;
    meta_setupFields(meta, bePadManager_fieldNames, bePadManager_fieldStorage, bePadManager_fieldOffsets, base);
}

}
#pragma pop
