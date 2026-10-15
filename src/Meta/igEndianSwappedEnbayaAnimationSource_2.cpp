// igEndianSwappedEnbayaAnimationSource: Alchemy class registration (0x801CED90..0x801CEEB0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igEndianSwappedEnbayaAnimationSource)
META_DECLARE(igEnbayaAnimationSource)

extern "C" {
void fn_801AA6DC();
void fn_801CEEB8();
void *igEndianSwappedEnbayaAnimationSource_parentMeta();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igEndianSwappedEnbayaAnimationSource)

void *igEndianSwappedEnbayaAnimationSource_vtableRead()
{
    struct {
        void *__vtable;
        char unknown04[36];
    } object;
    igObject_construct(&object);
    object.__vtable = igEnbayaAnimationSource_vtable;
    object.__vtable = igEndianSwappedEnbayaAnimationSource_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEndianSwappedEnbayaAnimationSource)

void igEndianSwappedEnbayaAnimationSource_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igEndianSwappedEnbayaAnimationSource_meta, igEnbayaAnimationSource_register,
                       igEndianSwappedEnbayaAnimationSource_parentMeta, igEndianSwappedEnbayaAnimationSource_getMetaCall,
                       igEndianSwappedEnbayaAnimationSource_className, 0x28,
                       igEndianSwappedEnbayaAnimationSource_vtableRead, fn_801CEEB8, 0, 0);
}

}
#pragma pop
