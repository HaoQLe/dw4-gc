// The save classes' class hooks (0x80322848..0x80322D94): virtual58 returns the class's metaobject,
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

// beSvConnectCheck does no card work of its own.
void beSvConnectCheck_virtual5C(beSvConnectCheck *, beSvDeliver *) {}
bool beSvConnectCheck_virtual60(beSvConnectCheck *) { return false; }
void beSvConnectCheck_virtual64(beSvConnectCheck *, beSvDeliver *) {}
void *beSvConnectCheck_virtual58(beSvConnectCheck *) { return *reinterpret_cast<void **>(beSvConnectCheck_meta); }
void beSvConnectCheck_virtual24(beSvConnectCheck *self) { initObject(self); }
void beSvConnectCheck_virtual28(beSvConnectCheck *self)
{
    cleanUpApi(self);
}

void *beSvEndApi_virtual58(beSvEndApi *) { return *reinterpret_cast<void **>(beSvEndApi_meta); }
void beSvEndApi_virtual24(beSvEndApi *self) { initObject(self); }
void beSvEndApi_virtual28(beSvEndApi *self)
{
    cleanUpApi(self);
}

void *beSvStartApi_virtual58(beSvStartApi *) { return *reinterpret_cast<void **>(beSvStartApi_meta); }
void beSvStartApi_virtual24(beSvStartApi *self) { initObject(self); }
void beSvStartApi_virtual28(beSvStartApi *self)
{
    cleanUpApi(self);
}

void *beSvGetFreeSizeApi_virtual58(beSvGetFreeSizeApi *) { return *reinterpret_cast<void **>(beSvGetFreeSizeApi_meta); }
void beSvGetFreeSizeApi_virtual24(beSvGetFreeSizeApi *self) { initObject(self); }
void beSvGetFreeSizeApi_virtual28(beSvGetFreeSizeApi *self)
{
    cleanUpApi(self);
}

void *beSvWriteMediaApi_virtual58(beSvWriteMediaApi *) { return *reinterpret_cast<void **>(beSvWriteMediaApi_meta); }
void beSvWriteMediaApi_virtual24(beSvWriteMediaApi *self) { initObject(self); }
void beSvWriteMediaApi_virtual28(beSvWriteMediaApi *self)
{
    if (self->_saveWork) clearRef(self->_saveWork);
    cleanUpApi(self);
}

void *beSvReadMediaApi_virtual58(beSvReadMediaApi *) { return *reinterpret_cast<void **>(beSvReadMediaApi_meta); }
void beSvReadMediaApi_virtual24(beSvReadMediaApi *self) { initObject(self); }

}
