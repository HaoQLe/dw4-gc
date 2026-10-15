// igGamecubeThread: Alchemy class registration (0x8003AF84..0x8003B154). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeThread)
META_DECLARE(igNamedObject)
META_DECLARE(igThread)

extern "C" {
void fn_80021B94();
extern char igGamecubeThread_dependencies[8];
void *igGamecubeThread_parentMeta();
extern char lbl_80470C94[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_80470C94 : igNamedObjectInstance {
    inline ~Instance_80470C94() { __vtable = lbl_80470C94; }
};

struct igGamecubeThreadInstance : Instance_80470C94 {
    char unknown0C[884];
    igObjectRefMember _threadDoneSema;
    char unknown384[12];
    inline ~igGamecubeThreadInstance() { __vtable = igGamecubeThread_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeThread)

void *igGamecubeThread_vtableRead()
{
    igGamecubeThreadInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_80470C94;
    object.__vtable = igGamecubeThread_vtable;
    object._threadDoneSema._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeThread)

void igGamecubeThread_register()
{
    fn_80021B94();
    meta_registerClass(0, &igGamecubeThread_meta, igThread_register,
                       igGamecubeThread_parentMeta, igGamecubeThread_getMetaCall,
                       igGamecubeThread_className, 0x388,
                       igGamecubeThread_vtableRead, igGamecubeThread_fieldInit, 0, igGamecubeThread_dependencies);
}

}
#pragma pop
