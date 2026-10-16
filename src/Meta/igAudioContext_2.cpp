// igAudioContext: Alchemy class registration (0x800C6FD0..0x800C714C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>

META_DECLARE(igAudioContext)
META_DECLARE(igGamecubeAudioContext)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_8003EC68(void *, int);
void fn_800C6F28();
extern char igAudioContext_fieldNames[4];
extern char igAudioContext_fieldOffsets[4];
extern char igAudioContext_fieldStorage[4];
extern char igAudioContext_fieldTypes[4];
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAudioContext)

META_ARK_REGISTER(igAudioContext)

void igAudioContext_register()
{
    fn_800C6F28();
    meta_registerClass(1, &igAudioContext_meta, igObject_register,
                       fn_800237D0, igAudioContext_getMetaCall,
                       igAudioContext_className, 0xC,
                       0, igAudioContext_fieldInit, 0, 0);
}

META_GET_META_CALL(igAudioContext)

void igAudioContext_fieldInit()
{
    Meta::igMetaObject *meta = igAudioContext_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAudioContext_fieldTypes, 1);
    Meta::igBoolMetaField *immediateModeField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base));
    fn_8003EC68(immediateModeField, 1);
    meta_setupFields(meta, igAudioContext_fieldNames, igAudioContext_fieldStorage, igAudioContext_fieldOffsets, base);
    igAudioContext_meta->_abstractProxy = reinterpret_cast<void *>(igGamecubeAudioContext_getMetaCall);
}

}
#pragma pop
