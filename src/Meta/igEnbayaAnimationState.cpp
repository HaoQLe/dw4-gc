// igEnbayaAnimationState: Alchemy class registration (0x801C1AB8..0x801C1CC4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igEnbayaAnimationState)
META_DECLARE(igAnimationState)

extern "C" {
void fn_801AA6DC();
void fn_801C1D68();
void *igEnbayaAnimationState_parentMeta();
}

struct igAnimationStateInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _animation;
    char unknown0C[12];
    igObjectRefMember _baseState;
    char unknown1C[92];
    igObjectRefMember _cycleMatchTargetState;
    inline ~igAnimationStateInstance() { __vtable = igAnimationState_vtable; }
};

struct igEnbayaAnimationStateInstance : igAnimationStateInstance {
    char unknown7C[44];
    inline ~igEnbayaAnimationStateInstance() { __vtable = igEnbayaAnimationState_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igEnbayaAnimationState)

void *igEnbayaAnimationState_vtableRead()
{
    igEnbayaAnimationStateInstance object;
    object.__vtable = igAnimationState_vtable;
    object._animation._value = 0;
    object._baseState._value = 0;
    object._cycleMatchTargetState._value = 0;
    object.__vtable = igEnbayaAnimationState_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igEnbayaAnimationState)

void igEnbayaAnimationState_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igEnbayaAnimationState_meta, igAnimationState_register,
                       igEnbayaAnimationState_parentMeta, igEnbayaAnimationState_getMetaCall,
                       igEnbayaAnimationState_className, 0xA8,
                       igEnbayaAnimationState_vtableRead, igEnbayaAnimationState_fieldInit, fn_801C1D68, 0);
}

META_GET_META_CALL(igEnbayaAnimationState)

}
#pragma pop
