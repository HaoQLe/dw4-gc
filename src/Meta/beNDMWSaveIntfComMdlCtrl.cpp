// beNDMWSaveIntfComMdlCtrl: Alchemy class registration (0x80334DE8..0x803351B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beNDMWSaveIntfComMdlCtrl)
META_DECLARE(beBaseInfoData)
META_DECLARE(beMessenger)
META_DECLARE(beSaveIntfComMdlDataList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beNDMWSaveIntfComMdlCtrl_dependencies[12];
extern char beNDMWSaveIntfComMdlCtrl_fieldNames[16];
extern char beNDMWSaveIntfComMdlCtrl_fieldOffsets[16];
extern char beNDMWSaveIntfComMdlCtrl_fieldStorage[16];
extern char beNDMWSaveIntfComMdlCtrl_fieldTypes[16];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_802B8770();
void fn_803250AC();
extern char lbl_804533CC[6];
extern char lbl_80453ED4[11];
extern char lbl_804DBC50[];
extern char lbl_80535FE4[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beNDMWSaveIntfComMdlCtrlInstance : Instance_804DBC50 {
    char unknown0C[8];
    igObjectRefMember _openDataList;
    igObjectRefMember _closeDataList;
    char unknown1C[12];
    inline ~beNDMWSaveIntfComMdlCtrlInstance() { __vtable = beNDMWSaveIntfComMdlCtrl_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beNDMWSaveIntfComMdlCtrl)

#pragma push
#pragma optimize_for_size off
void *beNDMWSaveIntfComMdlCtrl_vtableRead()
{
    beNDMWSaveIntfComMdlCtrlInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beNDMWSaveIntfComMdlCtrl_vtable;
    object._openDataList._value = 0;
    object._closeDataList._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWSaveIntfComMdlCtrl)

void beNDMWSaveIntfComMdlCtrl_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWSaveIntfComMdlCtrl_meta, beBaseInfoData_register,
                       fn_802B8770, beNDMWSaveIntfComMdlCtrl_getMetaCall,
                       beNDMWSaveIntfComMdlCtrl_className, 0x28,
                       beNDMWSaveIntfComMdlCtrl_vtableRead, beNDMWSaveIntfComMdlCtrl_fieldInit, 0, beNDMWSaveIntfComMdlCtrl_dependencies);
}

META_GET_META_CALL(beNDMWSaveIntfComMdlCtrl)

#pragma push
#pragma optimize_for_size off
void beNDMWSaveIntfComMdlCtrl_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWSaveIntfComMdlCtrl_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWSaveIntfComMdlCtrl_fieldTypes, 4);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_804533CC));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_80453ED4);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80535FE4);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *messengerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    messengerField->_metaObject = beMessenger_metaObject();
    messengerField->_refCounted = false;
    Meta::igObjectRefMetaField *openDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    openDataListField->_metaObject = beSaveIntfComMdlDataList_metaObject();
    openDataListField->_construct = true;
    Meta::igObjectRefMetaField *closeDataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    Meta::igMetaObject *beSaveIntfComMdlDataListMeta_ = beSaveIntfComMdlDataList_metaObject();
    closeDataListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beSaveIntfComMdlDataListMeta_);
    closeDataListField->_construct = true;
    meta_setupFields(meta, beNDMWSaveIntfComMdlCtrl_fieldNames, beNDMWSaveIntfComMdlCtrl_fieldStorage, beNDMWSaveIntfComMdlCtrl_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
