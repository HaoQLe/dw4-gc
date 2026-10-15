// beCriAudio: Alchemy class registration (0x802DF5E4..0x802DF8D0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beCriAudio)
META_DECLARE(beCriSndf)
META_DECLARE(igAdxAudio)
META_DECLARE(igObject)

extern "C" {
extern char beCriAudio_dependencies[12];
extern char beCriAudio_fieldNames[];
extern char beCriAudio_fieldOffsets[];
extern char beCriAudio_fieldStorage[];
extern char beCriAudio_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

struct beCriAudioInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _adxt;
    igObjectRefMember _sndf;
    char unknown10[16];
    inline ~beCriAudioInstance() { __vtable = beCriAudio_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size on
META_METAOBJECT(beCriAudio)
#pragma pop

#pragma push
#pragma optimize_for_size on
META_GET_META(beCriAudio)
#pragma pop

#pragma push
#pragma optimize_for_size on
void *beCriAudio_vtableRead()
{
    beCriAudioInstance object;
    object.__vtable = beCriAudio_vtable;
    object._adxt._value = 0;
    object._sndf._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beCriAudio)

void beCriAudio_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beCriAudio_meta, igObject_register,
                       fn_800237D0, beCriAudio_getMetaCall,
                       beCriAudio_className, 0x18,
                       beCriAudio_vtableRead, beCriAudio_fieldInit, 0, beCriAudio_dependencies);
}

META_GET_META_CALL(beCriAudio)

void beCriAudio_fieldInit()
{
    Meta::igMetaObject *meta = beCriAudio_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beCriAudio_fieldTypes, 4);
    Meta::igObjectRefMetaField *adxtField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    adxtField->_metaObject = igAdxAudio_metaObject();
    Meta::igObjectRefMetaField *sndfField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    sndfField->_metaObject = beCriSndf_metaObject();
    meta_setupFields(meta, beCriAudio_fieldNames, beCriAudio_fieldStorage, beCriAudio_fieldOffsets, base);
}

}
#pragma pop
