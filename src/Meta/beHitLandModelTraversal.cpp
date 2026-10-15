// beHitLandModelTraversal: Alchemy class registration (0x802D4FF4..0x802D53A8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beHitLandModelTraversal)
META_DECLARE(igIntersectTraversal)
META_DECLARE(igTraversal)

extern "C" {
extern char beHitLandModelTraversal_dependencies[8];
void *beHitLandModelTraversal_parentMeta();
void fn_802B1AC8();
}

struct igTraversalInstance : igObjectInstance {
    char unknown04[24];
    igObjectRefMember _travProcs;
    inline ~igTraversalInstance() { __vtable = igTraversal_vtable; }
};

struct igIntersectTraversalInstance : igTraversalInstance {
    igObjectRefMember _matStack;
    igObjectRefMember _nodeStack;
    igObjectRefMember _probe;
    char unknown2C[8];
    igObjectRefMember _volumes;
    igObjectRefMember _ray;
    inline ~igIntersectTraversalInstance() { __vtable = igIntersectTraversal_vtable; }
};

struct beHitLandModelTraversalInstance : igIntersectTraversalInstance {
    char unknown3C[4];
    igObjectRefMember _order;
    char unknown44[4];
    inline ~beHitLandModelTraversalInstance() { __vtable = beHitLandModelTraversal_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

#pragma push
#pragma optimize_for_size off
META_CREATE(beHitLandModelTraversal)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_METAOBJECT(beHitLandModelTraversal)
#pragma pop

#pragma push
#pragma optimize_for_size off
META_GET_META(beHitLandModelTraversal)
#pragma pop

#pragma push
#pragma use_lmw_stmw on
void *beHitLandModelTraversal_vtableRead()
{
    beHitLandModelTraversalInstance object;
    object.__vtable = igTraversal_vtable;
    object._travProcs._value = 0;
    object.__vtable = igIntersectTraversal_vtable;
    object._matStack._value = 0;
    object._nodeStack._value = 0;
    object._probe._value = 0;
    object._volumes._value = 0;
    object._ray._value = 0;
    object.__vtable = beHitLandModelTraversal_vtable;
    object._order._value = 0;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beHitLandModelTraversal)

void beHitLandModelTraversal_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beHitLandModelTraversal_meta, igIntersectTraversal_register,
                       beHitLandModelTraversal_parentMeta, beHitLandModelTraversal_getMetaCall,
                       beHitLandModelTraversal_className, 0x48,
                       beHitLandModelTraversal_vtableRead, beHitLandModelTraversal_fieldInit, 0, beHitLandModelTraversal_dependencies);
}

META_GET_META_CALL(beHitLandModelTraversal)

}
#pragma pop
