// beNDMWMcUtilCtrl: Alchemy class registration (0x8033F1CC..0x8033F528). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWMcUtilCtrl)
META_DECLARE(beMessenger)
META_DECLARE(beNDMWMcSlotList)
META_DECLARE(beSaveDataDeliver)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWMcUtilCtrl_dependencies[16];
extern char beNDMWMcUtilCtrl_fieldNames[];
extern char beNDMWMcUtilCtrl_fieldOffsets[];
extern char beNDMWMcUtilCtrl_fieldStorage[];
extern char beNDMWMcUtilCtrl_fieldTypes[];
void *fn_800237D0();
void fn_803250AC();
}

struct beNDMWMcUtilCtrlInstance : igObjectInstance {
    char unknown04[36];
    igObjectRefMember _svData;
    igObjectRefMember _slot;
    char unknown30[16];
    inline ~beNDMWMcUtilCtrlInstance() { __vtable = beNDMWMcUtilCtrl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWMcUtilCtrl)

META_METAOBJECT(beNDMWMcUtilCtrl)

META_GET_META(beNDMWMcUtilCtrl)

void *beNDMWMcUtilCtrl_vtableRead()
{
    beNDMWMcUtilCtrlInstance object;
    object.__vtable = beNDMWMcUtilCtrl_vtable;
    object._svData._value = 0;
    object._slot._value = 0;
    return meta_vtableOf(&object);
}

#pragma push
#pragma optimize_for_size off
META_ARK_REGISTER(beNDMWMcUtilCtrl)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beNDMWMcUtilCtrl_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWMcUtilCtrl_meta, igObject_register,
                       fn_800237D0, beNDMWMcUtilCtrl_getMetaCall,
                       beNDMWMcUtilCtrl_className, 0x40,
                       beNDMWMcUtilCtrl_vtableRead, beNDMWMcUtilCtrl_fieldInit, 0, beNDMWMcUtilCtrl_dependencies);
}
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META_CALL(beNDMWMcUtilCtrl)
#pragma pop

#pragma push
#pragma optimize_for_size off
void beNDMWMcUtilCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWMcUtilCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWMcUtilCtrl_fieldTypes, 17);
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *svDataField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    svDataField->_metaObject = beSaveDataDeliver_metaObject();
    svDataField->_construct = true;
    Meta::igObjectRefMetaField *slotField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 12));
    slotField->_metaObject = beNDMWMcSlotList_metaObject();
    slotField->_construct = true;
    meta_setupFields(meta, beNDMWMcUtilCtrl_fieldNames, beNDMWMcUtilCtrl_fieldStorage, beNDMWMcUtilCtrl_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
