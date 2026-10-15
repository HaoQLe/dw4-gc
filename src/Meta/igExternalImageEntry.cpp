// igExternalImageEntry: Alchemy class registration (0x800D48D4..0x800D4B38). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igExternalImageEntry)
META_DECLARE(igDirEntry)
META_DECLARE(igExternalDirEntry)
META_DECLARE(igNamedObject)

extern "C" {
void fn_800CE2F8();
void *igExternalImageEntry_parentMeta();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igDirEntryInstance : igNamedObjectInstance {
    inline ~igDirEntryInstance() { __vtable = igDirEntry_vtable; }
};

struct igExternalDirEntryInstance : igDirEntryInstance {
    char unknown0C[16];
    igStringMember _directoryName;
    igStringMember _entryName;
    char unknown24[4];
    igStringMember _externalFilePath;
    inline ~igExternalDirEntryInstance() { __vtable = igExternalDirEntry_vtable; }
};

struct igExternalImageEntryInstance : igExternalDirEntryInstance {
    char unknown2C[12];
    inline ~igExternalImageEntryInstance() { __vtable = igExternalImageEntry_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igExternalImageEntry)

void *igExternalImageEntry_vtableRead()
{
    igExternalImageEntryInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igDirEntry_vtable;
    object.__vtable = igExternalDirEntry_vtable;
    object._directoryName._value = 0;
    object._entryName._value = 0;
    object._externalFilePath._value = 0;
    object.__vtable = igExternalImageEntry_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igExternalImageEntry)

void igExternalImageEntry_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igExternalImageEntry_meta, igExternalDirEntry_register,
                       igExternalImageEntry_parentMeta, igExternalImageEntry_getMetaCall,
                       igExternalImageEntry_className, 0x2C,
                       igExternalImageEntry_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igExternalImageEntry)

}
#pragma pop
