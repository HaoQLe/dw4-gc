// beNDMWPanelObjectStat: Alchemy class registration (0x80337438..0x803375AC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWPanelObjectStat)
META_DECLARE(beNDMWMdlPlayerInfoWork)

extern "C" {
extern char beNDMWPanelObjectStat_fieldNames[12];
extern char beNDMWPanelObjectStat_fieldOffsets[12];
extern char beNDMWPanelObjectStat_fieldStorage[12];
extern char beNDMWPanelObjectStat_fieldTypes[12];
void *fn_80024B94();
void *fn_800365B4();
void fn_80053650(void *, int);
int fn_80053998(void *, void *);
void fn_8006588C(void *, int, void *);
void *fn_800658F8(void *, void *);
extern char lbl_804540D0[6];
extern char lbl_805360D8[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

void beNDMWPanelObjectStat_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWPanelObjectStat_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWPanelObjectStat_fieldTypes, 3);
    Meta::igIntMetaField *pageField = static_cast<Meta::igIntMetaField *>(fn_800658F8(meta, lbl_804540D0));   // "_page"
    int pageIndex = fn_80053998(meta->_metaFields, pageField);
    pageField = static_cast<Meta::igIntMetaField *>(reinterpret_cast<igMetaFieldVirtuals *>(pageField)->virtual54(1));   // a copy of it
    fn_80053650(pageField, 2);
    pageField->_externalEnumStorage = reinterpret_cast<void *>(lbl_805360D8);
    fn_8006588C(meta, pageIndex, pageField);
    meta_release(pageField);
    Meta::igObjectRefMetaField *listFolderField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v4 = fn_80024B94();
    listFolderField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    listFolderField->_construct = true;
    Meta::igObjectRefMetaField *listColorField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v6 = fn_800365B4();
    listColorField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    listColorField->_construct = true;
    Meta::igObjectRefMetaField *playerWorkField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    playerWorkField->_metaObject = beNDMWMdlPlayerInfoWork_metaObject();
    meta_setupFields(meta, beNDMWPanelObjectStat_fieldNames, beNDMWPanelObjectStat_fieldStorage, beNDMWPanelObjectStat_fieldOffsets, base);
}

}
#pragma pop
