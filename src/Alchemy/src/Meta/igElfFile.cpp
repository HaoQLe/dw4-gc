// igElfFile: Alchemy class registration (0x8003A784..0x8003A988). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igElfFile)
META_DECLARE(igProgramFile)

extern "C" {
void fn_80021B94();
void *igElfFile_parentMeta();
}

struct igProgramFileInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _fileName;
    igObjectRefMember _file;
    inline ~igProgramFileInstance() { __vtable = igProgramFile_vtable; }
};

struct igElfFileInstance : igProgramFileInstance {
    char unknown10[96];
    inline ~igElfFileInstance() { __vtable = igElfFile_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igElfFile)

META_GET_META(igElfFile)

void *igElfFile_vtableRead()
{
    igElfFileInstance object;
    object.__vtable = igProgramFile_vtable;
    object._fileName._value = 0;
    object._file._value = 0;
    object.__vtable = igElfFile_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igElfFile)

void igElfFile_register()
{
    fn_80021B94();
    meta_registerClass(0, &igElfFile_meta, igProgramFile_register,
                       igElfFile_parentMeta, igElfFile_getMetaCall,
                       igElfFile_className, 0x64,
                       igElfFile_vtableRead, igElfFile_fieldInit, 0, 0);
}

META_GET_META_CALL(igElfFile)

}
#pragma pop
