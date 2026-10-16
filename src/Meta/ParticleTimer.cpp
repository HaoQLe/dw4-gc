// ParticleTimer: Alchemy class registration (0x802E7CAC..0x802E7DFC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(ParticleTimer)
META_DECLARE(igAttrSet)
META_DECLARE(igGeometry)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_802E7DFC(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_METAOBJECT(ParticleTimer)

META_GET_META(ParticleTimer)

#pragma push
#pragma optimize_for_size on
void *ParticleTimer_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        char unknown14[8];
        int unknown1C;
        int unknown20;
        char unknown24[4];
        int unknown28;
        char unknown2C[20];
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.unknown08 = 0;
    object.__vtable = igNode_vtable;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.__vtable = igGroup_vtable;
    object.unknown1C = 0;
    object.__vtable = igAttrSet_vtable;
    object.unknown20 = 0;
    object.__vtable = igGeometry_vtable;
    object.unknown28 = 0;
    object.__vtable = ParticleTimer_vtable;
    void *result = meta_vtableOf(&object);
    fn_802E7DFC(&object, -1);   // the class's destructor
    return result;
}
#pragma pop

}
#pragma pop
