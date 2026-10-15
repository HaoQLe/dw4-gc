// igCompareAttrForTexture: Alchemy class registration (0x8014EFE8..0x8014F1D0). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igCompareAttrForTexture)
META_DECLARE(igCompareAttr)

extern "C" {
void fn_8012FC48();
void *igCompareAttrForTexture_parentMeta();
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
}

struct igCompareAttrInstance : igObjectInstance {
    char unknown04[28];
    igObjectRefMember _attributeOne;
    igObjectRefMember _attributeTwo;
    inline ~igCompareAttrInstance() { __vtable = igCompareAttr_vtable; }
};

struct igCompareAttrForTextureInstance : igCompareAttrInstance {
    char unknown28[8];
    inline ~igCompareAttrForTextureInstance() { __vtable = igCompareAttrForTexture_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igCompareAttrForTexture)

void *igCompareAttrForTexture_vtableRead()
{
    igCompareAttrForTextureInstance object;
    object.__vtable = lbl_804A6460;
    object.__vtable = lbl_804AAF48;
    object.__vtable = lbl_804A6338;
    object.__vtable = igCompareAttr_vtable;
    object._attributeOne._value = 0;
    object._attributeTwo._value = 0;
    object.__vtable = igCompareAttrForTexture_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igCompareAttrForTexture)

void igCompareAttrForTexture_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igCompareAttrForTexture_meta, igCompareAttr_register,
                       igCompareAttrForTexture_parentMeta, igCompareAttrForTexture_getMetaCall,
                       igCompareAttrForTexture_className, 0x2C,
                       igCompareAttrForTexture_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(igCompareAttrForTexture)

}
#pragma pop
