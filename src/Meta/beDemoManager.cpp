// beDemoManager: Alchemy class registration (0x802DB078..0x802DB45C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beDemoManager)
META_DECLARE(beDemoManagerWork)
META_DECLARE(beDemoManagerWorkList)
META_DECLARE(beLua)
META_DECLARE(beMessenger)
META_DECLARE(igInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beDemoManager_dependencies[20];
extern char beDemoManager_fieldNames[];
extern char beDemoManager_fieldOffsets[];
extern char beDemoManager_fieldStorage[];
extern char beDemoManager_fieldTypes[];
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

struct beDemoManagerInstance : Instance_804CBA60 {
    char unknown0C[12];
    igObjectRefMember _buildData;
    igObjectRefMember _activeDataList;
    char unknown20[8];
    inline ~beDemoManagerInstance() { __vtable = beDemoManager_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beDemoManager)

META_METAOBJECT(beDemoManager)

META_GET_META(beDemoManager)

void *beDemoManager_vtableRead()
{
    beDemoManagerInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = beDemoManager_vtable;
    object._buildData._value = 0;
    object._activeDataList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beDemoManager)

void beDemoManager_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beDemoManager_meta, igInfoManager_register,
                       fn_80284550, beDemoManager_getMetaCall,
                       beDemoManager_className, 0x24,
                       beDemoManager_vtableRead, beDemoManager_fieldInit, 0, beDemoManager_dependencies);
}

META_GET_META_CALL(beDemoManager)

void beDemoManager_fieldInit()
{
    Meta::igMetaObject *meta = beDemoManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beDemoManager_fieldTypes, 7);
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *luaField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    luaField->_metaObject = beLua_metaObject();
    luaField->_refCounted = false;
    Meta::igObjectRefMetaField *buildDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    buildDataField->_metaObject = beDemoManagerWork_metaObject();
    Meta::igObjectRefMetaField *activeDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    activeDataListField->_metaObject = beDemoManagerWorkList_metaObject();
    activeDataListField->_construct = true;
    meta_setupFields(meta, beDemoManager_fieldNames, beDemoManager_fieldStorage, beDemoManager_fieldOffsets, base);
}

}
#pragma pop
