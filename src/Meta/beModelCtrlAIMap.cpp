// beModelCtrlAIMap: Alchemy class registration (0x802CA33C..0x802CA748). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beModelCtrlAIMap)
META_DECLARE(beModelCtrlAIDataList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlAIMap_dependencies[8];
extern char beModelCtrlAIMap_fieldNames[];
extern char beModelCtrlAIMap_fieldOffsets[];
extern char beModelCtrlAIMap_fieldStorage[];
extern char beModelCtrlAIMap_fieldTypes[];
void *fn_80023CF4();
void fn_802B1AC8();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct beModelCtrlAIMapInstance : igNamedObjectInstance {
    char unknown0C[16];
    igObjectRefMember _zoneA;
    igObjectRefMember _zoneB;
    igObjectRefMember _zoneC;
    igObjectRefMember _zoneD;
    igStringMember _targetType;
    igStringMember _targetMode;
    char unknown34[4];
    inline ~beModelCtrlAIMapInstance() { __vtable = beModelCtrlAIMap_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_GET_META(beModelCtrlAIMap)
#pragma pop

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw on
void *beModelCtrlAIMap_vtableRead()
{
    beModelCtrlAIMapInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = beModelCtrlAIMap_vtable;
    object._zoneA._value = 0;
    object._zoneB._value = 0;
    object._zoneC._value = 0;
    object._zoneD._value = 0;
    object._targetType._value = 0;
    object._targetMode._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beModelCtrlAIMap)

void beModelCtrlAIMap_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlAIMap_meta, igNamedObject_register,
                       fn_80023CF4, beModelCtrlAIMap_getMetaCall,
                       beModelCtrlAIMap_className, 0x34,
                       beModelCtrlAIMap_vtableRead, beModelCtrlAIMap_fieldInit, 0, beModelCtrlAIMap_dependencies);
}

META_GET_META_CALL(beModelCtrlAIMap)

void beModelCtrlAIMap_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlAIMap_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlAIMap_fieldTypes, 10);
    Meta::igObjectRefMetaField *zoneAField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    zoneAField->_metaObject = beModelCtrlAIDataList_metaObject();
    zoneAField->_construct = true;
    Meta::igObjectRefMetaField *zoneBField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    Meta::igMetaObject *beModelCtrlAIDataListMeta_ = beModelCtrlAIDataList_metaObject();
    zoneBField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beModelCtrlAIDataListMeta_);
    zoneBField->_construct = true;
    Meta::igObjectRefMetaField *zoneCField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    Meta::igMetaObject *beModelCtrlAIDataListMeta__ = beModelCtrlAIDataList_metaObject();
    zoneCField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beModelCtrlAIDataListMeta__);
    zoneCField->_construct = true;
    Meta::igObjectRefMetaField *zoneDField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    Meta::igMetaObject *beModelCtrlAIDataListMeta___ = beModelCtrlAIDataList_metaObject();
    zoneDField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beModelCtrlAIDataListMeta___);
    zoneDField->_construct = true;
    meta_setupFields(meta, beModelCtrlAIMap_fieldNames, beModelCtrlAIMap_fieldStorage, beModelCtrlAIMap_fieldOffsets, base);
}

}
#pragma pop
