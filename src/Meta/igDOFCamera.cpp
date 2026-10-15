// igDOFCamera: Alchemy class registration (0x801C5B10..0x801C5D40). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igDOFCamera)
META_DECLARE(igCamera)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)

extern "C" {
void fn_801AA6DC();
extern char igDOFCamera_dependencies[8];
void *igDOFCamera_parentMeta();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igNodeInstance : igNamedObjectInstance {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeInstance() { __vtable = igNode_vtable; }
};

struct igCameraInstance : igNodeInstance {
    inline ~igCameraInstance() { __vtable = igCamera_vtable; }
};

struct igDOFCameraInstance : igCameraInstance {
    char unknown14[52];
    inline ~igDOFCameraInstance() { __vtable = igDOFCamera_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igDOFCamera)

void *igDOFCamera_vtableRead()
{
    igDOFCameraInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igNode_vtable;
    object._bound._value = 0;
    object._parentList._value = 0;
    object.__vtable = igCamera_vtable;
    object.__vtable = igDOFCamera_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igDOFCamera)

void igDOFCamera_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igDOFCamera_meta, igCamera_register,
                       igDOFCamera_parentMeta, igDOFCamera_getMetaCall,
                       igDOFCamera_className, 0x44,
                       igDOFCamera_vtableRead, igDOFCamera_fieldInit, 0, igDOFCamera_dependencies);
}

META_GET_META_CALL(igDOFCamera)

}
#pragma pop
