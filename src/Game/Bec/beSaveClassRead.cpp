// The save classes' class hooks (0x80322D94..0x80322F58: beSvReadMediaApi's clean-up): virtual58 returns the class's metaobject,
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

void beSvReadMediaApi_virtual28(beSvReadMediaApi *self)
{
    if (self->_loadWorkList->_count != 0) removeAll(self->_loadWorkList);
    cleanUpApi(self);
}

}
