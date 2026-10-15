// igMemoryFile: Alchemy class registration (0x8002C0C0..0x8002C31C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igMemoryFile)
META_DECLARE(igFile)
META_DECLARE(igNamedObject)

extern "C" {
void fn_80021B94();
void *fn_8002C31C();
void fn_8002C3D0();
extern char lbl_804727A4[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_804727A4 : igNamedObjectInstance {
    igStringMember _fileName;
    char unknown10[24];
    igStringMember _completeFilename;
    inline ~Instance_804727A4() { __vtable = lbl_804727A4; }
};

struct igMemoryFileInstance : Instance_804727A4 {
    char unknown2C[28];
    inline ~igMemoryFileInstance() { __vtable = igMemoryFile_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igMemoryFile)

META_GET_META(igMemoryFile)

void *igMemoryFile_vtableRead()
{
    igMemoryFileInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_804727A4;
    object._fileName._value = 0;
    object._completeFilename._value = 0;
    object.__vtable = igMemoryFile_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igMemoryFile)

void igMemoryFile_register()
{
    fn_80021B94();
    meta_registerClass(0, &igMemoryFile_meta, igFile_register,
                       fn_8002C31C, igMemoryFile_getMetaCall,
                       igMemoryFile_className, 0x3C,
                       igMemoryFile_vtableRead, igMemoryFile_fieldInit, fn_8002C3D0, 0);
}

META_GET_META_CALL(igMemoryFile)

}
#pragma pop
