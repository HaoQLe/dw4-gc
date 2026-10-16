// beModelCtrlInfoDataAIM: Alchemy class registration (0x802C9E1C..0x802CA16C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beModelCtrlInfoDataAIM)
META_DECLARE(beBaseInfoData)
META_DECLARE(beModelCtrlAIMapList)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlInfoDataAIM_dependencies[8];
extern char beModelCtrlInfoDataAIM_fieldNames[4];
extern char beModelCtrlInfoDataAIM_fieldOffsets[4];
extern char beModelCtrlInfoDataAIM_fieldStorage[4];
extern char beModelCtrlInfoDataAIM_fieldTypes[4];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041D93C[6];
extern char lbl_8041F134[4];
extern char lbl_804DBC50[];
extern char lbl_80534E64[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beModelCtrlInfoDataAIMInstance : Instance_804DBC50 {
    char unknown0C[4];
    igObjectRefMember _aIMapList;
    char unknown14[12];
    inline ~beModelCtrlInfoDataAIMInstance() { __vtable = beModelCtrlInfoDataAIM_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlInfoDataAIM)

void *beModelCtrlInfoDataAIM_vtableRead()
{
    beModelCtrlInfoDataAIMInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beModelCtrlInfoDataAIM_vtable;
    object._aIMapList._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlInfoDataAIM)

void beModelCtrlInfoDataAIM_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlInfoDataAIM_meta, beBaseInfoData_register,
                       fn_802B8770, beModelCtrlInfoDataAIM_getMetaCall,
                       beModelCtrlInfoDataAIM_className, 0x14,
                       beModelCtrlInfoDataAIM_vtableRead, beModelCtrlInfoDataAIM_fieldInit, 0, beModelCtrlInfoDataAIM_dependencies);
}

META_GET_META_CALL(beModelCtrlInfoDataAIM)

#pragma push
#pragma optimize_for_size off
void beModelCtrlInfoDataAIM_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlInfoDataAIM_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlInfoDataAIM_fieldTypes, 1);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_8041D93C));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_8041F134);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80534E64);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    Meta::igObjectRefMetaField *aIMapListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    aIMapListField->_metaObject = beModelCtrlAIMapList_metaObject();
    aIMapListField->_construct = true;
    meta_setupFields(meta, beModelCtrlInfoDataAIM_fieldNames, beModelCtrlInfoDataAIM_fieldStorage, beModelCtrlInfoDataAIM_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
