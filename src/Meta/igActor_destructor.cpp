// fn_801CDFC4: the deleting destructor of igActor. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igActor)
META_DECLARE(igGroup)
META_DECLARE(igNamedObject)
META_DECLARE(igNode)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectObject() { __vtable = igNamedObject_vtable; }
};
struct igNodeObject : igNamedObjectObject {
    igObjectRefMember _bound;
    igObjectRefMember _parentList;
    inline ~igNodeObject() { __vtable = igNode_vtable; }
};
struct igGroupObject : igNodeObject {
    char unknown14[8];
    igObjectRefMember _childList;
    inline ~igGroupObject() { __vtable = igGroup_vtable; }
};
struct igActorObject : igGroupObject {
    igObjectRefMember _animationSystem;
    char unknown24[8];
    igObjectRefMember _appearance;
    igObjectRefMember _animationDatabase;
    igObjectRefMember _modifierList;
    char unknown38[200];
};

extern "C" igActorObject *fn_801CDFC4(igActorObject *self, short flags)
{
    if (self) {
        self->__vtable = igActor_vtable;
        self->_modifierList.~igObjectRefMember();
        self->_animationDatabase.~igObjectRefMember();
        self->_appearance.~igObjectRefMember();
        self->_animationSystem.~igObjectRefMember();
        self->igGroupObject::~igGroupObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
