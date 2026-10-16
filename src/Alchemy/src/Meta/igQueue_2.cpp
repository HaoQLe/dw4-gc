// igQueue: Alchemy class registration (0x80027B80..0x80027D08). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igQueue)
META_DECLARE(igObject)
META_DECLARE(igStandardQueue)

extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80023FE4();
extern char igQueue_dependencies[8];
extern char igQueue_fieldNames[4];
extern char igQueue_fieldOffsets[4];
extern char igQueue_fieldStorage[4];
extern char igQueue_fieldTypes[4];
extern char lbl_8055D1A8[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igQueue)

META_ARK_REGISTER(igQueue)

void igQueue_register()
{
    fn_80021B94();
    meta_registerClass(1, &igQueue_meta, igObject_register,
                       fn_800237D0, igQueue_getMetaCall,
                       lbl_8055D1A8, 0xC,
                       0, igQueue_fieldInit, 0, igQueue_dependencies);
}

META_GET_META_CALL(igQueue)

void igQueue_fieldInit()
{
    Meta::igMetaObject *meta = igQueue_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igQueue_fieldTypes, 1);
    Meta::igObjectRefMetaField *serviceThreadsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_80023FE4();
    serviceThreadsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    serviceThreadsField->_construct = true;
    meta_setupFields(meta, igQueue_fieldNames, igQueue_fieldStorage, igQueue_fieldOffsets, base);
    igQueue_meta->_abstractProxy = reinterpret_cast<void *>(igStandardQueue_getMetaCall);
}

}
#pragma pop
