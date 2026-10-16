// igController: Alchemy class registration (0x800CBAEC..0x800CBC7C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igMemoryRefMetaField.h>

META_DECLARE(igController)
META_DECLARE(igEventProducer)
META_DECLARE(igGamecubeController)

extern "C" {
void *fn_8002E4D8();
void fn_800CAEE0();
void *fn_800CB078();
extern char igController_fieldNames[8];
extern char igController_fieldOffsets[8];
extern char igController_fieldStorage[8];
extern char igController_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igController)

META_ARK_REGISTER(igController)

void igController_register()
{
    fn_800CAEE0();
    meta_registerClass(1, &igController_meta, igEventProducer_register,
                       fn_800CB078, igController_getMetaCall,
                       igController_className, 0x10,
                       0, igController_fieldInit, 0, 0);
}

META_GET_META_CALL(igController)

void igController_fieldInit()
{
    Meta::igMetaObject *meta = igController_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igController_fieldTypes, 2);
    Meta::igMemoryRefMetaField *buttonMapField = static_cast<Meta::igMemoryRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_8002E4D8();
    buttonMapField->_memType = reinterpret_cast<Meta::igMetaField *>(value_v2);
    buttonMapField->_destruct = true;
    buttonMapField->_releaseOnCopy = true;
    buttonMapField->_releaseOnReset = true;
    meta_setupFields(meta, igController_fieldNames, igController_fieldStorage, igController_fieldOffsets, base);
    igController_meta->_abstractProxy = reinterpret_cast<void *>(igGamecubeController_getMetaCall);
}

}
#pragma pop
