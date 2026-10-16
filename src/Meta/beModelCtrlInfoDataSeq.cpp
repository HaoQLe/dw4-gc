// beModelCtrlInfoDataSeq: Alchemy class registration (0x802C94AC..0x802C97FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beModelCtrlInfoDataSeq)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlInfoDataSeq_dependencies[8];
extern char beModelCtrlInfoDataSeq_fieldNames[4];
extern char beModelCtrlInfoDataSeq_fieldOffsets[4];
extern char beModelCtrlInfoDataSeq_fieldStorage[4];
extern char beModelCtrlInfoDataSeq_fieldTypes[4];
void *fn_80029A5C();
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041D93C[6];
extern char lbl_8041F020[4];
extern char lbl_804DBC50[];
extern char lbl_80534E18[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beModelCtrlInfoDataSeqInstance : Instance_804DBC50 {
    char unknown0C[4];
    igObjectRefMember _dataList;
    char unknown14[12];
    inline ~beModelCtrlInfoDataSeqInstance() { __vtable = beModelCtrlInfoDataSeq_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlInfoDataSeq)

void *beModelCtrlInfoDataSeq_vtableRead()
{
    beModelCtrlInfoDataSeqInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beModelCtrlInfoDataSeq_vtable;
    object._dataList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlInfoDataSeq)

void beModelCtrlInfoDataSeq_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlInfoDataSeq_meta, beBaseInfoData_register,
                       fn_802B8770, beModelCtrlInfoDataSeq_getMetaCall,
                       beModelCtrlInfoDataSeq_className, 0x14,
                       beModelCtrlInfoDataSeq_vtableRead, beModelCtrlInfoDataSeq_fieldInit, 0, beModelCtrlInfoDataSeq_dependencies);
}

META_GET_META_CALL(beModelCtrlInfoDataSeq)

#pragma push
#pragma optimize_for_size off
void beModelCtrlInfoDataSeq_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlInfoDataSeq_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlInfoDataSeq_fieldTypes, 1);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_8041D93C));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_8041F020);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80534E18);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *dataListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v4 = fn_80029A5C();
    dataListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    dataListField->_construct = true;
    meta_setupFields(meta, beModelCtrlInfoDataSeq_fieldNames, beModelCtrlInfoDataSeq_fieldStorage, beModelCtrlInfoDataSeq_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
