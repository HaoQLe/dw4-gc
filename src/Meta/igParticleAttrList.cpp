// igParticleAttrList: Alchemy class registration (0x800B2CD4..0x800B2E34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igParticleAttrList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_800ABC8C();
extern char igParticleAttrList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_8047E130[];
}

struct Instance_800B2D10_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igParticleAttrList)

void *igParticleAttrList_vtableRead()
{
    Instance_800B2D10_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_8047E130;
    object.__vtable = igParticleAttrList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igParticleAttrList)

void igParticleAttrList_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igParticleAttrList_meta, igObjectList_register,
                       fn_80024180, igParticleAttrList_getMetaCall,
                       igParticleAttrList_className, 0x14,
                       igParticleAttrList_vtableRead, 0, 0, igParticleAttrList_dependencies);
}

META_GET_META_CALL(igParticleAttrList)

}
#pragma pop
