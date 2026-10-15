// beTimer: Alchemy class registration (0x802B56F8..0x802B5AA4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beTimer)
META_DECLARE(beLua)
META_DECLARE(bePadManager)
META_DECLARE(beSystem)
META_DECLARE(beTimerDataList)
META_DECLARE(igInfoManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beTimer_dependencies[20];
extern char beTimer_fieldNames[];
extern char beTimer_fieldOffsets[];
extern char beTimer_fieldStorage[];
extern char beTimer_fieldTypes[];
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

struct beTimerInstance : Instance_804CBA60 {
    char unknown0C[16];
    igObjectRefMember _dataList;
    char unknown20[16];
    inline ~beTimerInstance() { __vtable = beTimer_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beTimer)

META_METAOBJECT(beTimer)

META_GET_META(beTimer)

#pragma push
#pragma optimize_for_size on
void *beTimer_vtableRead()
{
    beTimerInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804CBA60;
    object.__vtable = beTimer_vtable;
    object._dataList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beTimer)

void beTimer_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beTimer_meta, igInfoManager_register,
                       fn_80284550, beTimer_getMetaCall,
                       beTimer_className, 0x28,
                       beTimer_vtableRead, beTimer_fieldInit, 0, beTimer_dependencies);
}

META_GET_META_CALL(beTimer)

void beTimer_fieldInit()
{
    Meta::igMetaObject *meta = beTimer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beTimer_fieldTypes, 5);
    Meta::igObjectRefMetaField *systemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    systemField->_metaObject = beSystem_metaObject();
    systemField->_refCounted = false;
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    padManagerField->_metaObject = bePadManager_metaObject();
    padManagerField->_refCounted = false;
    Meta::igObjectRefMetaField *luaManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    luaManagerField->_metaObject = beLua_metaObject();
    luaManagerField->_refCounted = false;
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    dataListField->_metaObject = beTimerDataList_metaObject();
    dataListField->_construct = true;
    meta_setupFields(meta, beTimer_fieldNames, beTimer_fieldStorage, beTimer_fieldOffsets, base);
}

}
#pragma pop
