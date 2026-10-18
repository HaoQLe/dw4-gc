// fn_80146AB4: the deleting destructor of igInstanceScene. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igInstanceScene)
extern "C" {
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
void fn_80066DFC(void *object);   // frees an object
}

struct Level_804A4A04 {
    void *__vtable;
    char unknown04[28];
    igObjectRefMember unknown20;
    igObjectRefMember unknown24;
    inline ~Level_804A4A04() { __vtable = lbl_804A4A04; }
};
struct Level_804A46AC : Level_804A4A04 {
    igObjectRefMember unknown28;
    inline ~Level_804A46AC() { __vtable = lbl_804A46AC; }
};
struct igInstanceSceneObject : Level_804A46AC {
    char unknown2C[8];
    igStringMember _defaultBoundMin;
    igStringMember _defaultBoundMax;
    char unknown3C[32];
    igStringMember _color1;
    char unknown60[4];
    igStringMember _color2;
};

extern "C" igInstanceSceneObject *fn_80146AB4(igInstanceSceneObject *self, short flags)
{
    if (self) {
        self->__vtable = igInstanceScene_vtable;
        self->_color2.~igStringMember();
        self->_color1.~igStringMember();
        self->_defaultBoundMax.~igStringMember();
        self->_defaultBoundMin.~igStringMember();
        self->Level_804A46AC::~Level_804A46AC();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
