// fn_801BE95C: the deleting destructor of igIniShaderFactory. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igIniShaderFactory)
META_DECLARE(igNamedObject)
META_DECLARE(igShaderFactory)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectObject() { __vtable = igNamedObject_vtable; }
};
struct igShaderFactoryObject : igNamedObjectObject {
    igObjectRefMember _attrNames;
    igObjectRefMember _attrTypes;
    inline ~igShaderFactoryObject() { __vtable = igShaderFactory_vtable; }
};
struct igIniShaderFactoryObject : igShaderFactoryObject {
    char unknown14[4];
    igStringMember _implementationName;
    igObjectRefMember _implementation;
    igObjectRefMember _interface;
    igStringMember _interfaceFileName;
    char unknown28[4];
    igObjectRefMember _mp;
    igObjectRefMember _data;
    igObjectRefMember _cachedObjects;
    igObjectRefMember _fileCache;
};

extern "C" igIniShaderFactoryObject *fn_801BE95C(igIniShaderFactoryObject *self, short flags)
{
    if (self) {
        self->__vtable = igIniShaderFactory_vtable;
        self->_fileCache.~igObjectRefMember();
        self->_cachedObjects.~igObjectRefMember();
        self->_data.~igObjectRefMember();
        self->_mp.~igObjectRefMember();
        self->_interfaceFileName.~igStringMember();
        self->_interface.~igObjectRefMember();
        self->_implementation.~igObjectRefMember();
        self->_implementationName.~igStringMember();
        self->igShaderFactoryObject::~igShaderFactoryObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
