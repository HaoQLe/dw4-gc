// beParticleCtrl2InfoWork: Alchemy class registration (0x802C194C..0x802C1AB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(beParticleCtrl2InfoWork)
META_DECLARE(beModelCtrlNode2)
META_DECLARE(igObject)

extern "C" {
extern char beParticleCtrl2InfoWork_dependencies[8];
extern char beParticleCtrl2InfoWork_fieldNames[];
extern char beParticleCtrl2InfoWork_fieldOffsets[];
extern char beParticleCtrl2InfoWork_fieldStorage[];
extern char beParticleCtrl2InfoWork_fieldTypes[];
void *fn_800237D0();
void fn_802B1AC8();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(beParticleCtrl2InfoWork)

void beParticleCtrl2InfoWork_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beParticleCtrl2InfoWork_meta, igObject_register,
                       fn_800237D0, beParticleCtrl2InfoWork_getMetaCall,
                       beParticleCtrl2InfoWork_className, 0x18,
                       beParticleCtrl2InfoWork_vtableRead, beParticleCtrl2InfoWork_fieldInit, 0, beParticleCtrl2InfoWork_dependencies);
}

META_GET_META_CALL(beParticleCtrl2InfoWork)

void beParticleCtrl2InfoWork_fieldInit()
{
    Meta::igMetaObject *meta = beParticleCtrl2InfoWork_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, beParticleCtrl2InfoWork_fieldTypes, 2);
    Meta::igObjectRefMetaField *positionLockNodeField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base));
    positionLockNodeField->_metaObject = beModelCtrlNode2_metaObject();
    meta_setupFields(meta, beParticleCtrl2InfoWork_fieldNames, beParticleCtrl2InfoWork_fieldStorage, beParticleCtrl2InfoWork_fieldOffsets, base);
}

}
#pragma pop
