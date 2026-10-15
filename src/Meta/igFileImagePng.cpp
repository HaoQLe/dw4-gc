// igFileImagePng: Alchemy class registration (0x800D5DF0..0x800D6050). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igFileImagePng)
META_DECLARE(igFileImage)

extern "C" {
void fn_800CE2F8();
extern char igFileImagePng_dependencies[8];
void *igFileImagePng_parentMeta();
extern char lbl_804927D4[];
extern char lbl_80492F94[];
}

struct Instance_804927D4 : igObjectInstance {
    char unknown04[64];
    igObjectRefMember unknown44;
    char unknown48[16];
    igStringMember unknown58;
    inline ~Instance_804927D4() { __vtable = lbl_804927D4; }
};

struct Instance_80492F94 : Instance_804927D4 {
    inline ~Instance_80492F94() { __vtable = lbl_80492F94; }
};

struct igFileImagePngInstance : Instance_80492F94 {
    igObjectRefMember _file;
    char unknown60[8];
    inline ~igFileImagePngInstance() { __vtable = igFileImagePng_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igFileImagePng)

META_GET_META(igFileImagePng)

void *igFileImagePng_vtableRead()
{
    igFileImagePngInstance object;
    object.__vtable = lbl_804927D4;
    object.unknown44._value = 0;
    object.unknown58._value = 0;
    object.__vtable = lbl_80492F94;
    object.__vtable = igFileImagePng_vtable;
    object._file._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igFileImagePng)

void igFileImagePng_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igFileImagePng_meta, igFileImage_register,
                       igFileImagePng_parentMeta, igFileImagePng_getMetaCall,
                       igFileImagePng_className, 0x60,
                       igFileImagePng_vtableRead, igFileImagePng_fieldInit, 0, igFileImagePng_dependencies);
}

META_GET_META_CALL(igFileImagePng)

}
#pragma pop
