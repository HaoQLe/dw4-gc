// beMatCtrlInfoRam: Alchemy class registration (0x802D02F0..0x802D0454). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beMatCtrlInfoRam)
META_DECLARE(beBaseInfoRam)
META_DECLARE(beMatCtrlInfoWork)

extern "C" {
extern char beMatCtrlInfoRam_dependencies[8];
extern char beMatCtrlInfoRam_fieldNames[];
extern char beMatCtrlInfoRam_fieldOffsets[];
extern char beMatCtrlInfoRam_fieldStorage[];
extern char beMatCtrlInfoRam_fieldTypes[];
void fn_802B1AC8();
void *fn_802B2B2C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beMatCtrlInfoRam)

void beMatCtrlInfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beMatCtrlInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beMatCtrlInfoRam_getMetaCall,
                       beMatCtrlInfoRam_className, 0x30,
                       beMatCtrlInfoRam_vtableRead, beMatCtrlInfoRam_fieldInit, 0, beMatCtrlInfoRam_dependencies);
}

META_GET_META_CALL(beMatCtrlInfoRam)

void beMatCtrlInfoRam_fieldInit()
{
    Meta::igMetaObject *meta = beMatCtrlInfoRam_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beMatCtrlInfoRam_fieldTypes, 1);
    Meta::igObjectRefMetaField *workField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    workField->_metaObject = beMatCtrlInfoWork_metaObject();
    meta_setupFields(meta, beMatCtrlInfoRam_fieldNames, beMatCtrlInfoRam_fieldStorage, beMatCtrlInfoRam_fieldOffsets, base);
}

}
#pragma pop
