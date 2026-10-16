// beNDMWLoadIntf2ComMdlCtrl: Alchemy class registration (0x80341078..0x803414DC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWLoadIntf2ComMdlCtrl)
META_DECLARE(beBaseInfoData)
META_DECLARE(beLoadIntf2ComMdlDataList)
META_DECLARE(beMessenger)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWLoadIntf2ComMdlCtrl_dependencies[12];
extern char beNDMWLoadIntf2ComMdlCtrl_fieldNames[16];
extern char beNDMWLoadIntf2ComMdlCtrl_fieldOffsets[16];
extern char beNDMWLoadIntf2ComMdlCtrl_fieldStorage[16];
extern char beNDMWLoadIntf2ComMdlCtrl_fieldTypes[16];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80453ED4[11];
extern char lbl_804DBC50[];
extern char lbl_805366C0[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWLoadIntf2ComMdlCtrlInstance : Instance_804DBC50 {
    char unknown0C[8];
    igObjectRefMember _openDataList;
    igObjectRefMember _closeDataList;
    char unknown1C[12];
    inline ~beNDMWLoadIntf2ComMdlCtrlInstance() { __vtable = beNDMWLoadIntf2ComMdlCtrl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(beNDMWLoadIntf2ComMdlCtrl)

META_METAOBJECT(beNDMWLoadIntf2ComMdlCtrl)

META_GET_META(beNDMWLoadIntf2ComMdlCtrl)

#pragma push
#pragma optimize_for_size off
void *beNDMWLoadIntf2ComMdlCtrl_vtableRead()
{
    beNDMWLoadIntf2ComMdlCtrlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWLoadIntf2ComMdlCtrl_vtable;
    object._openDataList._value = 0;
    object._closeDataList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWLoadIntf2ComMdlCtrl)

void beNDMWLoadIntf2ComMdlCtrl_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWLoadIntf2ComMdlCtrl_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWLoadIntf2ComMdlCtrl_getMetaCall,
                       beNDMWLoadIntf2ComMdlCtrl_className, 0x28,
                       beNDMWLoadIntf2ComMdlCtrl_vtableRead, beNDMWLoadIntf2ComMdlCtrl_fieldInit, 0, beNDMWLoadIntf2ComMdlCtrl_dependencies);
}

META_GET_META_CALL(beNDMWLoadIntf2ComMdlCtrl)

#pragma push
#pragma optimize_for_size off
void beNDMWLoadIntf2ComMdlCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWLoadIntf2ComMdlCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWLoadIntf2ComMdlCtrl_fieldTypes, 4);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80453ED4);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805366C0);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *openDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    openDataListField->_metaObject = beLoadIntf2ComMdlDataList_metaObject();
    openDataListField->_construct = true;
    Meta::igObjectRefMetaField *closeDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    Meta::igMetaObject *beLoadIntf2ComMdlDataListMeta_ = beLoadIntf2ComMdlDataList_metaObject();
    closeDataListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beLoadIntf2ComMdlDataListMeta_);
    closeDataListField->_construct = true;
    meta_setupFields(meta, beNDMWLoadIntf2ComMdlCtrl_fieldNames, beNDMWLoadIntf2ComMdlCtrl_fieldStorage, beNDMWLoadIntf2ComMdlCtrl_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
