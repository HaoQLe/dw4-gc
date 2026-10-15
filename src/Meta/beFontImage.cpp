// beFontImage: Alchemy class registration (0x802D9638..0x802D98C8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(beFontImage)
META_DECLARE(igBitmapFont)
META_DECLARE(igNamedObject)

extern "C" {
void *beFontImage_parentMeta();
void fn_802B1AC8();
extern char lbl_80496F28[];
}

struct igNamedObjectInstance : igObjectInstance {
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectInstance() { __vtable = igNamedObject_vtable; }
};

struct Instance_80496F28 : igNamedObjectInstance {
    char unknown0C[8];
    igObjectRefMember _attrList;
    inline ~Instance_80496F28() { __vtable = lbl_80496F28; }
};

struct igBitmapFontInstance : Instance_80496F28 {
    char unknown18[4];
    igObjectRefMember _charMetricsList;
    igObjectRefMember _textureBind;
    inline ~igBitmapFontInstance() { __vtable = igBitmapFont_vtable; }
};

struct beFontImageInstance : igBitmapFontInstance {
    char unknown24[4];
    inline ~beFontImageInstance() { __vtable = beFontImage_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(beFontImage)

#pragma push
#pragma optimize_for_size off
void *beFontImage_vtableRead()
{
    beFontImageInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_80496F28;
    object._attrList._value = 0;
    object.__vtable = igBitmapFont_vtable;
    object._charMetricsList._value = 0;
    object._textureBind._value = 0;
    object.__vtable = beFontImage_vtable;
    return meta_vtableOf(&object);
}
#pragma pop

META_ARK_REGISTER(beFontImage)

void beFontImage_register()
{
    fn_802B1AC8();
    meta_registerClass(0, &beFontImage_meta, igBitmapFont_register,
                       beFontImage_parentMeta, beFontImage_getMetaCall,
                       beFontImage_className, 0x24,
                       beFontImage_vtableRead, 0, 0, 0);
}

META_GET_META_CALL(beFontImage)

}
#pragma pop
