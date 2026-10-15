// igEnbayaAnimationState: Alchemy class registration (0x801C1CCC..0x801C1D68). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igRawRefMetaField.h>

META_DECLARE(igEnbayaAnimationState)

extern "C" {
void fn_8003EC68(void *,int);
void fn_80065D94(void *);
void *fn_801C1D88();
extern char igEnbayaAnimationState_fieldNames[8];
extern char igEnbayaAnimationState_fieldOffsets[8];
extern char igEnbayaAnimationState_fieldStorage[8];
extern char igEnbayaAnimationState_fieldTypes[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igEnbayaAnimationState_fieldInit()
{
    Meta::igMetaObject *meta = igEnbayaAnimationState_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igEnbayaAnimationState_fieldTypes, 2);
    Meta::igRawRefMetaField *contextField = static_cast<Meta::igRawRefMetaField *>(meta_field(meta, base));
    contextField->_persistent = false;
    Meta::igBoolMetaField *fastCacheDecodingStateField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base + 1));
    fn_8003EC68(fastCacheDecodingStateField, 1);
    meta_setupFields(meta, igEnbayaAnimationState_fieldNames, igEnbayaAnimationState_fieldStorage, igEnbayaAnimationState_fieldOffsets, base);
    fn_80065D94((void *)fn_801C1D88);
}

}
#pragma pop
