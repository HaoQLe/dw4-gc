// beCri: Alchemy class registration (0x802E001C..0x802E0218). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beCri)
META_DECLARE(beCriHandle)
META_DECLARE(beCriHandleList)
META_DECLARE(beSystem)
META_DECLARE(igInfoManager)

extern "C" {
extern char beCri_dependencies[24];
extern char beCri_fieldNames[];
extern char beCri_fieldOffsets[];
extern char beCri_fieldStorage[];
extern char beCri_fieldTypes[];
void *fn_80028F84();
void *fn_8002E824();
void *fn_80284550();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beCri)

void beCri_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCri_meta, igInfoManager_register,
                       fn_80284550, beCri_getMetaCall,
                       beCri_className, 0x48,
                       beCri_vtableRead, beCri_fieldInit, 0, beCri_dependencies);
}

META_GET_META_CALL(beCri)

void beCri_fieldInit()
{
    Meta::igMetaObject *meta = beCri_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCri_fieldTypes, 12);
    Meta::igObjectRefMetaField *systemField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    systemField->_metaObject = beSystem_metaObject();
    systemField->_refCounted = false;
    Meta::igObjectRefMetaField *hdBGMField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    hdBGMField->_metaObject = beCriHandle_metaObject();
    Meta::igObjectRefMetaField *hdENVField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 4));
    Meta::igMetaObject *beCriHandleMeta_ = beCriHandle_metaObject();
    hdENVField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beCriHandleMeta_);
    Meta::igObjectRefMetaField *hdSEsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 5));
    hdSEsField->_metaObject = beCriHandleList_metaObject();
    hdSEsField->_construct = true;
    Meta::igObjectRefMetaField *infoListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 6));
    void *value_value11 = fn_8002E824();
    infoListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value11);
    infoListField->_construct = true;
    Meta::igObjectRefMetaField *lsBinObjsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 7));
    void *value_value13 = fn_80028F84();
    lsBinObjsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value13);
    lsBinObjsField->_construct = true;
    meta_setupFields(meta, beCri_fieldNames, beCri_fieldStorage, beCri_fieldOffsets, base);
}

}
#pragma pop
