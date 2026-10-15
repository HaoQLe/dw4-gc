// igIntersectTraversal: Alchemy class registration (0x801BD708..0x801BD9C8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIntersectTraversal)
META_DECLARE(igTraversal)

extern "C" {
void fn_801AA6DC();
void *fn_801BD9C8();
void fn_801BDB1C();
extern char igIntersectTraversal_dependencies[24];
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
    char unknown3C[4];
    inline ~igIntersectTraversalInstance() { __vtable = igIntersectTraversal_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igIntersectTraversal)

void *igIntersectTraversal_vtableRead()
{
    igIntersectTraversalInstance object;
    object.__vtable = igTraversal_vtable;
    object._travProcs._value = 0;
    object.__vtable = igIntersectTraversal_vtable;
    object._matStack._value = 0;
    object._nodeStack._value = 0;
    object._probe._value = 0;
    object._volumes._value = 0;
    object._ray._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIntersectTraversal)

void igIntersectTraversal_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igIntersectTraversal_meta, igTraversal_register,
                       fn_801BD9C8, igIntersectTraversal_getMetaCall,
                       igIntersectTraversal_className, 0x40,
                       igIntersectTraversal_vtableRead, igIntersectTraversal_fieldInit, fn_801BDB1C, igIntersectTraversal_dependencies);
}

META_GET_META_CALL(igIntersectTraversal)

}
#pragma pop
