// fn_8002ED7C: the deleting destructor of igIGBFile. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igDirectory)
META_DECLARE(igIGBFile)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct igDirectoryObject {
    void *__vtable;
    char unknown04[16];
    igStringMember _name;
    igObjectRefMember _externalDirectoryList;
    igObjectRefMember _infoList;
    char unknown20[8];
    igObjectRefMember _uniqueEntryList;
    igObjectRefMember _refList;
    char unknown30[12];
    igObjectRefMember _metaFieldPerObjectIndices;
    char unknown40[4];
    igObjectRefMember _loadingSemaphore;
    inline ~igDirectoryObject() { __vtable = igDirectory_vtable; }
};
struct igIGBFileObject : igDirectoryObject {
    char unknown48[20];
    igObjectRefMember _entryPool;
    char unknown60[8];
    igObjectRefMember _file;
    char unknown6C[80];
    igObjectRefMember _metaFieldListInFile;
    igObjectRefMember _metaObjectListInFile;
    char unknownC4[8];
    igObjectRefMember imf;
    igObjectRefMember smf;
    char unknownD4[20];
    igStringMember _previousResourceFilePath;
    char unknownEC[8];
    igObjectRefMember _alignmentListInFile;
    char unknownF8[32];
    igObjectRefMember _temporaryMemoryPool;
    igObjectRefMember _dataMemoryPool;
    igObjectRefMember _objectMemoryPool;
    char unknown124[12];
    igObjectRefMember _memoryPoolHandles;
};

extern "C" igIGBFileObject *fn_8002ED7C(igIGBFileObject *self, short flags)
{
    if (self) {
        self->__vtable = igIGBFile_vtable;
        self->_memoryPoolHandles.~igObjectRefMember();
        self->_objectMemoryPool.~igObjectRefMember();
        self->_dataMemoryPool.~igObjectRefMember();
        self->_temporaryMemoryPool.~igObjectRefMember();
        self->_alignmentListInFile.~igObjectRefMember();
        self->_previousResourceFilePath.~igStringMember();
        self->smf.~igObjectRefMember();
        self->imf.~igObjectRefMember();
        self->_metaObjectListInFile.~igObjectRefMember();
        self->_metaFieldListInFile.~igObjectRefMember();
        self->_file.~igObjectRefMember();
        self->_entryPool.~igObjectRefMember();
        self->igDirectoryObject::~igDirectoryObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
