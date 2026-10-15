// beNDMWLoadIntf2DegiState: Alchemy class registration (0x8033DC20..0x8033DEC0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWLoadIntf2DegiState)
META_DECLARE(beMessenger)
META_DECLARE(beNDMWLoadCtrl2CommonIntf)
META_DECLARE(beNDMWLoadIntf2ComMdlCtrl)
META_DECLARE(beNDMWLoadIntf2TextOrder)
META_DECLARE(igObject)

extern "C" {
extern char beNDMWLoadIntf2DegiState_dependencies[20];
extern char beNDMWLoadIntf2DegiState_fieldNames[];
extern char beNDMWLoadIntf2DegiState_fieldOffsets[];
extern char beNDMWLoadIntf2DegiState_fieldStorage[];
extern char beNDMWLoadIntf2DegiState_fieldTypes[];
void *fn_800237D0();
void fn_803250AC();
}

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_CREATE(beNDMWLoadIntf2DegiState)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beNDMWLoadIntf2DegiState)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beNDMWLoadIntf2DegiState_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[68];
    } object;
    igObject_construct(&object);
    object.__vtable = beNDMWLoadIntf2DegiState_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWLoadIntf2DegiState)

void beNDMWLoadIntf2DegiState_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2DegiState_meta, igObject_register,
                       fn_800237D0, beNDMWLoadIntf2DegiState_getMetaCall,
                       beNDMWLoadIntf2DegiState_className, 0x44,
                       beNDMWLoadIntf2DegiState_vtableRead, beNDMWLoadIntf2DegiState_fieldInit, 0, beNDMWLoadIntf2DegiState_dependencies);
}

META_GET_META_CALL(beNDMWLoadIntf2DegiState)

void beNDMWLoadIntf2DegiState_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadIntf2DegiState_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadIntf2DegiState_fieldTypes, 16);
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    messengerField->_metaObject = beNDMWLoadIntf2ComMdlCtrl_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *comMdlCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    comMdlCtrlField->_metaObject = beNDMWLoadIntf2TextOrder_metaObject();
    comMdlCtrlField->_refCounted = false;
    Meta::igObjectRefMetaField *textOrderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    textOrderField->_metaObject = beNDMWLoadCtrl2CommonIntf_metaObject();
    textOrderField->_refCounted = false;
    Meta::igObjectRefMetaField *commonIntfField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    commonIntfField->_metaObject = beMessenger_metaObject();
    commonIntfField->_refCounted = false;
    meta_setupFields(meta, beNDMWLoadIntf2DegiState_fieldNames, beNDMWLoadIntf2DegiState_fieldStorage, beNDMWLoadIntf2DegiState_fieldOffsets, base);
}

}
#pragma pop
