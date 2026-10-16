// beModelCtrlInfoDataAIH: Alchemy class registration (0x802C9B44..0x802C9E1C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igStringMetaField.h>

META_DECLARE(beModelCtrlInfoDataAIH)
META_DECLARE(beBaseInfoData)
META_DECLARE(igNamedObject)

extern "C" {
extern char beModelCtrlInfoDataAIH_fieldNames[32];
extern char beModelCtrlInfoDataAIH_fieldOffsets[32];
extern char beModelCtrlInfoDataAIH_fieldStorage[32];
extern char beModelCtrlInfoDataAIH_fieldTypes[32];
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_80071694(void *, void *);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041D93C[6];
extern char lbl_8041F10C[4];
extern char lbl_804DBC50[];
extern char lbl_80534E3C[4];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804DBC50 : igNamedObjectInstance {
    inline ~Instance_804DBC50() { __vtable = lbl_804DBC50; }
};

struct beModelCtrlInfoDataAIHInstance : Instance_804DBC50 {
    char unknown0C[36];
    inline ~beModelCtrlInfoDataAIHInstance() { __vtable = beModelCtrlInfoDataAIH_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beModelCtrlInfoDataAIH)

void *beModelCtrlInfoDataAIH_vtableRead()
{
    beModelCtrlInfoDataAIHInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804DBC50;
    object.__vtable = beModelCtrlInfoDataAIH_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(beModelCtrlInfoDataAIH)

void beModelCtrlInfoDataAIH_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beModelCtrlInfoDataAIH_meta, beBaseInfoData_register,
                       fn_802B8770, beModelCtrlInfoDataAIH_getMetaCall,
                       beModelCtrlInfoDataAIH_className, 0x2C,
                       beModelCtrlInfoDataAIH_vtableRead, beModelCtrlInfoDataAIH_fieldInit, 0, 0);
}

META_GET_META_CALL(beModelCtrlInfoDataAIH)

#pragma push
#pragma optimize_for_size off
void beModelCtrlInfoDataAIH_fieldInit()
{
    Meta::igMetaObject *meta = beModelCtrlInfoDataAIH_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beModelCtrlInfoDataAIH_fieldTypes, 8);
    Meta::igStringMetaField *nameField = static_cast<Meta::igStringMetaField *>(fn_800658F8(meta, lbl_8041D93C));   // "_name"
    int nameIndex = fn_80053998(meta->_metaFields, nameField);
    nameField = static_cast<Meta::igStringMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(nameField)->virtual54(1));   // a copy of it
    fn_80071694(nameField, lbl_8041F10C);
    nameField->_externalEnumStorage = reinterpret_cast<void *>(lbl_80534E3C);
    fn_8006588C(meta, nameIndex, nameField);
    meta_release(nameField);
    meta_setupFields(meta, beModelCtrlInfoDataAIH_fieldNames, beModelCtrlInfoDataAIH_fieldStorage, beModelCtrlInfoDataAIH_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
