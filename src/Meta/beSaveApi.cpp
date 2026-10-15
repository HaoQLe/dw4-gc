// beSaveApi: Alchemy class registration (0x802BF2FC..0x802BF52C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beSaveApi)
META_DECLARE(beSaveMemoryObj)
META_DECLARE(igObject)

extern "C" {
extern char beSaveApi_dependencies[8];
extern char beSaveApi_fieldNames[];
extern char beSaveApi_fieldOffsets[];
extern char beSaveApi_fieldStorage[];
extern char beSaveApi_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(beSaveApi)

META_GET_META(beSaveApi)

META_ARK_REGISTER(beSaveApi)

void beSaveApi_register()
{
    fn_802B1AC8();
    meta_registerClass(1, &beSaveApi_meta, igObject_register,
                       fn_800237D0, beSaveApi_getMetaCall,
                       beSaveApi_className, 0xD4,
                       0, beSaveApi_fieldInit, 0, beSaveApi_dependencies);
}

META_GET_META_CALL(beSaveApi)

void beSaveApi_fieldInit()
{
    Meta::igMetaObject *meta = beSaveApi_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beSaveApi_fieldTypes, 13);
    Meta::igObjectRefMetaField *imageWorkField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 10));
    imageWorkField->_metaObject = beSaveMemoryObj_metaObject();
    Meta::igObjectRefMetaField *mountWorkField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 11));
    Meta::igMetaObject *beSaveMemoryObjMeta_ = beSaveMemoryObj_metaObject();
    mountWorkField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beSaveMemoryObjMeta_);
    Meta::igObjectRefMetaField *iconWorkField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 12));
    Meta::igMetaObject *beSaveMemoryObjMeta__ = beSaveMemoryObj_metaObject();
    iconWorkField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(beSaveMemoryObjMeta__);
    meta_setupFields(meta, beSaveApi_fieldNames, beSaveApi_fieldStorage, beSaveApi_fieldOffsets, base);
}

}
#pragma pop
