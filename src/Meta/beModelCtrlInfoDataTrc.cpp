// beModelCtrlInfoDataTrc: Alchemy class registration (0x802C9110..0x802C94AC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beModelCtrlInfoDataTrc)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlInfoDataTrc_dependencies[8];
extern char beModelCtrlInfoDataTrc_fieldNames[4];
extern char beModelCtrlInfoDataTrc_fieldOffsets[4];
extern char beModelCtrlInfoDataTrc_fieldStorage[4];
extern char beModelCtrlInfoDataTrc_fieldTypes[4];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void *fn_801ABCB8();
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041D93C[6];
extern char lbl_8041F004[4];
extern char lbl_804DBC50[];
extern char lbl_80534E0C[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beModelCtrlInfoDataTrcInstance : Instance_804DBC50 {
    char unknown0C[4];
    igObjectRefMember _recorderNode;
    char unknown14[12];
    inline ~beModelCtrlInfoDataTrcInstance() { __vtable = beModelCtrlInfoDataTrc_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beModelCtrlInfoDataTrc)

META_GET_META(beModelCtrlInfoDataTrc)

void *beModelCtrlInfoDataTrc_vtableRead()
{
    beModelCtrlInfoDataTrcInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beModelCtrlInfoDataTrc_vtable;
    object._recorderNode._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlInfoDataTrc)

void beModelCtrlInfoDataTrc_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlInfoDataTrc_meta, beBaseInfoData_register,
                       fn_802B8770, beModelCtrlInfoDataTrc_getMetaCall,
                       beModelCtrlInfoDataTrc_className, 0x14,
                       beModelCtrlInfoDataTrc_vtableRead, beModelCtrlInfoDataTrc_fieldInit, 0, beModelCtrlInfoDataTrc_dependencies);
}

META_GET_META_CALL(beModelCtrlInfoDataTrc)

#pragma push
#pragma optimize_for_size off
void beModelCtrlInfoDataTrc_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlInfoDataTrc_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlInfoDataTrc_fieldTypes, 1);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_8041D93C));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_8041F004);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80534E0C);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *recorderNodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v4 = fn_801ABCB8();
    recorderNodeField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    meta_setupFields(meta, beModelCtrlInfoDataTrc_fieldNames, beModelCtrlInfoDataTrc_fieldStorage, beModelCtrlInfoDataTrc_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
