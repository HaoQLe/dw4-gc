// fn_802AC8B8: the deleting destructor of igMovieInfo. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igInfo)
META_DECLARE(igMovieInfo)
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
struct igMovieInfoObject : igInfoObject {
    char unknown0C[8];
    igStringMember _path;
    char unknown18[24];
    igObjectRefMember _videoTextures;
    char unknown34[16];
    igStringMember _codecType;
    igObjectRefMember _codec;
    char unknown4C[4];
    igObjectRefMember _sceneInfo;
    igObjectRefMember _runtimeImage;
    igObjectRefMember _runtimeTextures;
    char unknown5C[4];
    igObjectRefMember _userdata;
    char unknown64[4];
};

extern "C" igMovieInfoObject *fn_802AC8B8(igMovieInfoObject *self, short flags)
{
    if (self) {
        self->__vtable = igMovieInfo_vtable;
        self->_userdata.~igObjectRefMember();
        self->_runtimeTextures.~igObjectRefMember();
        self->_runtimeImage.~igObjectRefMember();
        self->_sceneInfo.~igObjectRefMember();
        self->_codec.~igObjectRefMember();
        self->_codecType.~igStringMember();
        self->_videoTextures.~igObjectRefMember();
        self->_path.~igStringMember();
        self->igInfoObject::~igInfoObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
