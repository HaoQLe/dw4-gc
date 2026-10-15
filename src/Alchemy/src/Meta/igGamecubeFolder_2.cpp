// igGamecubeFolder: Alchemy class registration (0x8003B898..0x8003B9FC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeFolder)
META_DECLARE(igFolder)

extern "C" {
void fn_80021B94();
void *igGamecubeFolder_parentMeta();
}

struct igFolderInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _folderName;
    inline ~igFolderInstance() { __vtable = igFolder_vtable; }
};

struct igGamecubeFolderInstance : igFolderInstance {
    char unknown0C[4];
    inline ~igGamecubeFolderInstance() { __vtable = igGamecubeFolder_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeFolder)

void *igGamecubeFolder_vtableRead()
{
    igGamecubeFolderInstance object;
    object.__vtable = igFolder_vtable;
    object._folderName._value = 0;
    object.__vtable = igGamecubeFolder_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeFolder)

void igGamecubeFolder_register()
{
    fn_80021B94();
    meta_registerClass(0, &igGamecubeFolder_meta, igFolder_register,
                       igGamecubeFolder_parentMeta, igGamecubeFolder_getMetaCall,
                       igGamecubeFolder_className, 0xC,
                       igGamecubeFolder_vtableRead, 0, 0, 0);
}

}
#pragma pop
