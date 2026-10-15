// beGeneraterInfoRam: Alchemy class registration (0x802D6E30..0x802D6F94). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beGeneraterInfoRam)
META_DECLARE(beBaseInfoRam)
META_DECLARE(beGeneraterInfoWork)

extern "C" {
extern char beGeneraterInfoRam_dependencies[8];
extern char beGeneraterInfoRam_fieldNames[];
extern char beGeneraterInfoRam_fieldOffsets[];
extern char beGeneraterInfoRam_fieldStorage[];
extern char beGeneraterInfoRam_fieldTypes[];
void fn_802B1AC8();
void *fn_802B2B2C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beGeneraterInfoRam)

void beGeneraterInfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beGeneraterInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beGeneraterInfoRam_getMetaCall,
                       beGeneraterInfoRam_className, 0x30,
                       beGeneraterInfoRam_vtableRead, beGeneraterInfoRam_fieldInit, 0, beGeneraterInfoRam_dependencies);
}

META_GET_META_CALL(beGeneraterInfoRam)

void beGeneraterInfoRam_fieldInit()
{
    Meta::igMetaObject *meta = beGeneraterInfoRam_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beGeneraterInfoRam_fieldTypes, 1);
    Meta::igObjectRefMetaField *workField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    workField->_metaObject = beGeneraterInfoWork_metaObject();
    meta_setupFields(meta, beGeneraterInfoRam_fieldNames, beGeneraterInfoRam_fieldStorage, beGeneraterInfoRam_fieldOffsets, base);
}

}
#pragma pop
