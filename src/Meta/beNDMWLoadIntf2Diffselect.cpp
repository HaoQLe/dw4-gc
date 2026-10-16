// beNDMWLoadIntf2Diffselect: Alchemy class registration (0x8033CECC..0x8033D28C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLoadIntf2Diffselect)
META_DECLARE(beBaseInfoData)
META_DECLARE(beNDMWLoadCtrl2CommonIntf)
META_DECLARE(beNDMWLoadIntf2ComMdlCtrl)
META_DECLARE(beNDMWLoadIntf2MesWin)
META_DECLARE(beNDMWLoadIntf2TextOrder)
META_DECLARE(bePadManager)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadIntf2Diffselect_dependencies[24];
extern char beNDMWLoadIntf2Diffselect_fieldNames[64];
extern char beNDMWLoadIntf2Diffselect_fieldOffsets[64];
extern char beNDMWLoadIntf2Diffselect_fieldStorage[64];
extern char beNDMWLoadIntf2Diffselect_fieldTypes[64];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80454A00[11];
extern char lbl_804DBC50[];
extern char lbl_805363A4[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLoadIntf2DiffselectInstance : Instance_804DBC50 {
    char unknown0C[68];
    inline ~beNDMWLoadIntf2DiffselectInstance() { __vtable = beNDMWLoadIntf2Diffselect_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWLoadIntf2Diffselect)

META_GET_META(beNDMWLoadIntf2Diffselect)

void *beNDMWLoadIntf2Diffselect_vtableRead()
{
    beNDMWLoadIntf2DiffselectInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLoadIntf2Diffselect_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beNDMWLoadIntf2Diffselect)

void beNDMWLoadIntf2Diffselect_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2Diffselect_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLoadIntf2Diffselect_getMetaCall,
                       beNDMWLoadIntf2Diffselect_className, 0x4C,
                       beNDMWLoadIntf2Diffselect_vtableRead, beNDMWLoadIntf2Diffselect_fieldInit, 0, beNDMWLoadIntf2Diffselect_dependencies);
}

META_GET_META_CALL(beNDMWLoadIntf2Diffselect)

#pragma push
#pragma optimize_for_size off
void beNDMWLoadIntf2Diffselect_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadIntf2Diffselect_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadIntf2Diffselect_fieldTypes, 16);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80454A00);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805363A4);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *padManagerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    padManagerField->_metaObject = bePadManager_metaObject();
    padManagerField->_refCounted = false;
    Meta::igObjectRefMetaField *comMdlCtrlField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 8));
    comMdlCtrlField->_metaObject = beNDMWLoadIntf2ComMdlCtrl_metaObject();
    comMdlCtrlField->_refCounted = false;
    Meta::igObjectRefMetaField *textOrderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 9));
    textOrderField->_metaObject = beNDMWLoadIntf2TextOrder_metaObject();
    textOrderField->_refCounted = false;
    Meta::igObjectRefMetaField *commonIntfField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 10));
    commonIntfField->_metaObject = beNDMWLoadCtrl2CommonIntf_metaObject();
    commonIntfField->_refCounted = false;
    Meta::igObjectRefMetaField *mesWinField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    mesWinField->_metaObject = beNDMWLoadIntf2MesWin_metaObject();
    mesWinField->_refCounted = false;
    meta_setupFields(meta, beNDMWLoadIntf2Diffselect_fieldNames, beNDMWLoadIntf2Diffselect_fieldStorage, beNDMWLoadIntf2Diffselect_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
