// fn_802D7588: the deleting destructor of beGeneraterData. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(beGeneraterData)
META_DECLARE(igNamedObject)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectObject() { __vtable = igNamedObject_vtable; }
};
struct beGeneraterDataObject : igNamedObjectObject {
    char unknown0C[16];
    igObjectRefMember _genePosList;
    igObjectRefMember _geneRotYRadianList;
    char unknown24[4];
    igStringMember _geneEnemySeq;
    igStringMember _startModeStr;
    char unknown30[4];
    igStringMember _fillModeStr;
    char unknown38[4];
    igStringMember _callLua;
    igObjectRefMember _playerDataList;
};

extern "C" beGeneraterDataObject *fn_802D7588(beGeneraterDataObject *self, short flags)
{
    if (self) {
        self->__vtable = beGeneraterData_vtable;
        self->_playerDataList.~igObjectRefMember();
        self->_callLua.~igStringMember();
        self->_fillModeStr.~igStringMember();
        self->_startModeStr.~igStringMember();
        self->_geneEnemySeq.~igStringMember();
        self->_geneRotYRadianList.~igObjectRefMember();
        self->_genePosList.~igObjectRefMember();
        self->igNamedObjectObject::~igNamedObjectObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
