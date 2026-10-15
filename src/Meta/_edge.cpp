// _edge: Alchemy class registration (0x801B7D1C..0x801B7EA8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(_edge)
META_DECLARE(igHeapable)

extern "C" {
extern char _edge_dependencies[92];
void *_edge_parentMeta();
void fn_801AA6DC();
extern char lbl_805603DC[6];
}

struct _edgeInstance : igObjectInstance {
    char unknown04[32];
    igObjectRefMember optimal;
    char unknown28[8];
    inline ~_edgeInstance() { __vtable = _edge_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(_edge)

void *_edge_vtableRead()
{
    _edgeInstance object;
    object.__vtable = igHeapable_vtable;
    object.__vtable = _edge_vtable;
    object.optimal._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(_edge)

void _edge_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &_edge_meta, igHeapable_register,
                       _edge_parentMeta, _edge_getMetaCall,
                       lbl_805603DC, 0x2C,
                       _edge_vtableRead, _edge_fieldInit, 0, _edge_dependencies);
}

META_GET_META_CALL(_edge)

}
#pragma pop
