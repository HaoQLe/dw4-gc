// igGamecubeAudioContext: Alchemy class registration (0x800C735C..0x800C7424). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igGamecubeAudioContext)

extern "C" {
void *fn_80035CB0();
void *fn_800C7424();
void *fn_800CAF4C();
}

// The unit's data (addressed from its start).
extern "C" {
void fn_80022A90();
void fn_800274EC();
void fn_8002879C();
void fn_8002E1AC();
void fn_80031378();
void fn_800385E0();
void igFloatMetaField_create();
void igGamecubeAudioSourceList_arkRegister();
void igUnsignedIntList_arkRegister();
void igWindow_arkRegister();
extern char lbl_8055E800[];
extern char lbl_8055E808[];
extern char lbl_8055E810[];
extern char lbl_8055E818[];
extern char lbl_8055E820[];
extern char lbl_80562B30[];
extern char lbl_80562B34[];
extern char lbl_80562B38[];
extern char lbl_80562B3C[];
extern char lbl_80562B44[];
extern char lbl_80562B48[];
extern char lbl_80562B4C[];
extern char lbl_80562B50[];
extern char lbl_80562B54[];
extern char lbl_80562B58[];
extern char lbl_80562B5C[];
char lbl_8047E590[] = "IG_AUD_UPDATE_MODE_DEFERRED";
char lbl_8047E5AC[] = "IG_AUD_UPDATE_MODE_IMMEDIATE";
char lbl_8047E5CC[] = "IG_AUD_UPDATE_MODE";
char lbl_8047E5E0[] = "IG_AUD_SRC_MODE_PLAY_ONCE";
char lbl_8047E5FC[] = "IG_AUD_SRC_MODE_PLAY_LOOP";
char lbl_8047E618[] = "IG_AUD_SRC_MODE_REC_ONCE";
char lbl_8047E634[] = "IG_AUD_SRC_MODE_REC_LOOP";
void *lbl_8047E650[8] = {(void *)lbl_8047E5E0, (void *)lbl_8047E5FC, (void *)lbl_8047E618, (void *)lbl_8047E634, (void *)0x1, (void *)0x2, (void *)0x4, (void *)0x8};
char lbl_8047E670[] = "IG_AUD_SOURCE_MODE";
char lbl_8047E684[] = "IG_SRC_TYPE_NONPOSITIONAL";
char lbl_8047E6A0[] = "IG_SRC_TYPE_POSITIONAL";
char lbl_8047E6B8[] = "IG_SRC_TYPE_NONSTREAMING";
char lbl_8047E6D4[] = "IG_SRC_TYPE_STREAMING";
void *lbl_8047E6EC[8] = {(void *)lbl_8047E684, (void *)lbl_8047E6A0, (void *)lbl_8047E6B8, (void *)lbl_8047E6D4, (void *)0x1, (void *)0x2, (void *)0x4, (void *)0x8};
char lbl_8047E70C[] = "IG_AUD_SOURCE_TYPE";
char lbl_8047E720[] = "DEFERRED";
char lbl_8047E72C[] = "IMMEDIATE";
char lbl_8047E738[] = "UpdateMode";
char igAudioContext_className[] = "igAudioContext";
char lbl_8047E754[] = "_immediateMode";
char lbl_8047E764[] = "PSX2_VAG";
char lbl_8047E770[] = "PSX2_ADPCM";
char lbl_8047E77C[] = "GAMECUBE_ADPCM";
char lbl_8047E78C[] = "RAW_PCM_BIG_ENDIAN";
char lbl_8047E7A0[] = "XBOX_ADPCM";
void *lbl_8047E7AC[16] = {(void *)lbl_8055E800, (void *)lbl_8055E808, (void *)lbl_8055E810, (void *)lbl_8047E764, (void *)lbl_8047E770, (void *)lbl_8047E77C, (void *)lbl_8047E78C, (void *)lbl_8047E7A0, 0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7};
char lbl_8047E7EC[] = "DataType";
char lbl_8047E7F8[] = "igWaveFormat";
void *lbl_8047E808[4] = {(void *)igFloatMetaField_create, (void *)fn_8002E1AC, (void *)fn_8002E1AC, (void *)fn_80031378};
char lbl_8047E818[] = "_sampleRate";
char lbl_8047E824[] = "_channels";
char lbl_8047E830[] = "_bitsPerSample";
char lbl_8047E840[] = "_dataType";
void *lbl_8047E84C[12] = {(void *)lbl_8047E818, (void *)lbl_8047E824, (void *)lbl_8047E830, (void *)lbl_8047E840, (void *)lbl_80562B30, (void *)lbl_80562B34, (void *)lbl_80562B38, (void *)lbl_80562B3C, (void *)0x8, (void *)0xC, (void *)0x10, (void *)0x14};
void *igGamecubeAudioContext_dependencies[4] = {(void *)igWindow_arkRegister, (void *)igGamecubeAudioSourceList_arkRegister, (void *)igUnsignedIntList_arkRegister, 0};
char igGamecubeAudioContext_className[] = "igGamecubeAudioContext";
void *igGamecubeAudioContext_fieldTypes[7] = {(void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_8002879C, (void *)fn_80022A90, (void *)fn_800274EC, (void *)fn_80022A90, (void *)fn_800385E0};
char lbl_8047E8C0[] = "_sources";
char lbl_8047E8CC[] = "_aramMallocs";
char lbl_8047E8DC[] = "_maxAramAddr";
char lbl_8047E8EC[] = "_stackIndexAddr";
char lbl_8047E8FC[] = "_numEntries";
void *igGamecubeAudioContext_fieldNames[7] = {(void *)lbl_8055E818, (void *)lbl_8047E8C0, (void *)lbl_8047E8CC, (void *)lbl_8047E8DC, (void *)lbl_8047E8EC, (void *)lbl_8047E8FC, (void *)lbl_8055E820};
void *igGamecubeAudioContext_fieldStorage[7] = {(void *)lbl_80562B44, (void *)lbl_80562B48, (void *)lbl_80562B4C, (void *)lbl_80562B50, (void *)lbl_80562B54, (void *)lbl_80562B58, (void *)lbl_80562B5C};
void *igGamecubeAudioContext_fieldOffsets[7] = {(void *)0xC, (void *)0x10, (void *)0x14, (void *)0x18, (void *)0x1C, (void *)0x20, (void *)0x24};
}

#pragma push
#pragma auto_inline off
extern "C" {

void igGamecubeAudioContext_fieldInit()
{
    Meta::igMetaObject *meta = igGamecubeAudioContext_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igGamecubeAudioContext_fieldTypes, 7);
    Meta::igObjectRefMetaField *windowField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_v2 = fn_800CAF4C();
    windowField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v2);
    Meta::igObjectRefMetaField *sourcesField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_v4 = fn_800C7424();
    sourcesField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v4);
    sourcesField->_construct = true;
    Meta::igObjectRefMetaField *aramMallocsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    void *value_v6 = fn_80035CB0();
    aramMallocsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_v6);
    aramMallocsField->_construct = true;
    meta_setupFields(meta, igGamecubeAudioContext_fieldNames, igGamecubeAudioContext_fieldStorage, igGamecubeAudioContext_fieldOffsets, base);
}

}
#pragma pop
