// igAdxAfsFile: Alchemy class registration (0x802AAB4C..0x802AAD4C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igAdxAfsFile)
META_DECLARE(igFileName)
META_DECLARE(igNamedObject)

extern "C" {
void fn_802AA788();
void *igAdxAfsFile_parentMeta();
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct igFileNameInstance : igNamedObjectInstance {
    igObjectRefMember _pathList;
    inline ~igFileNameInstance() { __vtable = igFileName_vtable; }
};

struct igAdxAfsFileInstance : igFileNameInstance {
    char unknown10[16];
    inline ~igAdxAfsFileInstance() { __vtable = igAdxAfsFile_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igAdxAfsFile)

void *igAdxAfsFile_vtableRead()
{
    igAdxAfsFileInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = igFileName_vtable;
    object._pathList._value = 0;
    object.__vtable = igAdxAfsFile_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igAdxAfsFile)

void igAdxAfsFile_register()
{
    fn_802AA788();
    meta_registerClass(0, &igAdxAfsFile_meta, igFileName_register,
                       igAdxAfsFile_parentMeta, igAdxAfsFile_getMetaCall,
                       igAdxAfsFile_className, 0x14,
                       igAdxAfsFile_vtableRead, igAdxAfsFile_fieldInit, 0, 0);
}

META_GET_META_CALL(igAdxAfsFile)

}
#pragma pop
