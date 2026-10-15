// beCopyModelCtrl2: Alchemy class registration (0x802E0AE0..0x802E0C48). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beCopyModelCtrl2)
META_DECLARE(beModelCtrlNode2)
META_DECLARE(igTransform)

extern "C" {
extern char beCopyModelCtrl2_dependencies[8];
extern char beCopyModelCtrl2_fieldNames[];
extern char beCopyModelCtrl2_fieldOffsets[];
extern char beCopyModelCtrl2_fieldStorage[];
extern char beCopyModelCtrl2_fieldTypes[];
void *fn_801BC078();
void fn_802B1AC8();
void fn_802E0C48();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beCopyModelCtrl2)

void beCopyModelCtrl2_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCopyModelCtrl2_meta, igTransform_register,
                       fn_801BC078, beCopyModelCtrl2_getMetaCall,
                       beCopyModelCtrl2_className, 0x70,
                       beCopyModelCtrl2_vtableRead, beCopyModelCtrl2_fieldInit, fn_802E0C48, beCopyModelCtrl2_dependencies);
}

META_GET_META_CALL(beCopyModelCtrl2)

void beCopyModelCtrl2_fieldInit()
{
    Meta::igMetaObject *meta = beCopyModelCtrl2_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCopyModelCtrl2_fieldTypes, 1);
    Meta::igObjectRefMetaField *srcNodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    srcNodeField->_metaObject = beModelCtrlNode2_metaObject();
    meta_setupFields(meta, beCopyModelCtrl2_fieldNames, beCopyModelCtrl2_fieldStorage, beCopyModelCtrl2_fieldOffsets, base);
}

}
#pragma pop
