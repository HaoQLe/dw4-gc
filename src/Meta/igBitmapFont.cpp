// igBitmapFont: Alchemy class registration (0x801149C4..0x80114B68). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igBitmapFont)
META_DECLARE(igNamedObject)

extern "C" {
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
    char unknown24[4];
    inline ~igBitmapFontInstance() { __vtable = igBitmapFont_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igBitmapFont)

void *igBitmapFont_vtableRead()
{
    igBitmapFontInstance object;
    object.__vtable = igNamedObject_vtable;
    object._name._value = 0;
    object.__vtable = lbl_80496F28;
    object._attrList._value = 0;
    object.__vtable = igBitmapFont_vtable;
    object._charMetricsList._value = 0;
    object._textureBind._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
