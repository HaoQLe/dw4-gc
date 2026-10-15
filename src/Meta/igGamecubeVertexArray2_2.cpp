// igGamecubeVertexArray2: Alchemy class registration (0x800D75D4..0x800D7808). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeVertexArray2)
META_DECLARE(igNamedObject)
META_DECLARE(igVertexArray2)

extern "C" {
void fn_800CE2F8();
void fn_800D7810();
void *igGamecubeVertexArray2_parentMeta();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igVertexArray2Instance : igNamedObjectInstance {
    igObjectRefMember _internalBuffer;
    igObjectRefMember _objList;
    igObjectRefMember _vertexStream;
    inline ~igVertexArray2Instance() { __vtable = igVertexArray2_vtable; }
};

struct igGamecubeVertexArray2Instance : igVertexArray2Instance {
    inline ~igGamecubeVertexArray2Instance() { __vtable = igGamecubeVertexArray2_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeVertexArray2)

void *igGamecubeVertexArray2_vtableRead()
{
    igGamecubeVertexArray2Instance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igVertexArray2_vtable;
    object._internalBuffer._value = 0;
    object._objList._value = 0;
    object._vertexStream._value = 0;
    object.__vtable = igGamecubeVertexArray2_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeVertexArray2)

void igGamecubeVertexArray2_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGamecubeVertexArray2_meta, igVertexArray2_register,
                       igGamecubeVertexArray2_parentMeta, igGamecubeVertexArray2_getMetaCall,
                       igGamecubeVertexArray2_className, 0x18,
                       igGamecubeVertexArray2_vtableRead, fn_800D7810, 0, 0);
}

}
#pragma pop
