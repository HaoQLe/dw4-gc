// igObjectDirEntry: Alchemy class registration (0x800291C8..0x8002942C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igObjectDirEntry)
META_DECLARE(igDirEntry)
META_DECLARE(igNamedObject)

extern "C" {
void fn_80021B94();
void *fn_8002942C();
extern char igObjectDirEntry_dependencies[12];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igDirEntryInstance : igNamedObjectInstance {
    inline ~igDirEntryInstance() { __vtable = igDirEntry_vtable; }
};

struct igObjectDirEntryInstance : igDirEntryInstance {
    char unknown0C[16];
    igObjectRefMember _typeMeta;
    igStringMember _typeMetaName;
    char unknown24[20];
    inline ~igObjectDirEntryInstance() { __vtable = igObjectDirEntry_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igObjectDirEntry)

META_GET_META(igObjectDirEntry)

void *igObjectDirEntry_vtableRead()
{
    igObjectDirEntryInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igDirEntry_vtable;
    object.__vtable = igObjectDirEntry_vtable;
    object._typeMeta._value = 0;
    object._typeMetaName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igObjectDirEntry)

void igObjectDirEntry_register()
{
    fn_80021B94();
    meta_registerClass(0, &igObjectDirEntry_meta, igDirEntry_register,
                       fn_8002942C, igObjectDirEntry_getMetaCall,
                       igObjectDirEntry_className, 0x34,
                       igObjectDirEntry_vtableRead, igObjectDirEntry_fieldInit, 0, igObjectDirEntry_dependencies);
}

META_GET_META_CALL(igObjectDirEntry)

}
#pragma pop
