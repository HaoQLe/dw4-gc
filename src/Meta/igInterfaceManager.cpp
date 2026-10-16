// igInterfaceManager: Alchemy class registration (0x800CB100..0x800CB28C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igInterfaceManager)
META_DECLARE(igDefaultInterfaceManager)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_800CAEE0();
void *fn_800CB2AC();
extern char igInterfaceManager_dependencies[8];
extern char igInterfaceManager_fieldNames[4];
extern char igInterfaceManager_fieldOffsets[4];
extern char igInterfaceManager_fieldStorage[4];
extern char igInterfaceManager_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInterfaceManager)

META_ARK_REGISTER(igInterfaceManager)

void igInterfaceManager_register()
{
    fn_800CAEE0();
    meta_registerClass(1, &igInterfaceManager_meta, igObject_register,
                       fn_800237D0, igInterfaceManager_getMetaCall,
                       igInterfaceManager_className, 0xC,
                       0, igInterfaceManager_fieldInit, 0, igInterfaceManager_dependencies);
}

META_GET_META_CALL(igInterfaceManager)

void igInterfaceManager_fieldInit()
{
    Meta::igMetaObject *meta = igInterfaceManager_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igInterfaceManager_fieldTypes, 1);
    Meta::igObjectRefMetaField *devicesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_800CB2AC();
    devicesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    devicesField->_construct = true;
    meta_setupFields(meta, igInterfaceManager_fieldNames, igInterfaceManager_fieldStorage, igInterfaceManager_fieldOffsets, base);
    igInterfaceManager_meta->_abstractProxy = reinterpret_cast<void *>(igDefaultInterfaceManager_getMetaCall);
}

}
#pragma pop
