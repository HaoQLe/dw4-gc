// igAnimationTransitionPoint: Alchemy class registration (0x801CCF04..0x801CD104). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>
#include <meta/igObjectRefMetaField.h>

META_DECLARE(igAnimationTransitionPoint)
META_DECLARE(igObject)

extern "C" {
void *fn_800237D0();
void fn_801AA6DC();
void *fn_801CD104();
extern char igAnimationTransitionPoint_dependencies[8];
extern char igAnimationTransitionPoint_fieldNames[8];
extern char igAnimationTransitionPoint_fieldOffsets[8];
extern char igAnimationTransitionPoint_fieldStorage[8];
extern char igAnimationTransitionPoint_fieldTypes[8];
}

struct igAnimationTransitionPointInstance : igObjectInstance {
    char unknown04[12];
    igObjectRefMember _transitionParams;
    char unknown14[12];
    inline ~igAnimationTransitionPointInstance() { __vtable = igAnimationTransitionPoint_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAnimationTransitionPoint)

void *igAnimationTransitionPoint_vtableRead()
{
    igAnimationTransitionPointInstance object;
    object.__vtable = igAnimationTransitionPoint_vtable;
    object._transitionParams._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAnimationTransitionPoint)

void igAnimationTransitionPoint_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igAnimationTransitionPoint_meta, igObject_register,
                       fn_800237D0, igAnimationTransitionPoint_getMetaCall,
                       igAnimationTransitionPoint_className, 0x18,
                       igAnimationTransitionPoint_vtableRead, igAnimationTransitionPoint_fieldInit, 0, igAnimationTransitionPoint_dependencies);
}

META_GET_META_CALL(igAnimationTransitionPoint)

void igAnimationTransitionPoint_fieldInit()
{
    Meta::igMetaObject *meta = igAnimationTransitionPoint_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igAnimationTransitionPoint_fieldTypes, 2);
    Meta::igObjectRefMetaField *transitionParamsField = static_cast<Meta::igObjectRefMetaField *>(meta_field(meta, base + 1));
    void *value_value3 = fn_801CD104();
    transitionParamsField->_metaObject = reinterpret_cast<Meta::igMetaObject *>(value_value3);
    meta_setupFields(meta, igAnimationTransitionPoint_fieldNames, igAnimationTransitionPoint_fieldStorage, igAnimationTransitionPoint_fieldOffsets, base);
}

}
#pragma pop
