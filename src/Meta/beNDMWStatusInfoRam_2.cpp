// beNDMWStatusInfoRam: Alchemy class registration (0x8032AE54..0x8032AFB8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNDMWStatusInfoRam)
META_DECLARE(beBaseInfoRam)
META_DECLARE(beNDMWStatusInfoWork)

extern "C" {
extern char beNDMWStatusInfoRam_dependencies[8];
extern char beNDMWStatusInfoRam_fieldNames[];
extern char beNDMWStatusInfoRam_fieldOffsets[];
extern char beNDMWStatusInfoRam_fieldStorage[];
extern char beNDMWStatusInfoRam_fieldTypes[];
void *fn_802B2B2C();
void fn_803250AC();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNDMWStatusInfoRam)

void beNDMWStatusInfoRam_register()
{
    fn_803250AC();
    meta_registerClass(0, &beNDMWStatusInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beNDMWStatusInfoRam_getMetaCall,
                       beNDMWStatusInfoRam_className, 0x30,
                       beNDMWStatusInfoRam_vtableRead, beNDMWStatusInfoRam_fieldInit, 0, beNDMWStatusInfoRam_dependencies);
}

META_GET_META_CALL(beNDMWStatusInfoRam)

void beNDMWStatusInfoRam_fieldInit()
{
    Meta::igMetaObject *meta = beNDMWStatusInfoRam_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNDMWStatusInfoRam_fieldTypes, 1);
    Meta::igObjectRefMetaField *workField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    workField->_metaObject = beNDMWStatusInfoWork_metaObject();
    meta_setupFields(meta, beNDMWStatusInfoRam_fieldNames, beNDMWStatusInfoRam_fieldStorage, beNDMWStatusInfoRam_fieldOffsets, base);
}

}
#pragma pop
