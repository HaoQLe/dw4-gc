// fn_801474E4: the deleting destructor of igGenerateMacroTexture. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igGenerateMacroTexture)
extern "C" {
extern char lbl_804A4744[];
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
struct Level_804A4744 : Level_804A4A04 {
    igObjectRefMember unknown28;
    igStringMember unknown2C;
    inline ~Level_804A4744() { __vtable = lbl_804A4744; }
};
struct igGenerateMacroTextureObject : Level_804A4744 {
    char unknown30[16];
    igStringMember _outputTextureName;
    char unknown44[4];
    igObjectRefMember _textureList;
    igObjectRefMember _excludeList;
    igObjectRefMember _repeatList;
    igObjectRefMember _geometryList;
    igObjectRefMember _pagesRegistry;
    igStringMember _fileName;
    igStringMember _sectionName;
    char unknown64[4];
    igStringMember _macroTextureName;
};

extern "C" igGenerateMacroTextureObject *fn_801474E4(igGenerateMacroTextureObject *self, short flags)
{
    if (self) {
        self->__vtable = igGenerateMacroTexture_vtable;
        self->_macroTextureName.~igStringMember();
        self->_sectionName.~igStringMember();
        self->_fileName.~igStringMember();
        self->_pagesRegistry.~igObjectRefMember();
        self->_geometryList.~igObjectRefMember();
        self->_repeatList.~igObjectRefMember();
        self->_excludeList.~igObjectRefMember();
        self->_textureList.~igObjectRefMember();
        self->_outputTextureName.~igStringMember();
        self->Level_804A4744::~Level_804A4744();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
