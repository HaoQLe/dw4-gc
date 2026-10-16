// igControllerManager: Alchemy class registration (0x800CB8F4..0x800CBA80). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igControllerManager)
META_DECLARE(igEventProducer)
META_DECLARE(igGamecubeControllerManager)

extern "C" {
void fn_800CAEE0();
void *fn_800CB078();
void *fn_800CB538();
extern char igControllerManager_dependencies[8];
extern char igControllerManager_fieldNames[4];
extern char igControllerManager_fieldOffsets[4];
extern char igControllerManager_fieldStorage[4];
extern char igControllerManager_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igControllerManager)

META_ARK_REGISTER(igControllerManager)

void igControllerManager_register()
{
    fn_800CAEE0();
    meta_registerClass(1, &igControllerManager_meta, igEventProducer_register,
                       fn_800CB078, igControllerManager_getMetaCall,
                       igControllerManager_className, 0xC,
                       0, igControllerManager_fieldInit, 0, igControllerManager_dependencies);
}

META_GET_META_CALL(igControllerManager)

void igControllerManager_fieldInit()
{
    Meta::igMetaObject *meta = igControllerManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igControllerManager_fieldTypes, 1);
    Meta::igObjectRefMetaField *controllersField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_800CB538();
    controllersField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    controllersField->_construct = true;
    meta_setupFields(meta, igControllerManager_fieldNames, igControllerManager_fieldStorage, igControllerManager_fieldOffsets, base);
    igControllerManager_meta->_abstractProxy = reinterpret_cast<void *>(igGamecubeControllerManager_getMetaCall);
}

}
#pragma pop
