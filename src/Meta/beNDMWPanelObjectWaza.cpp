// beNDMWPanelObjectWaza: Alchemy class registration (0x803379F0..0x80337E34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWPanelObjectWaza)
META_DECLARE(beNDMWPanelObject)

extern "C" {
extern char beNDMWPanelObjectWaza_dependencies[12];
extern char beNDMWPanelObjectWaza_fieldNames[8];
extern char beNDMWPanelObjectWaza_fieldOffsets[8];
extern char beNDMWPanelObjectWaza_fieldStorage[8];
extern char beNDMWPanelObjectWaza_fieldTypes[8];
void *fn_80028F84();
void *fn_800365B4();
void fn_80053650(void *, int);
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
void fn_803250AC();
void *fn_80337428();
extern char lbl_804540D0[6];
extern char lbl_804E613C[];
extern char lbl_805360FC[4];
}

struct Instance_804E613C : igObjectInstance {
    char unknown04[32];
    igObjectRefMember _playerDataList;
    char unknown28[4];
    igObjectRefMember _textSetList;
    igObjectRefMember _textColorList;
    inline ~Instance_804E613C() { __vtable = lbl_804E613C; }
};

struct beNDMWPanelObjectWazaInstance : Instance_804E613C {
    char unknown34[8];
    igObjectRefMember _listFolder;
    igObjectRefMember _listColor;
    char unknown44[12];
    inline ~beNDMWPanelObjectWazaInstance() { __vtable = beNDMWPanelObjectWaza_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beNDMWPanelObjectWaza)

META_GET_META(beNDMWPanelObjectWaza)

#pragma push
#pragma use_lmw_stmw on
void *beNDMWPanelObjectWaza_vtableRead()
{
    beNDMWPanelObjectWazaInstance object;
    object.__vtable = lbl_804E613C;
    object._playerDataList._value = 0;
    object._textSetList._value = 0;
    object._textColorList._value = 0;
    object.__vtable = beNDMWPanelObjectWaza_vtable;
    object._listFolder._value = 0;
    object._listColor._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWPanelObjectWaza)

void beNDMWPanelObjectWaza_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWPanelObjectWaza_meta, beNDMWPanelObject_register,
                       fn_80337428, beNDMWPanelObjectWaza_getMetaCall,
                       beNDMWPanelObjectWaza_className, 0x44,
                       beNDMWPanelObjectWaza_vtableRead, beNDMWPanelObjectWaza_fieldInit, 0, beNDMWPanelObjectWaza_dependencies);
}

META_GET_META_CALL(beNDMWPanelObjectWaza)

#pragma push
#pragma optimize_for_size off
void beNDMWPanelObjectWaza_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWPanelObjectWaza_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWPanelObjectWaza_fieldTypes, 2);
    Meta::igIntMetaField *pageField = static_cast<Meta::igIntMetaField *>(fn_800658F8(meta, lbl_804540D0));   // "_page"
    int pageIndex = fn_80053998(meta->_metaFields, pageField);
    pageField = static_cast<Meta::igIntMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(pageField)->virtual54(1));   // a copy of it
    fn_80053650(pageField, 0);
    pageField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805360FC);
    fn_8006588C(meta, pageIndex, pageField);
    meta_release(pageField);
    Meta::igObjectRefMetaField *listFolderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v4 = fn_80028F84();
    listFolderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    listFolderField->_construct = true;
    Meta::igObjectRefMetaField *listColorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v6 = fn_800365B4();
    listColorField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    listColorField->_construct = true;
    meta_setupFields(meta, beNDMWPanelObjectWaza_fieldNames, beNDMWPanelObjectWaza_fieldStorage, beNDMWPanelObjectWaza_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
