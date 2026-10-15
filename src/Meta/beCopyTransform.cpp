// beCopyTransform: Alchemy class registration (0x802E065C..0x802E07C4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beCopyTransform)
META_DECLARE(igTransform)

extern "C" {
extern char beCopyTransform_dependencies[8];
extern char beCopyTransform_fieldNames[];
extern char beCopyTransform_fieldOffsets[];
extern char beCopyTransform_fieldStorage[];
extern char beCopyTransform_fieldTypes[];
void *fn_801AC644();
void *fn_801BC078();
void fn_802B1AC8();
void fn_802E07C4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beCopyTransform)

void beCopyTransform_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCopyTransform_meta, igTransform_register,
                       fn_801BC078, beCopyTransform_getMetaCall,
                       beCopyTransform_className, 0x70,
                       beCopyTransform_vtableRead, beCopyTransform_fieldInit, fn_802E07C4, beCopyTransform_dependencies);
}

META_GET_META_CALL(beCopyTransform)

void beCopyTransform_fieldInit()
{
    Meta::igMetaObject *meta = beCopyTransform_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCopyTransform_fieldTypes, 1);
    Meta::igObjectRefMetaField *srcTransformField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801AC644();
    srcTransformField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, beCopyTransform_fieldNames, beCopyTransform_fieldStorage, beCopyTransform_fieldOffsets, base);
}

}
#pragma pop
