// igTgaLoader: Alchemy class registration (0x800D5B44..0x800D5D14). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTgaLoader)
META_DECLARE(igImageLoader)

extern "C" {
void fn_800CE2F8();
void fn_800D5D1C();
extern char igTgaLoader_dependencies[8];
void *igTgaLoader_parentMeta();
extern char lbl_8049304C[];
extern char lbl_804930AC[];
}

struct igTgaLoaderInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember unknown08;
    char unknown0C[36];
    inline ~igTgaLoaderInstance() { __vtable = igTgaLoader_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igTgaLoader)

META_GET_META(igTgaLoader)

void *igTgaLoader_vtableRead()
{
    igTgaLoaderInstance object;
    object.__vtable = lbl_804930AC;
    object.__vtable = lbl_8049304C;
    object.__vtable = igTgaLoader_vtable;
    object.unknown08._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTgaLoader)

void igTgaLoader_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igTgaLoader_meta, igImageLoader_register,
                       igTgaLoader_parentMeta, igTgaLoader_getMetaCall,
                       igTgaLoader_className, 0x30,
                       igTgaLoader_vtableRead, fn_800D5D1C, 0, igTgaLoader_dependencies);
}

META_GET_META_CALL(igTgaLoader)

}
#pragma pop
