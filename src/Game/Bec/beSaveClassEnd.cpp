// The save classes' class hooks (0x80322F58..0x80323364): virtual58 returns the class's metaobject,
// virtual24 initialises a new object, virtual28 releases its blocks before igObject's own clean-up.
#include "beSave.h"
#include <meta/beSvConnectCheck.h>
#include <meta/beSvEndApi.h>
#include <meta/beSvStartApi.h>
#include <meta/beSvGetFreeSizeApi.h>
#include <meta/beSvWriteMediaApi.h>
#include <meta/beSvReadMediaApi.h>
#include <meta/beSvUseCheckApi.h>
#include <meta/beSvFormatApi.h>
#include <meta/beSvFileFindApi.h>
#include <meta/beSvFileMakeApi.h>
#include <meta/igObjectList.h>

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {
void fn_800667B0(igObject *self);    // igObject's virtual24
void fn_800667B4(igObject *self);    // igObject's virtual28
void fn_80065704(void *meta, int);   // counts an object of a class
extern char beSvConnectCheck_meta[];
extern char beSvEndApi_meta[];
extern char beSvStartApi_meta[];
extern char beSvGetFreeSizeApi_meta[];
extern char beSvWriteMediaApi_meta[];
extern char beSvReadMediaApi_meta[];
extern char beSvUseCheckApi_meta[];
extern char beSvFormatApi_meta[];
extern char beSvFileFindApi_meta[];
extern char beSvFileMakeApi_meta[];
extern char beSaveApi_meta[];
extern char beSaveMemoryObj_meta[];
}

// Initialises a new object: igObject's part, then the count of its class.
static inline void initObject(igObject *self)
{
    fn_800667B0(self);
    fn_80065704(metaOf(self), 1);
}

// beSaveApi's clean-up: the image and mount blocks.
static inline void cleanUpApi(beSaveApi *self)
{
    if (self->_imageWork) clearRef(self->_imageWork);
    if (self->_mountWork) clearRef(self->_mountWork);
    fn_800667B4(self);
}

extern "C" {

void *beSvUseCheckApi_virtual58(beSvUseCheckApi *) { return *reinterpret_cast<void **>(beSvUseCheckApi_meta); }
void beSvUseCheckApi_virtual28(beSvUseCheckApi *self)
{
    cleanUpApi(self);
}

void *beSvFormatApi_virtual58(beSvFormatApi *) { return *reinterpret_cast<void **>(beSvFormatApi_meta); }
void beSvFormatApi_virtual28(beSvFormatApi *self)
{
    cleanUpApi(self);
}

void *beSvFileFindApi_virtual58(beSvFileFindApi *) { return *reinterpret_cast<void **>(beSvFileFindApi_meta); }
void beSvFileFindApi_virtual28(beSvFileFindApi *self)
{
    cleanUpApi(self);
}

void *beSvFileMakeApi_virtual58(beSvFileMakeApi *) { return *reinterpret_cast<void **>(beSvFileMakeApi_meta); }
void beSvFileMakeApi_virtual24(beSvFileMakeApi *self) { initObject(self); }
void beSvFileMakeApi_virtual28(beSvFileMakeApi *self)
{
    if (self->_saveWork) clearRef(self->_saveWork);
    cleanUpApi(self);
}

void *beSaveApi_virtual58(beSaveApi *) { return *reinterpret_cast<void **>(beSaveApi_meta); }
void beSaveApi_virtual28(beSaveApi *self) { cleanUpApi(self); }

void beSaveMemoryObj_virtual24(beSaveMemoryObj *self) { initObject(self); }

}
