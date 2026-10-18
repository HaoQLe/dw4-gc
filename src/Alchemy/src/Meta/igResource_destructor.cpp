// fn_800265C0: the deleting destructor of igResource. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igResource)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct igResourceObject {
    void *__vtable;
    char unknown04[8];
    igObjectRefMember _imageDirectory;
    igObjectRefMember _directoryList;
    igStringMember _relativeFilePath;
    igStringMember _absoluteFilePath;
    char unknown1C[4];
    igObjectRefMember _loadQueue;
    igObjectRefMember _loadThread;
    char unknown28[4];
    igObjectRefMember _alignmentStrings;
    igObjectRefMember _alignmentValues;
    char unknown34[4];
    igObjectRefMember _temporaryMemoryPool;
    igObjectRefMember _dataMemoryPool;
    igObjectRefMember _objectMemoryPool;
    char unknown44[8];
};

extern "C" igResourceObject *fn_800265C0(igResourceObject *self, short flags)
{
    if (self) {
        self->__vtable = igResource_vtable;
        self->_objectMemoryPool.~igObjectRefMember();
        self->_dataMemoryPool.~igObjectRefMember();
        self->_temporaryMemoryPool.~igObjectRefMember();
        self->_alignmentValues.~igObjectRefMember();
        self->_alignmentStrings.~igObjectRefMember();
        self->_loadThread.~igObjectRefMember();
        self->_loadQueue.~igObjectRefMember();
        self->_absoluteFilePath.~igStringMember();
        self->_relativeFilePath.~igStringMember();
        self->_directoryList.~igObjectRefMember();
        self->_imageDirectory.~igObjectRefMember();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
