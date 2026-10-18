// fn_802B7548: the deleting destructor of beSystem. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(beSystem)
META_DECLARE(igNamedObject)
extern "C" {
extern char lbl_804CBA60[];
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectObject() { __vtable = igNamedObject_vtable; }
};
struct Level_804CBA60 : igNamedObjectObject {
    inline ~Level_804CBA60() { __vtable = lbl_804CBA60; }
};
struct beSystemObject : Level_804CBA60 {
    char unknown0C[36];
    igObjectRefMember _random;
    igObjectRefMember _readFileList;
    igStringMember _stageName;
    igStringMember _nextStage;
    char unknown40[4];
    igObjectRefMember _bootDirectory;
    igObjectRefMember _globalStrObj;
    igObjectRefMember _discErrInfos;
    igObjectRefMember _viewerScene;
    char unknown54[20];
};

extern "C" beSystemObject *fn_802B7548(beSystemObject *self, short flags)
{
    if (self) {
        self->__vtable = beSystem_vtable;
        self->_viewerScene.~igObjectRefMember();
        self->_discErrInfos.~igObjectRefMember();
        self->_globalStrObj.~igObjectRefMember();
        self->_bootDirectory.~igObjectRefMember();
        self->_nextStage.~igStringMember();
        self->_stageName.~igStringMember();
        self->_readFileList.~igObjectRefMember();
        self->_random.~igObjectRefMember();
        self->Level_804CBA60::~Level_804CBA60();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
