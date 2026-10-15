// beNDMWShinkaCtrl: Alchemy class registration (0x80343A04..0x80343D90). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWShinkaCtrl)
META_DECLARE(beDataBase)
META_DECLARE(beDataObjList)
META_DECLARE(beMessenger)
META_DECLARE(beNDMWGameRam)
META_DECLARE(beNDMWShinkaObjectList)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWShinkaCtrl_dependencies[24];
extern char beNDMWShinkaCtrl_fieldNames[];
extern char beNDMWShinkaCtrl_fieldOffsets[];
extern char beNDMWShinkaCtrl_fieldStorage[];
extern char beNDMWShinkaCtrl_fieldTypes[];
void *fn_800237D0();
void fn_803250AC();
}

struct beNDMWShinkaCtrlInstance : igObjectInstance {
    char unknown04[16];
    igObjectRefMember _playerParameter;
    igObjectRefMember _dBShinka;
    igObjectRefMember _list;
    char unknown20[8];
    inline ~beNDMWShinkaCtrlInstance() { __vtable = beNDMWShinkaCtrl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beNDMWShinkaCtrl)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWShinkaCtrl)
#pragma pop

void *beNDMWShinkaCtrl_vtableRead()
{
    beNDMWShinkaCtrlInstance object;
    object.__vtable = beNDMWShinkaCtrl_vtable;
    object._playerParameter._value = 0;
    object._dBShinka._value = 0;
    object._list._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWShinkaCtrl)

void beNDMWShinkaCtrl_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWShinkaCtrl_meta, igObject_register,
                       fn_800237D0, beNDMWShinkaCtrl_getMetaCall,
                       beNDMWShinkaCtrl_className, 0x20,
                       beNDMWShinkaCtrl_vtableRead, beNDMWShinkaCtrl_fieldInit, 0, beNDMWShinkaCtrl_dependencies);
}

META_GET_META_CALL(beNDMWShinkaCtrl)

void beNDMWShinkaCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWShinkaCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWShinkaCtrl_fieldTypes, 6);
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *gameRamField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    gameRamField->_metaObject = beNDMWGameRam_metaObject();
    gameRamField->_refCounted = false;
    Meta::igObjectRefMetaField *playerParameterField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    playerParameterField->_metaObject = beDataObjList_metaObject();
    Meta::igObjectRefMetaField *dBShinkaField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    dBShinkaField->_metaObject = beDataBase_metaObject();
    Meta::igObjectRefMetaField *listField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    listField->_metaObject = beNDMWShinkaObjectList_metaObject();
    listField->_construct = true;
    meta_setupFields(meta, beNDMWShinkaCtrl_fieldNames, beNDMWShinkaCtrl_fieldStorage, beNDMWShinkaCtrl_fieldOffsets, base);
}

}
#pragma pop
