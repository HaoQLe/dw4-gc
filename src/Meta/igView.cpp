// igView: Alchemy class registration (0x8010CF40..0x8010D0B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igView)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8010CBD4();
void *fn_8010F0F4();
extern char igView_dependencies[8];
extern char igView_fieldNames[4];
extern char igView_fieldOffsets[4];
extern char igView_fieldStorage[4];
extern char igView_fieldTypes[4];
extern char lbl_8055EEC8[7];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igView)

META_ARK_REGISTER(igView)

void igView_register()
{
    fn_8010CBD4();
    meta_registerClass(1, &igView_meta, igObject_register,
                       fn_800237D0, igView_getMetaCall,
                       lbl_8055EEC8, 0xC,
                       0, igView_fieldInit, 0, igView_dependencies);
}

META_GET_META_CALL(igView)

void igView_fieldInit()
{
    Meta::igMetaObject *meta = igView_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igView_fieldTypes, 1);
    Meta::igObjectRefMetaField *modelField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_8010F0F4();
    modelField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    modelField->_refCounted = false;
    meta_setupFields(meta, igView_fieldNames, igView_fieldStorage, igView_fieldOffsets, base);
}

}
#pragma pop
