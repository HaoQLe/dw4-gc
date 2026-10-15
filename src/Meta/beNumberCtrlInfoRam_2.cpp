// beNumberCtrlInfoRam: Alchemy class registration (0x802C3114..0x802C32C8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igFloatMetaField.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beNumberCtrlInfoRam)
META_DECLARE(beBaseInfoRam)
META_DECLARE(beNumVerDataList)
META_DECLARE(beNumberCtrlInfoWork)

extern "C" {
extern char beNumberCtrlInfoRam_dependencies[16];
extern char beNumberCtrlInfoRam_fieldNames[];
extern char beNumberCtrlInfoRam_fieldOffsets[];
extern char beNumberCtrlInfoRam_fieldStorage[];
extern char beNumberCtrlInfoRam_fieldTypes[];
void fn_8004D4BC(void *,float);
void *fn_801C010C();
void fn_802B1AC8();
void *fn_802B2B2C();
extern char lbl_8041E768[];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beNumberCtrlInfoRam)

void beNumberCtrlInfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beNumberCtrlInfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beNumberCtrlInfoRam_getMetaCall,
                       beNumberCtrlInfoRam_className, 0x44,
                       beNumberCtrlInfoRam_vtableRead, beNumberCtrlInfoRam_fieldInit, 0, beNumberCtrlInfoRam_dependencies);
}

META_GET_META_CALL(beNumberCtrlInfoRam)

void beNumberCtrlInfoRam_fieldInit()
{
    Meta::igMetaObject *meta = beNumberCtrlInfoRam_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beNumberCtrlInfoRam_fieldTypes, 6);
    Meta::igObjectRefMetaField *geometryField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801C010C();
    geometryField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igFloatMetaField *offsetNextField = static_cast<Meta::igFloatMetaField *>(meta_field(meta, base + 1));
    fn_8004D4BC(offsetNextField, *reinterpret_cast<float *>(lbl_8041E768 + 0));
    Meta::igObjectRefMetaField *numListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    numListField->_metaObject = beNumVerDataList_metaObject();
    numListField->_construct = true;
    Meta::igObjectRefMetaField *workField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    workField->_metaObject = beNumberCtrlInfoWork_metaObject();
    meta_setupFields(meta, beNumberCtrlInfoRam_fieldNames, beNumberCtrlInfoRam_fieldStorage, beNumberCtrlInfoRam_fieldOffsets, base);
}

}
#pragma pop
