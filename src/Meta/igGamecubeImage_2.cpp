// igGamecubeImage: Alchemy class registration (0x800D8838..0x800D89F4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igGamecubeImage)
META_DECLARE(igMemoryImage)

extern "C" {
void fn_800CE2F8();
void *igGamecubeImage_parentMeta();
extern char lbl_804927D4[];
extern char lbl_80492B34[];
}

struct Instance_804927D4 : igObjectInstance {
    char unknown04[64];
    igObjectRefMember unknown44;
    char unknown48[16];
    igStringMember unknown58;
    inline ~Instance_804927D4() { __vtable = lbl_804927D4; }
};

struct Instance_80492B34 : Instance_804927D4 {
    inline ~Instance_80492B34() { __vtable = lbl_80492B34; }
};

struct igGamecubeImageInstance : Instance_80492B34 {
    char unknown5C[132];
    inline ~igGamecubeImageInstance() { __vtable = igGamecubeImage_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igGamecubeImage)

void *igGamecubeImage_vtableRead()
{
    igGamecubeImageInstance object;
    object.__vtable = lbl_804927D4;
    object.unknown44._value = 0;
    object.unknown58._value = 0;
    object.__vtable = lbl_80492B34;
    object.__vtable = igGamecubeImage_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igGamecubeImage)

void igGamecubeImage_register()
{
    fn_800CE2F8();
    meta_registerClass(0, &igGamecubeImage_meta, igMemoryImage_register,
                       igGamecubeImage_parentMeta, igGamecubeImage_getMetaCall,
                       igGamecubeImage_className, 0xD8,
                       igGamecubeImage_vtableRead, igGamecubeImage_fieldInit, 0, 0);
}

}
#pragma pop
