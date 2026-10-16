// ParticleTimer: Alchemy class registration (0x802E7FDC..0x802E8184). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igBoolMetaField.h>
#include <meta/igLongMetaField.h>

META_DECLARE(ParticleTimer)
META_DECLARE(igGeometry)

extern "C" {
extern char ParticleTimer_fieldNames[12];
extern char ParticleTimer_fieldOffsets[12];
extern char ParticleTimer_fieldStorage[12];
extern char ParticleTimer_fieldTypes[12];
void fn_8003EC68(void *, int);
void fn_80054BC8(void *, long long);
void *fn_801B8D70();
void fn_802B1AC8();
void fn_802E8184();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(ParticleTimer)

void ParticleTimer_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &ParticleTimer_meta, igGeometry_register,
                       fn_801B8D70, ParticleTimer_getMetaCall,
                       ParticleTimer_className, 0x40,
                       ParticleTimer_vtableRead, ParticleTimer_fieldInit, fn_802E8184, 0);
}

META_GET_META_CALL(ParticleTimer)

#pragma push
#pragma optimize_for_size off
void ParticleTimer_fieldInit()
{
    Meta::igMetaObject *meta = ParticleTimer_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, ParticleTimer_fieldTypes, 3);
    Meta::igBoolMetaField *timeRunningField = static_cast<Meta::igBoolMetaField *>(meta_field(meta, base));
    fn_8003EC68(timeRunningField, 1);
    Meta::igLongMetaField *timeBiasField = static_cast<Meta::igLongMetaField *>(meta_field(meta, base + 1));
    fn_80054BC8(timeBiasField, 0);
    timeBiasField->_persistent = false;
    Meta::igLongMetaField *timeField = static_cast<Meta::igLongMetaField *>(meta_field(meta, base + 2));
    fn_80054BC8(timeField, 0);
    timeField->_persistent = false;
    meta_setupFields(meta, ParticleTimer_fieldNames, ParticleTimer_fieldStorage, ParticleTimer_fieldOffsets, base);
}
#pragma pop

}
#pragma pop
