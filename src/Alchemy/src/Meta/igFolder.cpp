// igFolder: Alchemy class registration (0x8002F744..0x8002F970). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFolder)
META_DECLARE(igGamecubeFolder)
META_DECLARE(igObject)

extern "C" {
void fn_80021B94();
void *fn_800237D0();
extern char igFolder_fieldNames[4];
extern char igFolder_fieldOffsets[4];
extern char igFolder_fieldStorage[4];
extern char igFolder_fieldTypes[4];
}

struct igFolderInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _folderName;
    char unknown0C[4];
    inline ~igFolderInstance() { __vtable = igFolder_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igFolder)

META_GET_META(igFolder)

void *igFolder_vtableRead()
{
    igFolderInstance object;
    object.__vtable = igFolder_vtable;
    object._folderName._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFolder)

void igFolder_register()
{
    fn_80021B94();
    meta_registerClass(0, &igFolder_meta, igObject_register,
                       fn_800237D0, igFolder_getMetaCall,
                       igFolder_className, 0xC,
                       igFolder_vtableRead, igFolder_fieldInit, 0, 0);
}

META_GET_META_CALL(igFolder)

void igFolder_fieldInit()
{
    Meta::igMetaObject *meta = igFolder_meta;
    int base = meta_fieldCount(meta);
    meta_appendFields(meta, igFolder_fieldTypes, 1);
    meta_setupFields(meta, igFolder_fieldNames, igFolder_fieldStorage, igFolder_fieldOffsets, base);
    igFolder_meta->_abstractProxy = reinterpret_cast<void *>(igGamecubeFolder_getMetaCall);
}

}
#pragma pop
