// fn_802E8410: the deleting destructor of ParticleInfo. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(ParticleInfo)
META_DECLARE(igInfo)
META_DECLARE(igNamedObject)
META_DECLARE(igSceneInfo)
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
struct igSceneInfoObject : igInfoObject {
    char unknown0C[8];
    igObjectRefMember _sceneGraph;
    igObjectRefMember _textures;
    igObjectRefMember _cameras;
    char unknown20[28];
    igObjectRefMember _sceneGraphList;
    inline ~igSceneInfoObject() { __vtable = igSceneInfo_vtable; }
};
struct ParticleInfoObject : igSceneInfoObject {
    char unknown40[904];
    igObjectRefMember _texture;
    char unknown3CC[44];
    igObjectRefMember _geometry;
    char unknown3FC[4];
};

extern "C" ParticleInfoObject *fn_802E8410(ParticleInfoObject *self, short flags)
{
    if (self) {
        self->__vtable = ParticleInfo_vtable;
        self->_geometry.~igObjectRefMember();
        self->_texture.~igObjectRefMember();
        self->igSceneInfoObject::~igSceneInfoObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
