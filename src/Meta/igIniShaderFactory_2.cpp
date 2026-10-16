// igIniShaderFactory: Alchemy class registration (0x801BE84C..0x801BE95C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIniShaderFactory)
META_DECLARE(igNamedObject)
META_DECLARE(igShaderFactory)

extern "C" {
void fn_801BE95C(void *, int);
}

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igIniShaderFactory)

META_GET_META(igIniShaderFactory)

void *igIniShaderFactory_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[4];
        int unknown08;
        int unknown0C;
        int unknown10;
        char unknown14[4];
        int unknown18;
        int unknown1C;
        int unknown20;
        int unknown24;
        char unknown28[4];
        int unknown2C;
        int unknown30;
        int unknown34;
        int unknown38;
    } object;
    igObject_construct(&object);
    object.__vtable = igNamedObject_vtable;
    object.__vtable = igShaderFactory_vtable;
    object.unknown08 = 0;
    object.unknown0C = 0;
    object.unknown10 = 0;
    object.__vtable = igIniShaderFactory_vtable;
    object.unknown18 = 0;
    object.unknown1C = 0;
    object.unknown20 = 0;
    object.unknown24 = 0;
    object.unknown2C = 0;
    object.unknown30 = 0;
    object.unknown34 = 0;
    object.unknown38 = 0;
    void *result = meta_vtableOf(&object);
    fn_801BE95C(&object, -1);   // the class's destructor
    return result;
}

}
#pragma pop
