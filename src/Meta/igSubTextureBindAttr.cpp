// igSubTextureBindAttr: Alchemy class registration (0x800AFF90..0x800B0134). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igSubTextureBindAttr)
META_DECLARE(igTextureBindAttr)

extern "C" {
void fn_800ABC8C();
void *igSubTextureBindAttr_parentMeta();
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
}

struct igTextureBindAttrInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _texture;
    inline ~igTextureBindAttrInstance() { __vtable = igTextureBindAttr_vtable; }
};

struct igSubTextureBindAttrInstance : igTextureBindAttrInstance {
    char unknown10[32];
    inline ~igSubTextureBindAttrInstance() { __vtable = igSubTextureBindAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igSubTextureBindAttr)

void *igSubTextureBindAttr_vtableRead()
{
    igSubTextureBindAttrInstance object;
    object.__vtable = lbl_8047D578;
    object.__vtable = lbl_8047E50C;
    object.__vtable = igTextureBindAttr_vtable;
    object._texture._value = 0;
    object.__vtable = igSubTextureBindAttr_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igSubTextureBindAttr)

void igSubTextureBindAttr_register()
{
    fn_800ABC8C();
    meta_registerClass(0, &igSubTextureBindAttr_meta, igTextureBindAttr_register,
                       igSubTextureBindAttr_parentMeta, igSubTextureBindAttr_getMetaCall,
                       igSubTextureBindAttr_className, 0x2C,
                       igSubTextureBindAttr_vtableRead, igSubTextureBindAttr_fieldInit, 0, 0);
}

META_GET_META_CALL(igSubTextureBindAttr)

}
#pragma pop
