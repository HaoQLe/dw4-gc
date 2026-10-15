// beParticleCtrl2InfoRam: Alchemy class registration (0x802C15D8..0x802C176C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beParticleCtrl2InfoRam)
META_DECLARE(ParticleTimer)
META_DECLARE(beBaseInfoRam)
META_DECLARE(beParticleCtrl2InfoWork)

extern "C" {
extern char beParticleCtrl2InfoRam_dependencies[16];
extern char beParticleCtrl2InfoRam_fieldNames[];
extern char beParticleCtrl2InfoRam_fieldOffsets[];
extern char beParticleCtrl2InfoRam_fieldStorage[];
extern char beParticleCtrl2InfoRam_fieldTypes[];
void *fn_801AC644();
void fn_802B1AC8();
void *fn_802B2B2C();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beParticleCtrl2InfoRam)

void beParticleCtrl2InfoRam_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beParticleCtrl2InfoRam_meta, beBaseInfoRam_register,
                       fn_802B2B2C, beParticleCtrl2InfoRam_getMetaCall,
                       beParticleCtrl2InfoRam_className, 0x38,
                       beParticleCtrl2InfoRam_vtableRead, beParticleCtrl2InfoRam_fieldInit, 0, beParticleCtrl2InfoRam_dependencies);
}

META_GET_META_CALL(beParticleCtrl2InfoRam)

void beParticleCtrl2InfoRam_fieldInit()
{
    Meta::igMetaObject *meta = beParticleCtrl2InfoRam_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beParticleCtrl2InfoRam_fieldTypes, 3);
    Meta::igObjectRefMetaField *transformField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    void *value_value3 = fn_801AC644();
    transformField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    Meta::igObjectRefMetaField *particleTimerField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    particleTimerField->_metaObject = ParticleTimer_metaObject();
    Meta::igObjectRefMetaField *workField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 2));
    workField->_metaObject = beParticleCtrl2InfoWork_metaObject();
    meta_setupFields(meta, beParticleCtrl2InfoRam_fieldNames, beParticleCtrl2InfoRam_fieldStorage, beParticleCtrl2InfoRam_fieldOffsets, base);
}

}
#pragma pop
