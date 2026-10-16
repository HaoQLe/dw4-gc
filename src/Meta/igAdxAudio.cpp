// igAdxAudio: Alchemy class registration (0x802AB5D8..0x802AB8E8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igIntMetaField.h>
#include <meta/igStringMetaField.h>

META_DECLARE(igAdxAudio)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_80053650(void *, int);
void fn_80071694(void *, int);
void fn_802AA788();
extern char igAdxAudio_fieldNames[36];
extern char igAdxAudio_fieldOffsets[36];
extern char igAdxAudio_fieldStorage[36];
extern char igAdxAudio_fieldTypes[36];
}

struct igAdxAudioInstance : igObjectInstance {
    char unknown04[36];
    igStringMember _filename;
    char unknown2C[4];
    inline ~igAdxAudioInstance() { __vtable = igAdxAudio_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igAdxAudio)

META_METAOBJECT(igAdxAudio)

META_GET_META(igAdxAudio)

void *igAdxAudio_vtableRead()
{
    igAdxAudioInstance object;
    object.__vtable = igAdxAudio_vtable;
    object._filename._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAdxAudio)

void igAdxAudio_register()
{
    fn_802AA788();
    meta_registerClass(0, &igAdxAudio_meta, igObject_register,
                       fn_800237D0, igAdxAudio_getMetaCall,
                       igAdxAudio_className, 0x30,
                       igAdxAudio_vtableRead, igAdxAudio_fieldInit, 0, 0);
}

META_GET_META_CALL(igAdxAudio)

void igAdxAudio_fieldInit()
{
    Meta::igMetaObject *meta = igAdxAudio_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAdxAudio_fieldTypes, 9);
    Meta::igIntMetaField *iMaxHandlesField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 2));
    fn_80053650(iMaxHandlesField, 4);
    Meta::igIntMetaField *iMaxChannelsField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 3));
    fn_80053650(iMaxChannelsField, 2);
    Meta::igIntMetaField *iMaxStreamsField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 5));
    fn_80053650(iMaxStreamsField, 4);
    Meta::igIntMetaField *iMaxFrequencyField = static_cast<Meta::igIntMetaField *>(meta_field(meta, base + 6));
    fn_80053650(iMaxFrequencyField, 48000);
    Meta::igStringMetaField *filenameField = static_cast<Meta::igStringMetaField *>(meta_field(meta, base + 8));
    fn_80071694(filenameField, 0);
    meta_setupFields(meta, igAdxAudio_fieldNames, igAdxAudio_fieldStorage, igAdxAudio_fieldOffsets, base);
}

}
#pragma pop
