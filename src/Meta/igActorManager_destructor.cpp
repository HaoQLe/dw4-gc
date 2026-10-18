// fn_804092E0: the deleting destructor of igActorManager. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igActorManager)
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
struct igActorManagerObject : Level_804CBA60 {
    char unknown0C[4];
    igObjectRefMember _skelOnlys;
    igObjectRefMember _skelAndSkins;
    igObjectRefMember _actors;
    igObjectRefMember _params;
    igObjectRefMember _travFuncs;
    igObjectRefMember _actorMetas;
    igObjectRefMember _viewport;
    igObjectRefMember _skelViewport;
    igObjectRefMember _vsim;
    igObjectRefMember _references;
};

extern "C" igActorManagerObject *fn_804092E0(igActorManagerObject *self, short flags)
{
    if (self) {
        self->__vtable = igActorManager_vtable;
        self->_references.~igObjectRefMember();
        self->_vsim.~igObjectRefMember();
        self->_skelViewport.~igObjectRefMember();
        self->_viewport.~igObjectRefMember();
        self->_actorMetas.~igObjectRefMember();
        self->_travFuncs.~igObjectRefMember();
        self->_params.~igObjectRefMember();
        self->_actors.~igObjectRefMember();
        self->_skelAndSkins.~igObjectRefMember();
        self->_skelOnlys.~igObjectRefMember();
        self->Level_804CBA60::~Level_804CBA60();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
