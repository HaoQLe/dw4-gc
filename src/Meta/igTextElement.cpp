// igTextElement: Alchemy class registration (0x8010D0F4..0x8010D2B8). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTextElement)

extern "C" {
extern char lbl_80497ED4[];
}

struct Instance_80497ED4 : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _geometry;
    char unknown0C[28];
    igObjectRefMember _sharableAttrs;
    inline ~Instance_80497ED4() { __vtable = lbl_80497ED4; }
};

struct igTextElementInstance : Instance_80497ED4 {
    igObjectRefMember _font;
    igObjectRefMember _geometryAttr;
    igStringMember _text;
    char unknown38[8];
    inline ~igTextElementInstance() { __vtable = igTextElement_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTextElement)

void *igTextElement_vtableRead()
{
    igTextElementInstance object;
    object.__vtable = lbl_80497ED4;
    object._geometry._value = 0;
    object._sharableAttrs._value = 0;
    object.__vtable = igTextElement_vtable;
    object._font._value = 0;
    object._geometryAttr._value = 0;
    object._text._value = 0;
    return meta_vtableOf(&object);
}

}
#pragma pop
