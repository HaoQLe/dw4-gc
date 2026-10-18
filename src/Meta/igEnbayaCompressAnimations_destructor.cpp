// fn_8014BA88: the deleting destructor of igEnbayaCompressAnimations. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igEnbayaCompressAnimations)
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
struct igEnbayaCompressAnimationsObject : Level_804A46AC {
    char unknown2C[12];
    igStringMember _ignoreBones;
    igStringMember _specialCaseIniFilename;
    igStringMember _currentAnimationDatabase;
    igObjectRefMember _ignoreBoneList;
    igObjectRefMember _specialCaseFilenames;
    igObjectRefMember _specialCaseAnimationDatabaseNames;
    igObjectRefMember _specialCaseAnimationNames;
    igObjectRefMember _specialCaseSampleRates;
    igObjectRefMember _specialCaseQuantizationErrors;
    igObjectRefMember _table;
    igStringMember _separator;
    char unknown64[4];
};

extern "C" igEnbayaCompressAnimationsObject *fn_8014BA88(igEnbayaCompressAnimationsObject *self, short flags)
{
    if (self) {
        self->__vtable = igEnbayaCompressAnimations_vtable;
        self->_separator.~igStringMember();
        self->_table.~igObjectRefMember();
        self->_specialCaseQuantizationErrors.~igObjectRefMember();
        self->_specialCaseSampleRates.~igObjectRefMember();
        self->_specialCaseAnimationNames.~igObjectRefMember();
        self->_specialCaseAnimationDatabaseNames.~igObjectRefMember();
        self->_specialCaseFilenames.~igObjectRefMember();
        self->_ignoreBoneList.~igObjectRefMember();
        self->_currentAnimationDatabase.~igStringMember();
        self->_specialCaseIniFilename.~igStringMember();
        self->_ignoreBones.~igStringMember();
        self->Level_804A46AC::~Level_804A46AC();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
