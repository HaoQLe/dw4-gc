// igGamecubeVertexStream: Alchemy class registration (0x800D7230..0x800D7474). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeVertexStream)
META_DECLARE(igNamedObject)
META_DECLARE(igVertexStream)

extern "C" {
void fn_800CE2F8();
void fn_800D747C();
void fn_800D75B4();
extern char igGamecubeVertexStream_dependencies[8];
void *igGamecubeVertexStream_parentMeta();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igVertexStreamInstance : igNamedObjectInstance {
    char unknown0C[8];
    igObjectRefMember _vertexDataList;
    inline ~igVertexStreamInstance() { __vtable = igVertexStream_vtable; }
};

struct igGamecubeVertexStreamInstance : igVertexStreamInstance {
    char unknown18[72];
    igObjectRefMember unknown60;
    igObjectRefMember unknown64;
    char unknown68[16];
    inline ~igGamecubeVertexStreamInstance() { __vtable = igGamecubeVertexStream_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeVertexStream)

void *igGamecubeVertexStream_vtableRead()
{
    igGamecubeVertexStreamInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igVertexStream_vtable;
    object._vertexDataList._value = 0;
    object.__vtable = igGamecubeVertexStream_vtable;
    object.unknown60._value = 0;
    object.unknown64._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeVertexStream)

void igGamecubeVertexStream_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGamecubeVertexStream_meta, igVertexStream_register,
                       igGamecubeVertexStream_parentMeta, igGamecubeVertexStream_getMetaCall,
                       igGamecubeVertexStream_className, 0x70,
                       igGamecubeVertexStream_vtableRead, fn_800D747C, fn_800D75B4, igGamecubeVertexStream_dependencies);
}

}
#pragma pop
