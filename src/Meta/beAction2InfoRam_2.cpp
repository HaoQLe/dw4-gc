// beAction2InfoRam: Alchemy class registration (0x802E5B1C..0x802E5CD8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beAction2InfoRam)
META_DECLARE(beAction2InfoWork)
META_DECLARE(beBaseInfoRam)
META_DECLARE(beModelCtrlNode2)

extern "C" {
extern char beAction2InfoRam_dependencies[20];
extern char beAction2InfoRam_fieldNames[];
extern char beAction2InfoRam_fieldOffsets[];
extern char beAction2InfoRam_fieldStorage[];
extern char beAction2InfoRam_fieldTypes[];
void *fn_801C8D74();
void *fn_801CDCF8();
void fn_802B1AC8();
void *fn_802B2B2C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beAction2InfoRam)

void beAction2InfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beAction2InfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beAction2InfoRam_getMetaCall,
                       beAction2InfoRam_className, 0x3C,
                       beAction2InfoRam_vtableRead, beAction2InfoRam_fieldInit, 0, beAction2InfoRam_dependencies);
}

META_GET_META_CALL(beAction2InfoRam)

void beAction2InfoRam_fieldInit()
{
    Meta::igMetaObject *meta = beAction2InfoRam_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beAction2InfoRam_fieldTypes, 4);
    Meta::igObjectRefMetaField *nodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    nodeField->_metaObject = beModelCtrlNode2_metaObject();
    Meta::igObjectRefMetaField *appearanceListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value5 = fn_801C8D74();
    appearanceListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value5);
    appearanceListField->_construct = true;
    Meta::igObjectRefMetaField *actorListField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_value7 = fn_801CDCF8();
    actorListField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value7);
    actorListField->_construct = true;
    Meta::igObjectRefMetaField *workField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 3));
    workField->_metaObject = beAction2InfoWork_metaObject();
    meta_setupFields(meta, beAction2InfoRam_fieldNames, beAction2InfoRam_fieldStorage, beAction2InfoRam_fieldOffsets, base);
}

}
#pragma pop
