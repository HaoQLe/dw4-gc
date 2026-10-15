// beNDMWStatusCtrlDisk: Alchemy class registration (0x8033192C..0x80331AD0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWStatusCtrlDisk)
META_DECLARE(beNDMWItemBaseList)
META_DECLARE(beNDMWItemDisk)
META_DECLARE(beNDMWWindowCtrl)

extern "C" {
extern char beNDMWStatusCtrlDisk_dependencies[16];
extern char beNDMWStatusCtrlDisk_fieldNames[];
extern char beNDMWStatusCtrlDisk_fieldOffsets[];
extern char beNDMWStatusCtrlDisk_fieldStorage[];
extern char beNDMWStatusCtrlDisk_fieldTypes[];
void *fn_800365B4();
void fn_803250AC();
void *fn_8032B8A4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusCtrlDisk)

void beNDMWStatusCtrlDisk_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusCtrlDisk_meta, beNDMWWindowCtrl_register,
                       fn_8032B8A4, beNDMWStatusCtrlDisk_getMetaCall,
                       beNDMWStatusCtrlDisk_className, 0x6C,
                       beNDMWStatusCtrlDisk_vtableRead, beNDMWStatusCtrlDisk_fieldInit, 0, beNDMWStatusCtrlDisk_dependencies);
}

META_GET_META_CALL(beNDMWStatusCtrlDisk)

void beNDMWStatusCtrlDisk_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusCtrlDisk_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusCtrlDisk_fieldTypes, 6);
    Meta::igObjectRefMetaField *playerNoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_800365B4();
    playerNoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    playerNoListField->_construct = true;
    Meta::igObjectRefMetaField *diskListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    diskListField->_metaObject = beNDMWItemBaseList_metaObject();
    diskListField->_construct = true;
    Meta::igObjectRefMetaField *sendDiskField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    sendDiskField->_metaObject = beNDMWItemDisk_metaObject();
    meta_setupFields(meta, beNDMWStatusCtrlDisk_fieldNames, beNDMWStatusCtrlDisk_fieldStorage, beNDMWStatusCtrlDisk_fieldOffsets, base);
}

}
#pragma pop
