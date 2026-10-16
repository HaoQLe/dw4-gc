// igMousePosObserver: Alchemy class registration (0x80110720..0x801108A4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMousePosObserver)

extern "C" {
void fn_801285A0(void *);
extern char lbl_80495AD8[100];
}

struct Instance_LigMousePosObserver_0 : igObjectInstance {
    inline Instance_LigMousePosObserver_0()
    {
        __vtable = lbl_80495AD8;
    }
};

struct igMousePosObserverInstance : Instance_LigMousePosObserver_0 {
    char unknown04[12];
    igObjectRefMember _intersectTraversal;
    igObjectRefMember _ray;
    char unknown18[8];
    igObjectRefMember _hitPath;
    char unknown24[64];
    inline igMousePosObserverInstance()
    {
        __vtable = igMousePosObserver_vtable;
        _intersectTraversal._value = 0;
        _ray._value = 0;
        _hitPath._value = 0;
        fn_801285A0(&unknown24);
    }
    inline ~igMousePosObserverInstance() { __vtable = igMousePosObserver_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMousePosObserver)

META_GET_META(igMousePosObserver)

void *igMousePosObserver_vtableRead()
{
    igMousePosObserverInstance object;
    return meta_vtableOf(&object);
}

}
#pragma pop
