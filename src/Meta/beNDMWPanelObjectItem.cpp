// beNDMWPanelObjectItem: Alchemy class registration (0x803375AC..0x803379F0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWPanelObjectItem)
META_DECLARE(beNDMWPanelObject)

extern "C" {
extern char beNDMWPanelObjectItem_dependencies[12];
extern char beNDMWPanelObjectItem_fieldNames[8];
extern char beNDMWPanelObjectItem_fieldOffsets[8];
extern char beNDMWPanelObjectItem_fieldStorage[8];
extern char beNDMWPanelObjectItem_fieldTypes[8];
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
extern char lbl_805360EC[4];
}

struct Instance_804E613C : igObjectInstance {
    char unknown04[32];
    igObjectRefMember _playerDataList;
    char unknown28[4];
    igObjectRefMember _textSetList;
    igObjectRefMember _textColorList;
    inline ~Instance_804E613C() { __vtable = lbl_804E613C; }
};

struct beNDMWPanelObjectItemInstance : Instance_804E613C {
    char unknown34[8];
    igObjectRefMember _listFolder;
    igObjectRefMember _listColor;
    char unknown44[12];
    inline ~beNDMWPanelObjectItemInstance() { __vtable = beNDMWPanelObjectItem_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beNDMWPanelObjectItem)

META_GET_META(beNDMWPanelObjectItem)

#pragma push
#pragma use_lmw_stmw on
void *beNDMWPanelObjectItem_vtableRead()
{
    beNDMWPanelObjectItemInstance object;
    object.__vtable = lbl_804E613C;
    object._playerDataList._value = 0;
    object._textSetList._value = 0;
    object._textColorList._value = 0;
    object.__vtable = beNDMWPanelObjectItem_vtable;
    object._listFolder._value = 0;
    object._listColor._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beNDMWPanelObjectItem)

void beNDMWPanelObjectItem_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWPanelObjectItem_meta, beNDMWPanelObject_register,
                       fn_80337428, beNDMWPanelObjectItem_getMetaCall,
                       beNDMWPanelObjectItem_className, 0x44,
                       beNDMWPanelObjectItem_vtableRead, beNDMWPanelObjectItem_fieldInit, 0, beNDMWPanelObjectItem_dependencies);
}

META_GET_META_CALL(beNDMWPanelObjectItem)

#pragma push
#pragma optimize_for_size off
void beNDMWPanelObjectItem_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWPanelObjectItem_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWPanelObjectItem_fieldTypes, 2);
    Meta::igIntMetaField *pageField = static_cast<Meta::igIntMetaField *>(fn_800658F8(meta, lbl_804540D0));   // "_page"
    int pageIndex = fn_80053998(meta->_metaFields, pageField);
    pageField = static_cast<Meta::igIntMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(pageField)->virtual54(1));   // a copy of it
    fn_80053650(pageField, 1);
    pageField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805360EC);
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
    meta_setupFields(meta, beNDMWPanelObjectItem_fieldNames, beNDMWPanelObjectItem_fieldStorage, beNDMWPanelObjectItem_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
