// fn_8002B80C: the deleting destructor of igMemoryPoolInfo. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igInfo)
META_DECLARE(igMemoryPoolInfo)
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
struct igInfoObject : igNamedObjectObject {
    inline ~igInfoObject() { __vtable = igInfo_vtable; }
};
struct igMemoryPoolInfoObject : igInfoObject {
    char unknown0C[8];
    igStringMember _handleName;
    igStringMember _aliasedTo;
    char unknown1C[12];
    igStringMember _class;
    igStringMember _arenaType;
    igStringMember _source;
    igStringMember _scope;
    igStringMember _debugOptions;
    igStringMember _releaseOptions;
    igStringMember _debugChecking;
    igStringMember _releaseChecking;
    igStringMember _debugMessages;
    igStringMember _releaseMessages;
    char unknown50[4];
};

extern "C" igMemoryPoolInfoObject *fn_8002B80C(igMemoryPoolInfoObject *self, short flags)
{
    if (self) {
        self->__vtable = igMemoryPoolInfo_vtable;
        self->_releaseMessages.~igStringMember();
        self->_debugMessages.~igStringMember();
        self->_releaseChecking.~igStringMember();
        self->_debugChecking.~igStringMember();
        self->_releaseOptions.~igStringMember();
        self->_debugOptions.~igStringMember();
        self->_scope.~igStringMember();
        self->_source.~igStringMember();
        self->_arenaType.~igStringMember();
        self->_class.~igStringMember();
        self->_aliasedTo.~igStringMember();
        self->_handleName.~igStringMember();
        self->igInfoObject::~igInfoObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
